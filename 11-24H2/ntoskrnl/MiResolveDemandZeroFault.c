/*
 * XREFs of MiResolveDemandZeroFault @ 0x140342E30
 * Callers:
 *     MiSystemFault @ 0x1402FC7E0 (MiSystemFault.c)
 *     MiUserFault @ 0x140307CE0 (MiUserFault.c)
 *     MiDispatchFault @ 0x140333520 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140334760 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockVadTree @ 0x140291980 (MiUnlockVadTree.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiResolvePrivateZeroFault @ 0x1403087F0 (MiResolvePrivateZeroFault.c)
 *     MiCheckVirtualAddress @ 0x140309D30 (MiCheckVirtualAddress.c)
 *     MiCheckUserVirtualAddress @ 0x140309FA0 (MiCheckUserVirtualAddress.c)
 *     MiIsPrototypePteVadLookup @ 0x14030D150 (MiIsPrototypePteVadLookup.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiExpandSharedZeroCluster @ 0x14034162C (MiExpandSharedZeroCluster.c)
 *     MiCreateSharedZeroPages @ 0x140342A48 (MiCreateSharedZeroPages.c)
 *     MiIsStoreProcess @ 0x140343630 (MiIsStoreProcess.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiObtainProtoReference @ 0x14034594C (MiObtainProtoReference.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x140347E90 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiResolveDemandZeroFault(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  volatile _KAFFINITY_EX *ActiveProcessors; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  int v11; // ecx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  struct _LIST_ENTRY *Address; // rsi
  _BYTE *v16; // rax
  unsigned __int64 v17; // r12
  unsigned __int64 v18; // r9
  int v19; // ebx
  char v20; // al
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int v34; // r13d
  char v35; // cl
  __int64 v36; // rax
  unsigned int Flink; // eax
  struct _LIST_ENTRY *v38; // rcx
  int v39; // eax
  unsigned __int64 v40; // rdx
  int SharedZeroPages; // esi
  __int64 v42; // r8
  __int64 v43; // r9
  unsigned __int64 v44; // r13
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rbx
  unsigned __int64 *v47; // r12
  char v48; // r15
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 *v52; // r15
  __int64 v53; // rdx
  int v54; // r8d
  int v55; // eax
  unsigned __int64 v56; // rax
  BOOL IsPrototypePteVadLookup; // eax
  unsigned __int64 v58; // r8
  unsigned __int64 v59; // rbx
  unsigned __int64 Flink_low; // rax
  char v61; // [rsp+30h] [rbp-D0h]
  char v62; // [rsp+30h] [rbp-D0h]
  unsigned int v63; // [rsp+34h] [rbp-CCh] BYREF
  __int64 Process; // [rsp+38h] [rbp-C8h]
  struct _LIST_ENTRY *v65; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v66; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v67; // [rsp+50h] [rbp-B0h]
  _QWORD v68[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v69; // [rsp+70h] [rbp-90h]
  unsigned __int64 v70; // [rsp+78h] [rbp-88h]
  int v71; // [rsp+80h] [rbp-80h]
  int v72; // [rsp+84h] [rbp-7Ch]
  __int64 v73; // [rsp+88h] [rbp-78h]
  int v74; // [rsp+90h] [rbp-70h]
  _DWORD v75[5]; // [rsp+94h] [rbp-6Ch] BYREF
  __int64 v76; // [rsp+A8h] [rbp-58h]
  __int64 v77; // [rsp+B0h] [rbp-50h]
  __int64 v78; // [rsp+B8h] [rbp-48h]
  _QWORD v79[16]; // [rsp+C0h] [rbp-40h] BYREF

  v78 = a4;
  v67 = a3;
  HIDWORD(v68[0]) = 0;
  MI_READ_PTE_LOCK_FREE(a2);
  v9 = a1[7];
  v10 = 0LL;
  v68[0] = 0LL;
  v73 = 0LL;
  memset(v75, 0, 12);
  v76 = 0LL;
  v11 = 0;
  if ( (*(_DWORD *)(v9 + 184) & 0xF) == 0 )
  {
    v11 = 256;
    LODWORD(v68[0]) = 256;
  }
  v12 = a1[2];
  v13 = v12 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v12 & 1) != 0 )
  {
    switch ( *(_BYTE *)v13 )
    {
      case 2:
        v11 |= 1u;
        break;
      case 1:
        v11 |= 2u;
        break;
      case 5:
        v11 |= 0x20u;
        break;
      default:
LABEL_54:
        if ( *(_BYTE *)v13 == 4 )
          goto LABEL_5;
        goto LABEL_4;
    }
    LODWORD(v68[0]) = v11;
    goto LABEL_54;
  }
LABEL_4:
  if ( (v11 & 0x23) == 0 )
  {
    v13 = *(_QWORD *)&v75[1];
    goto LABEL_12;
  }
LABEL_5:
  *(_QWORD *)&v75[1] = v12 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v12 & 1) != 0 && *(_BYTE *)v13 == 4 )
    v76 = *(_QWORD *)(v13 + 48);
  if ( (v11 & 2) == 0 )
    goto LABEL_7;
  v39 = *(_DWORD *)(v13 + 80);
  if ( (v39 & 0x40000) != 0 )
  {
    v11 |= 8u;
  }
  else
  {
    if ( (v39 & 0x4000) == 0 )
      goto LABEL_7;
    v11 |= 0x14u;
  }
  LODWORD(v68[0]) = v11;
LABEL_7:
  if ( (v11 & 0x20) == 0 )
    goto LABEL_13;
  if ( *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL) > 0x1000uLL )
  {
    v11 |= 0x40u;
    LODWORD(v68[0]) = v11;
  }
  if ( (*(_DWORD *)(v13 + 56) & 0x20) != 0 )
  {
    v11 |= 0x40000u;
    LODWORD(v68[0]) = v11;
  }
LABEL_12:
  if ( (v11 & 0x20) != 0 && (*(_DWORD *)(v13 + 56) & 8) != 0 )
  {
    if ( a3 )
    {
      LOBYTE(v13) = 17;
      MiUnlockProtoPoolPage(a3, v13, (__int64)ActiveProcessors, v8);
    }
    return 3221225495LL;
  }
LABEL_13:
  v14 = a1[2];
  Address = 0LL;
  Process = (__int64)KeGetCurrentThread()->ApcState.Process;
  v16 = (_BYTE *)(v14 & 0xFFFFFFFFFFFFFFFEuLL);
  v17 = *a1;
  v65 = 0LL;
  v18 = 0xFFFFF68000000000uLL;
  if ( (v14 & 1) != 0 && (*v16 == 2 || *v16 == 8 || *v16 == 7 || *v16 == 4) )
  {
    v19 = *(_DWORD *)((v14 & 0xFFFFFFFFFFFFFFFEuLL) + 40);
    if ( v19 )
      goto LABEL_46;
  }
  else
  {
    v19 = 0;
  }
  v20 = v14;
  v21 = v14 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v20 & 1) == 0 )
    v21 = 0LL;
  if ( (*(_DWORD *)(a1[7] + 184) & 0xF) != 0
    || (ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors,
        (unsigned __int64)*a1 >= 0xFFFFF68000000000uLL)
    && (unsigned __int64)*a1 <= 0xFFFFF6FFFFFFFFFFuLL
    || !v21
    && !ActiveProcessors[4].StaticBitmap[13]
    && !ActiveProcessors[4].StaticBitmap[14]
    && !LOBYTE(ActiveProcessors[4].Reserved) )
  {
    Address = v65;
    goto LABEL_26;
  }
  MiLockVadTree(1, v21, (__int64)ActiveProcessors, 0xFFFFF68000000000uLL);
  Address = (struct _LIST_ENTRY *)MiLocateAddress(*a1);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
  v65 = Address;
  if ( Address )
  {
    Flink = (unsigned int)Address[3].Flink;
    v19 = (Flink >> 12) & 0x7F;
    if ( v19
      || (Flink & 0x200000) == 0
      && (v38 = Address[4].Blink->Flink) != 0LL
      && (v19 = (LODWORD(v38[3].Blink) >> 20) & 0x7F) != 0 )
    {
LABEL_46:
      *((_DWORD *)a1 + 20) |= 0x20000u;
    }
  }
LABEL_26:
  v74 = v19;
  v69 = v17;
  v68[1] = a1;
  if ( !Address
    && a2 <= 0xFFFFF6BFFFFFFF78uLL
    && a2 >= 0xFFFFF68000000000uLL
    && (unsigned int)MiIsStoreProcess(Process, 0xFFFFF68000000000uLL, ActiveProcessors, v18) )
  {
    MiLockVadTree(1, v31, v32, v33);
    v65 = (struct _LIST_ENTRY *)MiLocateAddress(v17);
    Address = v65;
    MiUnlockVadTree(1, 0x11u);
  }
  *(_QWORD *)&v75[3] = Address;
  v22 = MI_READ_PTE_LOCK_FREE(a2);
  v26 = v22;
  if ( !a3 )
  {
    v27 = v22;
    v28 = a1[2];
    v29 = (v27 >> 5) & 0x1F;
    if ( (v28 & 1) != 0 && *(_BYTE *)(v28 & 0xFFFFFFFFFFFFFFFEuLL) == 4 || (v26 & 0x400) != 0 )
      LODWORD(v29) = 4;
    v71 = v29;
    v72 = v29;
    v70 = 0LL;
    return MiResolvePrivateZeroFault((__int64)v68);
  }
  v34 = 24;
  v35 = v68[0];
  v77 = *(_QWORD *)&v75[1];
  v70 = a2;
  v66 = 1LL;
  Process = 0LL;
  v63 = 24;
  v61 = 0;
  if ( (v68[0] & 0xE) == 2 )
    goto LABEL_36;
  if ( (v68[0] & 0x43) != 0 && (v68[0] & 0x100) != 0 )
  {
    v61 = 1;
    v36 = MiCheckVirtualAddress(v17, &v63, &v65);
    Address = v65;
    Process = v36;
    if ( v65 )
      MiUnlockVadTree(1, 0x11u);
    goto LABEL_41;
  }
  if ( Address )
  {
    Flink_low = LODWORD(Address[3].Flink);
    if ( (Flink_low & 0x200000) == 0 )
    {
      v23 = MiVadPageSizes;
      if ( MiVadPageSizes[(Flink_low >> 19) & 3] == 16 )
      {
        v61 = 1;
        Process = MiCheckUserVirtualAddress(v17, (__int64)Address, v24, (int *)&v63);
LABEL_41:
        v34 = v63;
        v35 = v68[0];
      }
    }
  }
  v71 = v34;
  v72 = v34;
  if ( (v35 & 8) != 0 )
  {
    v56 = MI_READ_PTE_LOCK_FREE(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    IsPrototypePteVadLookup = MiIsPrototypePteVadLookup(v56);
    v24 = v58 >> 5;
    v59 = v26 >> 5;
    if ( IsPrototypePteVadLookup )
      LOBYTE(v59) = v24;
    if ( (v34 & 0xFFFFFFF8) == 0x10 || (v59 & 0x18) == 0x10 )
      goto LABEL_36;
    v35 = v68[0];
  }
  if ( (v35 & 4) != 0 && v34 >> 3 != 1 && (v34 >> 3 != 3 || (v34 & 7) == 0) )
  {
LABEL_36:
    LOBYTE(v23) = 17;
    MiUnlockProtoPoolPage(v67, (unsigned __int64)v23, v24, v25);
    return 0LL;
  }
  if ( v61 && Process && Address && v34 != 24 && (v34 & 0xFFFFFFF8) != 0x10 )
    v66 = MiExpandSharedZeroCluster((__int64)v68);
  SharedZeroPages = MiCreateSharedZeroPages((__int64)v68, (__int64 *)&v66);
  if ( SharedZeroPages < 0 || (v68[0] & 0x10) != 0 )
  {
    LOBYTE(v40) = 17;
    MiUnlockProtoPoolPage(v67, v40, v42, v43);
    return (unsigned int)SharedZeroPages;
  }
  else
  {
    v44 = v69;
    v45 = 0LL;
    v46 = v66;
    v47 = (unsigned __int64 *)(a2 - 8LL * (unsigned int)((v17 - v69) >> 12));
    if ( v66 >= 0x10 )
    {
      v48 = 1;
      v62 = 1;
      MiObtainProtoReference(v67, 0LL);
    }
    else
    {
      v48 = 0;
      v62 = 0;
      if ( v66 )
      {
        do
        {
          v49 = *v47++;
          v50 = (unsigned int)v45;
          v45 = (unsigned int)(v45 + 1);
          v79[v50] = (v49 >> 12) & 0xFFFFFFFFFFLL;
          --v46;
        }
        while ( v46 );
        v46 = v66;
        v48 = 0;
      }
    }
    LOBYTE(v45) = 17;
    MiUnlockProtoPoolPage(v67, v45, v42, v43);
    Process = *a1;
    v51 = 0LL;
    if ( (v68[0] & 0x20) != 0 )
      v51 = v77;
    v77 = v51;
    if ( v46 )
    {
      v52 = v79;
      do
      {
        if ( v62 )
        {
          v46 = v66;
          v53 = (*v47++ >> 12) & 0xFFFFFFFFFFLL;
        }
        else
        {
          v53 = *v52++;
        }
        v54 = v78;
        *a1 = v44;
        v55 = MiCompleteProtoPteFault((_DWORD)a1, v53, v54, 1, v51);
        v44 += 4096LL;
        if ( !v10 && v55 < 0 )
          SharedZeroPages = v55;
        v51 = v77;
        ++v10;
      }
      while ( v10 < v46 );
      v48 = v62;
    }
    if ( v48 )
      MiReturnPfnReferenceCountAtDpc(v67);
    __addgsdword(0x2E9Cu, v46);
    *a1 = Process;
    return (unsigned int)SharedZeroPages;
  }
}
