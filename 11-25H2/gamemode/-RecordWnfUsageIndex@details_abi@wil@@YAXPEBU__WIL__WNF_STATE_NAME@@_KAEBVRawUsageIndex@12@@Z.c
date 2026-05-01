/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x18000BC28
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x18000B180 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1800061E8 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18000ABAC (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18000B080 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x18000C8C8 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     wil_details_NtQueryWnfStateData @ 0x18000E5CC (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x18000E674 (wil_details_NtUpdateWnfStateData.c)
 *     __security_check_cookie @ 0x18000F280 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18000F340 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180010010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall wil::details_abi::RecordWnfUsageIndex(
        wil::details_abi *this,
        const struct __WIL__WNF_STATE_NAME *a2,
        __int64 a3,
        const struct wil::details_abi::RawUsageIndex *a4)
{
  __int64 v4; // rdi
  wil::details_abi *v5; // rsi
  wil::details_abi *v6; // r12
  unsigned __int64 v7; // r15
  unsigned int v8; // r9d
  __int16 v9; // cx
  __int64 v10; // rax
  wil::details *WnfStateData; // rbx
  unsigned int v12; // eax
  char v13; // cl
  char v14; // cl
  int v15; // ebx
  int v16; // r9d
  char v17; // bl
  int updated; // eax
  int v19; // r9d
  void *v20; // r14
  HANDLE ProcessHeap; // rax
  void *v22; // rbx
  HANDLE v23; // rax
  __int64 *v24; // [rsp+20h] [rbp-E0h]
  int v25; // [rsp+20h] [rbp-E0h]
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int8 *v28[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v30; // [rsp+70h] [rbp-90h]
  _WORD v31[2]; // [rsp+80h] [rbp-80h] BYREF
  char v32; // [rsp+84h] [rbp-7Ch]
  __int16 v33; // [rsp+86h] [rbp-7Ah]
  char v34; // [rsp+88h] [rbp-78h]
  __int64 v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  __int128 v37; // [rsp+A0h] [rbp-60h]
  LPVOID lpMem; // [rsp+B0h] [rbp-50h]
  __int16 v39; // [rsp+B8h] [rbp-48h]
  char v40; // [rsp+BAh] [rbp-46h]
  __int64 v41; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v42; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v43; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v44; // [rsp+D8h] [rbp-28h] BYREF
  char v45; // [rsp+DAh] [rbp-26h]
  int v46; // [rsp+DCh] [rbp-24h]
  unsigned __int16 v47; // [rsp+E0h] [rbp-20h]
  __int128 v48; // [rsp+E8h] [rbp-18h]
  __int64 v49; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v50; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v51[2]; // [rsp+108h] [rbp+8h] BYREF
  char v52; // [rsp+118h] [rbp+18h] BYREF
  void **v53; // [rsp+120h] [rbp+20h] BYREF
  __int128 v54; // [rsp+128h] [rbp+28h]
  _WORD *v55; // [rsp+138h] [rbp+38h]
  wil::details::in1diag3 *v56; // [rsp+188h] [rbp+88h]
  _BYTE v57[4096]; // [rsp+190h] [rbp+90h] BYREF

  v4 = a3;
  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v42 = 0LL;
  while ( 1 )
  {
    LOBYTE(a3) = *(_BYTE *)(v4 + 8);
    v8 = *(unsigned __int16 *)(v4 + 6);
    LOBYTE(a2) = *(_BYTE *)(v4 + 4);
    v9 = *(_WORD *)(v4 + 2);
    v31[0] = *(_WORD *)v4;
    v31[1] = v9;
    v32 = (char)a2;
    v33 = v8;
    v34 = a3;
    if ( (_WORD)v8 )
    {
      v10 = v8;
      if ( (_BYTE)a3 == 1 )
      {
        v10 = v8 + 2LL;
      }
      else if ( (_BYTE)a3 == 2 )
      {
        v10 = v8 + 4LL;
      }
      v35 = v10;
    }
    else
    {
      v35 = 0LL;
    }
    v36 = 0LL;
    v37 = 0LL;
    lpMem = 0LL;
    v39 = 0;
    v40 = 0;
    v27 = 0;
    v26 = 4096;
    WnfStateData = (wil::details *)(unsigned int)wil_details_NtQueryWnfStateData(
                                                   (_DWORD)v5,
                                                   (_DWORD)a2,
                                                   a3,
                                                   (unsigned int)&v27,
                                                   (__int64)v57,
                                                   (__int64)&v26);
    wil::details::NtStatusToHr(WnfStateData);
    if ( (_DWORD)WnfStateData )
    {
      v12 = 0;
      v26 = 0;
      v27 = 0;
    }
    else
    {
      v12 = v26;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v31, v57, v12, 0x1000uLL);
    if ( HIBYTE(v39) )
      break;
    v41 = 0LL;
    *(_QWORD *)&v29 = &v41;
    *((_QWORD *)&v29 + 1) = &v42;
    *(_QWORD *)&v30 = v31;
    v53 = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v54 = v29;
    v55 = v31;
    v56 = (wil::details::in1diag3 *)&v53;
    v51[1] = &v52;
    v28[0] = (unsigned __int8 *)(*(_QWORD *)(v4 + 24) + 10LL);
    v13 = *(_BYTE *)(v4 + 4);
    LOWORD(v29) = *(_WORD *)(v4 + 2);
    BYTE2(v29) = v13;
    DWORD1(v29) = 0;
    WORD4(v29) = 0;
    v30 = 0LL;
    v14 = *(_BYTE *)(v4 + 8);
    v44 = *(_WORD *)(v4 + 6);
    v45 = v14;
    v46 = 0;
    v47 = 0;
    v48 = 0LL;
LABEL_19:
    while ( wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v29,
              v28,
              *(unsigned __int8 **)(v4 + 32)) )
    {
      v15 = 0;
      if ( DWORD1(v29) )
      {
        while ( wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v44,
                  v28,
                  *(unsigned __int8 **)(v4 + 32)) )
        {
          v26 = v46;
          v49 = v47;
          v50 = *((_QWORD *)&v48 + 1);
          v51[0] = WORD4(v29);
          v43 = *((_QWORD *)&v30 + 1);
          if ( !v56 )
            wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
          v24 = &v49;
          if ( !(*(unsigned __int8 (__fastcall **)(wil::details::in1diag3 *, __int64 *, _QWORD *, __int64 *))(*(_QWORD *)v56 + 32LL))(
                  v56,
                  &v43,
                  v51,
                  &v50) )
          {
            if ( v56 )
              (*(void (__fastcall **)(wil::details::in1diag3 *))(*(_QWORD *)v56 + 24LL))(v56);
            v17 = 0;
            goto LABEL_23;
          }
          if ( (unsigned int)++v15 >= DWORD1(v29) )
            goto LABEL_19;
        }
      }
    }
    if ( v56 )
      (*(void (__fastcall **)(wil::details::in1diag3 *))(*(_QWORD *)v56 + 24LL))(v56);
    v17 = 1;
LABEL_23:
    if ( !(_BYTE)v39 )
      goto LABEL_31;
    updated = wil_details_NtUpdateWnfStateData((_DWORD)v5, v36, (int)v37 - (int)v36, v16, (_DWORD)v24, v27, 1);
    if ( updated != -1073741823 )
    {
      if ( updated )
        wil_details_NtUpdateWnfStateData((_DWORD)v5, v36, v37 - v36, v19, v25, 0, 0);
LABEL_31:
      v5 = (wil::details_abi *)((char *)v5 + 8);
      v42 = v41;
      goto LABEL_32;
    }
    ++v7;
    v17 = 0;
LABEL_32:
    v20 = lpMem;
    lpMem = 0LL;
    if ( v20 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v20);
    }
    if ( v17 || v5 >= v6 || v7 >= 0x32 )
      return;
  }
  v22 = lpMem;
  lpMem = 0LL;
  if ( v22 )
  {
    v23 = GetProcessHeap();
    HeapFree(v23, 0, v22);
  }
}
