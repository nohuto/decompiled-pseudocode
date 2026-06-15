/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x14007BFFC
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x14007B8D0 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x14005CE00 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x14005D490 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x1400769F8 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x14007A750 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x14007D524 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     wil_details_NtQueryWnfStateData @ 0x14007F070 (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x14007F0E8 (wil_details_NtUpdateWnfStateData.c)
 *     _alloca_probe @ 0x140091410 (_alloca_probe.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  wil::details_abi *v5; // rdi
  wil::details_abi *v6; // r15
  unsigned __int64 v7; // rsi
  int v8; // edx
  int v9; // r8d
  unsigned int WnfStateData; // ebx
  unsigned int v11; // eax
  void *v12; // rdx
  void *v13; // rdx
  char v14; // bl
  int v15; // r9d
  int updated; // eax
  int v17; // r9d
  wil::details *v18; // rcx
  wil::details *v19; // rcx
  int v20; // [rsp+20h] [rbp-E0h]
  int v21; // [rsp+20h] [rbp-E0h]
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+60h] [rbp-A0h]
  _BYTE *v27; // [rsp+70h] [rbp-90h]
  _BYTE v28[24]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v29; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+A0h] [rbp-60h]
  wil::details *v31; // [rsp+B0h] [rbp-50h]
  char v32; // [rsp+B8h] [rbp-48h]
  char v33; // [rsp+B9h] [rbp-47h]
  _BYTE v34[8]; // [rsp+C0h] [rbp-40h] BYREF
  void **v35; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v36; // [rsp+D0h] [rbp-30h]
  _BYTE *v37; // [rsp+E0h] [rbp-20h]
  void ***v38; // [rsp+130h] [rbp+30h]
  _BYTE v39[4096]; // [rsp+140h] [rbp+40h] BYREF

  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v25 = 0LL;
  while ( 1 )
  {
    wil::details_abi::RawUsageIndex::RawUsageIndex(
      (__int64)v28,
      *(_WORD *)a3,
      *(_WORD *)(a3 + 2),
      *(_BYTE *)(a3 + 4),
      *(_WORD *)(a3 + 6),
      *(_BYTE *)(a3 + 8));
    v22 = 0;
    v23 = 4096;
    WnfStateData = wil_details_NtQueryWnfStateData((_DWORD)v5, v8, v9, (unsigned int)&v22, (__int64)v39, (__int64)&v23);
    wil::details::NtStatusToHr((wil::details *)WnfStateData);
    if ( WnfStateData )
    {
      v11 = 0;
      v23 = 0;
      v22 = 0;
    }
    else
    {
      v11 = v23;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v28, v39, v11, 0x1000uLL);
    if ( v33 )
      break;
    v24 = 0LL;
    *(_QWORD *)&v26 = &v24;
    *((_QWORD *)&v26 + 1) = &v25;
    v27 = v28;
    v35 = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v36 = v26;
    v37 = v28;
    v38 = &v35;
    v14 = wil::details_abi::RawUsageIndex::Iterate(a3, (__int64)v34);
    if ( !v32 )
      goto LABEL_11;
    updated = wil_details_NtUpdateWnfStateData((_DWORD)v5, v29, v30 - (int)v29, v15, v20, v22, 1);
    if ( updated != -1073741823 )
    {
      if ( updated )
        wil_details_NtUpdateWnfStateData((_DWORD)v5, v29, v30 - v29, v17, v21, 0, 0);
LABEL_11:
      v5 = (wil::details_abi *)((char *)v5 + 8);
      v25 = v24;
      goto LABEL_12;
    }
    ++v7;
    v14 = 0;
LABEL_12:
    v18 = v31;
    v31 = 0LL;
    if ( v18 )
      wil::details::FreeProcessHeap(v18, v13);
    if ( v14 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  v19 = v31;
  v31 = 0LL;
  if ( v19 )
    wil::details::FreeProcessHeap(v19, v12);
}
