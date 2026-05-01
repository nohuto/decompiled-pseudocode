/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180061A04
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x1800617D0 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180061BC8 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x180061C24 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180061D30 (-MemoryFree@@YAXPEAX@Z.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x180061EDC (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180070800 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?WriteWnfUsageBuffer@details_abi@wil@@YA_NPEBU__WIL__WNF_STATE_NAME@@KAEAVRawUsageIndex@12@@Z @ 0x18007188C (-WriteWnfUsageBuffer@details_abi@wil@@YA_NPEBU__WIL__WNF_STATE_NAME@@KAEAVRawUsageIndex@12@@Z.c)
 *     wil_details_NtQueryWnfStateData @ 0x18007743C (wil_details_NtQueryWnfStateData.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800A7910 (_alloca_probe.c)
 */

void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        unsigned __int16 *a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  unsigned __int64 v4; // rsi
  wil::details_abi *v5; // r15
  wil::details_abi *v7; // rdi
  int v8; // edx
  int v9; // r8d
  wil::details *WnfStateData; // rbx
  int v11; // edx
  unsigned int v12; // eax
  char v13; // bl
  struct wil::details_abi::RawUsageIndex *v14; // r9
  void *v15; // rcx
  void *v16; // rcx
  int v17; // [rsp+20h] [rbp-E0h]
  int v18; // [rsp+28h] [rbp-D8h]
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v20[3]; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v22; // [rsp+50h] [rbp-B0h]
  unsigned int *v23; // [rsp+60h] [rbp-A0h]
  unsigned int v24[12]; // [rsp+70h] [rbp-90h] BYREF
  void *v25; // [rsp+A0h] [rbp-60h]
  char v26; // [rsp+A9h] [rbp-57h]
  _BYTE v27[8]; // [rsp+B0h] [rbp-50h] BYREF
  void **v28; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v29; // [rsp+C0h] [rbp-40h]
  unsigned int *v30; // [rsp+D0h] [rbp-30h]
  void ***v31; // [rsp+120h] [rbp+20h]
  _BYTE v32[4096]; // [rsp+130h] [rbp+30h] BYREF

  v4 = 0LL;
  v5 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v21 = 0LL;
  v7 = this;
  while ( 1 )
  {
    LOBYTE(a4) = *((_BYTE *)a3 + 4);
    LOBYTE(v18) = *((_BYTE *)a3 + 8);
    LOWORD(v17) = a3[3];
    wil::details_abi::RawUsageIndex::RawUsageIndex(v24, *a3, a3[1], a4, v17, v18);
    v20[0] = 0;
    v19 = 4096;
    WnfStateData = (wil::details *)(unsigned int)wil_details_NtQueryWnfStateData(
                                                   (_DWORD)v7,
                                                   v8,
                                                   v9,
                                                   (unsigned int)v20,
                                                   (__int64)v32,
                                                   (__int64)&v19);
    wil::details::NtStatusToHr(WnfStateData, v11);
    if ( (_DWORD)WnfStateData )
    {
      v12 = 0;
      v20[0] = 0;
      v19 = 0;
    }
    else
    {
      v12 = v19;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v24, v32, v12, 0x1000uLL);
    if ( v26 )
      break;
    *(_QWORD *)&v20[1] = 0LL;
    *(_QWORD *)&v22 = &v20[1];
    *((_QWORD *)&v22 + 1) = &v21;
    v23 = v24;
    v28 = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v31 = &v28;
    v29 = v22;
    v30 = v24;
    v13 = wil::details_abi::RawUsageIndex::Iterate(a3, v27);
    if ( wil::details_abi::WriteWnfUsageBuffer(v7, (const struct __WIL__WNF_STATE_NAME *)v20[0], (unsigned int)v24, v14) )
    {
      v7 = (wil::details_abi *)((char *)v7 + 8);
      v21 = *(_QWORD *)&v20[1];
    }
    else
    {
      ++v4;
      v13 = 0;
    }
    v15 = v25;
    v25 = 0LL;
    if ( v15 )
      MemoryFree(v15);
    if ( v13 || v7 >= v5 || v4 >= 0x32 )
      return;
  }
  v16 = v25;
  v25 = 0LL;
  if ( v16 )
    MemoryFree(v16);
}
