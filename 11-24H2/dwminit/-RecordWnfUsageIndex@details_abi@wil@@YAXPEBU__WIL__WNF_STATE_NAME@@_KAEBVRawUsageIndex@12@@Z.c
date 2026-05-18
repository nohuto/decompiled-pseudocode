/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x1800081C0
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x18000768C (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800021B0 (__security_check_cookie.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180007090 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180007560 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180008D08 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180009DD4 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     wil_details_NtQueryWnfStateData @ 0x18000A594 (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x18000A63C (wil_details_NtUpdateWnfStateData.c)
 *     _alloca_probe @ 0x1800114F0 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  wil::details_abi *v4; // r13
  unsigned __int64 v5; // r12
  wil::details_abi *v7; // rsi
  unsigned int v8; // edx
  char v9; // cl
  __int64 v10; // rax
  wil::details *WnfStateData; // rbx
  unsigned int v12; // eax
  __int128 v13; // xmm0
  __int64 v14; // rax
  unsigned int v15; // r14d
  int v16; // ebx
  __int64 v17; // r15
  int v18; // r9d
  char v19; // bl
  int updated; // eax
  int v21; // r9d
  void *v22; // r14
  HANDLE ProcessHeap; // rax
  void *v24; // rbx
  HANDLE v25; // rax
  __int64 *v26; // [rsp+20h] [rbp-E0h]
  int v27; // [rsp+20h] [rbp-E0h]
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  int v29; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 *v30[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v31; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v32; // [rsp+70h] [rbp-90h]
  _WORD v33[2]; // [rsp+80h] [rbp-80h] BYREF
  char v34; // [rsp+84h] [rbp-7Ch]
  __int16 v35; // [rsp+86h] [rbp-7Ah]
  char v36; // [rsp+88h] [rbp-78h]
  __int64 v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  __int128 v39; // [rsp+A0h] [rbp-60h]
  LPVOID lpMem; // [rsp+B0h] [rbp-50h]
  __int16 v41; // [rsp+B8h] [rbp-48h]
  char v42; // [rsp+BAh] [rbp-46h]
  __int64 v43; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v44; // [rsp+C8h] [rbp-38h] BYREF
  __int16 v45; // [rsp+D0h] [rbp-30h] BYREF
  char v46; // [rsp+D2h] [rbp-2Eh]
  int v47; // [rsp+D4h] [rbp-2Ch]
  unsigned __int16 v48; // [rsp+D8h] [rbp-28h]
  __int128 v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v51; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v52; // [rsp+100h] [rbp+0h] BYREF
  __int64 v53; // [rsp+108h] [rbp+8h] BYREF
  void **v54; // [rsp+118h] [rbp+18h] BYREF
  __int128 v55; // [rsp+120h] [rbp+20h]
  _WORD *v56; // [rsp+130h] [rbp+30h]
  wil::details::in1diag3 *v57; // [rsp+180h] [rbp+80h]
  _BYTE v58[4096]; // [rsp+190h] [rbp+90h] BYREF

  v4 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v5 = 0LL;
  v44 = 0LL;
  v7 = this;
  while ( 1 )
  {
    v8 = *(unsigned __int16 *)(a3 + 6);
    v9 = *(_BYTE *)(a3 + 8);
    v33[0] = *(_WORD *)a3;
    v33[1] = *(_WORD *)(a3 + 2);
    v34 = *(_BYTE *)(a3 + 4);
    v35 = v8;
    v36 = v9;
    if ( (_WORD)v8 )
    {
      v10 = v8;
      if ( v9 == 1 )
      {
        v10 = v8 + 2LL;
      }
      else if ( v9 == 2 )
      {
        v10 = v8 + 4LL;
      }
      v37 = v10;
    }
    else
    {
      v37 = 0LL;
    }
    v41 = 0;
    v38 = 0LL;
    v39 = 0LL;
    lpMem = 0LL;
    v42 = 0;
    v29 = 0;
    v28 = 4096;
    WnfStateData = (wil::details *)(unsigned int)wil_details_NtQueryWnfStateData(
                                                   (_DWORD)v7,
                                                   v8,
                                                   a3,
                                                   (unsigned int)&v29,
                                                   (__int64)v58,
                                                   (__int64)&v28);
    wil::details::NtStatusToHr(WnfStateData);
    if ( (_DWORD)WnfStateData )
    {
      v12 = 0;
      v29 = 0;
      v28 = 0;
    }
    else
    {
      v12 = v28;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v33, v58, v12, 0x1000uLL);
    if ( HIBYTE(v41) )
      break;
    v43 = 0LL;
    *(_QWORD *)&v31 = &v43;
    *((_QWORD *)&v31 + 1) = &v44;
    v13 = v31;
    *(_QWORD *)&v32 = v33;
    v54 = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v57 = (wil::details::in1diag3 *)&v54;
    v14 = *(_QWORD *)(a3 + 24);
    v56 = v33;
    v30[0] = (unsigned __int8 *)(v14 + 10);
    LOWORD(v31) = *(_WORD *)(a3 + 2);
    BYTE2(v31) = *(_BYTE *)(a3 + 4);
    v45 = *(_WORD *)(a3 + 6);
    LOBYTE(v14) = *(_BYTE *)(a3 + 8);
    v55 = v13;
    v46 = v14;
    DWORD1(v31) = 0;
    WORD4(v31) = 0;
    v32 = 0LL;
    v47 = 0;
    v48 = 0;
    v49 = 0LL;
LABEL_20:
    while ( wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v31,
              v30,
              *(unsigned __int8 **)(a3 + 32)) )
    {
      v15 = DWORD1(v31);
      v16 = 0;
      if ( DWORD1(v31) )
      {
        v17 = *((_QWORD *)&v32 + 1);
        while ( wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v45,
                  v30,
                  *(unsigned __int8 **)(a3 + 32)) )
        {
          v28 = v47;
          v50 = v48;
          v51 = *((_QWORD *)&v49 + 1);
          v52 = WORD4(v31);
          v53 = v17;
          if ( !v57 )
            wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
          v26 = &v50;
          if ( !(*(unsigned __int8 (__fastcall **)(wil::details::in1diag3 *, __int64 *, __int64 *, __int64 *))(*(_QWORD *)v57 + 32LL))(
                  v57,
                  &v53,
                  &v52,
                  &v51) )
          {
            if ( v57 )
              (*(void (__fastcall **)(wil::details::in1diag3 *))(*(_QWORD *)v57 + 24LL))(v57);
            v19 = 0;
            goto LABEL_24;
          }
          if ( ++v16 >= v15 )
            goto LABEL_20;
        }
      }
    }
    if ( v57 )
      (*(void (__fastcall **)(wil::details::in1diag3 *))(*(_QWORD *)v57 + 24LL))(v57);
    v19 = 1;
LABEL_24:
    if ( !(_BYTE)v41 )
      goto LABEL_32;
    updated = wil_details_NtUpdateWnfStateData((_DWORD)v7, v38, (int)v39 - (int)v38, v18, (_DWORD)v26, v29, 1);
    if ( updated != -1073741823 )
    {
      if ( updated )
        wil_details_NtUpdateWnfStateData((_DWORD)v7, v38, v39 - v38, v21, v27, 0, 0);
LABEL_32:
      v7 = (wil::details_abi *)((char *)v7 + 8);
      v44 = v43;
      goto LABEL_33;
    }
    ++v5;
    v19 = 0;
LABEL_33:
    v22 = lpMem;
    lpMem = 0LL;
    if ( v22 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v22);
    }
    if ( v19 || v7 >= v4 || v5 >= 0x32 )
      return;
  }
  v24 = lpMem;
  lpMem = 0LL;
  if ( v24 )
  {
    v25 = GetProcessHeap();
    HeapFree(v25, 0, v24);
  }
}
