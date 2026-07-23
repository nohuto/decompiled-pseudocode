/*
 * XREFs of MiZeroFault @ 0x1403091D0
 * Callers:
 *     MiUserFault @ 0x140307CE0 (MiUserFault.c)
 * Callees:
 *     MiMakePrototypePteVadLookup @ 0x1402104D0 (MiMakePrototypePteVadLookup.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140219638 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140219B50 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140241380 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiResolvePrivateZeroFault @ 0x1403087F0 (MiResolvePrivateZeroFault.c)
 *     MiCheckUserVirtualAddress @ 0x140309FA0 (MiCheckUserVirtualAddress.c)
 *     MiCheckVadSequential @ 0x14030A1A0 (MiCheckVadSequential.c)
 *     MiResolveSharedZeroFault @ 0x14030A4E0 (MiResolveSharedZeroFault.c)
 *     MiIsStoreProcess @ 0x140343630 (MiIsStoreProcess.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     MiUpdatePageTableUseCount @ 0x1403D1B50 (MiUpdatePageTableUseCount.c)
 *     MiAllowGuardFault @ 0x14045D6F0 (MiAllowGuardFault.c)
 *     MiPrefetchJumpVad @ 0x1404C7128 (MiPrefetchJumpVad.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiZeroFault(__int64 a1, _BYTE *a2, int *a3, __int64 *a4)
{
  unsigned int v4; // r12d
  ULONG_PTR *v5; // r10
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rbx
  __int64 v8; // rax
  int v9; // ecx
  ULONG_PTR v10; // r8
  _BYTE *v11; // rax
  unsigned __int64 v12; // rsi
  ULONG_PTR v13; // r14
  ULONG_PTR v14; // r15
  volatile _KAFFINITY_EX *ActiveProcessors; // r8
  unsigned __int64 *v16; // r15
  struct _LIST_ENTRY *v17; // r13
  __int64 v18; // rax
  _DWORD *v19; // rcx
  signed __int32 v20; // eax
  __int64 v21; // rdx
  signed __int32 v22; // ett
  _KPROCESS *v23; // r9
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int64 v25; // r8
  struct _LIST_ENTRY *v26; // rax
  __int64 v27; // rdi
  int v28; // ebx
  __int64 result; // rax
  ULONG_PTR v30; // rax
  _BYTE *v31; // rdx
  int v32; // eax
  __int64 v33; // r15
  _BYTE *v34; // rdx
  int v35; // eax
  ULONG_PTR v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int64 PrototypePteVadLookup; // rax
  ULONG_PTR v41; // rdx
  _BYTE *v42; // rax
  unsigned int v43; // [rsp+30h] [rbp-59h] BYREF
  _KPROCESS *v44; // [rsp+38h] [rbp-51h]
  _QWORD v45[2]; // [rsp+50h] [rbp-39h] BYREF
  __int128 v46; // [rsp+60h] [rbp-29h]
  __int128 v47; // [rsp+70h] [rbp-19h]
  __int128 v48; // [rsp+80h] [rbp-9h]
  __int128 v49; // [rsp+90h] [rbp+7h]
  __int64 retaddr; // [rsp+E8h] [rbp+5Fh]

  v4 = 0;
  *a2 = 1;
  v5 = (ULONG_PTR *)a1;
  v43 = 0;
  *a3 = 24;
  HIDWORD(v45[0]) = 0;
  CurrentThread = KeGetCurrentThread();
  *a4 = 0LL;
  Process = CurrentThread->ApcState.Process;
  v8 = *(_QWORD *)(a1 + 56);
  v45[0] = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  LODWORD(v8) = *(_DWORD *)(v8 + 184);
  v9 = 0;
  v44 = Process;
  if ( (v8 & 0xF) == 0 )
  {
    v9 = 256;
    LODWORD(v45[0]) = 256;
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
        LODWORD(v45[0]) = v9;
        break;
      case 1:
        v9 |= 2u;
        v34 = (_BYTE *)(v5[2] & 0xFFFFFFFFFFFFFFFEuLL);
        LODWORD(v45[0]) = v9;
        break;
      case 5:
        v9 |= 0x20u;
        v34 = (_BYTE *)(v5[2] & 0xFFFFFFFFFFFFFFFEuLL);
        LODWORD(v45[0]) = v9;
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
    v12 = *((_QWORD *)&v48 + 1);
    goto LABEL_12;
  }
LABEL_5:
  *((_QWORD *)&v48 + 1) = v10 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v10 & 1) != 0 && *v11 == 4 )
    *((_QWORD *)&v49 + 1) = *(_QWORD *)(v12 + 48);
  if ( (v9 & 2) == 0 )
    goto LABEL_7;
  v35 = *(_DWORD *)(v12 + 80);
  if ( (v35 & 0x40000) != 0 )
  {
    v9 |= 8u;
LABEL_67:
    LODWORD(v45[0]) = v9;
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
      LODWORD(v45[0]) = v9;
    }
    if ( (*(_DWORD *)(v12 + 56) & 0x20) != 0 )
    {
      v9 |= 0x40000u;
      LODWORD(v45[0]) = v9;
    }
  }
LABEL_12:
  v13 = *v5;
  v14 = *v5;
  v45[1] = v5;
  ActiveProcessors = (volatile _KAFFINITY_EX *)0xFFFFF68000000000LL;
  v16 = (unsigned __int64 *)(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( v13 >= 0xFFFF800000000000uLL )
  {
    if ( (v9 & 2) != 0 )
      return 0LL;
    if ( v13 >= 0xFFFFF68000000000uLL && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v41 = v5[2];
      if ( v41 )
      {
        v42 = (_BYTE *)(v41 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (v41 & 1) == 0 || *v42 != 7 && *v42 != 8 )
          KeBugCheckEx(0x50u, v13, v5[1], (ULONG_PTR)v16, 6uLL);
      }
    }
  }
  v17 = 0LL;
  if ( v13 > 0x7FFFFFFEFFFFLL )
  {
    if ( v13 >= 0xFFFFF68000000000uLL && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v28 = 4;
      v27 = 0LL;
      goto LABEL_106;
    }
LABEL_72:
    v36 = *(_QWORD *)(a1 + 8);
    if ( v13 - 0x10000 <= 0x7FFFFFFDFFFFLL && !v17 && (v36 & 2) != 0 )
    {
      if ( (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
        KeBugCheckEx(0x1Au, 0x4477uLL, v13, v36, 0LL);
      if ( (unsigned int)MiIsStoreProcess(Process, 0x7FFFFFFDFFFFLL, ActiveProcessors, v36) )
        KeBugCheckEx(0x1Au, 0x4478uLL, v13, v36, 0LL);
      LOBYTE(v9) = v45[0];
    }
    if ( (v9 & 2) != 0 && v17 )
      MiPrefetchJumpVad(v12, v17, v13, v36);
    return 3221225477LL;
  }
  if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) != 0 )
    goto LABEL_17;
  v18 = v13 & 0x7FFFFFFFF000LL;
  if ( (v13 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
  {
    v27 = qword_140E2DBA8;
    v28 = 1;
    LOBYTE(v9) = v45[0];
    goto LABEL_106;
  }
  if ( v18 != qword_140E2DBB8 || !v18 )
  {
LABEL_17:
    v19 = (_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      _m_prefetchw(v19);
      v20 = *v19 & 0x7FFFFFFF;
      while ( 1 )
      {
        v21 = (unsigned int)(v20 + 1);
        v22 = v20;
        v20 = _InterlockedCompareExchange(v19, v21, v20);
        if ( v22 == v20 )
          break;
        if ( v20 < 0 )
        {
          LOBYTE(v21) = -1;
          ExpWaitForSpinLockSharedAndAcquire(v19, v21, 0xFFFFF68000000000uLL, 0xFFFFF6FFFFFFFFFFuLL);
          break;
        }
      }
    }
    else
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v19, 0xFFu);
    }
    v23 = KeGetCurrentThread()->ApcState.Process;
    Flink = v23[3].Header.WaitListHead.Flink;
    if ( Flink )
    {
      v25 = v13 >> 12;
      if ( v13 >> 12 >= (LODWORD(Flink[1].Blink) | ((unsigned __int64)LOBYTE(Flink[2].Flink) << 32))
        && v25 <= (HIDWORD(Flink[1].Blink) | ((unsigned __int64)BYTE1(Flink[2].Flink) << 32)) )
      {
        v17 = v23[3].Header.WaitListHead.Flink;
LABEL_32:
        v27 = MiCheckUserVirtualAddress(v13, v17, v25, &v43);
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
        v28 = v43;
        LOBYTE(v9) = v45[0];
        if ( v43 != 24 )
        {
          v5 = (ULONG_PTR *)a1;
          goto LABEL_36;
        }
        Process = v44;
        goto LABEL_72;
      }
      v26 = *(struct _LIST_ENTRY **)&v23[3].Header.Lock;
      if ( v26 )
      {
        do
        {
          if ( v25 > (HIDWORD(v26[1].Blink) | ((unsigned __int64)BYTE1(v26[2].Flink) << 32)) )
          {
            v26 = v26->Blink;
          }
          else
          {
            if ( v25 >= (LODWORD(v26[1].Blink) | ((unsigned __int64)LOBYTE(v26[2].Flink) << 32)) )
              break;
            v26 = v26->Flink;
          }
        }
        while ( v26 );
        if ( v26 )
        {
          v23[3].Header.WaitListHead.Flink = v26;
          v17 = v26;
          goto LABEL_32;
        }
      }
    }
    ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    {
      _InterlockedAnd((volatile signed __int32 *)&ActiveProcessors[3].StaticBitmap[25] + 1, 0xBFFFFFFF);
      _InterlockedDecrement((volatile signed __int32 *)&ActiveProcessors[3].StaticBitmap[25] + 1);
      LOBYTE(v9) = v45[0];
    }
    else
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(
        (volatile signed __int32 *)&ActiveProcessors[3].StaticBitmap[25] + 1,
        retaddr);
      LOBYTE(v9) = v45[0];
    }
    goto LABEL_72;
  }
  v27 = qword_140E2DBB0;
  v28 = 1;
  LOBYTE(v9) = v45[0];
LABEL_106:
  v43 = v28;
LABEL_36:
  if ( (v28 & 0xFFFFFFF8) != 0x10 )
  {
    v30 = v5[2];
    *(_QWORD *)&v46 = v13;
    v31 = (_BYTE *)(v30 & 0xFFFFFFFFFFFFFFFEuLL);
    LODWORD(v47) = v28;
    if ( (v30 & 1) != 0 && (*v31 == 2 || *v31 == 8 || *v31 == 7 || *v31 == 4) )
      v32 = *(_DWORD *)((v30 & 0xFFFFFFFFFFFFFFFEuLL) + 40);
    else
      v32 = 0;
    LODWORD(v48) = v32;
    *((_QWORD *)&v46 + 1) = v27;
    *(_QWORD *)&v49 = v17;
    DWORD1(v47) = 0;
    if ( !v27 )
      return MiResolvePrivateZeroFault((__int64)v45);
    if ( (v9 & 2) == 0 && v17 )
    {
      if ( (__int64)v17[7].Blink >= 0 )
      {
        v4 = MiCheckVadSequential(v45, v31);
        if ( v4 == -1073741280 )
        {
          if ( !_InterlockedIncrement((volatile signed __int32 *)&v17[2].Flink + 1) )
            __fastfail(0xEu);
          v33 = a1;
          v28 = v43;
          *(_DWORD *)(a1 + 80) |= 0x20u;
          *(_QWORD *)(a1 + 88) = v17;
          goto LABEL_57;
        }
      }
      v28 = v43;
    }
    v33 = a1;
LABEL_57:
    *a2 = 0;
    *a3 = v28;
    *a4 = v27;
    MiResolveSharedZeroFault(v45, v31);
    result = v4;
    *(_DWORD *)(v33 + 80) ^= (*(_DWORD *)(v33 + 80) ^ (LODWORD(v45[0]) >> 1)) & 0x1FE00;
    return result;
  }
  if ( (v9 & 2) == 0 )
  {
    if ( (unsigned int)MiAllowGuardFault(v5[2]) )
    {
      MiUpdatePageTableUseCount(v13);
      v43 = v28 & 0xFFFFFFEF;
      if ( v27 )
        PrototypePteVadLookup = MiMakePrototypePteVadLookup(v28 & 0xEF);
      else
        PrototypePteVadLookup = MiMakeDemandZeroPte(v28 & 0xFFFFFFEF, v37, v38, v39);
      *v16 = PrototypePteVadLookup;
      *a2 = 2;
      return 0LL;
    }
    return 3221225477LL;
  }
  return 0LL;
}
