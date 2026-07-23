/*
 * XREFs of PfSnOpenVolumesForPrefetch @ 0x1408ECD5C
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x1408EBF40 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140404520 (RtlStringCbPrintfW.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     NtCreateEvent @ 0x14089FF70 (NtCreateEvent.c)
 *     PfpOpenHandleClose @ 0x1408C2D04 (PfpOpenHandleClose.c)
 *     PfpOpenHandleCreate @ 0x1408C2D6C (PfpOpenHandleCreate.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408EB938 (PfSnVolumeCheckIsSdBus.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x1408EBC00 (PfSnVolumeCheckSeekPenalty.c)
 *     PfSnLogOpenVolumesForPrefetch @ 0x1408EC88C (PfSnLogOpenVolumesForPrefetch.c)
 *     PfSnQueryVolumeInfo @ 0x1408EC988 (PfSnQueryVolumeInfo.c)
 *     PfSnIsVolumeMounted @ 0x1408ED378 (PfSnIsVolumeMounted.c)
 *     IoGetDeviceInterfaces @ 0x140956550 (IoGetDeviceInterfaces.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnOpenVolumesForPrefetch(__int64 *a1, _DWORD *a2)
{
  __int64 v2; // r14
  WCHAR *v4; // rsi
  int v5; // ebx
  __int64 Pool2; // rax
  _QWORD *v7; // rdi
  NTSTATUS v8; // edi
  NTSTATUS DeviceInterfaces; // eax
  unsigned int v10; // edi
  __int64 v11; // r15
  unsigned __int64 v12; // r13
  int IsVolumeMounted; // eax
  int v14; // ecx
  _OWORD *v15; // rax
  _OWORD *v16; // rdi
  int v17; // eax
  __int128 v18; // xmm1
  __int64 v19; // rcx
  PVOID *v20; // rax
  wchar_t *v21; // rsi
  unsigned int v22; // r13d
  __int64 v23; // rdx
  __int64 v24; // rdi
  PVOID *v25; // rcx
  PVOID *v26; // rax
  __int64 *v27; // rcx
  HANDLE v28; // rdx
  unsigned __int8 v29; // al
  _QWORD *v30; // rbx
  __int64 v31; // rax
  PVOID *v33; // r15
  wchar_t *v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r15
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int64 *v39; // rdx
  PVOID P; // [rsp+40h] [rbp-99h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-91h]
  PZZWSTR SymbolicLinkList; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v43; // [rsp+58h] [rbp-81h]
  HANDLE EventHandle; // [rsp+60h] [rbp-79h] BYREF
  __int64 v45; // [rsp+68h] [rbp-71h] BYREF
  __int128 v46; // [rsp+70h] [rbp-69h] BYREF
  __m256i v47; // [rsp+80h] [rbp-59h] BYREF
  __m256i v48; // [rsp+A0h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-19h] BYREF
  int cbDest; // [rsp+140h] [rbp+67h]
  size_t cbDesta; // [rsp+140h] [rbp+67h]
  __int64 i; // [rsp+150h] [rbp+77h]
  int v54; // [rsp+158h] [rbp+7Fh] BYREF

  v2 = *a1;
  p_P = &P;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  P = &P;
  v45 = 0LL;
  v54 = 0;
  cbDest = 0;
  v46 = 0LL;
  v4 = 0LL;
  SymbolicLinkList = 0LL;
  v5 = 0;
  memset(&v48, 0, 24);
  v48.m256i_i64[3] = 0x200000000LL;
  memset(&v47, 0, 24);
  v47.m256i_i64[3] = 0x200000000LL;
  EventHandle = 0LL;
  PfSnLogOpenVolumesForPrefetch(v2, 1);
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
          v7 = (_QWORD *)(a1[2] + 112LL * (unsigned int)v4);
          memset_0(v7, 0, 0x70uLL);
          v7[1] = v7;
          *v7 = v7;
          LODWORD(v4) = (_DWORD)v4 + 1;
          *((_OWORD *)v7 + 2) = 0LL;
          *((_OWORD *)v7 + 3) = 0LL;
          v7[7] |= 0x200000000uLL;
          *((_OWORD *)v7 + 4) = 0LL;
          *((_OWORD *)v7 + 5) = 0LL;
          v7[11] |= 0x200000000uLL;
        }
        while ( (unsigned int)v4 < *(_DWORD *)(v2 + 112) );
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v8 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
      if ( v8 >= 0 )
      {
        DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_VOLUME, 0LL, 0, &SymbolicLinkList);
        v4 = SymbolicLinkList;
        v8 = DeviceInterfaces;
        if ( DeviceInterfaces < 0 )
          goto LABEL_35;
        v10 = 0;
        v43 = 0;
        while ( *v4 )
        {
          v11 = -1LL;
          do
            ++v11;
          while ( v4[v11] );
          v12 = 2LL * (unsigned int)(v11 + 1);
          if ( v10 <= v12 )
            v43 = 2 * v11 + 2;
          IsVolumeMounted = PfSnIsVolumeMounted(v4);
          v14 = cbDest;
          if ( IsVolumeMounted < 0 )
            v14 = 0;
          cbDest = v14;
          if ( v14 && (int)PfSnQueryVolumeInfo(a1[1], v4, &v48, &v45, &v54) >= 0 )
          {
            v15 = (_OWORD *)ExAllocatePool2(0x100uLL);
            v16 = v15;
            if ( !v15 )
              goto LABEL_48;
            memset_0(v15, 0, 0x48uLL);
            v17 = v54;
            v18 = *(_OWORD *)&v48.m256i_u64[2];
            v19 = v45;
            v16[1] = *(_OWORD *)v48.m256i_i8;
            *((_DWORD *)v16 + 15) = v17;
            *((_QWORD *)v16 + 8) = v19;
            v16[2] = v18;
            *((_QWORD *)v16 + 6) = v4;
            *((_DWORD *)v16 + 14) = v11;
            memset(&v48, 0, 24);
            v20 = p_P;
            v48.m256i_i64[3] = 0x200000000LL;
            if ( *p_P != &P )
LABEL_26:
              __fastfail(3u);
            *((_QWORD *)v16 + 1) = p_P;
            *(_QWORD *)v16 = &P;
            *v20 = v16;
            p_P = (PVOID *)v16;
          }
          v10 = v43;
          v4 = (WCHAR *)((char *)v4 + v12);
        }
        cbDesta = v10 + 2;
        v21 = (wchar_t *)ExAllocatePool2(0x100uLL);
        if ( !v21 )
        {
LABEL_48:
          v8 = -1073741670;
          goto LABEL_34;
        }
        v22 = 0;
        v23 = v2 + *(unsigned int *)(v2 + 108);
        for ( i = v23; v22 < *(_DWORD *)(v2 + 112); ++v22 )
        {
          v24 = a1[2] + 112LL * v22;
          v25 = (PVOID *)(v23 + 96LL * v22);
          *(_QWORD *)(v24 + 16) = v23 + *(unsigned int *)v25;
          *(_DWORD *)(v24 + 24) = *((_DWORD *)v25 + 1);
          *(_DWORD *)(v24 + 104) = 0;
          *(_QWORD *)(v24 + 96) = v23 + *((unsigned int *)v25 + 7);
          v26 = (PVOID *)P;
          if ( P == &P )
            goto LABEL_25;
          do
          {
            v33 = v26;
            if ( v25[1] == v26[8] && *((_DWORD *)v25 + 4) == *((_DWORD *)v26 + 15) )
              break;
            v26 = (PVOID *)*v26;
          }
          while ( v26 != &P );
          if ( v26 == &P )
            goto LABEL_25;
          RtlStringCbPrintfW(v21, cbDesta, L"%s\\", v33[6]);
          v34 = v21;
          v46 = 0LL;
          v35 = 0x7FFFLL;
          while ( *v34 )
          {
            ++v34;
            if ( !--v35 )
              goto LABEL_57;
          }
          *((_QWORD *)&v46 + 1) = v21;
          LOWORD(v46) = 2 * (0x7FFF - v35);
          WORD1(v46) = v46 + 2;
LABEL_57:
          v36 = (__int64)(v33 + 2);
          if ( (int)PfpOpenHandleCreate((__int64)&v47, a1[1], (__int64)&v46, 0LL, 1179785, 33, 128, v36) < 0 )
          {
LABEL_25:
            memset(&v47, 0, 24);
            v47.m256i_i64[3] = 0x200000000LL;
            v27 = (__int64 *)a1[4];
            if ( (__int64 *)*v27 != a1 + 3 )
              goto LABEL_26;
            *(_QWORD *)v24 = a1 + 3;
            *(_QWORD *)(v24 + 8) = v27;
            *v27 = v24;
            a1[4] = v24;
          }
          else
          {
            *(_OWORD *)(v24 + 32) = *(_OWORD *)v36;
            *(_OWORD *)(v24 + 48) = *(_OWORD *)(v36 + 16);
            v37 = *(_OWORD *)&v47.m256i_u64[2];
            v47.m256i_i64[3] = 0x200000000LL;
            *(_OWORD *)v36 = 0LL;
            *(_OWORD *)(v36 + 16) = 0LL;
            *(_QWORD *)(v36 + 24) |= 0x200000000uLL;
            v38 = *(_OWORD *)v47.m256i_i8;
            v47.m256i_i64[0] = 0LL;
            *(_OWORD *)(v24 + 64) = v38;
            *(_OWORD *)(v24 + 80) = v37;
            v39 = (__int64 *)a1[6];
            *(_OWORD *)&v47.m256i_u64[1] = 0LL;
            if ( (__int64 *)*v39 != a1 + 5 )
              goto LABEL_26;
            *(_QWORD *)v24 = a1 + 5;
            *(_QWORD *)(v24 + 8) = v39;
            *v39 = v24;
            v28 = EventHandle;
            a1[6] = v24;
            v29 = PfSnVolumeCheckSeekPenalty((HANDLE *)(v24 + 32), v28);
            *(_DWORD *)(v24 + 108) ^= (v29 ^ (unsigned __int8)*(_DWORD *)(v24 + 108)) & 1;
            if ( (v29 & 1) != 0 )
            {
              v5 |= 1u;
            }
            else if ( (v5 & 3) == 0 && !(unsigned int)PfSnVolumeCheckIsSdBus((HANDLE *)(v24 + 32), EventHandle) )
            {
              v5 |= 2u;
            }
          }
          v23 = i;
        }
        v8 = 0;
        *a2 = v5;
        ExFreePoolWithTag(v21, 0);
      }
LABEL_34:
      v4 = SymbolicLinkList;
    }
    else
    {
      v8 = -1073741670;
    }
  }
  else
  {
    v8 = -1073741811;
  }
LABEL_35:
  if ( (v48.m256i_i64[3] & 0x400000000LL) != 0 )
    PfpOpenHandleClose((__int64)&v48, a1[1]);
  while ( 1 )
  {
    v30 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_26;
    v31 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_26;
    P = *(PVOID *)P;
    *(_QWORD *)(v31 + 8) = &P;
    if ( (v30[5] & 0x400000000LL) != 0 )
      PfpOpenHandleClose((__int64)(v30 + 2), a1[1]);
    ExFreePoolWithTag(v30, 0);
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( EventHandle )
    NtClose(EventHandle);
  PfSnLogOpenVolumesForPrefetch(v2, 0);
  return (unsigned int)v8;
}
