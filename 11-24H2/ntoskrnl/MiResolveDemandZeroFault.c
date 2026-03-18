/*
 * XREFs of MiResolveDemandZeroFault @ 0x1402FC600
 * Callers:
 *     MiDispatchFault @ 0x1402142B0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140214BB0 (MiResolveProtoPteFault.c)
 *     MiSystemFault @ 0x140229570 (MiSystemFault.c)
 *     MiUserFault @ 0x1402FD560 (MiUserFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiObtainProtoReference @ 0x14023BBE8 (MiObtainProtoReference.c)
 *     MiUnlockVadTree @ 0x140261370 (MiUnlockVadTree.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiExpandSharedZeroCluster @ 0x1402E548C (MiExpandSharedZeroCluster.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x1402E6850 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     MiCreateSharedZeroPages @ 0x1402EED80 (MiCreateSharedZeroPages.c)
 *     MiIsStoreProcess @ 0x1402FB9C0 (MiIsStoreProcess.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiResolvePrivateZeroFault @ 0x1402FE070 (MiResolvePrivateZeroFault.c)
 *     MiCheckVirtualAddress @ 0x1402FF5B0 (MiCheckVirtualAddress.c)
 *     MiCheckUserVirtualAddress @ 0x1402FF820 (MiCheckUserVirtualAddress.c)
 *     MiIsPrototypePteVadLookup @ 0x140303270 (MiIsPrototypePteVadLookup.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall MiResolveDemandZeroFault(__int64 a1, unsigned __int64 a2, ULONG_PTR a3, __int64 a4)
{
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  int v10; // ecx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  struct _LIST_ENTRY *Address; // rsi
  _BYTE *v15; // rax
  unsigned __int64 v16; // r12
  int v17; // ebx
  char v18; // al
  unsigned __int64 v19; // rdx
  volatile _KAFFINITY_EX *ActiveProcessors; // r8
  __int64 v21; // rax
  __int64 *v22; // rdx
  __int64 v23; // r8
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned int v31; // r13d
  char v32; // cl
  _KPROCESS *v33; // rax
  unsigned int Flink; // eax
  struct _LIST_ENTRY *v35; // rcx
  int v36; // eax
  unsigned __int64 v37; // rdx
  int SharedZeroPages; // esi
  __int64 v39; // r8
  unsigned __int64 v40; // r13
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rbx
  unsigned __int64 *v43; // r12
  char v44; // r15
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 *v50; // r15
  __int64 v51; // rdx
  __int64 v52; // r8
  int v53; // eax
  __int64 v54; // rax
  int IsPrototypePteVadLookup; // eax
  unsigned __int64 v56; // r8
  unsigned __int64 v57; // rbx
  unsigned __int64 Flink_low; // rax
  char v59; // [rsp+30h] [rbp-D0h]
  char v60; // [rsp+30h] [rbp-D0h]
  int v61; // [rsp+34h] [rbp-CCh] BYREF
  _KPROCESS *Process; // [rsp+38h] [rbp-C8h]
  struct _LIST_ENTRY *v63; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v64; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR v65; // [rsp+50h] [rbp-B0h]
  _QWORD v66[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v67; // [rsp+70h] [rbp-90h]
  unsigned __int64 v68; // [rsp+78h] [rbp-88h]
  int v69; // [rsp+80h] [rbp-80h]
  int v70; // [rsp+84h] [rbp-7Ch]
  __int64 v71; // [rsp+88h] [rbp-78h]
  int v72; // [rsp+90h] [rbp-70h]
  _DWORD v73[5]; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v74; // [rsp+A8h] [rbp-58h]
  __int64 v75; // [rsp+B0h] [rbp-50h]
  __int64 v76; // [rsp+B8h] [rbp-48h]
  _QWORD v77[16]; // [rsp+C0h] [rbp-40h] BYREF

  v76 = a4;
  v65 = a3;
  HIDWORD(v66[0]) = 0;
  MI_READ_PTE_LOCK_FREE(a2);
  v8 = *(_QWORD *)(a1 + 56);
  v9 = 0LL;
  v66[0] = 0LL;
  v71 = 0LL;
  memset(v73, 0, 12);
  v74 = 0LL;
  v10 = 0;
  if ( (*(_DWORD *)(v8 + 184) & 0xF) == 0 )
  {
    v10 = 256;
    LODWORD(v66[0]) = 256;
  }
  v11 = *(_QWORD *)(a1 + 16);
  v12 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v11 & 1) != 0 )
  {
    switch ( *(_BYTE *)v12 )
    {
      case 2:
        v10 |= 1u;
        break;
      case 1:
        v10 |= 2u;
        break;
      case 5:
        v10 |= 0x20u;
        break;
      default:
LABEL_54:
        if ( *(_BYTE *)v12 == 4 )
          goto LABEL_5;
        goto LABEL_4;
    }
    LODWORD(v66[0]) = v10;
    goto LABEL_54;
  }
LABEL_4:
  if ( (v10 & 0x23) == 0 )
  {
    v12 = *(_QWORD *)&v73[1];
    goto LABEL_12;
  }
LABEL_5:
  *(_QWORD *)&v73[1] = v11 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v11 & 1) != 0 && *(_BYTE *)v12 == 4 )
    v74 = *(_QWORD *)(v12 + 48);
  if ( (v10 & 2) == 0 )
    goto LABEL_7;
  v36 = *(_DWORD *)(v12 + 80);
  if ( (v36 & 0x40000) != 0 )
  {
    v10 |= 8u;
  }
  else
  {
    if ( (v36 & 0x4000) == 0 )
      goto LABEL_7;
    v10 |= 0x14u;
  }
  LODWORD(v66[0]) = v10;
LABEL_7:
  if ( (v10 & 0x20) == 0 )
    goto LABEL_13;
  if ( *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) > 0x1000uLL )
  {
    v10 |= 0x40u;
    LODWORD(v66[0]) = v10;
  }
  if ( (*(_DWORD *)(v12 + 56) & 0x20) != 0 )
  {
    v10 |= 0x40000u;
    LODWORD(v66[0]) = v10;
  }
LABEL_12:
  if ( (v10 & 0x20) != 0 && (*(_DWORD *)(v12 + 56) & 8) != 0 )
  {
    if ( a3 )
    {
      LOBYTE(v12) = 17;
      MiUnlockProtoPoolPage(a3, v12, v7);
    }
    return 3221225495LL;
  }
LABEL_13:
  v13 = *(_QWORD *)(a1 + 16);
  Address = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v15 = (_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFEuLL);
  v16 = *(_QWORD *)a1;
  v63 = 0LL;
  if ( (v13 & 1) != 0 && (*v15 == 2 || *v15 == 8 || *v15 == 7 || *v15 == 4) )
  {
    v17 = *(_DWORD *)((v13 & 0xFFFFFFFFFFFFFFFEuLL) + 40);
    if ( v17 )
      goto LABEL_46;
  }
  else
  {
    v17 = 0;
  }
  v18 = v13;
  v19 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v18 & 1) == 0 )
    v19 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 56) + 184LL) & 0xF) != 0
    || (ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors,
        *(_QWORD *)a1 >= 0xFFFFF68000000000uLL)
    && *(_QWORD *)a1 <= 0xFFFFF6FFFFFFFFFFuLL
    || !v19
    && !ActiveProcessors[4].StaticBitmap[13]
    && !ActiveProcessors[4].StaticBitmap[14]
    && !LOBYTE(ActiveProcessors[4].Reserved) )
  {
    Address = v63;
    goto LABEL_26;
  }
  MiLockVadTree(1, v19, (__int64)ActiveProcessors);
  Address = MiLocateAddress(*(_QWORD *)a1);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
  v63 = Address;
  if ( Address )
  {
    Flink = (unsigned int)Address[3].Flink;
    v17 = (Flink >> 12) & 0x7F;
    if ( v17
      || (Flink & 0x200000) == 0
      && (v35 = Address[4].Blink->Flink) != 0LL
      && (v17 = (LODWORD(v35[3].Blink) >> 20) & 0x7F) != 0 )
    {
LABEL_46:
      *(_DWORD *)(a1 + 80) |= 0x20000u;
    }
  }
LABEL_26:
  v72 = v17;
  v67 = v16;
  v66[1] = a1;
  if ( !Address && a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL && MiIsStoreProcess((__int64)Process) )
  {
    MiLockVadTree(1, v29, v30);
    v63 = MiLocateAddress(v16);
    Address = v63;
    MiUnlockVadTree(1, 0x11u);
  }
  *(_QWORD *)&v73[3] = Address;
  v21 = MI_READ_PTE_LOCK_FREE(a2);
  v24 = v21;
  if ( !a3 )
  {
    v25 = v21;
    v26 = *(_QWORD *)(a1 + 16);
    v27 = (v25 >> 5) & 0x1F;
    if ( (v26 & 1) != 0 && *(_BYTE *)(v26 & 0xFFFFFFFFFFFFFFFEuLL) == 4 || (v24 & 0x400) != 0 )
      LODWORD(v27) = 4;
    v69 = v27;
    v70 = v27;
    v68 = 0LL;
    return MiResolvePrivateZeroFault(v66);
  }
  v31 = 24;
  v32 = v66[0];
  v75 = *(_QWORD *)&v73[1];
  v68 = a2;
  v64 = 1LL;
  Process = 0LL;
  v61 = 24;
  v59 = 0;
  if ( (v66[0] & 0xE) == 2 )
    goto LABEL_36;
  if ( (v66[0] & 0x43) != 0 && (v66[0] & 0x100) != 0 )
  {
    v59 = 1;
    v33 = (_KPROCESS *)MiCheckVirtualAddress(v16, &v61, &v63);
    Address = v63;
    Process = v33;
    if ( v63 )
      MiUnlockVadTree(1, 0x11u);
    goto LABEL_41;
  }
  if ( Address )
  {
    Flink_low = LODWORD(Address[3].Flink);
    if ( (Flink_low & 0x200000) == 0 )
    {
      v22 = MiVadPageSizes;
      if ( MiVadPageSizes[(Flink_low >> 19) & 3] == 16 )
      {
        v59 = 1;
        Process = (_KPROCESS *)MiCheckUserVirtualAddress(v16, Address, v23, &v61);
LABEL_41:
        v31 = v61;
        v32 = v66[0];
      }
    }
  }
  v69 = v31;
  v70 = v31;
  if ( (v32 & 8) != 0 )
  {
    v54 = MI_READ_PTE_LOCK_FREE(((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    IsPrototypePteVadLookup = MiIsPrototypePteVadLookup(v54);
    v23 = v56 >> 5;
    v57 = v24 >> 5;
    if ( IsPrototypePteVadLookup )
      LOBYTE(v57) = v23;
    if ( (v31 & 0xFFFFFFF8) == 0x10 || (v57 & 0x18) == 0x10 )
      goto LABEL_36;
    v32 = v66[0];
  }
  if ( (v32 & 4) != 0 && v31 >> 3 != 1 && (v31 >> 3 != 3 || (v31 & 7) == 0) )
  {
LABEL_36:
    LOBYTE(v22) = 17;
    MiUnlockProtoPoolPage(v65, (unsigned __int64)v22, v23);
    return 0LL;
  }
  if ( v59 && Process && Address && v31 != 24 && (v31 & 0xFFFFFFF8) != 0x10 )
    v64 = MiExpandSharedZeroCluster((__int64)v66);
  SharedZeroPages = MiCreateSharedZeroPages((__int64)v66, (__int64 *)&v64);
  if ( SharedZeroPages < 0 || (v66[0] & 0x10) != 0 )
  {
    LOBYTE(v37) = 17;
    MiUnlockProtoPoolPage(v65, v37, v39);
    return (unsigned int)SharedZeroPages;
  }
  else
  {
    v40 = v67;
    v41 = 0LL;
    v42 = v64;
    v43 = (unsigned __int64 *)(a2 - 8LL * (unsigned int)((v16 - v67) >> 12));
    if ( v64 >= 0x10 )
    {
      v44 = 1;
      v60 = 1;
      MiObtainProtoReference(v65, 0);
    }
    else
    {
      v44 = 0;
      v60 = 0;
      if ( v64 )
      {
        do
        {
          v45 = *v43++;
          v46 = (unsigned int)v41;
          v41 = (unsigned int)(v41 + 1);
          v77[v46] = (v45 >> 12) & 0xFFFFFFFFFFLL;
          --v42;
        }
        while ( v42 );
        v42 = v64;
        v44 = 0;
      }
    }
    LOBYTE(v41) = 17;
    MiUnlockProtoPoolPage(v65, v41, v39);
    Process = *(_KPROCESS **)a1;
    v49 = 0LL;
    if ( (v66[0] & 0x20) != 0 )
      v49 = v75;
    v75 = v49;
    if ( v42 )
    {
      v50 = v77;
      do
      {
        if ( v60 )
        {
          v42 = v64;
          v51 = (*v43++ >> 12) & 0xFFFFFFFFFFLL;
        }
        else
        {
          v51 = *v50++;
        }
        v52 = v76;
        *(_QWORD *)a1 = v40;
        v53 = MiCompleteProtoPteFault((unsigned __int64 *)a1, v51, v52, 1u, v49);
        v40 += 4096LL;
        if ( !v9 && v53 < 0 )
          SharedZeroPages = v53;
        v49 = v75;
        ++v9;
      }
      while ( v9 < v42 );
      v44 = v60;
    }
    if ( v44 )
      MiReturnPfnReferenceCountAtDpc(v65, v47, v48);
    __addgsdword(0x2E9Cu, v42);
    *(_QWORD *)a1 = Process;
    return (unsigned int)SharedZeroPages;
  }
}
