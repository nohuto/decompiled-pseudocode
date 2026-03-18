/*
 * XREFs of MiZeroFault @ 0x1402FEA50
 * Callers:
 *     MiUserFault @ 0x1402FD560 (MiUserFault.c)
 * Callees:
 *     MiMakePrototypePteVadLookup @ 0x140236340 (MiMakePrototypePteVadLookup.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1402465FC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402C4AD0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402DFAA0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     MiIsStoreProcess @ 0x1402FB9C0 (MiIsStoreProcess.c)
 *     MiResolvePrivateZeroFault @ 0x1402FE070 (MiResolvePrivateZeroFault.c)
 *     MiCheckUserVirtualAddress @ 0x1402FF820 (MiCheckUserVirtualAddress.c)
 *     MiCheckVadSequential @ 0x1402FFA20 (MiCheckVadSequential.c)
 *     MiResolveSharedZeroFault @ 0x1402FFD60 (MiResolveSharedZeroFault.c)
 *     MiUpdatePageTableUseCount @ 0x1403E3650 (MiUpdatePageTableUseCount.c)
 *     MiAllowGuardFault @ 0x140465770 (MiAllowGuardFault.c)
 *     MiPrefetchJumpVad @ 0x1404CDD58 (MiPrefetchJumpVad.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall MiZeroFault(__int64 a1, _BYTE *a2, int *a3, __int64 *a4)
{
  unsigned int v4; // r12d
  ULONG_PTR *v5; // r10
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rbx
  __int64 v8; // rax
  int v9; // ecx
  ULONG_PTR v10; // r8
  _BYTE *v11; // rax
  unsigned __int64 v12; // rsi
  ULONG_PTR v13; // r14
  ULONG_PTR v14; // r15
  unsigned __int64 *v15; // r15
  struct _LIST_ENTRY *v16; // r13
  __int64 v17; // rax
  _DWORD *v18; // rcx
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  _KPROCESS *v21; // r9
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int64 v23; // r8
  struct _LIST_ENTRY *v24; // rax
  __int64 v25; // rdi
  volatile _KAFFINITY_EX *ActiveProcessors; // r8
  int v27; // ebx
  __int64 result; // rax
  ULONG_PTR v29; // rax
  _BYTE *v30; // rdx
  int v31; // eax
  volatile _KAFFINITY_EX *v32; // r8
  __int64 v33; // r15
  _BYTE *v34; // rdx
  int v35; // eax
  ULONG_PTR v36; // r9
  char v37; // cl
  unsigned __int64 PrototypePteVadLookup; // rax
  ULONG_PTR v39; // rdx
  _BYTE *v40; // rax
  unsigned int v41; // [rsp+30h] [rbp-59h] BYREF
  __int64 v42; // [rsp+38h] [rbp-51h]
  _QWORD v43[2]; // [rsp+50h] [rbp-39h] BYREF
  __int128 v44; // [rsp+60h] [rbp-29h]
  __int128 v45; // [rsp+70h] [rbp-19h]
  __int128 v46; // [rsp+80h] [rbp-9h]
  __int128 v47; // [rsp+90h] [rbp+7h]
  __int64 retaddr; // [rsp+E8h] [rbp+5Fh]

  v4 = 0;
  *a2 = 1;
  v5 = (ULONG_PTR *)a1;
  v41 = 0;
  *a3 = 24;
  HIDWORD(v43[0]) = 0;
  CurrentThread = KeGetCurrentThread();
  *a4 = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  v8 = *(_QWORD *)(a1 + 56);
  v43[0] = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  LODWORD(v8) = *(_DWORD *)(v8 + 184);
  v9 = 0;
  v42 = Process;
  if ( (v8 & 0xF) == 0 )
  {
    v9 = 256;
    LODWORD(v43[0]) = 256;
  }
  v10 = v5[2];
  v11 = (_BYTE *)(v10 & 0xFFFFFFFFFFFFFFFEuLL);
  v12 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v10 & 1) != 0 )
  {
    switch ( *v11 )
    {
      case 2:
        v9 |= 1u;
        v34 = (_BYTE *)(v5[2] & 0xFFFFFFFFFFFFFFFEuLL);
        LODWORD(v43[0]) = v9;
        break;
      case 1:
        v9 |= 2u;
        v34 = (_BYTE *)(v5[2] & 0xFFFFFFFFFFFFFFFEuLL);
        LODWORD(v43[0]) = v9;
        break;
      case 5:
        v9 |= 0x20u;
        v34 = (_BYTE *)(v5[2] & 0xFFFFFFFFFFFFFFFEuLL);
        LODWORD(v43[0]) = v9;
        break;
      default:
        v11 = (_BYTE *)(v5[2] & 0xFFFFFFFFFFFFFFFEuLL);
        v34 = v11;
        if ( (v10 & 1) == 0 )
          goto LABEL_4;
        break;
    }
    if ( *v34 == 4 )
      goto LABEL_5;
  }
LABEL_4:
  if ( (v9 & 0x23) == 0 )
  {
    v12 = *((_QWORD *)&v46 + 1);
    goto LABEL_12;
  }
LABEL_5:
  *((_QWORD *)&v46 + 1) = v10 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v10 & 1) != 0 && *v11 == 4 )
    *((_QWORD *)&v47 + 1) = *(_QWORD *)(v12 + 48);
  if ( (v9 & 2) == 0 )
    goto LABEL_7;
  v35 = *(_DWORD *)(v12 + 80);
  if ( (v35 & 0x40000) != 0 )
  {
    v9 |= 8u;
LABEL_67:
    LODWORD(v43[0]) = v9;
    goto LABEL_7;
  }
  if ( (v35 & 0x4000) != 0 )
  {
    v9 |= 0x14u;
    goto LABEL_67;
  }
LABEL_7:
  if ( (v9 & 0x20) != 0 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) > 0x1000uLL )
    {
      v9 |= 0x40u;
      LODWORD(v43[0]) = v9;
    }
    if ( (*(_DWORD *)(v12 + 56) & 0x20) != 0 )
    {
      v9 |= 0x40000u;
      LODWORD(v43[0]) = v9;
    }
  }
LABEL_12:
  v13 = *v5;
  v14 = *v5;
  v43[1] = v5;
  v15 = (unsigned __int64 *)(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( v13 >= 0xFFFF800000000000uLL )
  {
    if ( (v9 & 2) != 0 )
      return 0LL;
    if ( v13 >= 0xFFFFF68000000000uLL && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v39 = v5[2];
      if ( v39 )
      {
        v40 = (_BYTE *)(v39 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (v39 & 1) == 0 || *v40 != 7 && *v40 != 8 )
          KeBugCheckEx(0x50u, v13, v5[1], (ULONG_PTR)v15, 6uLL);
      }
    }
  }
  v16 = 0LL;
  if ( v13 > 0x7FFFFFFEFFFFLL )
  {
    if ( v13 >= 0xFFFFF68000000000uLL && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v27 = 4;
      v25 = 0LL;
      goto LABEL_106;
    }
LABEL_72:
    v36 = *(_QWORD *)(a1 + 8);
    if ( v13 - 0x10000 <= 0x7FFFFFFDFFFFLL && !v16 && (v36 & 2) != 0 )
    {
      if ( (*(_DWORD *)(Process + 1532) & 0x1000) != 0 )
        KeBugCheckEx(0x1Au, 0x4477uLL, v13, v36, 0LL);
      if ( MiIsStoreProcess(Process) )
        KeBugCheckEx(0x1Au, 0x4478uLL, v13, v36, 0LL);
      LOBYTE(v9) = v43[0];
    }
    if ( (v9 & 2) != 0 && v16 )
      MiPrefetchJumpVad(v12, v16, v13, v36);
    return 3221225477LL;
  }
  if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) != 0 )
    goto LABEL_17;
  v17 = v13 & 0x7FFFFFFFF000LL;
  if ( (v13 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
  {
    v25 = qword_140E2DA68;
    v27 = 1;
    LOBYTE(v9) = v43[0];
    goto LABEL_106;
  }
  if ( v17 != qword_140E2DA78 || !v17 )
  {
LABEL_17:
    v18 = (_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v18);
      v19 = *v18 & 0x7FFFFFFF;
      while ( 1 )
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange(v18, v19 + 1, v19);
        if ( v20 == v19 )
          break;
        if ( v19 < 0 )
        {
          ExpWaitForSpinLockSharedAndAcquire(v18, 0xFFu);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v18, 0xFFu);
    }
    v21 = KeGetCurrentThread()->ApcState.Process;
    Flink = v21[3].Header.WaitListHead.Flink;
    if ( Flink )
    {
      v23 = v13 >> 12;
      if ( v13 >> 12 >= (LODWORD(Flink[1].Blink) | ((unsigned __int64)LOBYTE(Flink[2].Flink) << 32))
        && v23 <= (HIDWORD(Flink[1].Blink) | ((unsigned __int64)BYTE1(Flink[2].Flink) << 32)) )
      {
        v16 = v21[3].Header.WaitListHead.Flink;
LABEL_32:
        v25 = MiCheckUserVirtualAddress(v13, v16, v23, &v41);
        ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          _InterlockedAnd((volatile signed __int32 *)&ActiveProcessors[3].StaticBitmap[25] + 1, 0xBFFFFFFF);
          _InterlockedDecrement((volatile signed __int32 *)&ActiveProcessors[3].StaticBitmap[25] + 1);
        }
        else
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(
            (volatile signed __int32 *)&ActiveProcessors[3].StaticBitmap[25] + 1,
            retaddr);
        }
        v27 = v41;
        LOBYTE(v9) = v43[0];
        if ( v41 != 24 )
        {
          v5 = (ULONG_PTR *)a1;
          goto LABEL_36;
        }
        Process = v42;
        goto LABEL_72;
      }
      v24 = *(struct _LIST_ENTRY **)&v21[3].Header.Lock;
      if ( v24 )
      {
        do
        {
          if ( v23 > (HIDWORD(v24[1].Blink) | ((unsigned __int64)BYTE1(v24[2].Flink) << 32)) )
          {
            v24 = v24->Blink;
          }
          else
          {
            if ( v23 >= (LODWORD(v24[1].Blink) | ((unsigned __int64)LOBYTE(v24[2].Flink) << 32)) )
              break;
            v24 = v24->Flink;
          }
        }
        while ( v24 );
        if ( v24 )
        {
          v21[3].Header.WaitListHead.Flink = v24;
          v16 = v24;
          goto LABEL_32;
        }
      }
    }
    v32 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd((volatile signed __int32 *)&v32[3].StaticBitmap[25] + 1, 0xBFFFFFFF);
      _InterlockedDecrement((volatile signed __int32 *)&v32[3].StaticBitmap[25] + 1);
      LOBYTE(v9) = v43[0];
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented((volatile signed __int32 *)&v32[3].StaticBitmap[25] + 1, retaddr);
      LOBYTE(v9) = v43[0];
    }
    goto LABEL_72;
  }
  v25 = qword_140E2DA70;
  v27 = 1;
  LOBYTE(v9) = v43[0];
LABEL_106:
  v41 = v27;
LABEL_36:
  if ( (v27 & 0xFFFFFFF8) != 0x10 )
  {
    v29 = v5[2];
    *(_QWORD *)&v44 = v13;
    v30 = (_BYTE *)(v29 & 0xFFFFFFFFFFFFFFFEuLL);
    LODWORD(v45) = v27;
    if ( (v29 & 1) != 0 && (*v30 == 2 || *v30 == 8 || *v30 == 7 || *v30 == 4) )
      v31 = *(_DWORD *)((v29 & 0xFFFFFFFFFFFFFFFEuLL) + 40);
    else
      v31 = 0;
    LODWORD(v46) = v31;
    *((_QWORD *)&v44 + 1) = v25;
    *(_QWORD *)&v47 = v16;
    DWORD1(v45) = 0;
    if ( !v25 )
      return MiResolvePrivateZeroFault((__int64)v43);
    if ( (v9 & 2) == 0 && v16 )
    {
      if ( (__int64)v16[7].Blink >= 0 )
      {
        v4 = MiCheckVadSequential(v43, v30);
        if ( v4 == -1073741280 )
        {
          if ( !_InterlockedIncrement((volatile signed __int32 *)&v16[2].Flink + 1) )
            __fastfail(0xEu);
          v33 = a1;
          v27 = v41;
          *(_DWORD *)(a1 + 80) |= 0x20u;
          *(_QWORD *)(a1 + 88) = v16;
          goto LABEL_57;
        }
      }
      v27 = v41;
    }
    v33 = a1;
LABEL_57:
    *a2 = 0;
    *a3 = v27;
    *a4 = v25;
    MiResolveSharedZeroFault(v43, v30);
    result = v4;
    *(_DWORD *)(v33 + 80) ^= (*(_DWORD *)(v33 + 80) ^ (LODWORD(v43[0]) >> 1)) & 0x1FE00;
    return result;
  }
  if ( (v9 & 2) == 0 )
  {
    if ( (unsigned int)MiAllowGuardFault(v5[2]) )
    {
      MiUpdatePageTableUseCount(v13);
      v41 = v27 & 0xFFFFFFEF;
      v37 = v27 & 0xEF;
      if ( v25 )
        PrototypePteVadLookup = MiMakePrototypePteVadLookup(v37);
      else
        PrototypePteVadLookup = MiMakeDemandZeroPte(v37);
      *v15 = PrototypePteVadLookup;
      *a2 = 2;
      return 0LL;
    }
    return 3221225477LL;
  }
  return 0LL;
}
