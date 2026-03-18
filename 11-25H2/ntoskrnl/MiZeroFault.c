/*
 * XREFs of MiZeroFault @ 0x1402429D0
 * Callers:
 *     MiUserFault @ 0x14024A660 (MiUserFault.c)
 * Callees:
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140212BC0 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiIsStoreProcess @ 0x140239E20 (MiIsStoreProcess.c)
 *     MiResolvePrivateZeroFault @ 0x1402420D0 (MiResolvePrivateZeroFault.c)
 *     MiCheckUserVirtualAddress @ 0x1402437D0 (MiCheckUserVirtualAddress.c)
 *     MiCheckVadSequential @ 0x140243A20 (MiCheckVadSequential.c)
 *     MiResolveSharedZeroFault @ 0x140243D50 (MiResolveSharedZeroFault.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402FD480 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140323E4C (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiMakePrototypePteVadLookup @ 0x14037DD10 (MiMakePrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiUpdatePageTableUseCount @ 0x1403DEED0 (MiUpdatePageTableUseCount.c)
 *     MiAllowGuardFault @ 0x1403E1AB0 (MiAllowGuardFault.c)
 *     MiPrefetchJumpVad @ 0x1404CDF78 (MiPrefetchJumpVad.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
  __int64 *v15; // r15
  struct _LIST_ENTRY *v16; // r13
  __int64 v17; // rax
  _DWORD *v18; // rcx
  signed __int32 v19; // eax
  __int64 v20; // rdx
  signed __int32 v21; // ett
  _KPROCESS *v22; // r9
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int64 v24; // r8
  struct _LIST_ENTRY *v25; // rax
  __int64 v26; // rdi
  volatile _KAFFINITY_EX *ActiveProcessors; // r8
  int v28; // ebx
  __int64 result; // rax
  ULONG_PTR v30; // rax
  _BYTE *v31; // rdx
  int v32; // eax
  volatile _KAFFINITY_EX *v33; // r8
  __int64 v34; // r15
  _BYTE *v35; // rdx
  int v36; // eax
  ULONG_PTR v37; // r9
  __int64 v38; // rcx
  __int64 PrototypePteVadLookup; // rax
  ULONG_PTR v40; // rdx
  _BYTE *v41; // rax
  unsigned int v42; // [rsp+30h] [rbp-59h] BYREF
  __int64 v43; // [rsp+38h] [rbp-51h]
  _QWORD v44[2]; // [rsp+50h] [rbp-39h] BYREF
  __int128 v45; // [rsp+60h] [rbp-29h]
  __int128 v46; // [rsp+70h] [rbp-19h]
  __int128 v47; // [rsp+80h] [rbp-9h]
  __int128 v48; // [rsp+90h] [rbp+7h]
  void *retaddr; // [rsp+E8h] [rbp+5Fh]

  v4 = 0;
  *a2 = 1;
  v5 = (ULONG_PTR *)a1;
  v42 = 0;
  *a3 = 24;
  HIDWORD(v44[0]) = 0;
  CurrentThread = KeGetCurrentThread();
  *a4 = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  v8 = *(_QWORD *)(a1 + 56);
  v44[0] = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  LODWORD(v8) = *(_DWORD *)(v8 + 184);
  v9 = 0;
  v43 = Process;
  if ( (v8 & 0xF) == 0 )
  {
    v9 = 256;
    LODWORD(v44[0]) = 256;
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
        v35 = (_BYTE *)(v5[2] & 0xFFFFFFFFFFFFFFFEuLL);
        LODWORD(v44[0]) = v9;
        break;
      case 1:
        v9 |= 2u;
        v35 = (_BYTE *)(v5[2] & 0xFFFFFFFFFFFFFFFEuLL);
        LODWORD(v44[0]) = v9;
        break;
      case 5:
        v9 |= 0x20u;
        v35 = (_BYTE *)(v5[2] & 0xFFFFFFFFFFFFFFFEuLL);
        LODWORD(v44[0]) = v9;
        break;
      default:
        v11 = (_BYTE *)(v5[2] & 0xFFFFFFFFFFFFFFFEuLL);
        v35 = v11;
        if ( (v10 & 1) == 0 )
          goto LABEL_4;
        break;
    }
    if ( *v35 == 4 )
      goto LABEL_5;
  }
LABEL_4:
  if ( (v9 & 0x23) == 0 )
  {
    v12 = *((_QWORD *)&v47 + 1);
    goto LABEL_12;
  }
LABEL_5:
  *((_QWORD *)&v47 + 1) = v10 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v10 & 1) != 0 && *v11 == 4 )
    *((_QWORD *)&v48 + 1) = *(_QWORD *)(v12 + 48);
  if ( (v9 & 2) == 0 )
    goto LABEL_7;
  v36 = *(_DWORD *)(v12 + 80);
  if ( (v36 & 0x40000) != 0 )
  {
    v9 |= 8u;
LABEL_71:
    LODWORD(v44[0]) = v9;
    goto LABEL_7;
  }
  if ( (v36 & 0x4000) != 0 )
  {
    v9 |= 0x14u;
    goto LABEL_71;
  }
LABEL_7:
  if ( (v9 & 0x20) != 0 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) > 0x1000uLL )
    {
      v9 |= 0x40u;
      LODWORD(v44[0]) = v9;
    }
    if ( (*(_DWORD *)(v12 + 56) & 0x20) != 0 )
    {
      v9 |= 0x40000u;
      LODWORD(v44[0]) = v9;
    }
  }
LABEL_12:
  v13 = *v5;
  v14 = *v5;
  v44[1] = v5;
  v15 = (__int64 *)(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( v13 >= 0xFFFF800000000000uLL )
  {
    if ( (v9 & 2) != 0 )
      return 0LL;
    if ( v13 >= 0xFFFFF68000000000uLL && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v40 = v5[2];
      if ( v40 )
      {
        v41 = (_BYTE *)(v40 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (v40 & 1) == 0 || *v41 != 7 && *v41 != 8 )
          KeBugCheckEx(0x50u, v13, v5[1], (ULONG_PTR)v15, 6uLL);
      }
    }
  }
  v16 = 0LL;
  if ( v13 > 0x7FFFFFFEFFFFLL )
  {
    if ( v13 >= 0xFFFFF68000000000uLL && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v28 = 4;
      v26 = 0LL;
      goto LABEL_50;
    }
LABEL_73:
    v37 = *(_QWORD *)(a1 + 8);
    if ( v13 - 0x10000 <= 0x7FFFFFFDFFFFLL && !v16 && (v37 & 2) != 0 )
    {
      if ( (*(_DWORD *)(Process + 1532) & 0x1000) != 0 )
        KeBugCheckEx(0x1Au, 0x4477uLL, v13, v37, 0LL);
      if ( MiIsStoreProcess(Process) )
        KeBugCheckEx(0x1Au, 0x4478uLL, v13, v37, 0LL);
      LOBYTE(v9) = v44[0];
    }
    if ( (v9 & 2) != 0 && v16 )
      MiPrefetchJumpVad(v12, v16, v13, v37);
    return 3221225477LL;
  }
  if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) != 0 )
  {
LABEL_17:
    v18 = (_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v18);
      v19 = *v18 & 0x7FFFFFFF;
      while ( 1 )
      {
        v20 = (unsigned int)(v19 + 1);
        v21 = v19;
        v19 = _InterlockedCompareExchange(v18, v20, v19);
        if ( v21 == v19 )
          break;
        if ( v19 < 0 )
        {
          LOBYTE(v20) = -1;
          ExpWaitForSpinLockSharedAndAcquire(v18, v20);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v18, 0xFFu);
    }
    v22 = KeGetCurrentThread()->ApcState.Process;
    Flink = v22[3].Header.WaitListHead.Flink;
    if ( Flink )
    {
      v24 = v13 >> 12;
      if ( v13 >> 12 >= (LODWORD(Flink[1].Blink) | ((unsigned __int64)LOBYTE(Flink[2].Flink) << 32))
        && v24 <= (HIDWORD(Flink[1].Blink) | ((unsigned __int64)BYTE1(Flink[2].Flink) << 32)) )
      {
        v16 = v22[3].Header.WaitListHead.Flink;
LABEL_31:
        v26 = MiCheckUserVirtualAddress(v13, v16, v24, &v42);
        ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        {
          _InterlockedAnd((volatile signed __int32 *)&ActiveProcessors[3].StaticBitmap[25] + 1, 0xBFFFFFFF);
          _InterlockedDecrement((volatile signed __int32 *)&ActiveProcessors[3].StaticBitmap[25] + 1);
        }
        else
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(
            (char *)&ActiveProcessors[3].StaticBitmap[25] + 4,
            retaddr,
            ActiveProcessors);
        }
        v28 = v42;
        LOBYTE(v9) = v44[0];
        if ( v42 != 24 )
        {
          v5 = (ULONG_PTR *)a1;
          goto LABEL_35;
        }
        Process = v43;
        goto LABEL_73;
      }
      v25 = *(struct _LIST_ENTRY **)&v22[3].Header.Lock;
      if ( v25 )
      {
        do
        {
          if ( v24 > (HIDWORD(v25[1].Blink) | ((unsigned __int64)BYTE1(v25[2].Flink) << 32)) )
          {
            v25 = v25->Blink;
          }
          else
          {
            if ( v24 >= (LODWORD(v25[1].Blink) | ((unsigned __int64)LOBYTE(v25[2].Flink) << 32)) )
              break;
            v25 = v25->Flink;
          }
        }
        while ( v25 );
        if ( v25 )
        {
          v22[3].Header.WaitListHead.Flink = v25;
          v16 = v25;
          goto LABEL_31;
        }
      }
    }
    v33 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd((volatile signed __int32 *)&v33[3].StaticBitmap[25] + 1, 0xBFFFFFFF);
      _InterlockedDecrement((volatile signed __int32 *)&v33[3].StaticBitmap[25] + 1);
      LOBYTE(v9) = v44[0];
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented((char *)&v33[3].StaticBitmap[25] + 4, retaddr, v33);
      LOBYTE(v9) = v44[0];
    }
    goto LABEL_73;
  }
  v17 = v13 & 0x7FFFFFFFF000LL;
  if ( (v13 & 0xFFFFFFFFFFFFF000uLL) != 0x7FFE0000 )
  {
    if ( v17 == qword_140E2D838 && v17 )
    {
      v26 = qword_140E2D830;
      v28 = 1;
      LOBYTE(v9) = v44[0];
LABEL_50:
      v42 = v28;
      goto LABEL_35;
    }
    goto LABEL_17;
  }
  v26 = qword_140E2D828;
  v28 = 1;
  LOBYTE(v9) = v44[0];
  v42 = 1;
LABEL_35:
  if ( (v28 & 0xFFFFFFF8) != 0x10 )
  {
    v30 = v5[2];
    *(_QWORD *)&v45 = v13;
    v31 = (_BYTE *)(v30 & 0xFFFFFFFFFFFFFFFEuLL);
    LODWORD(v46) = v28;
    if ( (v30 & 1) != 0 && (*v31 == 2 || *v31 == 7 || *v31 == 8 || *v31 == 4) )
      v32 = *(_DWORD *)((v30 & 0xFFFFFFFFFFFFFFFEuLL) + 40);
    else
      v32 = 0;
    LODWORD(v47) = v32;
    *((_QWORD *)&v45 + 1) = v26;
    *(_QWORD *)&v48 = v16;
    DWORD1(v46) = 0;
    if ( !v26 )
      return MiResolvePrivateZeroFault((int *)v44);
    if ( (v9 & 2) == 0 && v16 )
    {
      if ( (__int64)v16[7].Blink >= 0 )
      {
        v4 = MiCheckVadSequential(v44, v31);
        if ( v4 == -1073741280 )
        {
          if ( !_InterlockedIncrement((volatile signed __int32 *)&v16[2].Flink + 1) )
            __fastfail(0xEu);
          v34 = a1;
          v28 = v42;
          *(_DWORD *)(a1 + 80) |= 0x20u;
          *(_QWORD *)(a1 + 88) = v16;
          goto LABEL_55;
        }
      }
      v28 = v42;
    }
    v34 = a1;
LABEL_55:
    *a2 = 0;
    *a3 = v28;
    *a4 = v26;
    MiResolveSharedZeroFault(v44, v31);
    result = v4;
    *(_DWORD *)(v34 + 80) ^= (*(_DWORD *)(v34 + 80) ^ (LODWORD(v44[0]) >> 1)) & 0x1FE00;
    return result;
  }
  if ( (v9 & 2) == 0 )
  {
    if ( (unsigned int)MiAllowGuardFault(v5[2]) )
    {
      MiUpdatePageTableUseCount(v13, 1LL);
      v42 = v28 & 0xFFFFFFEF;
      v38 = v28 & 0xFFFFFFEF;
      if ( v26 )
        PrototypePteVadLookup = MiMakePrototypePteVadLookup(v38);
      else
        PrototypePteVadLookup = MiMakeDemandZeroPte(v38);
      *v15 = PrototypePteVadLookup;
      *a2 = 2;
      return 0LL;
    }
    return 3221225477LL;
  }
  return 0LL;
}
