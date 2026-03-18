/*
 * XREFs of ObWaitForMultipleObjects @ 0x14084F1D0
 * Callers:
 *     NtWaitForMultipleObjects @ 0x14099B630 (NtWaitForMultipleObjects.c)
 *     NtWaitForMultipleObjects32 @ 0x1409C3020 (NtWaitForMultipleObjects32.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForMultipleObjects @ 0x14027C240 (KeWaitForMultipleObjects.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14029B0E0 (ObpTraceObjectReferenceIfActive.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleaseRundownProtection @ 0x1403242B0 (ExfReleaseRundownProtection.c)
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
 *     ExFreeToNPagedLookasideList @ 0x1403739F0 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1403746E0 (ExAllocateFromNPagedLookasideList.c)
 *     ExGetHandlePointer @ 0x140431FD0 (ExGetHandlePointer.c)
 *     ExHandleLogBadReference @ 0x14043BEE0 (ExHandleLogBadReference.c)
 *     KeSetKernelStackSwapEnable @ 0x14044AF70 (KeSetKernelStackSwapEnable.c)
 *     ExSlowReplenishHandleTableEntry @ 0x14044CB0C (ExSlowReplenishHandleTableEntry.c)
 *     ExFastReplenishHandleTableEntry @ 0x1404736AC (ExFastReplenishHandleTableEntry.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406A89B0 (_alloca_probe.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExpLookupHandleTableEntry @ 0x140850180 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140851898 (ExpBlockOnLockedHandleEntry.c)
 *     ObReferenceProcessHandleTable @ 0x1408ADC40 (ObReferenceProcessHandleTable.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObWaitForMultipleObjects(
        ULONG a1,
        __int64 a2,
        char a3,
        WAIT_TYPE a4,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        LARGE_INTEGER *a7)
{
  char v7; // r15
  __int64 v8; // rsi
  unsigned __int64 HandlePointer; // r13
  unsigned __int64 WaitObjectFlagMask; // rdx
  signed __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r14d
  char v14; // r12
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rbx
  __int64 KernelTime; // rcx
  __int64 v18; // r12
  __int64 v19; // rbx
  ULONG_PTR v20; // rsi
  ULONG_PTR v21; // r15
  unsigned __int64 *v22; // rax
  unsigned __int64 *v23; // rdi
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r8
  __int128 v26; // rt0
  unsigned __int8 v27; // tt
  int v28; // eax
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rcx
  struct _OBJECT_TYPE *v31; // rdi
  __int64 DefaultObject; // rbx
  unsigned int v33; // ebx
  struct _EX_RUNDOWN_REF *v34; // rsi
  unsigned __int64 v35; // rtt
  char v36; // r13
  WAIT_TYPE v37; // ecx
  PKWAIT_BLOCK v38; // r15
  PVOID *v39; // rbx
  unsigned __int64 v41; // rcx
  __int64 v42; // rax
  struct _KWAIT_BLOCK *Pool2; // rax
  unsigned __int64 v44; // rax
  int v45; // ecx
  PVOID v46; // rbx
  __int64 v47; // rax
  int v48; // eax
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  void *v51; // rsp
  void *v52; // rsp
  signed __int32 v53[8]; // [rsp+0h] [rbp-40h] BYREF
  char v54; // [rsp+40h] [rbp+0h] BYREF
  char v55; // [rsp+41h] [rbp+1h]
  char v56; // [rsp+42h] [rbp+2h]
  BOOLEAN v57; // [rsp+43h] [rbp+3h]
  unsigned int v58; // [rsp+44h] [rbp+4h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+48h] [rbp+8h]
  struct _EX_RUNDOWN_REF *v60; // [rsp+50h] [rbp+10h]
  WAIT_TYPE WaitType; // [rsp+58h] [rbp+18h]
  struct _KTHREAD *v62; // [rsp+60h] [rbp+20h]
  __int128 v63; // [rsp+68h] [rbp+28h] BYREF
  ULONG Count; // [rsp+78h] [rbp+38h]
  int v65; // [rsp+7Ch] [rbp+3Ch]
  unsigned __int64 v66; // [rsp+80h] [rbp+40h]
  __int64 v67; // [rsp+88h] [rbp+48h]
  PNPAGED_LOOKASIDE_LIST Lookaside; // [rsp+90h] [rbp+50h]
  __int64 v69; // [rsp+98h] [rbp+58h]
  _KPROCESS *v70; // [rsp+A0h] [rbp+60h]
  PLARGE_INTEGER Timeout; // [rsp+B0h] [rbp+70h]
  PVOID Object[64]; // [rsp+C0h] [rbp+80h] BYREF
  _QWORD v73[64]; // [rsp+2C0h] [rbp+280h] BYREF

  WaitType = a4;
  v7 = a3;
  v55 = a3;
  v69 = a2;
  v8 = a1;
  Count = a1;
  Timeout = a7;
  v63 = 0LL;
  memset_0(v73, 0, sizeof(v73));
  HandlePointer = 0LL;
  memset_0(Object, 0, sizeof(Object));
  v57 = 0;
  v56 = 0;
  WaitBlockArray = 0LL;
  Lookaside = 0LL;
  if ( (unsigned int)v8 > 3 )
  {
    if ( (unsigned int)v8 > 0xA )
    {
      Lookaside = (PNPAGED_LOOKASIDE_LIST)((char *)&ObpWaitBlockLookaside
                                         + 128 * (unsigned __int64)(((int)v8 - 11) / 0xEu));
      Pool2 = (struct _KWAIT_BLOCK *)ExAllocateFromNPagedLookasideList(Lookaside);
    }
    else
    {
      Pool2 = (struct _KWAIT_BLOCK *)ExAllocatePool2(0x40uLL);
    }
    WaitBlockArray = Pool2;
    if ( Pool2 )
    {
      v56 = 1;
    }
    else
    {
      v57 = KeSetKernelStackSwapEnable(0);
      v49 = 48 * v8 + 15;
      if ( v49 <= 48 * v8 )
        v49 = 0xFFFFFFFFFFFFFF0LL;
      v50 = v49 & 0xFFFFFFFFFFFFFFF0uLL;
      v51 = alloca(v50);
      v52 = alloca(v50);
      WaitBlockArray = (PKWAIT_BLOCK)&v54;
    }
  }
  v13 = 0;
  v14 = 0;
  v54 = 0;
  CurrentThread = KeGetCurrentThread();
  v62 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  v60 = (struct _EX_RUNDOWN_REF *)Process;
  v70 = Process;
  --CurrentThread->KernelApcDisable;
  if ( Process == CurrentThread->Process )
  {
    KernelTime = Process[1].KernelTime;
    v67 = KernelTime;
  }
  else
  {
    KernelTime = ObReferenceProcessHandleTable(Process);
    v67 = KernelTime;
    if ( KernelTime )
    {
      v54 = 1;
    }
    else
    {
      while ( (unsigned int)KernelTime < (unsigned int)v8 )
      {
        WaitObjectFlagMask = *(_QWORD *)(v69 + 8 * KernelTime);
        if ( v7
          || (WaitObjectFlagMask & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL
          || WaitObjectFlagMask > 0xFFFFFFFFFFFFFFFDuLL )
        {
          v58 = -1073741558;
          v36 = 1;
          v34 = v60;
          v38 = WaitBlockArray;
          goto LABEL_36;
        }
        KernelTime = (unsigned int)(KernelTime + 1);
      }
      KernelTime = v67;
    }
  }
  v18 = 0LL;
  while ( 1 )
  {
    v19 = 8 * v18;
    v66 = 8 * v18;
    v20 = *(_QWORD *)(8 * v18 + v69);
    if ( v7 || v20 > 0xFFFFFFFFFFFFFFFDuLL || (v20 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL )
    {
      v21 = KernelTime;
    }
    else
    {
      v20 ^= 0xFFFFFFFF80000000uLL;
      v21 = ObpKernelHandleTable;
    }
    if ( (v20 & 0x3FC) != 0 && (v22 = (unsigned __int64 *)ExpLookupHandleTableEntry(v21, v20), (v23 = v22) != 0LL) )
    {
      _m_prefetchw(v22);
      v24 = *v22;
LABEL_10:
      *(_QWORD *)&v63 = v24;
      v25 = v24;
      *((_QWORD *)&v63 + 1) = v23[1];
      while ( (v25 & 0x1FFFE) != 0 )
      {
        if ( (v25 & 1) == 0 )
        {
          ExpBlockOnLockedHandleEntry(v21, v23);
          _m_prefetchw(v23);
          v24 = *v23;
          goto LABEL_10;
        }
        *(_QWORD *)&v26 = v25;
        *((_QWORD *)&v26 + 1) = *((_QWORD *)&v63 + 1);
        v27 = _InterlockedCompareExchange128(
                (volatile signed __int64 *)v23,
                *((signed __int64 *)&v26 + 1),
                v25 - 2,
                (signed __int64 *)&v26);
        WaitObjectFlagMask = *((_QWORD *)&v26 + 1);
        v25 = v26;
        v63 = v26;
        if ( v27 )
        {
          if ( (unsigned __int16)(v25 >> 1) == 16 )
          {
            *(_QWORD *)&v63 = v25 & 0xFFFFFFFFFFFE0001uLL | (2LL * (unsigned __int16)((v25 >> 1) - 1));
            HandlePointer = ExGetHandlePointer((__int64 *)&v63);
            v47 = _InterlockedExchangeAdd64((volatile signed __int64 *)HandlePointer, 0x7FF0uLL);
            if ( v47 <= 0 )
              KeBugCheckEx(0x18u, 0LL, HandlePointer + 48, 0x10uLL, v47 + 32752);
            v48 = ExFastReplenishHandleTableEntry((volatile signed __int64 *)v23, (unsigned __int64 *)&v63, 32752);
            if ( v48 )
              _InterlockedAdd64((volatile signed __int64 *)HandlePointer, -v48);
          }
          else
          {
            HandlePointer = ExGetHandlePointer((__int64 *)&v63);
          }
          goto LABEL_17;
        }
      }
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v23);
          v11 = *v23;
          if ( (*v23 & 1) != 0 )
            break;
          if ( !v11 )
          {
            v19 = v66;
            goto LABEL_62;
          }
          ExpBlockOnLockedHandleEntry(v21, v23);
        }
      }
      while ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)v23, v11 - 1, v11) );
      HandlePointer = ExGetHandlePointer((__int64 *)v23);
      v63 = *(_OWORD *)v23;
      v41 = (int)(ExSlowReplenishHandleTableEntry(v23) + 1);
      v42 = _InterlockedExchangeAdd64((volatile signed __int64 *)HandlePointer, v41);
      if ( v42 <= 0 )
        KeBugCheckEx(0x18u, 0LL, HandlePointer + 48, 0x10uLL, v41 + v42);
      _InterlockedIncrement64((volatile signed __int64 *)v23);
      _InterlockedOr(v53, 0);
      if ( *(_QWORD *)(v21 + 48) )
        ExfUnblockPushLock(v21 + 48, 0LL);
LABEL_17:
      v19 = v66;
    }
    else
    {
LABEL_62:
      if ( v20 )
        ExHandleLogBadReference(v21, v20, KeGetCurrentThread()->PreviousMode);
      v23 = 0LL;
    }
    if ( !v23 )
    {
LABEL_60:
      v58 = -1073741816;
      goto LABEL_90;
    }
    v28 = DWORD2(v63) & 0x1FFFFFF;
    v65 = ++v13;
    v29 = HandlePointer + 48;
    *(_QWORD *)((char *)v73 + v19) = HandlePointer + 48;
    v7 = v55;
    if ( v55 == 1 )
    {
      if ( (~v28 & 0x100000) != 0 )
      {
        v58 = -1073741790;
        goto LABEL_90;
      }
      if ( (*(_BYTE *)(HandlePointer + 26) & 0x40) != 0 )
      {
        v30 = HandlePointer - ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 0x7F];
        if ( *(_BYTE *)(*(_QWORD *)v30 + 24LL) )
        {
          if ( *(_QWORD *)(*(_QWORD *)v30 + 16LL) == 1LL )
          {
            v58 = -1073700858;
            goto LABEL_90;
          }
        }
      }
    }
    v31 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)];
    if ( WaitType != WaitAny && v31 == IoCompletionObjectType )
      goto LABEL_60;
    if ( v31 == ExCrossVmMutantObjectType )
    {
      v58 = -1073741788;
LABEL_90:
      CurrentThread = v62;
      v14 = v54;
      v36 = 1;
      v34 = v60;
      v38 = WaitBlockArray;
      goto LABEL_36;
    }
    ObpTraceObjectReferenceIfActive(HandlePointer);
    DefaultObject = (__int64)v31->DefaultObject;
    if ( (DefaultObject & 1) == 0 )
    {
      if ( DefaultObject < 0 )
        goto LABEL_29;
      goto LABEL_28;
    }
    if ( (DefaultObject & 2) != 0 )
    {
      WaitObjectFlagMask = v31->TypeInfo.WaitObjectFlagMask;
      if ( ((unsigned int)WaitObjectFlagMask & *(_DWORD *)(v31->TypeInfo.WaitObjectFlagOffset + v29)) != (_DWORD)WaitObjectFlagMask )
      {
        DefaultObject -= 3LL;
LABEL_28:
        DefaultObject += v29;
        goto LABEL_29;
      }
      DefaultObject = *(_QWORD *)(v31->TypeInfo.WaitObjectPointerOffset + v29);
    }
    else
    {
      DefaultObject = *(_QWORD *)(DefaultObject + v29 - 1);
    }
LABEL_29:
    Object[v66 / 8] = (PVOID)DefaultObject;
    v18 = (unsigned int)(v18 + 1);
    v33 = Count;
    if ( (unsigned int)v18 >= Count )
      break;
    KernelTime = v67;
  }
  v14 = v54;
  v34 = v60;
  if ( v54 )
  {
    v14 = 0;
    v54 = 0;
    _m_prefetchw(&v60[61]);
    v35 = v60[61].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v35 != _InterlockedCompareExchange64((volatile signed __int64 *)&v60[61], v35 - 2, v35) )
      ExfReleaseRundownProtection(v34 + 61);
  }
  CurrentThread = v62;
  KiLeaveCriticalRegionUnsafe((__int64)v62, WaitObjectFlagMask, v11, v12);
  v36 = 0;
  v55 = 0;
  v37 = WaitType;
  if ( WaitType )
    goto LABEL_35;
  v12 = 1LL;
LABEL_67:
  if ( (unsigned int)v12 >= v33 )
  {
    v37 = WaitType;
LABEL_35:
    v38 = WaitBlockArray;
    v58 = KeWaitForMultipleObjects(v33, Object, v37, UserRequest, WaitMode, Alertable, Timeout, WaitBlockArray);
    goto LABEL_36;
  }
  v45 = v12;
  WaitObjectFlagMask = (unsigned __int64)Object[(unsigned int)v12];
  while ( 1 )
  {
    v11 = (unsigned int)(v45 - 1);
    v46 = Object[v11];
    if ( WaitObjectFlagMask > (unsigned __int64)v46 )
    {
LABEL_79:
      Object[v45] = (PVOID)WaitObjectFlagMask;
      v12 = (unsigned int)(v12 + 1);
      v33 = Count;
      goto LABEL_67;
    }
    if ( (PVOID)WaitObjectFlagMask == v46 )
      break;
    Object[v45--] = v46;
    if ( !(_DWORD)v11 )
      goto LABEL_79;
  }
  v58 = -1073741776;
  v38 = WaitBlockArray;
LABEL_36:
  if ( v13 )
  {
    v39 = (PVOID *)&v73[v13];
    do
    {
      ObfDereferenceObjectWithTag(*--v39, 0x7457624Fu);
      --v13;
    }
    while ( v13 );
  }
  if ( v36 )
  {
    if ( v14 )
    {
      _m_prefetchw(&v34[61]);
      v44 = v34[61].Count & 0xFFFFFFFFFFFFFFFEuLL;
      WaitObjectFlagMask = v44 - 2;
      if ( v44 != _InterlockedCompareExchange64((volatile signed __int64 *)&v34[61], v44 - 2, v44) )
        ExfReleaseRundownProtection(v34 + 61);
    }
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, WaitObjectFlagMask, v11, v12);
  }
  if ( v38 )
  {
    if ( v56 )
    {
      if ( Lookaside )
        ExFreeToNPagedLookasideList(Lookaside, v38);
      else
        ExFreePoolWithTag(v38, 0);
    }
    else
    {
      KeSetKernelStackSwapEnable(v57);
    }
  }
  return v58;
}
