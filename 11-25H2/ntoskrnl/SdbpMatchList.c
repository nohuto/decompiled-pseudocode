/*
 * XREFs of SdbpMatchList @ 0x140AA6DC8
 * Callers:
 *     SdbpMatchOne @ 0x1407F5980 (SdbpMatchOne.c)
 *     SdbpCheckForMatch @ 0x140A0B70C (SdbpCheckForMatch.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     SdbpIsSdbCapabilityPresent @ 0x1407F54E0 (SdbpIsSdbCapabilityPresent.c)
 *     SdbGetStringTagPtr @ 0x140825328 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1408258C0 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x140825A94 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x140825B84 (SdbGetFirstChild.c)
 *     SdbpFindMatcher @ 0x140A94524 (SdbpFindMatcher.c)
 */

__int64 __fastcall SdbpMatchList(
        _DWORD *a1,
        _DWORD *a2,
        __int64 a3,
        void *a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        BOOL a8)
{
  int v10; // esi
  unsigned int i; // eax
  unsigned int v14; // ebx
  __int64 v15; // r9
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int FirstTag; // eax
  __int64 v19; // r8
  __int64 StringTagPtr; // rax
  int v21; // eax
  int v23; // [rsp+40h] [rbp-10h] BYREF
  int v24; // [rsp+44h] [rbp-Ch] BYREF
  __int64 v25; // [rsp+48h] [rbp-8h] BYREF

  a8 = 1;
  v24 = 0;
  v25 = 0LL;
  v23 = 0;
  v10 = 0;
  for ( i = SdbGetFirstChild((__int64)a4, a5); ; i = SdbGetNextChild((__int64)a4, a5, v14, v15) )
  {
    v14 = i;
    if ( !i )
      break;
    if ( SdbpFindMatcher(&v25, &v23, a3, (__int64)a4, i) )
    {
      v17 = guard_dispatch_icall_no_overrides(&a8);
      if ( !v17 )
        return v17;
    }
    else
    {
      if ( v23 == 2 )
      {
        v16 = 1;
      }
      else
      {
        if ( v23 != 3 )
          continue;
        v16 = 0;
      }
      a8 = v16;
    }
    ++v10;
    if ( (unsigned int)SdbFindFirstTag((__int64)a4, v14, 4099) )
      a8 = !a8;
    FirstTag = SdbFindFirstTag((__int64)a4, v14, 24636);
    if ( FirstTag
      && (StringTagPtr = SdbGetStringTagPtr(a4, FirstTag, v19, v15),
          SdbpIsSdbCapabilityPresent(&v24, a3, StringTagPtr),
          v24) )
    {
      v21 = !a8;
      a8 = v21;
    }
    else
    {
      v21 = a8;
    }
    if ( v21 == a7 )
      goto LABEL_20;
  }
  v21 = a8;
LABEL_20:
  v17 = 1;
  *a1 = v21;
  if ( a2 )
    *a2 = v10;
  return v17;
}
