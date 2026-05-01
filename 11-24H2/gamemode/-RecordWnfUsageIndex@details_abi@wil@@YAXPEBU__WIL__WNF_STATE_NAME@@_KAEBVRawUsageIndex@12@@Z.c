/*
 * XREFs of ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x18000CFB4
 * Callers:
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x18000C4D0 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180002210 (__security_check_cookie.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180006B18 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x18000BDEC (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18000C3A4 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x18000DC58 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     wil_details_NtQueryWnfStateData @ 0x18000FC4C (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x18000FCF4 (wil_details_NtUpdateWnfStateData.c)
 *     _alloca_probe @ 0x1800108B0 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  wil::details_abi *v6; // r13
  unsigned __int64 v7; // r15
  unsigned int v8; // r9d
  __int16 v9; // cx
  __int64 v10; // rax
  wil::details *WnfStateData; // rbx
  unsigned int v12; // eax
  char v13; // cl
  char v14; // cl
  int v15; // ebx
  unsigned int v16; // r14d
  __int64 v17; // r12
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
  __int64 v45; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v46; // [rsp+D8h] [rbp-28h] BYREF
  char v47; // [rsp+DAh] [rbp-26h]
  int v48; // [rsp+DCh] [rbp-24h]
  unsigned __int16 v49; // [rsp+E0h] [rbp-20h]
  __int128 v50; // [rsp+E8h] [rbp-18h]
  __int64 v51; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v52; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v53[2]; // [rsp+108h] [rbp+8h] BYREF
  char v54; // [rsp+118h] [rbp+18h] BYREF
  void **v55; // [rsp+120h] [rbp+20h] BYREF
  __int128 v56; // [rsp+128h] [rbp+28h]
  _WORD *v57; // [rsp+138h] [rbp+38h]
  wil::details::in1diag3 *v58; // [rsp+188h] [rbp+88h]
  _BYTE v59[4096]; // [rsp+190h] [rbp+90h] BYREF

  v4 = a3;
  v5 = this;
  v6 = (wil::details_abi *)((char *)this + 8 * (_QWORD)a2);
  v7 = 0LL;
  v44 = 0LL;
  while ( 1 )
  {
    LOBYTE(a3) = *(_BYTE *)(v4 + 8);
    v8 = *(unsigned __int16 *)(v4 + 6);
    LOBYTE(a2) = *(_BYTE *)(v4 + 4);
    v9 = *(_WORD *)(v4 + 2);
    v33[0] = *(_WORD *)v4;
    v33[1] = v9;
    v34 = (char)a2;
    v35 = v8;
    v36 = a3;
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
      v37 = v10;
    }
    else
    {
      v37 = 0LL;
    }
    v38 = 0LL;
    v39 = 0LL;
    lpMem = 0LL;
    v41 = 0;
    v42 = 0;
    v29 = 0;
    v28 = 4096;
    WnfStateData = (wil::details *)(unsigned int)wil_details_NtQueryWnfStateData(
                                                   (_DWORD)v5,
                                                   (_DWORD)a2,
                                                   a3,
                                                   (unsigned int)&v29,
                                                   (__int64)v59,
                                                   (__int64)&v28);
    wil::details::NtStatusToHr(WnfStateData);
    if ( (_DWORD)WnfStateData )
    {
      v12 = 0;
      v28 = 0;
      v29 = 0;
    }
    else
    {
      v12 = v28;
    }
    wil::details_abi::RawUsageIndex::SetBuffer((wil::details_abi::RawUsageIndex *)v33, v59, v12, 0x1000uLL);
    if ( HIBYTE(v41) )
      break;
    v43 = 0LL;
    *(_QWORD *)&v31 = &v43;
    *((_QWORD *)&v31 + 1) = &v44;
    *(_QWORD *)&v32 = v33;
    v55 = &wistd::__function::__func<_lambda_8db0ce862824541f40dfb767113f1e28_,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>::`vftable';
    v56 = v31;
    v57 = v33;
    v58 = (wil::details::in1diag3 *)&v55;
    v53[1] = &v54;
    v30[0] = (unsigned __int8 *)(*(_QWORD *)(v4 + 24) + 10LL);
    v13 = *(_BYTE *)(v4 + 4);
    LOWORD(v31) = *(_WORD *)(v4 + 2);
    BYTE2(v31) = v13;
    DWORD1(v31) = 0;
    WORD4(v31) = 0;
    v32 = 0LL;
    v14 = *(_BYTE *)(v4 + 8);
    v46 = *(_WORD *)(v4 + 6);
    v47 = v14;
    v48 = 0;
    v49 = 0;
    v50 = 0LL;
LABEL_20:
    while ( wil::details_abi::UsageIndexProperty::Read(
              (wil::details_abi::UsageIndexProperty *)&v31,
              v30,
              *(unsigned __int8 **)(v4 + 32)) )
    {
      v15 = 0;
      v16 = DWORD1(v31);
      if ( DWORD1(v31) )
      {
        v17 = *((_QWORD *)&v32 + 1);
        while ( wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v46,
                  v30,
                  *(unsigned __int8 **)(v4 + 32)) )
        {
          v28 = v48;
          v51 = v49;
          v52 = *((_QWORD *)&v50 + 1);
          v53[0] = WORD4(v31);
          v45 = v17;
          if ( !v58 )
            wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
          v26 = &v51;
          if ( !(*(unsigned __int8 (__fastcall **)(wil::details::in1diag3 *, __int64 *, _QWORD *, __int64 *))(*(_QWORD *)v58 + 32LL))(
                  v58,
                  &v45,
                  v53,
                  &v52) )
          {
            if ( v58 )
              (*(void (__fastcall **)(wil::details::in1diag3 *))(*(_QWORD *)v58 + 24LL))(v58);
            v19 = 0;
            goto LABEL_24;
          }
          if ( ++v15 >= v16 )
            goto LABEL_20;
        }
      }
    }
    if ( v58 )
      (*(void (__fastcall **)(wil::details::in1diag3 *))(*(_QWORD *)v58 + 24LL))(v58);
    v19 = 1;
LABEL_24:
    if ( !(_BYTE)v41 )
      goto LABEL_32;
    updated = wil_details_NtUpdateWnfStateData((_DWORD)v5, v38, (int)v39 - (int)v38, v18, (_DWORD)v26, v29, 1);
    if ( updated != -1073741823 )
    {
      if ( updated )
        wil_details_NtUpdateWnfStateData((_DWORD)v5, v38, v39 - v38, v21, v27, 0, 0);
LABEL_32:
      v5 = (wil::details_abi *)((char *)v5 + 8);
      v44 = v43;
      goto LABEL_33;
    }
    ++v7;
    v19 = 0;
LABEL_33:
    v22 = lpMem;
    lpMem = 0LL;
    if ( v22 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v22);
    }
    if ( v19 || v5 >= v6 || v7 >= 0x32 )
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
