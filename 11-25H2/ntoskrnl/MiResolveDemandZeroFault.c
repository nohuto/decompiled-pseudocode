/*
 * XREFs of MiResolveDemandZeroFault @ 0x140241160
 * Callers:
 *     MiDispatchFault @ 0x14023F750 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140240060 (MiResolveProtoPteFault.c)
 *     MiUserFault @ 0x14024A660 (MiUserFault.c)
 *     MiSystemFault @ 0x1403E1EBC (MiSystemFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiIsStoreProcess @ 0x140239E20 (MiIsStoreProcess.c)
 *     MiCreateSharedZeroPages @ 0x14023B000 (MiCreateSharedZeroPages.c)
 *     MiResolvePrivateZeroFault @ 0x1402420D0 (MiResolvePrivateZeroFault.c)
 *     MiCheckVirtualAddress @ 0x140243540 (MiCheckVirtualAddress.c)
 *     MiCheckUserVirtualAddress @ 0x1402437D0 (MiCheckUserVirtualAddress.c)
 *     MiIsPrototypePteVadLookup @ 0x140246860 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockVadTree @ 0x1402A8690 (MiUnlockVadTree.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x14033BC20 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiObtainProtoReference @ 0x14033DEAC (MiObtainProtoReference.c)
 *     MiExpandSharedZeroCluster @ 0x14037C52C (MiExpandSharedZeroCluster.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall MiResolveDemandZeroFault(ULONG_PTR *a1, unsigned __int64 a2, ULONG_PTR a3, __int64 a4)
{
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  ULONG_PTR v9; // rax
  unsigned __int64 v10; // rsi
  int v11; // ecx
  ULONG_PTR v12; // rax
  unsigned __int64 v13; // rdx
  ULONG_PTR v14; // rdx
  ULONG_PTR v15; // r12
  _BYTE *v16; // rax
  __int64 Address; // r14
  int v18; // ebx
  char v19; // al
  unsigned __int64 v20; // rdx
  volatile _KAFFINITY_EX *ActiveProcessors; // r8
  unsigned __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rbx
  ULONG_PTR v26; // rdx
  __int64 v27; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  unsigned int v31; // r13d
  char v32; // cl
  _KPROCESS *v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // eax
  int v36; // eax
  __int64 v37; // r8
  unsigned __int64 v38; // r9
  int SharedZeroPages; // r14d
  ULONG_PTR v40; // r13
  unsigned int v41; // edx
  unsigned __int64 v42; // rbx
  unsigned __int64 *v43; // r12
  char v44; // r15
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 *v48; // r15
  __int64 v49; // rdx
  __int64 v50; // r8
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rdx
  int IsPrototypePteVadLookup; // eax
  unsigned __int64 v55; // r8
  unsigned __int64 v56; // rbx
  unsigned __int64 v57; // rax
  __int64 v58; // rcx
  char v59; // [rsp+30h] [rbp-D0h]
  char v60; // [rsp+30h] [rbp-D0h]
  int v61; // [rsp+34h] [rbp-CCh] BYREF
  _KPROCESS *Process; // [rsp+38h] [rbp-C8h]
  __int64 v63; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v64; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR v65; // [rsp+50h] [rbp-B0h]
  _QWORD v66[2]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR v67; // [rsp+70h] [rbp-90h]
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
  v9 = a1[7];
  v10 = 0LL;
  v66[0] = 0LL;
  v71 = 0LL;
  memset(v73, 0, 12);
  v74 = 0LL;
  v11 = 0;
  if ( (*(_DWORD *)(v9 + 184) & 0xF) == 0 )
  {
    v11 = 256;
    LODWORD(v66[0]) = 256;
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
LABEL_48:
        if ( *(_BYTE *)v13 == 4 )
          goto LABEL_5;
        goto LABEL_4;
    }
    LODWORD(v66[0]) = v11;
    goto LABEL_48;
  }
LABEL_4:
  if ( (v11 & 0x23) == 0 )
  {
    v13 = *(_QWORD *)&v73[1];
    goto LABEL_12;
  }
LABEL_5:
  *(_QWORD *)&v73[1] = v12 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v12 & 1) != 0 && *(_BYTE *)v13 == 4 )
    v74 = *(_QWORD *)(v13 + 48);
  if ( (v11 & 2) == 0 )
    goto LABEL_7;
  v36 = *(_DWORD *)(v13 + 80);
  if ( (v36 & 0x40000) != 0 )
  {
    v11 |= 8u;
  }
  else
  {
    if ( (v36 & 0x4000) == 0 )
      goto LABEL_7;
    v11 |= 0x14u;
  }
  LODWORD(v66[0]) = v11;
LABEL_7:
  if ( (v11 & 0x20) == 0 )
    goto LABEL_13;
  if ( *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL) > 0x1000uLL )
  {
    v11 |= 0x40u;
    LODWORD(v66[0]) = v11;
  }
  if ( (*(_DWORD *)(v13 + 56) & 0x20) != 0 )
  {
    v11 |= 0x40000u;
    LODWORD(v66[0]) = v11;
  }
LABEL_12:
  if ( (v11 & 0x20) != 0 && (*(_DWORD *)(v13 + 56) & 8) != 0 )
  {
    if ( a3 )
      MiUnlockProtoPoolPage(a3, 0x11u, v7, v8);
    return 3221225495LL;
  }
LABEL_13:
  v14 = a1[2];
  v15 = *a1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v16 = (_BYTE *)(v14 & 0xFFFFFFFFFFFFFFFEuLL);
  v63 = 0LL;
  Address = 0LL;
  if ( (v14 & 1) != 0 && (*v16 == 2 || *v16 == 7 || *v16 == 8 || *v16 == 4) )
  {
    v18 = *(_DWORD *)((v14 & 0xFFFFFFFFFFFFFFFEuLL) + 40);
    if ( v18 )
    {
      *((_DWORD *)a1 + 20) |= 0x20000u;
      goto LABEL_24;
    }
  }
  else
  {
    v18 = 0;
  }
  v19 = v14;
  v20 = v14 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v19 & 1) == 0 )
    v20 = 0LL;
  if ( (*(_DWORD *)(a1[7] + 184) & 0xF) == 0
    && ((ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors, *a1 < 0xFFFFF68000000000uLL)
     || *a1 > 0xFFFFF6FFFFFFFFFFuLL)
    && (v20
     || ActiveProcessors[4].StaticBitmap[13]
     || ActiveProcessors[4].StaticBitmap[14]
     || LOBYTE(ActiveProcessors[4].Reserved)) )
  {
    MiLockVadTree(1LL);
    Address = MiLocateAddress(*a1);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
    v63 = Address;
    if ( Address )
    {
      v35 = *(_DWORD *)(Address + 48);
      v18 = (v35 >> 12) & 0x7F;
      if ( v18
        || (v35 & 0x200000) == 0
        && (v58 = **(_QWORD **)(Address + 72)) != 0
        && (v18 = (*(_DWORD *)(v58 + 56) >> 20) & 0x7F) != 0 )
      {
        *((_DWORD *)a1 + 20) |= 0x20000u;
      }
    }
  }
  else
  {
    Address = v63;
  }
LABEL_24:
  v72 = v18;
  v67 = v15;
  v66[1] = a1;
  if ( !Address && a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL && MiIsStoreProcess((__int64)Process) )
  {
    MiLockVadTree(1LL);
    v29 = MiLocateAddress(v15);
    LOBYTE(v30) = 17;
    v63 = v29;
    Address = v29;
    MiUnlockVadTree(1LL, v30);
  }
  *(_QWORD *)&v73[3] = Address;
  v22 = MI_READ_PTE_LOCK_FREE(a2);
  v25 = v22;
  if ( !a3 )
  {
    v26 = a1[2];
    v27 = (v22 >> 5) & 0x1F;
    if ( (v26 & 1) != 0 && *(_BYTE *)(v26 & 0xFFFFFFFFFFFFFFFEuLL) == 4 || (v22 & 0x400) != 0 )
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
    goto LABEL_34;
  if ( (v66[0] & 0x43) != 0 && (v66[0] & 0x100) != 0 )
  {
    v59 = 1;
    v33 = (_KPROCESS *)MiCheckVirtualAddress(v15, &v61, &v63);
    Address = v63;
    Process = v33;
    if ( v63 )
    {
      LOBYTE(v34) = 17;
      MiUnlockVadTree(1LL, v34);
    }
    goto LABEL_41;
  }
  if ( Address )
  {
    v57 = *(unsigned int *)(Address + 48);
    if ( (v57 & 0x200000) == 0 && MiVadPageSizes[(v57 >> 19) & 3] == 16 )
    {
      v59 = 1;
      Process = (_KPROCESS *)MiCheckUserVirtualAddress(v15, Address, v23, &v61);
LABEL_41:
      v31 = v61;
      v32 = v66[0];
    }
  }
  v69 = v31;
  v70 = v31;
  if ( (v32 & 8) != 0 )
  {
    v52 = MI_READ_PTE_LOCK_FREE(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    IsPrototypePteVadLookup = MiIsPrototypePteVadLookup(v52, v53, v52);
    v23 = v55 >> 5;
    v56 = v25 >> 5;
    if ( IsPrototypePteVadLookup )
      LOBYTE(v56) = v23;
    if ( (v31 & 0xFFFFFFF8) == 0x10 || (v56 & 0x18) == 0x10 )
      goto LABEL_34;
    v32 = v66[0];
  }
  if ( (v32 & 4) != 0 && v31 >> 3 != 1 && (v31 >> 3 != 3 || (v31 & 7) == 0) )
  {
LABEL_34:
    MiUnlockProtoPoolPage(v65, 0x11u, v23, v24);
    return 0LL;
  }
  if ( v59 && Process && Address && v31 != 24 && (v31 & 0xFFFFFFF8) != 0x10 )
    v64 = MiExpandSharedZeroCluster(v66);
  SharedZeroPages = MiCreateSharedZeroPages((__int64)v66, (__int64 *)&v64);
  if ( SharedZeroPages < 0 || (v66[0] & 0x10) != 0 )
  {
    MiUnlockProtoPoolPage(v65, 0x11u, v37, v38);
    return (unsigned int)SharedZeroPages;
  }
  else
  {
    v40 = v67;
    v41 = 0;
    v42 = v64;
    v43 = (unsigned __int64 *)(a2 - 8LL * (unsigned int)((v15 - v67) >> 12));
    if ( v64 >= 0x10 )
    {
      v44 = 1;
      v60 = 1;
      MiObtainProtoReference(v65, 0LL);
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
          v46 = v41++;
          v77[v46] = (v45 >> 12) & 0xFFFFFFFFFFLL;
          --v42;
        }
        while ( v42 );
        v42 = v64;
        v44 = 0;
      }
    }
    MiUnlockProtoPoolPage(v65, 0x11u, v37, v38);
    Process = (_KPROCESS *)*a1;
    v47 = 0LL;
    if ( (v66[0] & 0x20) != 0 )
      v47 = v75;
    v75 = v47;
    if ( v42 )
    {
      v48 = v77;
      do
      {
        if ( v60 )
        {
          v42 = v64;
          v49 = (*v43++ >> 12) & 0xFFFFFFFFFFLL;
        }
        else
        {
          v49 = *v48++;
        }
        v50 = v76;
        *a1 = v40;
        v51 = MiCompleteProtoPteFault(a1, v49, v50, 1, v47);
        v40 += 4096LL;
        if ( !v10 && v51 < 0 )
          SharedZeroPages = v51;
        v47 = v75;
        ++v10;
      }
      while ( v10 < v42 );
      v44 = v60;
    }
    if ( v44 )
      MiReturnPfnReferenceCountAtDpc(v65);
    __addgsdword(0x2E9Cu, v42);
    *a1 = (ULONG_PTR)Process;
    return (unsigned int)SharedZeroPages;
  }
}
