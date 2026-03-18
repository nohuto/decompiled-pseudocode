/*
 * XREFs of PfSnOpenVolumesForPrefetch @ 0x14096BF6C
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x140951F40 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14040BC90 (RtlStringCbPrintfW.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     NtCreateEvent @ 0x140856FC0 (NtCreateEvent.c)
 *     IoGetDeviceInterfaces @ 0x140966D40 (IoGetDeviceInterfaces.c)
 *     PfpOpenHandleClose @ 0x14096B934 (PfpOpenHandleClose.c)
 *     PfpOpenHandleCreate @ 0x14096B99C (PfpOpenHandleCreate.c)
 *     PfSnIsVolumeMounted @ 0x14096C58C (PfSnIsVolumeMounted.c)
 *     PfSnQueryVolumeInfo @ 0x14096E298 (PfSnQueryVolumeInfo.c)
 *     PfSnLogOpenVolumesForPrefetch @ 0x140A4D3E8 (PfSnLogOpenVolumesForPrefetch.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140A52EE4 (PfSnVolumeCheckIsSdBus.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x140A57A9C (PfSnVolumeCheckSeekPenalty.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnOpenVolumesForPrefetch(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // r14
  WCHAR *v4; // rsi
  int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 Pool2; // rax
  _QWORD *v9; // rdi
  int Event; // edi
  NTSTATUS DeviceInterfaces; // eax
  unsigned int v12; // edi
  __int64 v13; // r15
  unsigned __int64 v14; // r13
  int IsVolumeMounted; // eax
  int v16; // ecx
  _OWORD *v17; // rax
  _OWORD *v18; // rdi
  int v19; // eax
  __int128 v20; // xmm1
  __int64 v21; // rcx
  PVOID *v22; // rax
  wchar_t *v23; // rsi
  unsigned int v24; // r13d
  __int64 v25; // rdx
  __int64 v26; // rdi
  PVOID *v27; // rcx
  PVOID *v28; // rax
  __int64 *v29; // rcx
  HANDLE v30; // rdx
  unsigned __int8 v31; // al
  _QWORD *v32; // rbx
  __int64 v33; // rax
  PVOID *v35; // r15
  wchar_t *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r15
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int64 *v41; // rdx
  PVOID P; // [rsp+40h] [rbp-99h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-91h]
  PZZWSTR SymbolicLinkList; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v45; // [rsp+58h] [rbp-81h]
  HANDLE Handle; // [rsp+60h] [rbp-79h] BYREF
  __int64 v47; // [rsp+68h] [rbp-71h] BYREF
  __int128 v48; // [rsp+70h] [rbp-69h] BYREF
  __m256i v49; // [rsp+80h] [rbp-59h] BYREF
  __m256i v50; // [rsp+A0h] [rbp-39h] BYREF
  _DWORD v51[2]; // [rsp+C0h] [rbp-19h] BYREF
  __int64 v52; // [rsp+C8h] [rbp-11h]
  __int64 v53; // [rsp+D0h] [rbp-9h]
  int v54; // [rsp+D8h] [rbp-1h]
  int v55; // [rsp+DCh] [rbp+3h]
  __int128 v56; // [rsp+E0h] [rbp+7h]
  int cbDest; // [rsp+140h] [rbp+67h]
  size_t cbDesta; // [rsp+140h] [rbp+67h]
  _DWORD *v59; // [rsp+148h] [rbp+6Fh]
  __int64 i; // [rsp+150h] [rbp+77h]
  int v61; // [rsp+158h] [rbp+7Fh] BYREF

  v59 = a2;
  v2 = *a1;
  p_P = &P;
  v51[1] = 0;
  v55 = 0;
  P = &P;
  v47 = 0LL;
  LOBYTE(a2) = 1;
  v61 = 0;
  cbDest = 0;
  v48 = 0LL;
  v4 = 0LL;
  SymbolicLinkList = 0LL;
  v5 = 0;
  memset(&v50, 0, 24);
  v50.m256i_i64[3] = 0x200000000LL;
  memset(&v49, 0, 24);
  v49.m256i_i64[3] = 0x200000000LL;
  Handle = 0LL;
  PfSnLogOpenVolumesForPrefetch(v2, a2);
  if ( v2 && *(_DWORD *)(v2 + 112) < 0x4000u )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    a1[2] = Pool2;
    if ( Pool2 )
    {
      if ( *(_DWORD *)(v2 + 112) )
      {
        do
        {
          v9 = (_QWORD *)(a1[2] + 112LL * (unsigned int)v4);
          memset_0(v9, 0, 0x70uLL);
          v9[1] = v9;
          *v9 = v9;
          LODWORD(v4) = (_DWORD)v4 + 1;
          *((_OWORD *)v9 + 2) = 0LL;
          *((_OWORD *)v9 + 3) = 0LL;
          v9[7] |= 0x200000000uLL;
          *((_OWORD *)v9 + 4) = 0LL;
          *((_OWORD *)v9 + 5) = 0LL;
          v9[11] |= 0x200000000uLL;
        }
        while ( (unsigned int)v4 < *(_DWORD *)(v2 + 112) );
      }
      v51[0] = 48;
      v52 = 0LL;
      v54 = 512;
      v53 = 0LL;
      v56 = 0LL;
      Event = NtCreateEvent((unsigned __int64)&Handle, 2031619LL, (int)v51, NotificationEvent, 0);
      if ( Event >= 0 )
      {
        DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_VOLUME, 0LL, 0, &SymbolicLinkList);
        v4 = SymbolicLinkList;
        Event = DeviceInterfaces;
        if ( DeviceInterfaces < 0 )
          goto LABEL_34;
        v12 = 0;
        v45 = 0;
        while ( *v4 )
        {
          v13 = -1LL;
          do
            ++v13;
          while ( v4[v13] );
          v14 = 2LL * (unsigned int)(v13 + 1);
          if ( v12 <= v14 )
            v45 = 2 * v13 + 2;
          IsVolumeMounted = PfSnIsVolumeMounted(v4);
          v16 = cbDest;
          if ( IsVolumeMounted < 0 )
            v16 = 0;
          cbDest = v16;
          if ( v16
            && (int)PfSnQueryVolumeInfo(a1[1], (_DWORD)v4, (unsigned int)&v50, (unsigned int)&v47, (__int64)&v61) >= 0 )
          {
            v17 = (_OWORD *)ExAllocatePool2(0x100uLL);
            v18 = v17;
            if ( !v17 )
              goto LABEL_48;
            memset_0(v17, 0, 0x48uLL);
            v19 = v61;
            v20 = *(_OWORD *)&v50.m256i_u64[2];
            v21 = v47;
            v18[1] = *(_OWORD *)v50.m256i_i8;
            *((_DWORD *)v18 + 15) = v19;
            *((_QWORD *)v18 + 8) = v21;
            v18[2] = v20;
            *((_QWORD *)v18 + 6) = v4;
            *((_DWORD *)v18 + 14) = v13;
            memset(&v50, 0, 24);
            v22 = p_P;
            v50.m256i_i64[3] = 0x200000000LL;
            if ( *p_P != &P )
LABEL_26:
              __fastfail(3u);
            *((_QWORD *)v18 + 1) = p_P;
            *(_QWORD *)v18 = &P;
            *v22 = v18;
            p_P = (PVOID *)v18;
          }
          v12 = v45;
          v4 = (WCHAR *)((char *)v4 + v14);
        }
        cbDesta = v12 + 2;
        v23 = (wchar_t *)ExAllocatePool2(0x100uLL);
        if ( !v23 )
        {
LABEL_48:
          Event = -1073741670;
          goto LABEL_33;
        }
        v24 = 0;
        v25 = v2 + *(unsigned int *)(v2 + 108);
        for ( i = v25; v24 < *(_DWORD *)(v2 + 112); ++v24 )
        {
          v26 = a1[2] + 112LL * v24;
          v27 = (PVOID *)(v25 + 96LL * v24);
          *(_QWORD *)(v26 + 16) = v25 + *(unsigned int *)v27;
          *(_DWORD *)(v26 + 24) = *((_DWORD *)v27 + 1);
          *(_DWORD *)(v26 + 104) = 0;
          *(_QWORD *)(v26 + 96) = v25 + *((unsigned int *)v27 + 7);
          v28 = (PVOID *)P;
          if ( P == &P )
            goto LABEL_25;
          do
          {
            v35 = v28;
            if ( v27[1] == v28[8] && *((_DWORD *)v27 + 4) == *((_DWORD *)v28 + 15) )
              break;
            v28 = (PVOID *)*v28;
          }
          while ( v28 != &P );
          if ( v28 == &P )
            goto LABEL_25;
          RtlStringCbPrintfW(v23, cbDesta, L"%s\\", v35[6]);
          v36 = v23;
          v48 = 0LL;
          v37 = 0x7FFFLL;
          while ( *v36 )
          {
            ++v36;
            if ( !--v37 )
              goto LABEL_58;
          }
          *((_QWORD *)&v48 + 1) = v23;
          LOWORD(v48) = 2 * (0x7FFF - v37);
          WORD1(v48) = v48 + 2;
LABEL_58:
          v38 = (__int64)(v35 + 2);
          if ( (int)PfpOpenHandleCreate((__int64)&v49, a1[1], (__int64)&v48, 0LL, 1179785, 33, 128, v38) < 0 )
          {
LABEL_25:
            memset(&v49, 0, 24);
            v49.m256i_i64[3] = 0x200000000LL;
            v29 = (__int64 *)a1[4];
            if ( (__int64 *)*v29 != a1 + 3 )
              goto LABEL_26;
            *(_QWORD *)v26 = a1 + 3;
            *(_QWORD *)(v26 + 8) = v29;
            *v29 = v26;
            a1[4] = v26;
          }
          else
          {
            *(_OWORD *)(v26 + 32) = *(_OWORD *)v38;
            *(_OWORD *)(v26 + 48) = *(_OWORD *)(v38 + 16);
            v39 = *(_OWORD *)&v49.m256i_u64[2];
            v49.m256i_i64[3] = 0x200000000LL;
            *(_OWORD *)v38 = 0LL;
            *(_OWORD *)(v38 + 16) = 0LL;
            *(_QWORD *)(v38 + 24) |= 0x200000000uLL;
            v40 = *(_OWORD *)v49.m256i_i8;
            v49.m256i_i64[0] = 0LL;
            *(_OWORD *)(v26 + 64) = v40;
            *(_OWORD *)(v26 + 80) = v39;
            v41 = (__int64 *)a1[6];
            *(_OWORD *)&v49.m256i_u64[1] = 0LL;
            if ( (__int64 *)*v41 != a1 + 5 )
              goto LABEL_26;
            *(_QWORD *)v26 = a1 + 5;
            *(_QWORD *)(v26 + 8) = v41;
            *v41 = v26;
            v30 = Handle;
            a1[6] = v26;
            v31 = PfSnVolumeCheckSeekPenalty(v26 + 32, v30);
            *(_DWORD *)(v26 + 108) ^= (v31 ^ (unsigned __int8)*(_DWORD *)(v26 + 108)) & 1;
            if ( (v31 & 1) != 0 )
            {
              v5 |= 1u;
            }
            else if ( (v5 & 3) == 0 && !(unsigned int)PfSnVolumeCheckIsSdBus(v26 + 32, Handle) )
            {
              v5 |= 2u;
            }
          }
          v25 = i;
        }
        Event = 0;
        *v59 = v5;
        ExFreePoolWithTag(v23, 0);
      }
LABEL_33:
      v4 = SymbolicLinkList;
    }
    else
    {
      Event = -1073741670;
    }
  }
  else
  {
    Event = -1073741811;
  }
LABEL_34:
  if ( (v50.m256i_i64[3] & 0x400000000LL) != 0 )
    PfpOpenHandleClose((__int64)&v50, a1[1], v6, v7);
  while ( 1 )
  {
    v32 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_26;
    v33 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_26;
    P = *(PVOID *)P;
    *(_QWORD *)(v33 + 8) = &P;
    if ( (v32[5] & 0x400000000LL) != 0 )
      PfpOpenHandleClose((__int64)(v32 + 2), a1[1], v6, v7);
    ExFreePoolWithTag(v32, 0);
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( Handle )
    NtClose(Handle);
  PfSnLogOpenVolumesForPrefetch(v2, 0LL);
  return (unsigned int)Event;
}
