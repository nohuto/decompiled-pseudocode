/*
 * XREFs of DxgkReserveGpuVirtualAddressRangeCB @ 0x1403D6EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     DpiGetDxgAdapter @ 0x1400107F0 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x140010864 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x140031360 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ?IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ @ 0x1400403CC (-IsGpuVaIoMmuGlobalSupported@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkReserveGpuVirtualAddressRangeCB(__int64 a1, __int128 *a2)
{
  __int64 v4; // rcx
  struct DXGADAPTER *DxgAdapter; // rdi
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rdx
  __int128 *v8; // r14
  unsigned int v9; // ecx
  unsigned int v10; // edi
  __int128 v12; // [rsp+50h] [rbp-29h] BYREF
  __int128 v13; // [rsp+60h] [rbp-19h]
  __int128 v14; // [rsp+70h] [rbp-9h]
  _BYTE v15[8]; // [rsp+80h] [rbp+7h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp+Fh] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v15);
  if ( (*((_DWORD *)DXGPROCESS::GetCurrent(v4) + 102) & 0x80) != 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 338;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"KMD should not reserve GPU VA for the VM worker process",
      338LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( v15[0] )
      KeUnstackDetachProcess(&ApcState);
    return 3221225485LL;
  }
  else
  {
    DxgAdapter = (struct DXGADAPTER *)DpiGetDxgAdapter(a1);
    if ( DXGADAPTER::IsGpuVaIoMmuGlobalSupported(DxgAdapter) )
    {
      v10 = -1073741637;
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 347;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Reserving GPU VA ranges is not supported with GpuVaIoMmuGlobal",
        347LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      Global = DXGGLOBAL::GetGlobal();
      if ( *((_BYTE *)Global + 1658)
        && (unsigned __int8)DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                              (struct DXGGLOBAL *)((char *)Global + 1652),
                              DxgAdapter) )
      {
        v10 = -1073741637;
      }
      else
      {
        v7 = *((_QWORD *)DxgAdapter + 391);
        v8 = a2;
        v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)DxgAdapter + 27) + 64LL) + 40LL) + 28LL);
        v12 = 0LL;
        v13 = 0LL;
        v14 = 0LL;
        if ( v9 <= 0x5003 )
        {
          v8 = &v12;
          LODWORD(v13) = *((_DWORD *)a2 + 4);
          v12 = *a2;
          *(_QWORD *)&v14 = 0LL;
          *((_QWORD *)&v13 + 1) = 0LL;
        }
        v10 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)(*(_QWORD *)(v7 + 760) + 8LL) + 776LL))(
                *(_QWORD *)(v7 + 768),
                v8);
        *((_QWORD *)a2 + 3) = *((_QWORD *)v8 + 3);
      }
    }
    if ( v15[0] )
      KeUnstackDetachProcess(&ApcState);
    return v10;
  }
}
