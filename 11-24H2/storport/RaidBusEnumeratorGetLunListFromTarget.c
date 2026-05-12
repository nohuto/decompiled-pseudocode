/*
 * XREFs of RaidBusEnumeratorGetLunListFromTarget @ 0x140018EB0
 * Callers:
 *     RaidBusEnumeratorGetLunList @ 0x140018080 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterEnumerateBus @ 0x140018740 (RaidAdapterEnumerateBus.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidAllocateSrb @ 0x14000EB90 (RaidAllocateSrb.c)
 *     RaidSelectDeviceDumpCollectionMode @ 0x140017F90 (RaidSelectDeviceDumpCollectionMode.c)
 *     RaidBusEnumeratorIssueReportLuns @ 0x14001AF90 (RaidBusEnumeratorIssueReportLuns.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x14001B3B0 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     WPP_SF_ @ 0x14005585C (WPP_SF_.c)
 *     WPP_SF_d @ 0x140055B28 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x140055B6C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x140067D68 (WPP_SF_qD.c)
 *     WPP_SF_qddd @ 0x140068D54 (WPP_SF_qddd.c)
 *     RaidLogAllocationFailure @ 0x14008D748 (RaidLogAllocationFailure.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 *     RaidPrepareSrbForReuse @ 0x1401B5C80 (RaidPrepareSrbForReuse.c)
 *     RaidInitializeReportLunsSrb @ 0x1401B6AE4 (RaidInitializeReportLunsSrb.c)
 */

__int64 __fastcall RaidBusEnumeratorGetLunListFromTarget(__int64 *a1, int a2, __int64 a3, _BYTE *a4)
{
  unsigned __int16 v4; // r15
  _BYTE *v5; // r13
  void *v8; // rcx
  __int64 v9; // rdi
  IRP *v10; // rcx
  void *v11; // rcx
  __int64 v12; // rbp
  __int64 Pool2; // rax
  struct _MDL *v14; // rcx
  PMDL Mdl; // rax
  _OWORD *v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rax
  int v22; // edi
  _DWORD *v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  unsigned __int8 *v27; // r14
  unsigned int v28; // ecx
  int v29; // edi
  void *v30; // rcx
  _DWORD *v31; // r14
  IRP *v32; // rcx
  void *v33; // rcx
  unsigned __int64 v34; // r13
  __int64 v35; // r14
  __int64 v36; // rax
  struct _MDL *v37; // rcx
  PMDL v38; // rax
  __int64 v39; // r14
  _DWORD *v40; // rdi
  int v41; // eax
  __int64 v42; // rdi
  __int64 v43; // rax
  int v44; // esi
  unsigned int v45; // ebx
  __int64 v46; // r8
  __int64 Srb; // rax
  unsigned int v48; // edx
  unsigned int v49; // r8d
  __int64 v50; // rcx
  __int64 Pool; // rax
  PIRP v52; // rax
  _DWORD *v53; // rax
  int v54; // ecx
  __int64 v55; // rax
  unsigned int v56; // ecx
  __int64 v57; // r8
  __int64 v58; // rax
  unsigned int v59; // edx
  unsigned int v60; // r8d
  __int64 v61; // rcx
  __int64 v62; // rax
  PIRP v63; // rax
  unsigned __int64 v64; // rax
  __int64 v65; // r9
  unsigned __int64 v66; // rax
  __int64 v67; // r9
  int v68; // eax
  unsigned __int8 *v69; // rdi
  __int64 v70; // rsi
  unsigned __int16 v71; // bx
  char Irp; // [rsp+20h] [rbp-78h]
  char Irpa; // [rsp+20h] [rbp-78h]
  unsigned __int8 *v74; // [rsp+40h] [rbp-58h] BYREF
  size_t Size; // [rsp+A0h] [rbp+8h] BYREF
  int v76; // [rsp+A8h] [rbp+10h]
  __int64 v77; // [rsp+B0h] [rbp+18h]
  _BYTE *v78; // [rsp+B8h] [rbp+20h]

  v78 = a4;
  v77 = a3;
  v76 = a2;
  v4 = 0;
  v5 = a4;
  v74 = 0LL;
  LODWORD(Size) = 16;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qddd(
      WPP_GLOBAL_Control->AttachedDevice,
      15LL,
      &WPP_2471b48b4c7d3ad0e0c98a5971ea536b_Traceguids,
      *a1,
      (unsigned __int8)a2,
      BYTE1(a2),
      BYTE2(a2));
  }
  v8 = (void *)a1[10];
  v9 = *a1;
  if ( v8 )
  {
    RaidPrepareSrbForReuse(v8);
  }
  else
  {
    if ( *(_DWORD *)v9 == 1314275652 )
    {
      v46 = v9 + 274;
    }
    else if ( *(_DWORD *)v9 == 1094997074 )
    {
      v46 = v9 + 482;
    }
    else
    {
      v46 = 98LL;
    }
    Srb = RaidAllocateSrb(*(_QWORD *)(v9 + 8), 0, *(_BYTE *)v46, 1);
    a1[10] = Srb;
    if ( !Srb )
      goto LABEL_70;
  }
  if ( !a1[11] )
  {
    Pool = RaidAllocatePool(64LL, 18LL, 1314087250LL, *(_QWORD *)(v9 + 8));
    a1[11] = Pool;
    if ( !Pool )
    {
LABEL_70:
      v22 = -1073741801;
LABEL_23:
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      {
        WPP_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          16LL,
          &WPP_2471b48b4c7d3ad0e0c98a5971ea536b_Traceguids,
          (unsigned int)v22);
      }
      return (unsigned int)v22;
    }
  }
  v10 = (IRP *)a1[8];
  if ( v10 )
  {
    IoReuseIrp(v10, -1073741823);
  }
  else
  {
    v52 = IoAllocateIrp(1, 0);
    a1[8] = (__int64)v52;
    if ( !v52 )
    {
      v22 = -1073741801;
      goto LABEL_23;
    }
  }
  v11 = (void *)a1[12];
  if ( v11 )
    ExFreePoolWithTag(v11, 0x6C526152u);
  v12 = *(_QWORD *)(v9 + 8);
  Pool2 = ExAllocatePool2(64LL, 16LL, 1817338194LL);
  if ( !Pool2 && v12 )
  {
    RaidLogAllocationFailure(v12, 64, 16, 1817338194, 0x80000000);
    a1[12] = 0LL;
    goto LABEL_70;
  }
  a1[12] = Pool2;
  if ( !Pool2 )
    goto LABEL_70;
  v14 = (struct _MDL *)a1[9];
  *((_DWORD *)a1 + 26) = 16;
  if ( v14 )
    IoFreeMdl(v14);
  Mdl = IoAllocateMdl((PVOID)a1[12], *((_DWORD *)a1 + 26), 0, 0, 0LL);
  a1[9] = (__int64)Mdl;
  if ( !Mdl )
    goto LABEL_70;
  v16 = (_OWORD *)a1[12];
  v17 = a1[10];
  *v16 = 0LL;
  v18 = *a1;
  v19 = *(_DWORD *)*a1;
  if ( v19 == 1314275652 )
  {
    v20 = v18 + 274;
  }
  else if ( v19 == 1094997074 )
  {
    v20 = v18 + 482;
  }
  else
  {
    v20 = 98LL;
  }
  RaidInitializeReportLunsSrb(v17, (unsigned __int8)a2, BYTE1(v76), BYTE2(v76), (__int64)v16, 16LL, *(_BYTE *)v20);
  if ( *(_BYTE *)v20 == 1 )
  {
    *(_DWORD *)(v17 + 24) |= 0x80110u;
    v48 = 0;
    v49 = *(_DWORD *)(v17 + 56);
    *(_QWORD *)(v17 + 104) = 0LL;
    *(_QWORD *)(v17 + 64) = a1[12];
    *(_DWORD *)(v17 + 60) = 16;
    if ( v49 )
    {
      while ( 1 )
      {
        v50 = *(unsigned int *)(v17 + 4LL * v48 + 120);
        if ( (unsigned int)v50 >= 0x80 )
        {
          v64 = *(unsigned int *)(v17 + 16);
          if ( (unsigned int)v50 <= (unsigned int)v64 )
          {
            v65 = *(unsigned int *)(v17 + 4LL * v48 + 120);
            if ( *(_DWORD *)(v17 + v50) == 64 && v50 + 40 <= v64 )
              break;
          }
        }
        if ( ++v48 >= v49 )
          goto LABEL_20;
      }
      *(_QWORD *)(v17 + v65 + 16) = a1[11];
      *(_BYTE *)(v17 + v65 + 9) = 18;
    }
  }
  else
  {
    *(_QWORD *)(v17 + 56) = 0LL;
    *(_QWORD *)(v17 + 32) = a1[11];
    *(_BYTE *)(v17 + 11) = 18;
    v21 = a1[12];
    *(_DWORD *)(v17 + 12) |= 0x80110u;
    *(_QWORD *)(v17 + 24) = v21;
    *(_DWORD *)(v17 + 16) = 16;
  }
LABEL_20:
  v22 = RaidBusEnumeratorIssueSynchronousRequest((_DWORD)a1, v77, (int)a1 + 64, v17, Irp);
  if ( v22 < 0 )
  {
    if ( v22 == -1073741789 )
      v22 = -1073741810;
    goto LABEL_23;
  }
  v24 = (_DWORD *)*a1;
  v25 = *(_DWORD *)*a1;
  if ( v25 == 1314275652 )
  {
    v26 = (__int64)v24 + 274;
  }
  else if ( v25 == 1094997074 )
  {
    v26 = (__int64)v24 + 482;
  }
  else
  {
    v26 = 98LL;
  }
  if ( *(_BYTE *)v26 == 1 )
    v27 = *(unsigned __int8 **)(v17 + 64);
  else
    v27 = *(unsigned __int8 **)(v17 + 24);
  v28 = v27[3] | ((v27[2] | ((v27[1] | (*v27 << 8)) << 8)) << 8);
  if ( v28 >= v28 + 8 )
  {
    v22 = -1073741436;
    goto LABEL_23;
  }
  if ( (unsigned __int64)v28 + 8 <= 0x10 )
  {
    v29 = 0;
  }
  else
  {
    LODWORD(Size) = v28 + 8;
    v29 = -1073741789;
  }
  if ( v29 < 0 )
  {
    v30 = (void *)a1[10];
    v31 = (_DWORD *)*a1;
    if ( v30 )
    {
      RaidPrepareSrbForReuse(v30);
    }
    else
    {
      if ( *v31 == 1314275652 )
      {
        v57 = (__int64)v31 + 274;
      }
      else if ( *v31 == 1094997074 )
      {
        v57 = (__int64)v31 + 482;
      }
      else
      {
        v57 = 98LL;
      }
      v58 = RaidAllocateSrb(*((_QWORD *)v31 + 1), 0, *(_BYTE *)v57, 1);
      a1[10] = v58;
      if ( !v58 )
        return (unsigned int)-1073741801;
    }
    if ( !a1[11] )
    {
      v62 = RaidAllocatePool(64LL, 18LL, 1314087250LL, *((_QWORD *)v31 + 1));
      a1[11] = v62;
      if ( !v62 )
        return (unsigned int)-1073741801;
    }
    v32 = (IRP *)a1[8];
    if ( v32 )
    {
      IoReuseIrp(v32, -1073741823);
    }
    else
    {
      v63 = IoAllocateIrp(1, 0);
      a1[8] = (__int64)v63;
      if ( !v63 )
        return (unsigned int)-1073741801;
    }
    v33 = (void *)a1[12];
    if ( v33 )
      ExFreePoolWithTag(v33, 0x6C526152u);
    v34 = (unsigned int)Size;
    v35 = *((_QWORD *)v31 + 1);
    v36 = ExAllocatePool2(64LL, (unsigned int)Size, 1817338194LL);
    if ( !v36 && v35 )
    {
      RaidLogAllocationFailure(v35, 64, v34, 1817338194, 0x80000000);
      a1[12] = 0LL;
      return (unsigned int)-1073741801;
    }
    a1[12] = v36;
    if ( !v36 )
      return (unsigned int)-1073741801;
    v37 = (struct _MDL *)a1[9];
    *((_DWORD *)a1 + 26) = Size;
    if ( v37 )
      IoFreeMdl(v37);
    v38 = IoAllocateMdl((PVOID)a1[12], *((_DWORD *)a1 + 26), 0, 0, 0LL);
    a1[9] = (__int64)v38;
    if ( !v38 )
      return (unsigned int)-1073741801;
    v39 = a1[10];
    v74 = (unsigned __int8 *)a1[12];
    memset_0(v74, 0, v34);
    v40 = (_DWORD *)*a1;
    v41 = *(_DWORD *)*a1;
    if ( v41 == 1314275652 )
    {
      v42 = (__int64)v40 + 274;
    }
    else if ( v41 == 1094997074 )
    {
      v42 = (__int64)v40 + 482;
    }
    else
    {
      v42 = 98LL;
    }
    RaidInitializeReportLunsSrb(v39, (unsigned __int8)a2, BYTE1(v76), BYTE2(v76), (__int64)v74, v34, *(_BYTE *)v42);
    if ( *(_BYTE *)v42 == 1 )
    {
      *(_DWORD *)(v39 + 24) |= 0x80110u;
      v59 = 0;
      v60 = *(_DWORD *)(v39 + 56);
      *(_QWORD *)(v39 + 104) = 0LL;
      *(_QWORD *)(v39 + 64) = a1[12];
      *(_DWORD *)(v39 + 60) = Size;
      if ( v60 )
      {
        while ( 1 )
        {
          v61 = *(unsigned int *)(v39 + 4LL * v59 + 120);
          if ( (unsigned int)v61 >= 0x80 )
          {
            v66 = *(unsigned int *)(v39 + 16);
            if ( (unsigned int)v61 <= (unsigned int)v66 )
            {
              v67 = *(unsigned int *)(v39 + 4LL * v59 + 120);
              if ( *(_DWORD *)(v61 + v39) == 64 && v61 + 40 <= v66 )
                break;
            }
          }
          if ( ++v59 >= v60 )
            goto LABEL_53;
        }
        *(_QWORD *)(v67 + v39 + 16) = a1[11];
        *(_BYTE *)(v67 + v39 + 9) = 18;
      }
    }
    else
    {
      *(_QWORD *)(v39 + 56) = 0LL;
      *(_QWORD *)(v39 + 32) = a1[11];
      *(_BYTE *)(v39 + 11) = 18;
      v43 = a1[12];
      *(_DWORD *)(v39 + 12) |= 0x80110u;
      *(_QWORD *)(v39 + 24) = v43;
      *(_DWORD *)(v39 + 16) = Size;
    }
LABEL_53:
    v44 = v77;
    v22 = RaidBusEnumeratorIssueSynchronousRequest((_DWORD)a1, v77, (int)a1 + 64, v39, Irpa);
    if ( v22 < 0 )
    {
      if ( v22 == -1073741789 )
        return (unsigned int)-1073741810;
      return (unsigned int)v22;
    }
    v53 = (_DWORD *)*a1;
    v54 = *(_DWORD *)*a1;
    if ( v54 == 1314275652 )
    {
      v55 = (__int64)v53 + 274;
    }
    else if ( v54 == 1094997074 )
    {
      v55 = (__int64)v53 + 482;
    }
    else
    {
      v55 = 98LL;
    }
    if ( *(_BYTE *)v55 == 1 )
      v27 = *(unsigned __int8 **)(v39 + 64);
    else
      v27 = *(unsigned __int8 **)(v39 + 24);
    v56 = v27[3] | ((v27[2] | ((v27[1] | (*v27 << 8)) << 8)) << 8);
    if ( v56 >= v56 + 8 )
      return (unsigned int)-1073741436;
    v22 = 0;
    v74 = v27;
    if ( v34 < (unsigned __int64)v56 + 8 )
      v22 = -1073741789;
    if ( v22 == -1073741789 )
    {
      LODWORD(Size) = 8 * *(unsigned __int8 *)(*a1 + 530) + 8;
      v68 = RaidBusEnumeratorIssueReportLuns((_DWORD)a1, a2, v44, (unsigned int)&Size, (__int64)&v74);
      v27 = v74;
      v22 = v68;
    }
    if ( v22 < 0 )
      return (unsigned int)v22;
    v5 = v78;
  }
  memset_0(v5, 0, 0xFFuLL);
  v45 = (unsigned int)(v27[3] | ((v27[2] | ((v27[1] | (*v27 << 8)) << 8)) << 8)) >> 3;
  RaidSelectDeviceDumpCollectionMode(*a1);
  if ( v45 )
  {
    v69 = v27 + 9;
    v70 = v45;
    do
    {
      v71 = _byteswap_ushort(*(_WORD *)(v69 - 1)) & 0x3FFF;
      if ( v71 < 0xFFu )
      {
        v5[v71] = 1;
      }
      else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
      {
        if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
          WPP_SF_qD(
            WPP_GLOBAL_Control->AttachedDevice,
            17LL,
            &WPP_2471b48b4c7d3ad0e0c98a5971ea536b_Traceguids,
            *a1,
            v71);
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
        {
          WPP_SF_d(WPP_GLOBAL_Control->AttachedDevice, 18LL, &WPP_2471b48b4c7d3ad0e0c98a5971ea536b_Traceguids, v71);
        }
      }
      v69 += 8;
      --v70;
    }
    while ( v70 );
    v4 = 0;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
      WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 19LL, &WPP_2471b48b4c7d3ad0e0c98a5971ea536b_Traceguids, *a1);
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 20LL, &WPP_2471b48b4c7d3ad0e0c98a5971ea536b_Traceguids);
    }
  }
  do
  {
    if ( *v5
      && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    {
      WPP_SF_d(WPP_GLOBAL_Control->AttachedDevice, 21LL, &WPP_2471b48b4c7d3ad0e0c98a5971ea536b_Traceguids, v4);
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 0xFFu );
  return 0LL;
}
