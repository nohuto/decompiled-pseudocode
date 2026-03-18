/*
 * XREFs of SdbpMatchList @ 0x140AE807C
 * Callers:
 *     SdbpMatchOne @ 0x1408054F0 (SdbpMatchOne.c)
 *     SdbpCheckForMatch @ 0x140A08780 (SdbpCheckForMatch.c)
 * Callees:
 *     Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledDeviceUsageNoInline @ 0x140695FD4 (Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     SdbpIsSdbCapabilityPresent @ 0x140805050 (SdbpIsSdbCapabilityPresent.c)
 *     SdbGetStringTagPtr @ 0x14095FA98 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x14096003C (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x140960210 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x140960300 (SdbGetFirstChild.c)
 *     SdbpFindMatcher @ 0x140A99FEC (SdbpFindMatcher.c)
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
  int v9; // esi
  unsigned int i; // ebx
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int FirstTag; // eax
  __int64 v17; // r8
  __int64 StringTagPtr; // rax
  int v19; // eax
  int v21; // [rsp+40h] [rbp-10h] BYREF
  int v22; // [rsp+44h] [rbp-Ch] BYREF
  __int64 v23; // [rsp+48h] [rbp-8h] BYREF

  a8 = 1;
  v22 = 0;
  v23 = 0LL;
  v9 = 0;
  v21 = 0;
  for ( i = SdbGetFirstChild((__int64)a4, a5); i; i = SdbGetNextChild((__int64)a4, a5, i, v13) )
  {
    if ( SdbpFindMatcher(&v23, &v21, a3, (__int64)a4, i) )
    {
      v15 = guard_dispatch_icall_no_overrides(&a8, a3, a4, a5);
      if ( !v15 )
        return v15;
    }
    else
    {
      if ( v21 == 2 )
      {
        v14 = 1;
      }
      else
      {
        if ( v21 != 3 )
        {
          if ( v21 == 4
            && (unsigned int)Feature_MissingMatcherBehaviorIgnoreAndDoNotCache__private_IsEnabledDeviceUsageNoInline() )
          {
            *(_DWORD *)(a6 + 80) = 1;
          }
          continue;
        }
        v14 = 0;
      }
      a8 = v14;
    }
    ++v9;
    if ( (unsigned int)SdbFindFirstTag((__int64)a4, i, 4099) )
      a8 = !a8;
    FirstTag = SdbFindFirstTag((__int64)a4, i, 24636);
    if ( FirstTag
      && (StringTagPtr = SdbGetStringTagPtr(a4, FirstTag, v17, v13),
          SdbpIsSdbCapabilityPresent(&v22, a3, StringTagPtr),
          v22) )
    {
      v19 = !a8;
      a8 = v19;
    }
    else
    {
      v19 = a8;
    }
    if ( v19 == a7 )
      goto LABEL_21;
  }
  v19 = a8;
LABEL_21:
  v15 = 1;
  *a1 = v19;
  if ( a2 )
    *a2 = v9;
  return v15;
}
