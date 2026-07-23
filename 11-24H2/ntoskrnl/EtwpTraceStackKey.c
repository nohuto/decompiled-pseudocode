/*
 * XREFs of EtwpTraceStackKey @ 0x1403DE5B0
 * Callers:
 *     EtwpTraceStackWalk @ 0x1403DDBA0 (EtwpTraceStackWalk.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     EtwpDereferenceStackEntry @ 0x1403DEC00 (EtwpDereferenceStackEntry.c)
 *     KxTryToAcquireSpinLock @ 0x140459EB8 (KxTryToAcquireSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall EtwpTraceStackKey(
        _SLIST_ENTRY *a1,
        unsigned int a2,
        __int16 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  _SLIST_ENTRY *Next; // r13
  unsigned int v7; // edi
  unsigned __int64 v8; // r10
  __int64 v9; // r8
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rdx
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
  _SLIST_ENTRY *v30; // rcx
  _SLIST_ENTRY **v31; // rax
  __int64 v32; // rbp
  _SLIST_HEADER *v33; // rax
  PSLIST_ENTRY v34; // rbx
  unsigned int v35; // r13d
  _SLIST_ENTRY **v36; // rax
  __int64 v37; // rcx
  PSLIST_ENTRY v38; // rsi
  _SLIST_HEADER *v39; // rsi
  unsigned __int64 Alignment; // rax
  unsigned __int16 v41; // r11
  PSLIST_ENTRY v42; // r10
  unsigned int v43; // r8d
  __int64 v44; // rdx
  int v45; // r9d
  __int64 v46; // rax
  _QWORD *v47; // rcx
  _SLIST_ENTRY *v48; // rbx
  KIRQL v51; // [rsp+38h] [rbp-130h]
  int v52; // [rsp+40h] [rbp-128h]
  unsigned int v53; // [rsp+48h] [rbp-120h]
  PSLIST_ENTRY v54; // [rsp+48h] [rbp-120h]
  _SLIST_HEADER *v55; // [rsp+50h] [rbp-118h]
  _SLIST_ENTRY *v56; // [rsp+58h] [rbp-110h]
  PSLIST_ENTRY ListEntry; // [rsp+60h] [rbp-108h] BYREF
  PSLIST_ENTRY v58; // [rsp+68h] [rbp-100h] BYREF
  __int64 v59; // [rsp+70h] [rbp-F8h]
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
    v9 = 0LL;
    if ( v8 )
    {
      a4 = 0LL;
      do
      {
        v10 = (unsigned int)(v9 + 1);
        v9 = (unsigned int)(v9 + 2);
        v11 = *(unsigned __int16 *)(a5 + 2 * a4) ^ *(unsigned __int16 *)(a5 + 2 * v10);
        a4 = (unsigned int)v9;
        v7 += v11;
      }
      while ( (unsigned int)v9 < v8 );
    }
    v12 = v7 % *((_DWORD *)&Next->Next + 2);
    v13 = 0;
    v14 = (__int64)&Next[v12 + 2] + 8 * v12;
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
        KiRaiseIrqlProcessIrqlFlags(v16, 2LL);
    }
    v17 = (volatile signed __int32 *)(v14 + 16);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64(v17, 0LL) )
        KxWaitForSpinLockAndAcquire(v17, v12, v9, a4);
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
        goto LABEL_59;
      }
LABEL_15:
      v18 = v18->Next;
    }
    if ( v13 == 4 )
    {
      v30 = *(_SLIST_ENTRY **)(v14 + 8);
      v56 = v30;
      if ( v30->Next != (_SLIST_ENTRY *)v14 )
        goto LABEL_21;
      v31 = (_SLIST_ENTRY **)*((_QWORD *)&v30->Next + 1);
      if ( *v31 != v30 )
        goto LABEL_21;
      *(_QWORD *)(v14 + 8) = v31;
      *v31 = (_SLIST_ENTRY *)v14;
    }
    v18 = 0LL;
    v32 = 0LL;
    v54 = 0LL;
    if ( !a6 )
      goto LABEL_50;
    v33 = v55 + 1;
    while ( 1 )
    {
      v34 = RtlpInterlockedPopEntrySList(v33);
      if ( !v34 )
        break;
      v35 = a6 - v32;
      if ( (int)v32 + 32 < a6 )
        v35 = 32;
      memmove(&v34[2].Next + 1, (const void *)(a5 + 8 * v32), 8LL * v35);
      if ( (_DWORD)v32 )
        LODWORD(v34[2].Next) = v35;
      else
        v18 = v34;
      if ( v54 )
        v54[1].Next = v34;
      v33 = v55 + 1;
      v32 = v35 + (unsigned int)v32;
      v54 = v34;
      v34[1].Next = 0LL;
      if ( (unsigned int)v32 >= a6 )
        goto LABEL_50;
    }
    if ( (unsigned int)v32 >= a6 )
    {
LABEL_50:
      *((_DWORD *)&v18[1].Next + 3) = v7;
      LODWORD(v18[2].Next) = a6;
      *((_DWORD *)&v18[1].Next + 2) = 2;
      v36 = *(_SLIST_ENTRY ***)(v14 + 8);
      if ( *v36 != (_SLIST_ENTRY *)v14 )
        goto LABEL_21;
      v18->Next = (_SLIST_ENTRY *)v14;
      *((_QWORD *)&v18->Next + 1) = v36;
      *v36 = v18;
      *(_QWORD *)(v14 + 8) = v18;
      KxReleaseSpinLock((volatile signed __int64 *)(v14 + 16));
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v51);
      __writecr8(v51);
      if ( v56 )
        EtwpDereferenceStackEntry(v56);
LABEL_59:
      v37 = v59;
      v38 = v58;
      LOBYTE(v13) = 1;
      ListEntry = v18;
      *(_QWORD *)(v59 + 16) = &ListEntry;
      *(_QWORD *)(v37 + 24) = 8LL;
      EtwpLogKernelEvent(v37, (__int64)v38[85].Next, (unsigned int)v38->Next, 2u, a3, a2);
      v39 = (_SLIST_HEADER *)v38[66].Next;
      v28 = ListEntry;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)&ListEntry[1].Next + 2, 0xFFFFFFFF) == 1 )
      {
        Alignment = v39->Alignment;
        v41 = 1;
        v58 = v28;
        v42 = v28;
        v60[1] = 8LL;
        v43 = *(_DWORD *)Alignment;
        v44 = *(_QWORD *)(Alignment + 1360);
        v60[0] = &v58;
        do
        {
          v45 = 32;
          if ( LODWORD(v42[2].Next) < 0x20 )
            v45 = (int)v42[2].Next;
          v46 = 2LL * v41++;
          v47 = &v60[v46];
          *v47 = (char *)v42 + 40;
          v47[1] = (unsigned int)(8 * v45);
          v42 = v42[1].Next;
        }
        while ( v42 );
        EtwpLogKernelEvent((__int64)v60, v44, v43, v41, 6179, 0x500602u);
        do
        {
          v27 = v28[1].Next;
          RtlpInterlockedPushEntrySList(v39 + 1, v28);
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
