/*
 * XREFs of SdbpMatchList @ 0x18009B7D0
 * Callers:
 *     SdbpMatchOne @ 0x18009B960 (SdbpMatchOne.c)
 * Callees:
 *     SdbGetFirstChild @ 0x180092070 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x18009240C (SdbGetNextChild.c)
 *     SdbFindFirstTag @ 0x180097A8C (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x180097D74 (SdbGetStringTagPtr.c)
 *     SdbpFindMatcher @ 0x18009ACC0 (SdbpFindMatcher.c)
 *     SdbpIsSdbCapabilityPresent @ 0x18009B71C (SdbpIsSdbCapabilityPresent.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SdbpMatchList(
        int *a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        BOOL a7,
        int a8)
{
  int v10; // esi
  unsigned int i; // eax
  unsigned int v14; // ebx
  __int64 (__fastcall *Matcher)(BOOL *, __int64, __int64, _QWORD, unsigned int, __int64, __int64); // rax
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  int v20; // eax
  int v22; // [rsp+40h] [rbp-10h] BYREF
  __int64 v23; // [rsp+48h] [rbp-8h] BYREF

  a7 = 1;
  v22 = 0;
  v23 = 0LL;
  a8 = 0;
  v10 = 0;
  for ( i = SdbGetFirstChild(a4, a5); ; i = SdbGetNextChild(a4, a5, v14) )
  {
    v14 = i;
    if ( !i )
      break;
    Matcher = (__int64 (__fastcall *)(BOOL *, __int64, __int64, _QWORD, unsigned int, __int64, __int64))SdbpFindMatcher(&v23, &a8, a3, a4, i);
    if ( Matcher )
    {
      v17 = Matcher(&a7, a3, a4, a5, v14, a6, v23);
      if ( !v17 )
        return v17;
    }
    else
    {
      if ( a8 == 2 )
      {
        v16 = 1;
      }
      else
      {
        if ( a8 != 3 )
          continue;
        v16 = 0;
      }
      a7 = v16;
    }
    ++v10;
    if ( (unsigned int)SdbFindFirstTag(a4, v14, 4099) )
      a7 = !a7;
    FirstTag = SdbFindFirstTag(a4, v14, 24636);
    if ( FirstTag
      && (StringTagPtr = SdbGetStringTagPtr(a4, FirstTag), SdbpIsSdbCapabilityPresent(&v22, a3, StringTagPtr), v22) )
    {
      if ( !a7 )
      {
        v20 = 1;
        goto LABEL_21;
      }
      v20 = 0;
      a7 = 0;
    }
    else
    {
      v20 = a7;
    }
    if ( v20 == 1 )
      goto LABEL_21;
  }
  v20 = a7;
LABEL_21:
  v17 = 1;
  *a1 = v20;
  if ( a2 )
    *a2 = v10;
  return v17;
}
