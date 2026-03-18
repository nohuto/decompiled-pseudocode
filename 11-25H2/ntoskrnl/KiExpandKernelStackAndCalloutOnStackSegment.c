/*
 * XREFs of KiExpandKernelStackAndCalloutOnStackSegment @ 0x1403481A0
 * Callers:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x140347DF0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KeQueryCurrentStackInformationEx @ 0x1402571F0 (KeQueryCurrentStackInformationEx.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutantEx @ 0x1402F09B0 (KeReleaseMutantEx.c)
 *     MmCreateKernelStack @ 0x140345F40 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x140346FC0 (MmDeleteKernelStack.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     KeGetCurrentStackPointer @ 0x14069F0C0 (KeGetCurrentStackPointer.c)
 *     KiSwitchKernelStackAndCallout @ 0x1406A0660 (KiSwitchKernelStackAndCallout.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
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
  unsigned __int64 CurrentStackPointer; // rax
  unsigned int v22; // eax
  unsigned int v23; // esi
  bool v24; // zf
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int8 v27; // al
  int v28; // [rsp+30h] [rbp-91h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+38h] [rbp-89h]
  __int128 v30; // [rsp+40h] [rbp-81h] BYREF
  __int128 v31; // [rsp+50h] [rbp-71h]
  __int128 v32; // [rsp+60h] [rbp-61h]
  __int64 v33; // [rsp+78h] [rbp-49h] BYREF
  unsigned __int64 v34; // [rsp+80h] [rbp-41h] BYREF
  char *v35; // [rsp+88h] [rbp-39h] BYREF
  __int64 CurrentIrql; // [rsp+90h] [rbp-31h]
  _DWORD v37[2]; // [rsp+98h] [rbp-29h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-21h]
  struct _KTHREAD *v39; // [rsp+A8h] [rbp-19h]
  __int64 v40; // [rsp+B0h] [rbp-11h]
  __int128 v41; // [rsp+B8h] [rbp-9h]
  unsigned __int64 v44; // [rsp+130h] [rbp+6Fh]
  int v45; // [rsp+138h] [rbp+77h]

  v44 = a3;
  v5 = a5;
  v6 = a4;
  v7 = 0;
  v33 = 0LL;
  v30 = 0LL;
  v45 = 0;
  v8 = 0;
  v31 = 0LL;
  Timeout = 0LL;
  v32 = 0LL;
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  if ( (_BYTE)CurrentIrql == 2 )
  {
    v8 = 0;
    if ( a5 )
      v8 = 16;
    Timeout = (PLARGE_INTEGER)&v33;
  }
  if ( (a4 & 8) != 0 && a5 )
    v8 = 16;
  v10 = 0;
  if ( a3 > (unsigned int)KeKernelStackSize )
  {
    v7 = 1;
    v8 |= 1u;
    v45 = 1;
    v10 = 1;
    if ( a5 && a5[4] )
      v10 = 5;
  }
  else
  {
    v6 = a4 | 4;
    v44 = 0LL;
  }
  if ( (v8 & 0xF0) == 0 )
  {
    v17 = v10 | 2;
    if ( (v6 & 2) != 0 )
      v17 = v10;
    if ( (v6 & 4) != 0 )
      v45 = v7 | 4;
    v10 = v17 | 0x10;
    if ( (v6 & 4) == 0 )
      v10 = v17;
    DWORD2(v30) = *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 192) + 138LL);
    *(_QWORD *)&v30 = v10 | 0x500000000LL;
    *(_QWORD *)&v31 = 0LL;
    if ( v6 < 0 )
      LODWORD(v30) = v10 | 0x40;
    else
      *(_QWORD *)&v31 = CurrentThread;
    MmCreateKernelStack((int *)&v30);
    v16 = *((_QWORD *)&v31 + 1);
    if ( *((_QWORD *)&v31 + 1) )
      goto LABEL_28;
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
      goto LABEL_15;
    }
LABEL_59:
    result = 3221227272LL;
    CurrentThread->SameThreadTransientFlags ^= (CurrentThread->SameThreadTransientFlags ^ (v8 >> 1)) & 2;
    return result;
  }
  v14 = (ULONG_PTR)(v5 + 8);
  if ( KeWaitForSingleObject(v5 + 8, WrCalloutStack, 0, 0, Timeout) == 258 )
    goto LABEL_59;
LABEL_15:
  v15 = (unsigned __int8)v5[6];
  if ( (unsigned __int8)v15 >= v5[5] )
  {
    KeReleaseMutantEx(v14, 1u, 4, &v28);
    return 3221225495LL;
  }
  v16 = *(_QWORD *)&v5[8 * v15 + 64];
  v8 |= 8u;
  v5[6] = v15 + 1;
  if ( (v8 & 1) == 0 && v5[4] )
  {
    LOBYTE(v10) = 5;
    v44 = (unsigned int)KeMaximumKernelStackExpansionSize;
    v8 |= 1u;
  }
LABEL_28:
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
  v35 = 0LL;
  v34 = 0LL;
  LODWORD(a5) = 0;
  CurrentStackPointer = KeGetCurrentStackPointer(0LL, 8LL);
  KeQueryCurrentStackInformationEx(CurrentStackPointer, &a5, &v35, &v34);
  if ( (_DWORD)a5 == 10 )
  {
    __writegsbyte(0x88E6u, 1u);
    v22 = KiSwitchKernelStackAndCallout(a2, a1, v18, v44);
    __writegsbyte(0x88E6u, 0);
  }
  else
  {
    v22 = KiSwitchKernelStackAndCallout(a2, a1, v18, v44);
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
      KeReleaseMutantEx((ULONG_PTR)(v5 + 8), 1u, 4, &v28);
  }
  else if ( v6 < 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    RtlpInterlockedPushEntrySList(&CurrentPrcb->KstackFreeList, (PSLIST_ENTRY)(v16 - 16));
    KeInsertQueueDpc(&CurrentPrcb->KstackFreeDpc, 0LL, 0LL);
  }
  else
  {
    v38 = 0LL;
    v41 = 0LL;
    v37[0] = v45;
    v37[1] = 5;
    v40 = v16;
    v39 = CurrentThread;
    MmDeleteKernelStack((__int64)v37);
  }
  if ( (v8 & 2) == 0 )
    CurrentThread->SameThreadTransientFlags &= ~1u;
  if ( KeGetCurrentIrql() != (_BYTE)CurrentIrql )
  {
    v27 = KeGetCurrentIrql();
    KeBugCheckEx(0xC8u, (((unsigned __int8)CurrentIrql | ((unsigned __int64)v27 << 8)) << 8) | 2, a1, a2, 0LL);
  }
  return v23;
}
