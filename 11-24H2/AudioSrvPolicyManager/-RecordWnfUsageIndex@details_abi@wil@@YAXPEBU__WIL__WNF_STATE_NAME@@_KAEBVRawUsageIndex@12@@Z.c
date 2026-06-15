/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x18002511C
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x1800249DC (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180010AC0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x180022454 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x180023E04 (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180024438 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180025848 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     wil_details_NtQueryWnfStateData @ 0x1800274C0 (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x180027538 (wil_details_NtUpdateWnfStateData.c)
 *     _alloca_probe @ 0x180048B40 (_alloca_probe.c)
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
  char v12; // bl
  int v13; // r9d
  int updated; // eax
  int v15; // r9d
  void *v16; // rcx
  void *v17; // rcx
  int v18; // [rsp+20h] [rbp-E0h]
  int v19; // [rsp+20h] [rbp-E0h]
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v24; // [rsp+60h] [rbp-A0h]
  _BYTE *v25; // [rsp+70h] [rbp-90h]
  _BYTE v26[24]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+98h] [rbp-68h]
  int v28; // [rsp+A0h] [rbp-60h]
  void *v29; // [rsp+B0h] [rbp-50h]
  char v30; // [rsp+B8h] [rbp-48h]
  char v31; // [rsp+B9h] [rbp-47h]
  _BYTE v32[8]; // [rsp+C0h] [rbp-40h] BYREF
  void **v33; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v34; // [rsp+D0h] [rbp-30h]
  _BYTE *v35; // [rsp+E0h] [rbp-20h]
  void ***v36; // [rsp+130h] [rbp+30h]
  _BYTE v37[4096]; // [rsp+140h] [rbp+40h] BYREF

  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v23 = 0LL;
  while ( 1 )
  {
    wil::details_abi::RawUsageIndex::RawUsageIndex(
      (__int64)v26,
      *(_WORD *)a3,
      *(_WORD *)(a3 + 2),
      *(_BYTE *)(a3 + 4),
      *(_WORD *)(a3 + 6),
      *(_BYTE *)(a3 + 8));
    v20 = 0;
    v21 = 4096;
    WnfStateData = wil_details_NtQueryWnfStateData((_DWORD)v5, v8, v9, (unsigned int)&v20, (__int64)v37, (__int64)&v21);
    wil::details::NtStatusToHr((wil::details *)WnfStateData);
    if ( WnfStateData )
    {
      v11 = 0;
      v21 = 0;
      v20 = 0;
    }
    else
    {
      v11 = v21;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v26, v37, v11, 0x1000uLL);
    if ( v31 )
      break;
    v22 = 0LL;
    *(_QWORD *)&v24 = &v22;
    *((_QWORD *)&v24 + 1) = &v23;
    v25 = v26;
    v33 = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v34 = v24;
    v35 = v26;
    v36 = &v33;
    v12 = wil::details_abi::RawUsageIndex::Iterate(a3, (__int64)v32);
    if ( !v30 )
      goto LABEL_11;
    updated = wil_details_NtUpdateWnfStateData((_DWORD)v5, v27, v28 - (int)v27, v13, v18, v20, 1);
    if ( updated != -1073741823 )
    {
      if ( updated )
        wil_details_NtUpdateWnfStateData((_DWORD)v5, v27, v28 - v27, v15, v19, 0, 0);
LABEL_11:
      v5 = (wil::details_abi *)((char *)v5 + 8);
      v23 = v22;
      goto LABEL_12;
    }
    ++v7;
    v12 = 0;
LABEL_12:
    v16 = v29;
    v29 = 0LL;
    if ( v16 )
      operator delete(v16);
    if ( v12 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  v17 = v29;
  v29 = 0LL;
  if ( v17 )
    operator delete(v17);
}
