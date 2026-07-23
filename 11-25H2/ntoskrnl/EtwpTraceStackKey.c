/*
 * XREFs of EtwpTraceStackKey @ 0x1403F5C40
 * Callers:
 *     EtwpTraceStackWalk @ 0x140309D40 (EtwpTraceStackWalk.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x140253620 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402536F0 (KxWaitForSpinLockAndAcquire.c)
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     EtwpDereferenceStackEntry @ 0x1403F6280 (EtwpDereferenceStackEntry.c)
 *     KxTryToAcquireSpinLock @ 0x140464068 (KxTryToAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall EtwpTraceStackKey(
        _SLIST_ENTRY *a1,
        unsigned int a2,
        unsigned __int16 a3,
        struct _KTHREAD *a4,
        __int64 a5,
        unsigned int a6)
{
  _SLIST_ENTRY *Next; // r13
  unsigned int v7; // edi
  unsigned __int64 v8; // r10
  unsigned int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // rax
  int v12; // edx
  int v13; // ebp
  __int64 v14; // r15
  unsigned __int8 CurrentIrql; // bl
  __int64 v16; // rcx
  volatile signed __int32 *v17; // rcx
  _SLIST_ENTRY *v18; // r14
  unsigned int v19; // edx
  __int64 v20; // rcx
  _SLIST_ENTRY *i; // r13
  _SLIST_ENTRY *v22; // rax
  _SLIST_ENTRY **v23; // rcx
  _SLIST_ENTRY *v24; // rax
  SIZE_T v25; // rbx
  SIZE_T v26; // rax
  _SLIST_ENTRY *v27; // rdi
  PSLIST_ENTRY v28; // rbx
  struct _KTHREAD *v30; // rcx
  PSLIST_ENTRY v31; // rsi
  _SLIST_HEADER *v32; // rsi
  unsigned __int64 Alignment; // rax
  unsigned __int16 v34; // r11
  PSLIST_ENTRY v35; // r10
  unsigned int v36; // r8d
  __int64 v37; // rdx
  int v38; // r9d
  __int64 v39; // rax
  _QWORD *v40; // rcx
  _SLIST_ENTRY *v41; // rcx
  _SLIST_ENTRY **v42; // rax
  __int64 v43; // rbp
  _SLIST_HEADER *v44; // rax
  PSLIST_ENTRY v45; // rbx
  unsigned int v46; // r13d
  _SLIST_ENTRY **v47; // rax
  _SLIST_ENTRY *v48; // rbx
  KIRQL v51; // [rsp+38h] [rbp-130h]
  int v52; // [rsp+40h] [rbp-128h]
  unsigned int v53; // [rsp+48h] [rbp-120h]
  PSLIST_ENTRY v54; // [rsp+48h] [rbp-120h]
  _SLIST_HEADER *v55; // [rsp+50h] [rbp-118h]
  _SLIST_ENTRY *v56; // [rsp+58h] [rbp-110h]
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp-108h] BYREF
  PSLIST_ENTRY v58; // [rsp+68h] [rbp-100h] BYREF
  struct _KTHREAD *v59; // [rsp+70h] [rbp-F8h]
  _QWORD v60[18]; // [rsp+80h] [rbp-E8h] BYREF

  Next = a1[66].Next;
  v59 = a4;
  v58 = a1;
  ListEntry = 0LL;
  v55 = (_SLIST_HEADER *)Next;
  if ( Next )
  {
    v7 = 0;
    v56 = 0LL;
    v8 = 4LL * a6;
    v9 = 0;
    if ( v8 )
    {
      v10 = 0LL;
      do
      {
        v11 = v9 + 1;
        v9 += 2;
        v12 = *(unsigned __int16 *)(a5 + 2 * v10) ^ *(unsigned __int16 *)(a5 + 2 * v11);
        v10 = v9;
        v7 += v12;
      }
      while ( v9 < v8 );
    }
    v13 = 0;
    v14 = (__int64)&Next[v7 % *((_DWORD *)&Next->Next + 2) + 2] + 8 * (v7 % *((_DWORD *)&Next->Next + 2));
    CurrentIrql = KeGetCurrentIrql();
    v51 = CurrentIrql;
    if ( CurrentIrql > 1u )
    {
      if ( CurrentIrql != 2 )
      {
        if ( !(unsigned __int8)KxTryToAcquireSpinLock(v14 + 16) )
          return (unsigned __int8)v13;
        goto LABEL_11;
      }
    }
    else
    {
      v16 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v16);
    }
    v17 = (volatile signed __int32 *)(v14 + 16);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64(v17, 0LL) )
        KxWaitForSpinLockAndAcquire(v17);
    }
    else
    {
      KiAcquireSpinLockInstrumented(v17);
    }
LABEL_11:
    v18 = *(_SLIST_ENTRY **)v14;
    v19 = 32;
    while ( v18 != (_SLIST_ENTRY *)v14 )
    {
      ++v13;
      if ( *((_DWORD *)&v18[1].Next + 3) == v7 && LODWORD(v18[2].Next) == a6 )
      {
        v20 = 0LL;
        for ( i = v18; ; i = i[1].Next )
        {
          v52 = v20;
          if ( !i )
            break;
          if ( LODWORD(i[2].Next) < 0x20 )
            v19 = (unsigned int)i[2].Next;
          v53 = v19;
          v25 = 8LL * v19;
          v26 = RtlCompareMemory(&i[2].Next + 1, (const void *)(a5 + 8 * v20), v25);
          v19 = 32;
          if ( v26 != v25 )
            goto LABEL_15;
          v20 = v53 + v52;
        }
        _InterlockedIncrement((volatile signed __int32 *)&v18[1].Next + 2);
        v22 = v18->Next;
        if ( *(&v18->Next->Next + 1) != v18
          || (v23 = (_SLIST_ENTRY **)*((_QWORD *)&v18->Next + 1), *v23 != v18)
          || (*v23 = v22,
              *((_QWORD *)&v22->Next + 1) = v23,
              v24 = *(_SLIST_ENTRY **)v14,
              *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14) )
        {
LABEL_21:
          __fastfail(3u);
        }
        v18->Next = v24;
        *((_QWORD *)&v18->Next + 1) = v14;
        *((_QWORD *)&v24->Next + 1) = v18;
        *(_QWORD *)v14 = v18;
        KxReleaseSpinLock((volatile signed __int64 *)(v14 + 16));
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v51);
        __writecr8(v51);
        goto LABEL_39;
      }
LABEL_15:
      v18 = v18->Next;
    }
    if ( v13 == 4 )
    {
      v41 = *(_SLIST_ENTRY **)(v14 + 8);
      v56 = v41;
      if ( v41->Next != (_SLIST_ENTRY *)v14 )
        goto LABEL_21;
      v42 = (_SLIST_ENTRY **)*((_QWORD *)&v41->Next + 1);
      if ( *v42 != v41 )
        goto LABEL_21;
      *(_QWORD *)(v14 + 8) = v42;
      *v42 = (_SLIST_ENTRY *)v14;
    }
    v18 = 0LL;
    v43 = 0LL;
    v54 = 0LL;
    if ( !a6 )
      goto LABEL_59;
    v44 = v55 + 1;
    while ( 1 )
    {
      v45 = RtlpInterlockedPopEntrySList(v44);
      if ( !v45 )
        break;
      v46 = a6 - v43;
      if ( (int)v43 + 32 < a6 )
        v46 = 32;
      memmove(&v45[2].Next + 1, (const void *)(a5 + 8 * v43), 8LL * v46);
      if ( (_DWORD)v43 )
        LODWORD(v45[2].Next) = v46;
      else
        v18 = v45;
      if ( v54 )
        v54[1].Next = v45;
      v44 = v55 + 1;
      v43 = v46 + (unsigned int)v43;
      v54 = v45;
      v45[1].Next = 0LL;
      if ( (unsigned int)v43 >= a6 )
        goto LABEL_59;
    }
    if ( (unsigned int)v43 >= a6 )
    {
LABEL_59:
      *((_DWORD *)&v18[1].Next + 3) = v7;
      LODWORD(v18[2].Next) = a6;
      *((_DWORD *)&v18[1].Next + 2) = 2;
      v47 = *(_SLIST_ENTRY ***)(v14 + 8);
      if ( *v47 != (_SLIST_ENTRY *)v14 )
        goto LABEL_21;
      v18->Next = (_SLIST_ENTRY *)v14;
      *((_QWORD *)&v18->Next + 1) = v47;
      *v47 = v18;
      *(_QWORD *)(v14 + 8) = v18;
      KxReleaseSpinLock((volatile signed __int64 *)(v14 + 16));
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v51);
      __writecr8(v51);
      if ( v56 )
        EtwpDereferenceStackEntry(v56);
LABEL_39:
      v30 = v59;
      v31 = v58;
      LOBYTE(v13) = 1;
      ListEntry = v18;
      v59->Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&ListEntry;
      v30->SListFaultAddress = (void *)8;
      EtwpLogKernelEvent(v30, (__int64)v31[85].Next, (unsigned int)v31->Next, 2u, a3, a2);
      v32 = (_SLIST_HEADER *)v31[66].Next;
      v28 = ListEntry;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&ListEntry[1].Next + 2, 0xFFFFFFFF) == 1 )
      {
        Alignment = v32->Alignment;
        v34 = 1;
        v58 = v28;
        v35 = v28;
        v60[1] = 8LL;
        v36 = *(_DWORD *)Alignment;
        v37 = *(_QWORD *)(Alignment + 1360);
        v60[0] = &v58;
        do
        {
          v38 = 32;
          if ( LODWORD(v35[2].Next) < 0x20 )
            v38 = (int)v35[2].Next;
          v39 = 2LL * v34++;
          v40 = &v60[v39];
          *v40 = (char *)v35 + 40;
          v40[1] = (unsigned int)(8 * v38);
          v35 = v35[1].Next;
        }
        while ( v35 );
        EtwpLogKernelEvent((struct _KTHREAD *)v60, v37, v36, v34, 0x1823u, 0x500602u);
        do
        {
          v27 = v28[1].Next;
          RtlpInterlockedPushEntrySList(v32 + 1, v28);
          v28 = v27;
        }
        while ( v27 );
      }
      return (unsigned __int8)v13;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 16), v51);
    if ( v18 )
    {
      do
      {
        v48 = v18[1].Next;
        RtlpInterlockedPushEntrySList(v55 + 1, v18);
        v18 = v48;
      }
      while ( v48 );
    }
    if ( v56 )
      EtwpDereferenceStackEntry(v56);
  }
  LOBYTE(v13) = 0;
  return (unsigned __int8)v13;
}
