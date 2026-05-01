/*
 * XREFs of SdbpMatchList @ 0x18009BAA8
 * Callers:
 *     SdbpMatchOne @ 0x18009BC50 (SdbpMatchOne.c)
 * Callees:
 *     SdbGetFirstChild @ 0x1800924D0 (SdbGetFirstChild.c)
 *     SdbGetNextChild @ 0x18009286C (SdbGetNextChild.c)
 *     SdbFindFirstTag @ 0x180097EEC (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x1800981D4 (SdbGetStringTagPtr.c)
 *     Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledDeviceUsageNoInline @ 0x1800992F8 (Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbpFindMatcher @ 0x18009B010 (SdbpFindMatcher.c)
 *     SdbpIsSdbCapabilityPresent @ 0x18009B9F4 (SdbpIsSdbCapabilityPresent.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int v9; // esi
  unsigned int FirstChild; // ebx
  __int64 (__fastcall *Matcher)(BOOL *, __int64, __int64, _QWORD, unsigned int, __int64, __int64); // rax
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  int v18; // eax
  int v20; // [rsp+40h] [rbp-10h] BYREF
  __int64 v21; // [rsp+48h] [rbp-8h] BYREF

  a7 = 1;
  v20 = 0;
  v21 = 0LL;
  v9 = 0;
  a8 = 0;
  FirstChild = SdbGetFirstChild(a4, a5);
  if ( !FirstChild )
  {
LABEL_21:
    v18 = a7;
    goto LABEL_22;
  }
  while ( 1 )
  {
    Matcher = (__int64 (__fastcall *)(BOOL *, __int64, __int64, _QWORD, unsigned int, __int64, __int64))SdbpFindMatcher(&v21, &a8, a3, a4, FirstChild);
    if ( Matcher )
      break;
    if ( a8 == 2 )
    {
      v14 = 1;
LABEL_7:
      a7 = v14;
      goto LABEL_12;
    }
    if ( a8 == 3 )
    {
      v14 = 0;
      goto LABEL_7;
    }
    if ( a8 == 4
      && (unsigned int)Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledDeviceUsageNoInline() )
    {
      *(_DWORD *)(a6 + 80) = 1;
    }
LABEL_20:
    FirstChild = SdbGetNextChild(a4, a5, FirstChild);
    if ( !FirstChild )
      goto LABEL_21;
  }
  v15 = Matcher(&a7, a3, a4, a5, FirstChild, a6, v21);
  if ( !v15 )
    return v15;
LABEL_12:
  ++v9;
  if ( (unsigned int)SdbFindFirstTag(a4, FirstChild, 4099) )
    a7 = !a7;
  FirstTag = SdbFindFirstTag(a4, FirstChild, 24636);
  if ( !FirstTag
    || (StringTagPtr = SdbGetStringTagPtr(a4, FirstTag), SdbpIsSdbCapabilityPresent(&v20, a3, StringTagPtr), !v20) )
  {
    v18 = a7;
LABEL_19:
    if ( v18 == 1 )
      goto LABEL_22;
    goto LABEL_20;
  }
  if ( a7 )
  {
    v18 = 0;
    a7 = 0;
    goto LABEL_19;
  }
  v18 = 1;
LABEL_22:
  v15 = 1;
  *a1 = v18;
  if ( a2 )
    *a2 = v9;
  return v15;
}
