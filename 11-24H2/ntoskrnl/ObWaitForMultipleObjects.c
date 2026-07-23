/*
 * XREFs of ObWaitForMultipleObjects @ 0x140847240
 * Callers:
 *     NtWaitForMultipleObjects @ 0x140977A70 (NtWaitForMultipleObjects.c)
 *     NtWaitForMultipleObjects32 @ 0x14099A960 (NtWaitForMultipleObjects32.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x14020DE80 (ExfReleaseRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402E2DD0 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     KeWaitForMultipleObjects @ 0x14031CC00 (KeWaitForMultipleObjects.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14031F930 (ObpTraceObjectReferenceIfActive.c)
 *     ExGetHandlePointer @ 0x14041B770 (ExGetHandlePointer.c)
 *     ExHandleLogBadReference @ 0x14042D470 (ExHandleLogBadReference.c)
 *     ExSlowReplenishHandleTableEntry @ 0x14043D820 (ExSlowReplenishHandleTableEntry.c)
 *     KeSetKernelStackSwapEnable @ 0x1404415E0 (KeSetKernelStackSwapEnable.c)
 *     ExFastReplenishHandleTableEntry @ 0x14046E920 (ExFastReplenishHandleTableEntry.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExpLookupHandleTableEntry @ 0x1408481F0 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140849D30 (ExpBlockOnLockedHandleEntry.c)
 *     ObReferenceProcessHandleTable @ 0x140894BB0 (ObReferenceProcessHandleTable.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  int v10; // r14d
  char v11; // r12
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *Process; // rbx
  __int64 KernelTime; // rcx
  __int64 v15; // r12
  __int64 v16; // rbx
  ULONG_PTR v17; // rsi
  ULONG_PTR v18; // r15
  unsigned __int64 *v19; // rax
  unsigned __int64 *v20; // rdi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // r8
  __int128 v23; // rt0
  unsigned __int8 v24; // tt
  int v25; // eax
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rcx
  struct _OBJECT_TYPE *v28; // rdi
  __int64 DefaultObject; // rbx
  ULONG v30; // ebx
  struct _EX_RUNDOWN_REF *v31; // rsi
  unsigned __int64 v32; // rtt
  char v33; // r13
  WAIT_TYPE v34; // ecx
  PKWAIT_BLOCK v35; // r15
  PVOID *v36; // rbx
  signed __int64 v38; // r8
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  struct _KWAIT_BLOCK *Pool2; // rax
  unsigned int v42; // r9d
  unsigned __int64 v43; // rtt
  unsigned int v44; // edx
  PVOID v45; // rcx
  __int64 v46; // r8
  PVOID v47; // rbx
  unsigned __int64 v48; // rdx
  __int64 v49; // rax
  int v50; // eax
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rcx
  void *v53; // rsp
  void *v54; // rsp
  signed __int32 v55[8]; // [rsp+0h] [rbp-40h] BYREF
  char v56; // [rsp+40h] [rbp+0h] BYREF
  char v57; // [rsp+41h] [rbp+1h]
  char v58; // [rsp+42h] [rbp+2h]
  BOOLEAN v59; // [rsp+43h] [rbp+3h]
  unsigned int v60; // [rsp+44h] [rbp+4h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+48h] [rbp+8h]
  struct _EX_RUNDOWN_REF *v62; // [rsp+50h] [rbp+10h]
  WAIT_TYPE WaitType; // [rsp+58h] [rbp+18h]
  struct _KTHREAD *v64; // [rsp+60h] [rbp+20h]
  __int128 v65; // [rsp+68h] [rbp+28h] BYREF
  ULONG Count; // [rsp+78h] [rbp+38h]
  int v67; // [rsp+7Ch] [rbp+3Ch]
  unsigned __int64 v68; // [rsp+80h] [rbp+40h]
  __int64 v69; // [rsp+88h] [rbp+48h]
  PNPAGED_LOOKASIDE_LIST Lookaside; // [rsp+90h] [rbp+50h]
  __int64 v71; // [rsp+98h] [rbp+58h]
  _KPROCESS *v72; // [rsp+A0h] [rbp+60h]
  PLARGE_INTEGER Timeout; // [rsp+B0h] [rbp+70h]
  PVOID Object[64]; // [rsp+C0h] [rbp+80h] BYREF
  _QWORD v75[64]; // [rsp+2C0h] [rbp+280h] BYREF

  WaitType = a4;
  v7 = a3;
  v57 = a3;
  v71 = a2;
  v8 = a1;
  Count = a1;
  Timeout = a7;
  v65 = 0LL;
  memset_0(v75, 0, sizeof(v75));
  HandlePointer = 0LL;
  memset_0(Object, 0, sizeof(Object));
  v59 = 0;
  v58 = 0;
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
      Pool2 = (struct _KWAIT_BLOCK *)ExAllocatePool2(0x40uLL, 48 * v8, 0x6D57624Fu);
    }
    WaitBlockArray = Pool2;
    if ( Pool2 )
    {
      v58 = 1;
    }
    else
    {
      v59 = KeSetKernelStackSwapEnable(0);
      v51 = 48 * v8 + 15;
      if ( v51 <= 48 * v8 )
        v51 = 0xFFFFFFFFFFFFFF0LL;
      v52 = v51 & 0xFFFFFFFFFFFFFFF0uLL;
      v53 = alloca(v52);
      v54 = alloca(v52);
      WaitBlockArray = (PKWAIT_BLOCK)&v56;
    }
  }
  v10 = 0;
  v11 = 0;
  v56 = 0;
  CurrentThread = KeGetCurrentThread();
  v64 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  v62 = (struct _EX_RUNDOWN_REF *)Process;
  v72 = Process;
  --CurrentThread->KernelApcDisable;
  if ( Process == CurrentThread->Process )
  {
    KernelTime = Process[1].KernelTime;
    v69 = KernelTime;
  }
  else
  {
    KernelTime = ObReferenceProcessHandleTable(Process);
    v69 = KernelTime;
    if ( KernelTime )
    {
      v56 = 1;
    }
    else
    {
      while ( (unsigned int)KernelTime < (unsigned int)v8 )
      {
        v48 = *(_QWORD *)(v71 + 8 * KernelTime);
        if ( v7 || (v48 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL || v48 > 0xFFFFFFFFFFFFFFFDuLL )
        {
          v60 = -1073741558;
          v33 = 1;
          v31 = v62;
          v35 = WaitBlockArray;
          goto LABEL_36;
        }
        KernelTime = (unsigned int)(KernelTime + 1);
      }
      KernelTime = v69;
    }
  }
  v15 = 0LL;
  while ( 1 )
  {
    v16 = 8 * v15;
    v68 = 8 * v15;
    v17 = *(_QWORD *)(8 * v15 + v71);
    if ( v7 || v17 > 0xFFFFFFFFFFFFFFFDuLL || (v17 & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL )
    {
      v18 = KernelTime;
    }
    else
    {
      v17 ^= 0xFFFFFFFF80000000uLL;
      v18 = ObpKernelHandleTable;
    }
    if ( (v17 & 0x3FC) != 0 && (v19 = (unsigned __int64 *)ExpLookupHandleTableEntry(v18, v17), (v20 = v19) != 0LL) )
    {
      _m_prefetchw(v19);
      v21 = *v19;
LABEL_10:
      *(_QWORD *)&v65 = v21;
      v22 = v21;
      *((_QWORD *)&v65 + 1) = v20[1];
      while ( (v22 & 0x1FFFE) != 0 )
      {
        if ( (v22 & 1) == 0 )
        {
          ExpBlockOnLockedHandleEntry(v18, v20);
          _m_prefetchw(v20);
          v21 = *v20;
          goto LABEL_10;
        }
        *(_QWORD *)&v23 = v22;
        *((_QWORD *)&v23 + 1) = *((_QWORD *)&v65 + 1);
        v24 = _InterlockedCompareExchange128(
                (volatile signed __int64 *)v20,
                *((signed __int64 *)&v23 + 1),
                v22 - 2,
                (signed __int64 *)&v23);
        v22 = v23;
        v65 = v23;
        if ( v24 )
        {
          if ( (unsigned __int16)(v22 >> 1) == 16 )
          {
            *(_QWORD *)&v65 = v22 & 0xFFFFFFFFFFFE0001uLL | (2LL * (unsigned __int16)((v22 >> 1) - 1));
            HandlePointer = ExGetHandlePointer((__int64 *)&v65);
            v49 = _InterlockedExchangeAdd64((volatile signed __int64 *)HandlePointer, 0x7FF0uLL);
            if ( v49 <= 0 )
              KeBugCheckEx(0x18u, 0LL, HandlePointer + 48, 0x10uLL, v49 + 32752);
            v50 = ExFastReplenishHandleTableEntry((volatile signed __int64 *)v20, (unsigned __int64 *)&v65, 32752);
            if ( v50 )
              _InterlockedAdd64((volatile signed __int64 *)HandlePointer, -v50);
          }
          else
          {
            HandlePointer = ExGetHandlePointer((__int64 *)&v65);
          }
          goto LABEL_17;
        }
      }
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v20);
          v38 = *v20;
          if ( (*v20 & 1) != 0 )
            break;
          if ( !v38 )
          {
            v16 = v68;
            goto LABEL_62;
          }
          ExpBlockOnLockedHandleEntry(v18, v20);
        }
      }
      while ( v38 != _InterlockedCompareExchange64((volatile signed __int64 *)v20, v38 - 1, v38) );
      HandlePointer = ExGetHandlePointer((__int64 *)v20);
      v65 = *(_OWORD *)v20;
      v39 = (int)(ExSlowReplenishHandleTableEntry(v20) + 1);
      v40 = _InterlockedExchangeAdd64((volatile signed __int64 *)HandlePointer, v39);
      if ( v40 <= 0 )
        KeBugCheckEx(0x18u, 0LL, HandlePointer + 48, 0x10uLL, v39 + v40);
      _InterlockedIncrement64((volatile signed __int64 *)v20);
      _InterlockedOr(v55, 0);
      if ( *(_QWORD *)(v18 + 48) )
        ExfUnblockPushLock(v18 + 48, 0LL);
LABEL_17:
      v16 = v68;
    }
    else
    {
LABEL_62:
      if ( v17 )
        ExHandleLogBadReference(v18, v17, KeGetCurrentThread()->PreviousMode);
      v20 = 0LL;
    }
    if ( !v20 )
    {
LABEL_60:
      v60 = -1073741816;
      goto LABEL_90;
    }
    v25 = DWORD2(v65) & 0x1FFFFFF;
    v67 = ++v10;
    v26 = HandlePointer + 48;
    *(_QWORD *)((char *)v75 + v16) = HandlePointer + 48;
    v7 = v57;
    if ( v57 == 1 )
    {
      if ( (~v25 & 0x100000) != 0 )
      {
        v60 = -1073741790;
        goto LABEL_90;
      }
      if ( (*(_BYTE *)(HandlePointer + 26) & 0x40) != 0 )
      {
        v27 = HandlePointer - ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 0x7F];
        if ( *(_BYTE *)(*(_QWORD *)v27 + 24LL) )
        {
          if ( *(_QWORD *)(*(_QWORD *)v27 + 16LL) == 1LL )
          {
            v60 = -1073700858;
            goto LABEL_90;
          }
        }
      }
    }
    v28 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)];
    if ( WaitType != WaitAny && v28 == IoCompletionObjectType )
      goto LABEL_60;
    if ( v28 == ExCrossVmMutantObjectType )
    {
      v60 = -1073741788;
LABEL_90:
      CurrentThread = v64;
      v11 = v56;
      v33 = 1;
      v31 = v62;
      v35 = WaitBlockArray;
      goto LABEL_36;
    }
    ObpTraceObjectReferenceIfActive(HandlePointer);
    DefaultObject = (__int64)v28->DefaultObject;
    if ( (DefaultObject & 1) == 0 )
    {
      if ( DefaultObject < 0 )
        goto LABEL_29;
      goto LABEL_28;
    }
    if ( (DefaultObject & 2) != 0 )
    {
      if ( (v28->TypeInfo.WaitObjectFlagMask & *(_DWORD *)(v28->TypeInfo.WaitObjectFlagOffset + v26)) != v28->TypeInfo.WaitObjectFlagMask )
      {
        DefaultObject -= 3LL;
LABEL_28:
        DefaultObject += v26;
        goto LABEL_29;
      }
      DefaultObject = *(_QWORD *)(v28->TypeInfo.WaitObjectPointerOffset + v26);
    }
    else
    {
      DefaultObject = *(_QWORD *)(DefaultObject + v26 - 1);
    }
LABEL_29:
    Object[v68 / 8] = (PVOID)DefaultObject;
    v15 = (unsigned int)(v15 + 1);
    v30 = Count;
    if ( (unsigned int)v15 >= Count )
      break;
    KernelTime = v69;
  }
  v11 = v56;
  v31 = v62;
  if ( v56 )
  {
    v11 = 0;
    v56 = 0;
    _m_prefetchw(&v62[61]);
    v32 = v62[61].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v32 != _InterlockedCompareExchange64((volatile signed __int64 *)&v62[61], v32 - 2, v32) )
      ExfReleaseRundownProtection(v31 + 61);
  }
  CurrentThread = v64;
  KiLeaveCriticalRegionUnsafe((__int64)v64);
  v33 = 0;
  v57 = 0;
  v34 = WaitType;
  if ( WaitType )
    goto LABEL_35;
  v42 = 1;
LABEL_67:
  if ( v42 >= v30 )
  {
    v34 = WaitType;
LABEL_35:
    v35 = WaitBlockArray;
    v60 = KeWaitForMultipleObjects(v30, Object, v34, UserRequest, WaitMode, Alertable, Timeout, WaitBlockArray);
    goto LABEL_36;
  }
  v44 = v42;
  v45 = Object[v42];
  while ( 1 )
  {
    v46 = v44 - 1;
    v47 = Object[v46];
    if ( v45 > v47 )
    {
LABEL_79:
      Object[v44] = v45;
      ++v42;
      v30 = Count;
      goto LABEL_67;
    }
    if ( v45 == v47 )
      break;
    Object[v44--] = v47;
    if ( !(_DWORD)v46 )
      goto LABEL_79;
  }
  v60 = -1073741776;
  v35 = WaitBlockArray;
LABEL_36:
  if ( v10 )
  {
    v36 = (PVOID *)&v75[v10];
    do
    {
      ObfDereferenceObjectWithTag(*--v36, 0x7457624Fu);
      --v10;
    }
    while ( v10 );
  }
  if ( v33 )
  {
    if ( v11 )
    {
      _m_prefetchw(&v31[61]);
      v43 = v31[61].Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v43 != _InterlockedCompareExchange64((volatile signed __int64 *)&v31[61], v43 - 2, v43) )
        ExfReleaseRundownProtection(v31 + 61);
    }
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  if ( v35 )
  {
    if ( v58 )
    {
      if ( Lookaside )
        ExFreeToNPagedLookasideList(Lookaside, v35);
      else
        ExFreePoolWithTag(v35, 0);
    }
    else
    {
      KeSetKernelStackSwapEnable(v59);
    }
  }
  return v60;
}
