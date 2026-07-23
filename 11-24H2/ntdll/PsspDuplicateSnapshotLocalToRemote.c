/*
 * XREFs of PsspDuplicateSnapshotLocalToRemote @ 0x180118458
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x1800BC130 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     PssNtFreeSnapshot @ 0x1800BC1B0 (PssNtFreeSnapshot.c)
 *     Feature_3078821176__private_IsEnabledDeviceUsageNoInline @ 0x18015B304 (Feature_3078821176__private_IsEnabledDeviceUsageNoInline.c)
 *     PssValidateSnapshotDescriptor @ 0x18015B348 (PssValidateSnapshotDescriptor.c)
 *     ZwAllocateVirtualMemory @ 0x180160350 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180160410 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x180160790 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1801607D0 (ZwDuplicateObject.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspDuplicateSnapshotLocalToRemote(__int64 a1, void *a2, PVOID *a3, int a4)
{
  __int64 result; // rax
  unsigned __int64 v7; // r12
  unsigned int v8; // r15d
  _OWORD *v9; // rax
  _BYTE *v10; // rcx
  __int64 v11; // rdx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  void *v19; // rdx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int64 v26; // rax
  NTSTATUS v27; // ebx
  unsigned int v28; // r14d
  void *v29; // rdx
  void *v30; // rdx
  void *v31; // rdx
  void *v32; // rdx
  void *v33; // rdx
  void *v34; // rdx
  NTSTATUS v35; // eax
  void *v36; // r8
  PVOID BaseAddress; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-B8h] BYREF
  int v39; // [rsp+50h] [rbp-B0h]
  PVOID *v40; // [rsp+58h] [rbp-A8h]
  _BYTE Buffer[4]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v42; // [rsp+64h] [rbp-9Ch]
  char *v43; // [rsp+180h] [rbp+80h]
  HANDLE TargetHandle; // [rsp+3C8h] [rbp+2C8h] BYREF
  HANDLE v45; // [rsp+3E0h] [rbp+2E0h] BYREF
  PVOID v46; // [rsp+3E8h] [rbp+2E8h]
  HANDLE v47; // [rsp+3F8h] [rbp+2F8h] BYREF
  HANDLE v48; // [rsp+410h] [rbp+310h] BYREF
  HANDLE v49; // [rsp+430h] [rbp+330h] BYREF
  HANDLE SourceHandle; // [rsp+450h] [rbp+350h] BYREF
  HANDLE v51; // [rsp+4C8h] [rbp+3C8h] BYREF

  v39 = a4;
  v40 = a3;
  result = PssValidateSnapshotDescriptor();
  if ( (int)result < 0 )
    return result;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  memset_thunk_772440563353939046(Buffer, 0, 0x478uLL);
  v7 = (unsigned __int64)*(unsigned int *)(a1 + 888) << 6;
  if ( v7 > 0xFFFFFFFF || (v8 = v7 + 1144, (unsigned int)(v7 + 1144) < 0x478) )
  {
    v27 = -1073741675;
LABEL_34:
    if ( SourceHandle )
      ZwDuplicateObject(a2, SourceHandle, 0LL, 0LL, 0, 0, 1u);
    if ( v49 )
      ZwDuplicateObject(a2, v49, 0LL, 0LL, 0, 0, 1u);
    if ( v47 )
      ZwDuplicateObject(a2, v47, 0LL, 0LL, 0, 0, 1u);
    if ( v48 )
      ZwDuplicateObject(a2, v48, 0LL, 0LL, 0, 0, 1u);
    if ( v45 )
      ZwDuplicateObject(a2, v45, 0LL, 0LL, 0, 0, 1u);
    if ( TargetHandle )
      ZwDuplicateObject(a2, TargetHandle, 0LL, 0LL, 0, 0, 1u);
    if ( v51 )
      ZwDuplicateObject(a2, v51, 0LL, 0LL, 0, 0, 1u);
    goto LABEL_48;
  }
  v9 = (_OWORD *)a1;
  v10 = Buffer;
  v11 = 8LL;
  do
  {
    v12 = v9[1];
    *(_OWORD *)v10 = *v9;
    v13 = v9[2];
    *((_OWORD *)v10 + 1) = v12;
    v14 = v9[3];
    *((_OWORD *)v10 + 2) = v13;
    v15 = v9[4];
    *((_OWORD *)v10 + 3) = v14;
    v16 = v9[5];
    *((_OWORD *)v10 + 4) = v15;
    v17 = v9[6];
    *((_OWORD *)v10 + 5) = v16;
    v18 = v9[7];
    v9 += 8;
    *((_OWORD *)v10 + 6) = v17;
    v10 += 128;
    *((_OWORD *)v10 - 1) = v18;
    --v11;
  }
  while ( v11 );
  v19 = *(void **)(a1 + 872);
  v20 = v9[1];
  *(_OWORD *)v10 = *v9;
  v21 = v9[2];
  *((_OWORD *)v10 + 1) = v20;
  v22 = v9[3];
  *((_OWORD *)v10 + 2) = v21;
  v23 = v9[4];
  *((_OWORD *)v10 + 3) = v22;
  v24 = v9[5];
  *((_OWORD *)v10 + 4) = v23;
  v25 = v9[6];
  v26 = *((_QWORD *)v9 + 14);
  *((_OWORD *)v10 + 5) = v24;
  *((_OWORD *)v10 + 6) = v25;
  *((_QWORD *)v10 + 14) = v26;
  TargetHandle = 0LL;
  v45 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  SourceHandle = 0LL;
  v51 = 0LL;
  if ( v19 )
  {
    v27 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v19, a2, &TargetHandle, 0, 0, 2u);
    v28 = v7 + 1144;
    if ( v27 < 0 )
      goto LABEL_32;
  }
  v29 = *(void **)(a1 + 896);
  if ( v29 )
  {
    v27 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v29, a2, &v45, 0, 0, 2u);
    v28 = v7 + 1144;
    if ( v27 < 0 )
      goto LABEL_32;
  }
  v30 = *(void **)(a1 + 920);
  if ( v30 )
  {
    v27 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v30, a2, &v47, 0, 0, 2u);
    v28 = v7 + 1144;
    if ( v27 < 0 )
      goto LABEL_32;
  }
  v31 = *(void **)(a1 + 944);
  if ( v31 )
  {
    v27 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v31, a2, &v48, 0, 0, 2u);
    v28 = v7 + 1144;
    if ( v27 < 0 )
      goto LABEL_32;
  }
  v32 = *(void **)(a1 + 976);
  if ( v32 )
  {
    v27 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v32, a2, &v49, 0, 0, 2u);
    v28 = v7 + 1144;
    if ( v27 < 0 )
      goto LABEL_32;
  }
  v33 = *(void **)(a1 + 1008);
  if ( v33 )
  {
    v27 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v33, a2, &SourceHandle, 0, 0, 2u);
    v28 = v7 + 1144;
    if ( v27 < 0 )
      goto LABEL_32;
  }
  v34 = *(void **)(a1 + 1128);
  if ( v34 )
  {
    v27 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v34, a2, &v51, 0, 0, 2u);
    v28 = v7 + 1144;
    if ( v27 < 0 )
      goto LABEL_32;
  }
  BaseAddress = 0LL;
  RegionSize = v8;
  v27 = ZwAllocateVirtualMemory(a2, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
  v28 = v7 + 1144;
  if ( v27 < 0 )
    goto LABEL_32;
  v42 = v42 & 0xFFFFFFF8 | 1;
  if ( *(_QWORD *)(a1 + 904) )
    v46 = (char *)BaseAddress + 1144;
  if ( *(_WORD *)(a1 + 280) )
    v43 = (char *)BaseAddress + 296;
  v35 = (unsigned int)Feature_3078821176__private_IsEnabledDeviceUsageNoInline(BaseAddress)
      ? NtWriteVirtualMemory(a2, BaseAddress, Buffer, 0x478uLL, 0LL)
      : NtWriteVirtualMemory(a2, BaseAddress, Buffer, v8, 0LL);
  v27 = v35;
  if ( v35 < 0
    || (v36 = *(void **)(a1 + 904)) != 0LL && (v27 = NtWriteVirtualMemory(a2, v46, v36, (unsigned int)v7, 0LL), v27 < 0) )
  {
LABEL_32:
    if ( BaseAddress )
    {
      RegionSize = v28;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
    goto LABEL_34;
  }
  v27 = 0;
  *v40 = BaseAddress;
LABEL_48:
  if ( (v39 & 1) != 0 )
    PssNtFreeSnapshot(a1);
  return (unsigned int)v27;
}
