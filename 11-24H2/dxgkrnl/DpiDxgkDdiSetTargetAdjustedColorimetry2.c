/*
 * XREFs of DpiDxgkDdiSetTargetAdjustedColorimetry2 @ 0x140028CAC
 * Callers:
 *     DpiSetTargetAdjustedColorimetry2 @ 0x140027B44 (DpiSetTargetAdjustedColorimetry2.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1400118A8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiSetTargetAdjustedColorimetry2(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rdi
  __int128 v9; // xmm1
  int v10; // eax
  __int64 (__fastcall *v11)(__int64, _BYTE *); // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v20; // [rsp+20h] [rbp-60h]
  __int64 v21; // [rsp+28h] [rbp-58h]
  _BYTE v22[56]; // [rsp+30h] [rbp-50h] BYREF
  int v23; // [rsp+68h] [rbp-18h]

  v6 = (unsigned int)a3;
  if ( *(_QWORD *)(a1 + 1312) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(a1, (__int64)&EventEnterDdiSetTargetAdjustedColorimetry, a3, a2, a3, 0);
    v9 = *(_OWORD *)(a4 + 16);
    v10 = *(_DWORD *)(a4 + 48);
    memset(v22, 0, sizeof(v22));
    *(_DWORD *)&v22[52] = v10;
    v23 = a5;
    v11 = *(__int64 (__fastcall **)(__int64, _BYTE *))(a1 + 1312);
    *(_DWORD *)v22 = v6;
    *(_OWORD *)&v22[4] = *(_OWORD *)a4;
    *(_OWORD *)&v22[36] = *(_OWORD *)(a4 + 32);
    *(_OWORD *)&v22[20] = v9;
    v12 = v11(a2, v22);
    v17 = v12;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v21) = v12;
      LODWORD(v20) = v6;
      McTemplateK0pqq_EtwWriteTransfer(v14, (__int64)&EventExitDdiSetTargetAdjustedColorimetry, v15, a2, v20, v21);
    }
    v18 = WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
    *(_QWORD *)(v18 + 24) = a1;
    *(_QWORD *)(v18 + 32) = v6;
    *(_QWORD *)(v18 + 40) = v17;
    *(_OWORD *)(v18 + 48) = 0LL;
    WdLogGlobalForLineNumber = 961;
  }
  else
  {
    LODWORD(v17) = -1073741637;
  }
  return (unsigned int)v17;
}
