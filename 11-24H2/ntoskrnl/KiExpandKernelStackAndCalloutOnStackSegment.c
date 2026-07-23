/*
 * XREFs of KiExpandKernelStackAndCalloutOnStackSegment @ 0x140231DD0
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140232E90 (KiExpandKernelStackAndCalloutSwitchStack.c)
 * Callees:
 *     MmDeleteKernelStack @ 0x14021FA40 (MmDeleteKernelStack.c)
 *     MmCreateKernelStack @ 0x1402207C0 (MmCreateKernelStack.c)
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeQueryCurrentStackInformationEx @ 0x14028A1E0 (KeQueryCurrentStackInformationEx.c)
 *     KeReleaseMutantEx @ 0x1402DEAA0 (KeReleaseMutantEx.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     KeGetCurrentStackPointer @ 0x1406AB330 (KeGetCurrentStackPointer.c)
 *     KiSwitchKernelStackAndCallout @ 0x1406AC8D0 (KiSwitchKernelStackAndCallout.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall KiExpandKernelStackAndCalloutOnStackSegment(
        ULONG_PTR a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        int a4,
        _BYTE *a5)
{
  _BYTE *v5; // rbx
  int v6; // r12d
  int v7; // edx
  unsigned __int8 v8; // di
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v10; // r13d
  char SameThreadTransientFlags; // al
  signed __int8 v12; // al
  signed __int8 v13; // tt
  ULONG_PTR v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r15
  int v17; // ecx
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  char v20; // al
  __int64 CurrentStackPointer; // rax
  unsigned int v22; // eax
  unsigned int v23; // esi
  bool v24; // zf
  __int64 result; // rax
  unsigned __int8 v26; // al
  struct _KPRCB *CurrentPrcb; // rbx
  LARGE_INTEGER *Timeout; // [rsp+38h] [rbp-89h]
  __int128 v29; // [rsp+40h] [rbp-81h] BYREF
  __int128 v30; // [rsp+50h] [rbp-71h]
  __int128 v31; // [rsp+60h] [rbp-61h]
  __int64 v32; // [rsp+78h] [rbp-49h] BYREF
  __int64 v33; // [rsp+80h] [rbp-41h] BYREF
  __int64 v34; // [rsp+88h] [rbp-39h] BYREF
  __int64 CurrentIrql; // [rsp+90h] [rbp-31h]
  int v36[2]; // [rsp+98h] [rbp-29h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-21h]
  struct _KTHREAD *v38; // [rsp+A8h] [rbp-19h]
  __int64 v39; // [rsp+B0h] [rbp-11h]
  __int128 v40; // [rsp+B8h] [rbp-9h]
  unsigned __int64 v43; // [rsp+130h] [rbp+6Fh]
  int v44; // [rsp+138h] [rbp+77h]

  v43 = a3;
  v5 = a5;
  v6 = a4;
  v7 = 0;
  v32 = 0LL;
  v29 = 0LL;
  v44 = 0;
  v8 = 0;
  v30 = 0LL;
  Timeout = 0LL;
  v31 = 0LL;
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  if ( (_BYTE)CurrentIrql == 2 )
  {
    v8 = 0;
    if ( a5 )
      v8 = 16;
    Timeout = (LARGE_INTEGER *)&v32;
  }
  if ( (a4 & 8) != 0 && a5 )
    v8 = 16;
  v10 = 0;
  if ( a3 > (unsigned int)KeKernelStackSize )
  {
    v7 = 1;
    v8 |= 1u;
    v44 = 1;
    v10 = 1;
    if ( a5 && a5[4] )
      v10 = 5;
  }
  else
  {
    v6 = a4 | 4;
    v43 = 0LL;
  }
  if ( (v8 & 0xF0) == 0 )
  {
    v17 = v10 | 2;
    if ( (v6 & 2) != 0 )
      v17 = v10;
    if ( (v6 & 4) != 0 )
      v44 = v7 | 4;
    v10 = v17 | 0x10;
    if ( (v6 & 4) == 0 )
      v10 = v17;
    DWORD2(v29) = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 192) + 138LL);
    *(_QWORD *)&v29 = v10 | 0x500000000LL;
    *(_QWORD *)&v30 = 0LL;
    if ( v6 < 0 )
      LODWORD(v29) = v10 | 0x40;
    else
      *(_QWORD *)&v30 = CurrentThread;
    MmCreateKernelStack((int *)&v29);
    v16 = *((_QWORD *)&v30 + 1);
    if ( *((_QWORD *)&v30 + 1) )
      goto LABEL_29;
  }
  if ( !v5 || (v8 & 1) != 0 && !v5[4] )
    return 3221225495LL;
  SameThreadTransientFlags = CurrentThread->SameThreadTransientFlags;
  if ( (SameThreadTransientFlags & 2) != 0 )
    v8 |= 4u;
  else
    CurrentThread->SameThreadTransientFlags = SameThreadTransientFlags | 2;
  if ( (v6 & 0x40000000) != 0 )
  {
    _m_prefetchw(v5 + 7);
    v12 = v5[7];
    do
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange8(v5 + 7, v12 | 2, v12);
    }
    while ( v13 != v12 );
    if ( (v12 & 2) == 0 )
    {
      v14 = (ULONG_PTR)(v5 + 8);
      goto LABEL_16;
    }
LABEL_63:
    result = 3221227272LL;
    CurrentThread->SameThreadTransientFlags ^= (CurrentThread->SameThreadTransientFlags ^ (v8 >> 1)) & 2;
    return result;
  }
  v14 = (ULONG_PTR)(v5 + 8);
  if ( KeWaitForSingleObject(v5 + 8, WrCalloutStack, 0, 0, Timeout) == 258 )
    goto LABEL_63;
LABEL_16:
  v15 = (unsigned __int8)v5[6];
  if ( (unsigned __int8)v15 >= v5[5] )
  {
    KeReleaseMutantEx(v14);
    return 3221225495LL;
  }
  v16 = *(_QWORD *)&v5[8 * v15 + 64];
  v8 |= 8u;
  v5[6] = v15 + 1;
  if ( (v8 & 1) == 0 && v5[4] )
  {
    LOBYTE(v10) = 5;
    v43 = (unsigned int)KeMaximumKernelStackExpansionSize;
    v8 |= 1u;
  }
LABEL_29:
  *(_QWORD *)(v16 - 80) = v16;
  v18 = v16 - 80;
  if ( (v8 & 1) != 0 )
    v19 = (unsigned int)KeKernelLargeStackSize;
  else
    v19 = (unsigned int)KeKernelStackSize;
  *(_QWORD *)(v16 - 80 + 8) = v16 - v19 + 1;
  *(_QWORD *)(v18 + 16) = CurrentThread->StackBase;
  *(_QWORD *)(v18 + 40) = CurrentThread->InitialStack;
  *(_QWORD *)(v18 + 72) = 0LL;
  *(_QWORD *)(v18 + 48) = 0LL;
  *(_QWORD *)(v18 + 64) = 0LL;
  *(_QWORD *)(v18 + 56) = 0LL;
  if ( (v10 & 1) != 0 )
  {
    v18 |= 1uLL;
    if ( (v10 & 4) != 0 )
      v18 |= 2uLL;
  }
  v20 = CurrentThread->SameThreadTransientFlags;
  if ( (v20 & 1) != 0 )
    v8 |= 2u;
  else
    CurrentThread->SameThreadTransientFlags = v20 | 1;
  v34 = 0LL;
  v33 = 0LL;
  LODWORD(a5) = 0;
  CurrentStackPointer = KeGetCurrentStackPointer(0LL, 8LL);
  KeQueryCurrentStackInformationEx(CurrentStackPointer, &a5, &v34, &v33);
  if ( (_DWORD)a5 == 10 )
  {
    __writegsbyte(0x88E6u, 1u);
    v22 = KiSwitchKernelStackAndCallout(a2, a1, v18, v43);
    __writegsbyte(0x88E6u, 0);
  }
  else
  {
    v22 = KiSwitchKernelStackAndCallout(a2, a1, v18, v43);
  }
  v23 = v22;
  if ( (v8 & 8) != 0 )
  {
    v24 = v5[6]-- == 1;
    if ( v24 && (v8 & 4) == 0 )
      CurrentThread->SameThreadTransientFlags &= ~2u;
    if ( (v6 & 0x40000000) != 0 )
      _InterlockedAnd8(v5 + 7, 0xFDu);
    else
      KeReleaseMutantEx((ULONG_PTR)(v5 + 8));
  }
  else if ( v6 < 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    RtlpInterlockedPushEntrySList(&CurrentPrcb->KstackFreeList, (PSLIST_ENTRY)(v16 - 16));
    KeInsertQueueDpc(&CurrentPrcb->KstackFreeDpc, 0LL, 0LL);
  }
  else
  {
    v37 = 0LL;
    v40 = 0LL;
    v36[0] = v44;
    v36[1] = 5;
    v39 = v16;
    v38 = CurrentThread;
    MmDeleteKernelStack(v36);
  }
  if ( (v8 & 2) == 0 )
    CurrentThread->SameThreadTransientFlags &= ~1u;
  if ( KeGetCurrentIrql() != (_BYTE)CurrentIrql )
  {
    v26 = KeGetCurrentIrql();
    KeBugCheckEx(0xC8u, (((unsigned __int8)CurrentIrql | ((unsigned __int64)v26 << 8)) << 8) | 2, a1, a2, 0LL);
  }
  return v23;
}
