/*
 * XREFs of WmipQueryAllData @ 0x1409B2D4C
 * Callers:
 *     WmipIoControl @ 0x1409B1150 (WmipIoControl.c)
 *     WmipQueryAllDataMultiple @ 0x1409B169C (WmipQueryAllDataMultiple.c)
 *     IoWMIQueryAllData @ 0x140A701A0 (IoWMIQueryAllData.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointer @ 0x140424A50 (ObReferenceObjectByPointer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     WmipSendWmiIrp @ 0x1409B2964 (WmipSendWmiIrp.c)
 *     WmipUnreferenceEntry @ 0x1409B31A8 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x1409B3294 (WmipForwardWmiIrp.c)
 *     WmipInsertStaticNames @ 0x1409B3544 (WmipInsertStaticNames.c)
 *     WmipStaticInstanceNameSize @ 0x1409B376C (WmipStaticInstanceNameSize.c)
 *     WmipPrepareForWnodeAD @ 0x1409B3E88 (WmipPrepareForWnodeAD.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipQueryAllData(
        PVOID Object,
        IRP *a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6)
{
  PVOID v7; // rdi
  void *v9; // rcx
  NTSTATUS v10; // eax
  int v11; // ebx
  int v12; // eax
  char v13; // r14
  unsigned int v14; // r15d
  unsigned int v15; // ebx
  _BYTE *v16; // r12
  int *v17; // r13
  int *v18; // rdi
  __int128 v19; // xmm6
  __int64 *v20; // rcx
  int v21; // r12d
  char v22; // si
  __int64 v23; // rax
  char *v24; // rax
  __int64 v25; // rdx
  IRP *v26; // rax
  int v27; // eax
  int v28; // ecx
  unsigned int *v29; // rcx
  unsigned int v30; // ecx
  unsigned int v31; // edx
  bool v32; // zf
  _DWORD *v33; // rsi
  unsigned int v35; // eax
  unsigned int v36; // edi
  int v37; // eax
  unsigned int v38; // ecx
  unsigned int *v39; // rax
  __int128 v40; // xmm0
  char v41[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v42; // [rsp+34h] [rbp-CCh] BYREF
  int *v43; // [rsp+38h] [rbp-C8h]
  __int64 v44; // [rsp+40h] [rbp-C0h]
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  PVOID v46; // [rsp+50h] [rbp-B0h]
  char *v47; // [rsp+58h] [rbp-A8h]
  __int64 v48; // [rsp+60h] [rbp-A0h]
  unsigned int *v49; // [rsp+68h] [rbp-98h]
  __int128 v50; // [rsp+70h] [rbp-90h] BYREF
  PIRP Irp; // [rsp+80h] [rbp-80h]
  _DWORD *v52; // [rsp+88h] [rbp-78h]
  int v53; // [rsp+90h] [rbp-70h] BYREF
  __int64 v54; // [rsp+94h] [rbp-6Ch] BYREF
  _BYTE v55[128]; // [rsp+E0h] [rbp-20h] BYREF

  Irp = a2;
  v7 = Object;
  v46 = Object;
  v49 = a6;
  v52 = (_DWORD *)a4;
  memset_0(v55, 0, sizeof(v55));
  v53 = 0;
  memset_0(&v54, 0, 0x44uLL);
  v41[0] = 0;
  v50 = 0LL;
  if ( v7 )
  {
    v10 = ObReferenceObjectByPointer(v7, 1u, WmipGuidObjectType, a3);
  }
  else
  {
    v9 = *(void **)(a4 + 16);
    P = 0LL;
    v10 = ObReferenceObjectByHandle(v9, 1u, WmipGuidObjectType, a3, &P, 0LL);
    v7 = P;
    v46 = P;
  }
  v11 = v10;
  if ( v10 < 0 )
    return (unsigned int)v11;
  v42 = 16;
  P = v55;
  v11 = WmipPrepareForWnodeAD((_DWORD)v7, (unsigned int)&v50, (unsigned int)&v42, (unsigned int)&P, (__int64)v41);
  if ( v11 < 0 )
    goto LABEL_32;
  v12 = *(_DWORD *)(a4 + 44);
  LODWORD(v44) = v12;
  if ( v41[0] )
  {
    *(_DWORD *)(a4 + 12) = 0;
    v40 = v50;
    *(_DWORD *)(a4 + 44) = v12 | 0x100;
    v11 = 0;
    *(_OWORD *)(a4 + 24) = v40;
    *a6 = 48;
    goto LABEL_32;
  }
  v13 = 0;
  v14 = a5;
  v15 = 0;
  v16 = P;
  v17 = 0LL;
  v43 = (int *)a4;
  v18 = (int *)a4;
  if ( !v42 )
  {
LABEL_53:
    v11 = -1073741163;
    goto LABEL_30;
  }
  v19 = v50;
  v20 = (__int64 *)P;
  v48 = v42;
  v21 = v44;
  v47 = (char *)P;
  v22 = 0;
  do
  {
    v23 = *v20;
    v44 = *v20;
    if ( v13 || v22 || v14 < 0x48 )
    {
      v18 = &v53;
      memset_0(&v53, 0, 0x48uLL);
      v23 = v44;
      v14 = 72;
      v22 = 1;
    }
    *v18 = 48;
    v42 = *(_DWORD *)(v23 + 16) & 3;
    v24 = v47;
    v18[11] = v21 | (v42 != 0 ? 0x80 : 0);
    *(_OWORD *)(v18 + 6) = v19;
    v25 = *(unsigned int *)(*(_QWORD *)v24 + 80LL);
    v18[3] = 0;
    v26 = Irp;
    v18[1] = v25;
    if ( v26 )
      v27 = WmipForwardWmiIrp(v26, v14, (__int64)v18);
    else
      v27 = WmipSendWmiIrp(0LL, v25, (__int64)(v18 + 6), v14, (__int64)v18, &v50);
    v28 = v27;
    v18[1] = 0;
    if ( v27 < 0 )
      goto LABEL_13;
    if ( (v18[11] & 0x20) != 0 )
    {
      if ( v18[12] <= v14 )
        v28 = -1073741823;
      if ( v28 < 0 )
        goto LABEL_13;
      v35 = v18[12];
LABEL_44:
      if ( v35 < 0x48 )
        v35 = 72;
      v36 = v15 + v35;
      if ( v42 )
      {
        v37 = WmipStaticInstanceNameSize(v44);
        v38 = (v36 + 3) & 0xFFFFFFFC;
        if ( v36 + 3 < v36 )
          v38 = v36;
        v36 = v38 + v37;
      }
      v15 = (v36 + 7) & 0xFFFFFFF8;
      if ( v36 + 7 < v36 )
        v15 = v36;
LABEL_52:
      v13 = 1;
LABEL_13:
      v18 = v43;
      goto LABEL_25;
    }
    if ( !v18[13] )
      goto LABEL_13;
    if ( v22 )
    {
      v35 = *v18;
      goto LABEL_44;
    }
    if ( v17 )
      v17[3] = (_DWORD)v18 - (_DWORD)v17;
    v17 = v18;
    v29 = (unsigned int *)v18;
    if ( v42 )
    {
      WmipInsertStaticNames(v18, v14, v44);
      if ( (v18[11] & 0x20) != 0 )
      {
        v13 = 1;
        v29 = (unsigned int *)(v18 + 12);
      }
      else
      {
        v29 = (unsigned int *)v18;
      }
    }
    v30 = *v29;
    v31 = (v30 + 7) & 0xFFFFFFF8;
    if ( v30 + 7 < v30 )
      v31 = v30;
    v15 += v31;
    if ( v13 || v14 < v31 )
      goto LABEL_52;
    v14 -= v31;
    v18 = (int *)((char *)v43 + v31);
    v43 = v18;
LABEL_25:
    WmipUnreferenceEntry(&WmipISChunkInfo, v44);
    v20 = (__int64 *)(v47 + 8);
    v32 = v48-- == 1;
    v47 += 8;
  }
  while ( !v32 );
  v33 = v52;
  v16 = P;
  if ( !v15 )
    goto LABEL_53;
  if ( v13 )
  {
    if ( v15 <= a5 )
      v15 = a5 + 64;
    v39 = v49;
    *v52 = 56;
    v33[11] = 32;
    v33[12] = v15;
    *v39 = 56;
  }
  else
  {
    *v49 = v15;
  }
  v11 = 0;
LABEL_30:
  if ( v16 != v55 && v16 )
    ExFreePoolWithTag(v16, 0);
  v7 = v46;
LABEL_32:
  ObfDereferenceObject(v7);
  return (unsigned int)v11;
}
