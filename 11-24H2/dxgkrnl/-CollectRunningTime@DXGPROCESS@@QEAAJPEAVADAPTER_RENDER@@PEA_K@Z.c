/*
 * XREFs of ?CollectRunningTime@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@PEA_K@Z @ 0x1402E6318
 * Callers:
 *     ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1402E60FC (-ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

__int64 __fastcall DXGPROCESS::CollectRunningTime(DXGPROCESS *this, struct ADAPTER_RENDER *a2, unsigned __int64 *a3)
{
  __int64 v3; // rdi
  __int64 v5; // r15
  __int64 v7; // rbx
  __int64 result; // rax
  unsigned int i; // ebx
  __int64 v10; // rcx
  __int64 v11; // rsi
  _DWORD v12[68]; // [rsp+50h] [rbp-258h] BYREF
  _QWORD v13[34]; // [rsp+160h] [rbp-148h] BYREF

  v3 = *((_QWORD *)a2 + 92);
  v5 = *((_QWORD *)a2 + 93);
  *a3 = 0LL;
  if ( !v3 )
    return 3221225858LL;
  memset(v12, 0, sizeof(v12));
  memset(v13, 0, sizeof(v13));
  v7 = *((_QWORD *)this + 8);
  if ( !v7 || (v7 = *(_QWORD *)(v7 + 8LL * (unsigned int)(*(_DWORD *)v3 - 1) + 16)) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1310;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pVidSchProcess", 1310LL, 0LL, 0LL, 0LL, 0LL);
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)(v3 + 8) + 728LL))(v5, v7, v12);
  if ( (int)result >= 0 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= v12[1] )
        return 0LL;
      v10 = *((_QWORD *)this + 8);
      if ( v10 )
      {
        v11 = *(_QWORD *)(v10 + 8LL * (unsigned int)(*(_DWORD *)v3 - 1) + 16);
        if ( v11 )
          goto LABEL_10;
      }
      else
      {
        v11 = 0LL;
      }
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1324;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"pVidSchProcess", 1324LL, 0LL, 0LL, 0LL, 0LL);
LABEL_10:
      result = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *))(*(_QWORD *)(v3 + 8) + 736LL))(
                 v5,
                 0xFFFFLL,
                 i,
                 v11,
                 v13);
      if ( (int)result < 0 )
        return result;
      *a3 += v13[0];
    }
  }
  return result;
}
