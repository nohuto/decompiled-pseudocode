/*
 * XREFs of wil_details_RecordCachedUsage @ 0x1800275C4
 * Callers:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@3@@Z @ 0x180024AEC (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXAEBV-$unique_any_t@V-$unique_s.c)
 * Callees:
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     ?WilApi_RecordFeatureUsageReports@details@wil@@YAXPEAU__WIL_RTL_FEATURE_USAGE_DATA@@_K@Z @ 0x180026738 (-WilApi_RecordFeatureUsageReports@details@wil@@YAXPEAU__WIL_RTL_FEATURE_USAGE_DATA@@_K@Z.c)
 */

void __fastcall wil_details_RecordCachedUsage(int a1, __int64 a2)
{
  unsigned __int32 v4; // edx
  unsigned int v5; // ecx
  char *v6; // r8
  __int64 v7; // r8
  _DWORD v8[2]; // [rsp+20h] [rbp-48h] BYREF
  char v9; // [rsp+28h] [rbp-40h] BYREF

  _m_prefetchw((const void *)a2);
  v4 = _InterlockedAnd((volatile signed __int32 *)a2, 0xFFC0401E);
  v5 = (v4 >> 1) & 0xF;
  if ( v5 )
  {
    _m_prefetchw((const void *)(a2 + 4));
    v5 &= ~_InterlockedOr((volatile signed __int32 *)(a2 + 4), v5);
  }
  v6 = (char *)v8;
  if ( (v5 & 1) != 0 )
  {
    v8[0] = a1;
    v8[1] = 65538;
    v6 = &v9;
  }
  if ( (v5 & 2) != 0 )
  {
    *(_DWORD *)v6 = a1;
    *((_DWORD *)v6 + 1) = 65542;
    v6 += 8;
  }
  if ( (v5 & 4) != 0 )
  {
    *(_DWORD *)v6 = a1;
    *((_DWORD *)v6 + 1) = 65539;
    v6 += 8;
  }
  if ( v5 >= 8 )
  {
    *(_DWORD *)v6 = a1;
    *((_DWORD *)v6 + 1) = 65543;
    v6 += 8;
  }
  if ( ((v4 >> 5) & 0x1FF) != 0 )
  {
    *(_DWORD *)v6 = a1;
    *((_WORD *)v6 + 2) = 4 * ((v4 >> 14) & 1);
    *((_WORD *)v6 + 3) = (v4 >> 5) & 0x1FF;
    v6 += 8;
  }
  if ( ((v4 >> 15) & 0x7F) != 0 )
  {
    *(_DWORD *)v6 = a1;
    *((_WORD *)v6 + 2) = 4 * ((v4 >> 22) & 1) + 1;
    *((_WORD *)v6 + 3) = (v4 >> 15) & 0x7F;
    v6 += 8;
  }
  v7 = (v6 - (char *)v8) >> 3;
  if ( v7 > 0 )
    wil::details::WilApi_RecordFeatureUsageReports((wil::details *)v8, (struct __WIL_RTL_FEATURE_USAGE_DATA *)v7);
}
