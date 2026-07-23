/*
 * XREFs of PfSnOpenVolumesForPrefetch @ 0x1409549CC
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1409358F0 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140404170 (RtlStringCbPrintfW.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     NtCreateEvent @ 0x1408532A0 (NtCreateEvent.c)
 *     IoGetDeviceInterfaces @ 0x14094F7D0 (IoGetDeviceInterfaces.c)
 *     PfpOpenHandleClose @ 0x140954390 (PfpOpenHandleClose.c)
 *     PfpOpenHandleCreate @ 0x1409543F8 (PfpOpenHandleCreate.c)
 *     PfSnIsVolumeMounted @ 0x140954FEC (PfSnIsVolumeMounted.c)
 *     PfSnQueryVolumeInfo @ 0x140957B7C (PfSnQueryVolumeInfo.c)
 *     PfSnLogOpenVolumesForPrefetch @ 0x140A43F78 (PfSnLogOpenVolumesForPrefetch.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140A4AED8 (PfSnVolumeCheckIsSdBus.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x140A4F244 (PfSnVolumeCheckSeekPenalty.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnOpenVolumesForPrefetch(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // r14
  WCHAR *v4; // rsi
  int v5; // ebx
  unsigned int v6; // eax
  __int64 Pool2; // rax
  _QWORD *v8; // rdi
  NTSTATUS v9; // edi
  NTSTATUS DeviceInterfaces; // eax
  unsigned int v11; // edi
  __int64 v12; // r15
  unsigned __int64 v13; // r13
  int IsVolumeMounted; // eax
  int v15; // ecx
  _OWORD *v16; // rax
  _OWORD *v17; // rdi
  int v18; // eax
  __int128 v19; // xmm1
  __int64 v20; // rcx
  PVOID *v21; // rax
  wchar_t *v22; // rsi
  unsigned int v23; // r13d
  __int64 v24; // rdx
  __int64 v25; // rdi
  PVOID *v26; // rcx
  PVOID *v27; // rax
  __int64 *v28; // rcx
  HANDLE v29; // rdx
  unsigned __int8 v30; // al
  _QWORD *v31; // rbx
  __int64 v32; // rax
  PVOID *v34; // r15
  wchar_t *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r15
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int64 *v40; // rdx
  PVOID P; // [rsp+40h] [rbp-99h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-91h]
  PZZWSTR SymbolicLinkList; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v44; // [rsp+58h] [rbp-81h]
  HANDLE EventHandle; // [rsp+60h] [rbp-79h] BYREF
  __int64 v46; // [rsp+68h] [rbp-71h] BYREF
  __int128 v47; // [rsp+70h] [rbp-69h] BYREF
  __m256i v48; // [rsp+80h] [rbp-59h] BYREF
  __m256i v49; // [rsp+A0h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-19h] BYREF
  int cbDest; // [rsp+140h] [rbp+67h]
  size_t cbDesta; // [rsp+140h] [rbp+67h]
  _DWORD *v53; // [rsp+148h] [rbp+6Fh]
  __int64 i; // [rsp+150h] [rbp+77h]
  int v55; // [rsp+158h] [rbp+7Fh] BYREF

  v53 = a2;
  v2 = *a1;
  p_P = &P;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  P = &P;
  v46 = 0LL;
  LOBYTE(a2) = 1;
  v55 = 0;
  cbDest = 0;
  v47 = 0LL;
  v4 = 0LL;
  SymbolicLinkList = 0LL;
  v5 = 0;
  memset(&v49, 0, 24);
  v49.m256i_i64[3] = 0x200000000LL;
  memset(&v48, 0, 24);
  v48.m256i_i64[3] = 0x200000000LL;
  EventHandle = 0LL;
  PfSnLogOpenVolumesForPrefetch(v2, a2);
  if ( v2 && (v6 = *(_DWORD *)(v2 + 112), v6 < 0x4000) )
  {
    Pool2 = ExAllocatePool2(0x100uLL, 112 * v6, 0x76506343u);
    a1[2] = Pool2;
    if ( Pool2 )
    {
      if ( *(_DWORD *)(v2 + 112) )
      {
        do
        {
          v8 = (_QWORD *)(a1[2] + 112LL * (unsigned int)v4);
          memset_0(v8, 0, 0x70uLL);
          v8[1] = v8;
          *v8 = v8;
          LODWORD(v4) = (_DWORD)v4 + 1;
          *((_OWORD *)v8 + 2) = 0LL;
          *((_OWORD *)v8 + 3) = 0LL;
          v8[7] |= 0x200000000uLL;
          *((_OWORD *)v8 + 4) = 0LL;
          *((_OWORD *)v8 + 5) = 0LL;
          v8[11] |= 0x200000000uLL;
        }
        while ( (unsigned int)v4 < *(_DWORD *)(v2 + 112) );
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v9 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
      if ( v9 >= 0 )
      {
        DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_VOLUME, 0LL, 0, &SymbolicLinkList);
        v4 = SymbolicLinkList;
        v9 = DeviceInterfaces;
        if ( DeviceInterfaces < 0 )
          goto LABEL_34;
        v11 = 0;
        v44 = 0;
        while ( *v4 )
        {
          v12 = -1LL;
          do
            ++v12;
          while ( v4[v12] );
          v13 = 2LL * (unsigned int)(v12 + 1);
          if ( v11 <= v13 )
            v44 = 2 * v12 + 2;
          IsVolumeMounted = PfSnIsVolumeMounted(v4);
          v15 = cbDest;
          if ( IsVolumeMounted < 0 )
            v15 = 0;
          cbDest = v15;
          if ( v15
            && (int)PfSnQueryVolumeInfo(a1[1], (_DWORD)v4, (unsigned int)&v49, (unsigned int)&v46, (__int64)&v55) >= 0 )
          {
            v16 = (_OWORD *)ExAllocatePool2(0x100uLL, 0x48uLL, 0x76506343u);
            v17 = v16;
            if ( !v16 )
              goto LABEL_48;
            memset_0(v16, 0, 0x48uLL);
            v18 = v55;
            v19 = *(_OWORD *)&v49.m256i_u64[2];
            v20 = v46;
            v17[1] = *(_OWORD *)v49.m256i_i8;
            *((_DWORD *)v17 + 15) = v18;
            *((_QWORD *)v17 + 8) = v20;
            v17[2] = v19;
            *((_QWORD *)v17 + 6) = v4;
            *((_DWORD *)v17 + 14) = v12;
            memset(&v49, 0, 24);
            v21 = p_P;
            v49.m256i_i64[3] = 0x200000000LL;
            if ( *p_P != &P )
LABEL_26:
              __fastfail(3u);
            *((_QWORD *)v17 + 1) = p_P;
            *(_QWORD *)v17 = &P;
            *v21 = v17;
            p_P = (PVOID *)v17;
          }
          v11 = v44;
          v4 = (WCHAR *)((char *)v4 + v13);
        }
        cbDesta = v11 + 2;
        v22 = (wchar_t *)ExAllocatePool2(0x100uLL, cbDesta, 0x76506343u);
        if ( !v22 )
        {
LABEL_48:
          v9 = -1073741670;
          goto LABEL_33;
        }
        v23 = 0;
        v24 = v2 + *(unsigned int *)(v2 + 108);
        for ( i = v24; v23 < *(_DWORD *)(v2 + 112); ++v23 )
        {
          v25 = a1[2] + 112LL * v23;
          v26 = (PVOID *)(v24 + 96LL * v23);
          *(_QWORD *)(v25 + 16) = v24 + *(unsigned int *)v26;
          *(_DWORD *)(v25 + 24) = *((_DWORD *)v26 + 1);
          *(_DWORD *)(v25 + 104) = 0;
          *(_QWORD *)(v25 + 96) = v24 + *((unsigned int *)v26 + 7);
          v27 = (PVOID *)P;
          if ( P == &P )
            goto LABEL_25;
          do
          {
            v34 = v27;
            if ( v26[1] == v27[8] && *((_DWORD *)v26 + 4) == *((_DWORD *)v27 + 15) )
              break;
            v27 = (PVOID *)*v27;
          }
          while ( v27 != &P );
          if ( v27 == &P )
            goto LABEL_25;
          RtlStringCbPrintfW(v22, cbDesta, L"%s\\", v34[6]);
          v35 = v22;
          v47 = 0LL;
          v36 = 0x7FFFLL;
          while ( *v35 )
          {
            ++v35;
            if ( !--v36 )
              goto LABEL_58;
          }
          *((_QWORD *)&v47 + 1) = v22;
          LOWORD(v47) = 2 * (0x7FFF - v36);
          WORD1(v47) = v47 + 2;
LABEL_58:
          v37 = (__int64)(v34 + 2);
          if ( (int)PfpOpenHandleCreate((__int64)&v48, a1[1], (__int64)&v47, 0LL, 1179785, 33, 128, v37) < 0 )
          {
LABEL_25:
            memset(&v48, 0, 24);
            v48.m256i_i64[3] = 0x200000000LL;
            v28 = (__int64 *)a1[4];
            if ( (__int64 *)*v28 != a1 + 3 )
              goto LABEL_26;
            *(_QWORD *)v25 = a1 + 3;
            *(_QWORD *)(v25 + 8) = v28;
            *v28 = v25;
            a1[4] = v25;
          }
          else
          {
            *(_OWORD *)(v25 + 32) = *(_OWORD *)v37;
            *(_OWORD *)(v25 + 48) = *(_OWORD *)(v37 + 16);
            v38 = *(_OWORD *)&v48.m256i_u64[2];
            v48.m256i_i64[3] = 0x200000000LL;
            *(_OWORD *)v37 = 0LL;
            *(_OWORD *)(v37 + 16) = 0LL;
            *(_QWORD *)(v37 + 24) |= 0x200000000uLL;
            v39 = *(_OWORD *)v48.m256i_i8;
            v48.m256i_i64[0] = 0LL;
            *(_OWORD *)(v25 + 64) = v39;
            *(_OWORD *)(v25 + 80) = v38;
            v40 = (__int64 *)a1[6];
            *(_OWORD *)&v48.m256i_u64[1] = 0LL;
            if ( (__int64 *)*v40 != a1 + 5 )
              goto LABEL_26;
            *(_QWORD *)v25 = a1 + 5;
            *(_QWORD *)(v25 + 8) = v40;
            *v40 = v25;
            v29 = EventHandle;
            a1[6] = v25;
            v30 = PfSnVolumeCheckSeekPenalty(v25 + 32, v29);
            *(_DWORD *)(v25 + 108) ^= (v30 ^ (unsigned __int8)*(_DWORD *)(v25 + 108)) & 1;
            if ( (v30 & 1) != 0 )
            {
              v5 |= 1u;
            }
            else if ( (v5 & 3) == 0 && !(unsigned int)PfSnVolumeCheckIsSdBus(v25 + 32, EventHandle) )
            {
              v5 |= 2u;
            }
          }
          v24 = i;
        }
        v9 = 0;
        *v53 = v5;
        ExFreePoolWithTag(v22, 0);
      }
LABEL_33:
      v4 = SymbolicLinkList;
    }
    else
    {
      v9 = -1073741670;
    }
  }
  else
  {
    v9 = -1073741811;
  }
LABEL_34:
  if ( (v49.m256i_i64[3] & 0x400000000LL) != 0 )
    PfpOpenHandleClose((__int64)&v49, a1[1]);
  while ( 1 )
  {
    v31 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_26;
    v32 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_26;
    P = *(PVOID *)P;
    *(_QWORD *)(v32 + 8) = &P;
    if ( (v31[5] & 0x400000000LL) != 0 )
      PfpOpenHandleClose((__int64)(v31 + 2), a1[1]);
    ExFreePoolWithTag(v31, 0);
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( EventHandle )
    NtClose(EventHandle);
  PfSnLogOpenVolumesForPrefetch(v2, 0LL);
  return (unsigned int)v9;
}
