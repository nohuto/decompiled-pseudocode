/*
 * XREFs of PsspDuplicateSnapshotLocalToRemote @ 0x18011A228
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x1800C4570 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     PssNtFreeSnapshot @ 0x1800C45F0 (PssNtFreeSnapshot.c)
 *     Feature_3078821176__private_IsEnabledDeviceUsageNoInline @ 0x18015CF44 (Feature_3078821176__private_IsEnabledDeviceUsageNoInline.c)
 *     PssValidateSnapshotDescriptor @ 0x18015CF88 (PssValidateSnapshotDescriptor.c)
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x180162050 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x1801623D0 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x180162410 (ZwDuplicateObject.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspDuplicateSnapshotLocalToRemote(__int64 a1, __int64 a2, _QWORD *a3, int a4)
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
  __int64 v19; // rdx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int64 v26; // rax
  int v27; // ebx
  unsigned int v28; // r14d
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // r8
  __int64 v37; // [rsp+30h] [rbp-D0h]
  int v38; // [rsp+30h] [rbp-D0h]
  __int64 v39; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+48h] [rbp-B8h] BYREF
  int v41; // [rsp+50h] [rbp-B0h]
  _QWORD *v42; // [rsp+58h] [rbp-A8h]
  _BYTE v43[4]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v44; // [rsp+64h] [rbp-9Ch]
  __int64 v45; // [rsp+180h] [rbp+80h]
  _QWORD v46[3]; // [rsp+3C8h] [rbp+2C8h] BYREF
  __int64 v47; // [rsp+3E0h] [rbp+2E0h] BYREF
  __int64 v48; // [rsp+3E8h] [rbp+2E8h]
  _QWORD v49[3]; // [rsp+3F8h] [rbp+2F8h] BYREF
  _QWORD v50[4]; // [rsp+410h] [rbp+310h] BYREF
  _QWORD v51[4]; // [rsp+430h] [rbp+330h] BYREF
  _QWORD v52[15]; // [rsp+450h] [rbp+350h] BYREF
  _QWORD v53[3]; // [rsp+4C8h] [rbp+3C8h] BYREF

  v41 = a4;
  v42 = a3;
  result = PssValidateSnapshotDescriptor();
  if ( (int)result < 0 )
    return result;
  v39 = 0LL;
  v40 = 0LL;
  memset_thunk_772440563353939046(v43, 0, 0x478uLL);
  v7 = (unsigned __int64)*(unsigned int *)(a1 + 888) << 6;
  if ( v7 > 0xFFFFFFFF || (v8 = v7 + 1144, (unsigned int)(v7 + 1144) < 0x478) )
  {
    v27 = -1073741675;
LABEL_34:
    if ( v52[0] )
    {
      LODWORD(v37) = 1;
      ZwDuplicateObject(a2, v52[0], 0LL, 0LL, 0, 0, v37);
    }
    if ( v51[0] )
    {
      LODWORD(v37) = 1;
      ZwDuplicateObject(a2, v51[0], 0LL, 0LL, 0, 0, v37);
    }
    if ( v49[0] )
    {
      LODWORD(v37) = 1;
      ZwDuplicateObject(a2, v49[0], 0LL, 0LL, 0, 0, v37);
    }
    if ( v50[0] )
    {
      LODWORD(v37) = 1;
      ZwDuplicateObject(a2, v50[0], 0LL, 0LL, 0, 0, v37);
    }
    if ( v47 )
    {
      LODWORD(v37) = 1;
      ZwDuplicateObject(a2, v47, 0LL, 0LL, 0, 0, v37);
    }
    if ( v46[0] )
    {
      LODWORD(v37) = 1;
      ZwDuplicateObject(a2, v46[0], 0LL, 0LL, 0, 0, v37);
    }
    if ( v53[0] )
    {
      LODWORD(v37) = 1;
      ZwDuplicateObject(a2, v53[0], 0LL, 0LL, 0, 0, v37);
    }
    goto LABEL_48;
  }
  v9 = (_OWORD *)a1;
  v10 = v43;
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
  v19 = *(_QWORD *)(a1 + 872);
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
  v46[0] = 0LL;
  v47 = 0LL;
  v49[0] = 0LL;
  v50[0] = 0LL;
  v51[0] = 0LL;
  v52[0] = 0LL;
  v53[0] = 0LL;
  if ( v19 )
  {
    v38 = 2;
    v27 = ZwDuplicateObject(-1LL, v19, a2, v46, 0, 0, v38);
    v28 = v7 + 1144;
    if ( v27 < 0 )
      goto LABEL_32;
  }
  v29 = *(_QWORD *)(a1 + 896);
  if ( v29 )
  {
    LODWORD(v37) = 2;
    v27 = ZwDuplicateObject(-1LL, v29, a2, &v47, 0, 0, v37);
    v28 = v7 + 1144;
    if ( v27 < 0 )
      goto LABEL_32;
  }
  v30 = *(_QWORD *)(a1 + 920);
  if ( v30 )
  {
    LODWORD(v37) = 2;
    v27 = ZwDuplicateObject(-1LL, v30, a2, v49, 0, 0, v37);
    v28 = v7 + 1144;
    if ( v27 < 0 )
      goto LABEL_32;
  }
  v31 = *(_QWORD *)(a1 + 944);
  if ( v31 )
  {
    LODWORD(v37) = 2;
    v27 = ZwDuplicateObject(-1LL, v31, a2, v50, 0, 0, v37);
    v28 = v7 + 1144;
    if ( v27 < 0 )
      goto LABEL_32;
  }
  v32 = *(_QWORD *)(a1 + 976);
  if ( v32 )
  {
    LODWORD(v37) = 2;
    v27 = ZwDuplicateObject(-1LL, v32, a2, v51, 0, 0, v37);
    v28 = v7 + 1144;
    if ( v27 < 0 )
      goto LABEL_32;
  }
  v33 = *(_QWORD *)(a1 + 1008);
  if ( v33 )
  {
    LODWORD(v37) = 2;
    v27 = ZwDuplicateObject(-1LL, v33, a2, v52, 0, 0, v37);
    v28 = v7 + 1144;
    if ( v27 < 0 )
      goto LABEL_32;
  }
  v34 = *(_QWORD *)(a1 + 1128);
  if ( v34 )
  {
    LODWORD(v37) = 2;
    v27 = ZwDuplicateObject(-1LL, v34, a2, v53, 0, 0, v37);
    v28 = v7 + 1144;
    if ( v27 < 0 )
      goto LABEL_32;
  }
  v39 = 0LL;
  v40 = v8;
  v27 = ZwAllocateVirtualMemory(a2, &v39, 0LL, &v40, 4096, 4);
  v28 = v7 + 1144;
  if ( v27 < 0 )
    goto LABEL_32;
  v44 = v44 & 0xFFFFFFF8 | 1;
  if ( *(_QWORD *)(a1 + 904) )
    v48 = v39 + 1144;
  if ( *(_WORD *)(a1 + 280) )
    v45 = v39 + 296;
  v35 = (unsigned int)Feature_3078821176__private_IsEnabledDeviceUsageNoInline(v39)
      ? NtWriteVirtualMemory(a2, v39, v43, 1144LL, 0LL)
      : NtWriteVirtualMemory(a2, v39, v43, v8, 0LL);
  v27 = v35;
  if ( v35 < 0
    || (v36 = *(_QWORD *)(a1 + 904)) != 0 && (v27 = NtWriteVirtualMemory(a2, v48, v36, (unsigned int)v7, 0LL), v27 < 0) )
  {
LABEL_32:
    if ( v39 )
    {
      v40 = v28;
      ZwFreeVirtualMemory(-1LL, &v39, &v40, 0x8000LL);
    }
    goto LABEL_34;
  }
  v27 = 0;
  *v42 = v39;
LABEL_48:
  if ( (v41 & 1) != 0 )
    PssNtFreeSnapshot(a1);
  return (unsigned int)v27;
}
