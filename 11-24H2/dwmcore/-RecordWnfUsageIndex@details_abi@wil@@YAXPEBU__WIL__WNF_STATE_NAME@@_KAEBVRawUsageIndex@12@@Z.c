/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x1801FED04
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x1801FEC40 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x1801FEEF4 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x1801FF2BC (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x1801FF384 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x1801FF8A4 (-wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x180253850 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x180253DCC (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?WriteWnfUsageBuffer@details_abi@wil@@YA_NPEBU__WIL__WNF_STATE_NAME@@KAEAVRawUsageIndex@12@@Z @ 0x180255184 (-WriteWnfUsageBuffer@details_abi@wil@@YA_NPEBU__WIL__WNF_STATE_NAME@@KAEAVRawUsageIndex@12@@Z.c)
 *     _alloca_probe @ 0x1802DF530 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        unsigned __int16 *a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  unsigned __int64 v4; // r14
  wil::details_abi *v5; // r15
  wil::details_abi *v7; // rbx
  __int64 (*NtDllProcedureAddress)(void); // rax
  int v9; // edx
  unsigned int v10; // edi
  unsigned int v11; // eax
  void *v12; // rdx
  char v13; // di
  struct wil::details_abi::RawUsageIndex *v14; // r9
  void *v15; // rdx
  wil::details *v16; // rcx
  wil::details *v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-E0h]
  __int64 v19; // [rsp+28h] [rbp-D8h]
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v21[3]; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v23; // [rsp+60h] [rbp-A0h]
  unsigned int *v24; // [rsp+70h] [rbp-90h]
  unsigned int v25[12]; // [rsp+80h] [rbp-80h] BYREF
  wil::details *v26; // [rsp+B0h] [rbp-50h]
  char v27; // [rsp+B9h] [rbp-47h]
  _BYTE v28[8]; // [rsp+C0h] [rbp-40h] BYREF
  void **v29; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v30; // [rsp+D0h] [rbp-30h]
  unsigned int *v31; // [rsp+E0h] [rbp-20h]
  void ***v32; // [rsp+130h] [rbp+30h]
  _BYTE v33[4096]; // [rsp+140h] [rbp+40h] BYREF

  v4 = 0LL;
  v5 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v22 = 0LL;
  v7 = this;
  while ( 1 )
  {
    LOBYTE(a4) = *((_BYTE *)a3 + 4);
    LOBYTE(v19) = *((_BYTE *)a3 + 8);
    LOWORD(v18) = a3[3];
    wil::details_abi::RawUsageIndex::RawUsageIndex(v25, *a3, a3[1], a4, v18, v19);
    NtDllProcedureAddress = (__int64 (*)(void))g_wil_details_pfnNtQueryWnfStateData;
    v21[0] = 0;
    v20 = 4096;
    if ( g_wil_details_pfnNtQueryWnfStateData
      || (NtDllProcedureAddress = wil_details_GetNtDllProcedureAddress("NtQueryWnfStateData"),
          (g_wil_details_pfnNtQueryWnfStateData = (__int64)NtDllProcedureAddress) != 0) )
    {
      v10 = ((__int64 (__fastcall *)(wil::details_abi *, _QWORD, _QWORD, _DWORD *, _BYTE *, int *))NtDllProcedureAddress)(
              v7,
              0LL,
              0LL,
              v21,
              v33,
              &v20);
    }
    else
    {
      v10 = -1073741511;
    }
    wil::details::NtStatusToHr((wil::details *)v10, v9);
    if ( v10 )
    {
      v11 = 0;
      v21[0] = 0;
      v20 = 0;
    }
    else
    {
      v11 = v20;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v25, v33, v11, 0x1000uLL);
    if ( v27 )
      break;
    *(_QWORD *)&v21[1] = 0LL;
    *(_QWORD *)&v23 = &v21[1];
    *((_QWORD *)&v23 + 1) = &v22;
    v24 = v25;
    v29 = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v32 = &v29;
    v30 = v23;
    v31 = v25;
    v13 = wil::details_abi::RawUsageIndex::Iterate(a3, v28);
    if ( wil::details_abi::WriteWnfUsageBuffer(v7, (const struct __WIL__WNF_STATE_NAME *)v21[0], (unsigned int)v25, v14) )
    {
      v7 = (wil::details_abi *)((char *)v7 + 8);
      v22 = *(_QWORD *)&v21[1];
    }
    else
    {
      ++v4;
      v13 = 0;
    }
    v16 = v26;
    v26 = 0LL;
    if ( v16 )
      wil::details::FreeProcessHeap(v16, v15);
    if ( v13 || v7 >= v5 || v4 >= 0x32 )
      return;
  }
  v17 = v26;
  v26 = 0LL;
  if ( v17 )
    wil::details::FreeProcessHeap(v17, v12);
}
