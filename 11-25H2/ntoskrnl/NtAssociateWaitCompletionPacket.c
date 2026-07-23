/*
 * XREFs of NtAssociateWaitCompletionPacket @ 0x14027F510
 * Callers:
 *     <none>
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x140253620 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402536F0 (KxWaitForSpinLockAndAcquire.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiWaitSatisfyOther @ 0x14027FA20 (KiWaitSatisfyOther.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtAssociateWaitCompletionPacket(
        HANDLE WaitCompletionPacketHandle,
        HANDLE IoCompletionHandle,
        HANDLE TargetObjectHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation,
        PBOOLEAN AlreadySignaled)
{
  __int64 v8; // rbx
  char v9; // r14
  PVOID v10; // r13
  PVOID v11; // rsi
  int v12; // r12d
  KSPIN_LOCK *v13; // r15
  __int64 v14; // r9
  __int64 v15; // r8
  __int16 *v16; // rdx
  __int16 *v17; // rbx
  char v18; // al
  volatile signed __int32 *v19; // rcx
  __int64 CurrentIrql; // rax
  __int64 v21; // rdx
  __int16 *v22; // rax
  BOOLEAN v23; // si
  volatile signed __int64 *v24; // rcx
  _QWORD *v26; // rcx
  PVOID v27; // rax
  unsigned __int8 v28; // si
  __int16 **v29; // rdx
  __int64 v30; // rcx
  __int64 *v31; // rdx
  unsigned int v32; // r14d
  KPROCESSOR_MODE PreviousMode; // [rsp+30h] [rbp-78h]
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  __int64 v35; // [rsp+40h] [rbp-68h]
  unsigned int v36; // [rsp+48h] [rbp-60h]
  PVOID v37; // [rsp+50h] [rbp-58h] BYREF
  int v38; // [rsp+58h] [rbp-50h]
  PVOID v39; // [rsp+60h] [rbp-48h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+0h]

  LOBYTE(v8) = 0;
  v35 = v8;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(
          WaitCompletionPacketHandle,
          1u,
          IopWaitCompletionPacketObjectType,
          PreviousMode,
          &Object,
          0LL);
  v13 = (KSPIN_LOCK *)Object;
  if ( v12 < 0 )
    goto LABEL_26;
  v37 = 0LL;
  v12 = ObReferenceObjectByHandle(IoCompletionHandle, 2u, IoCompletionObjectType, PreviousMode, &v37, 0LL);
  v10 = v37;
  if ( v12 < 0 )
    goto LABEL_26;
  v39 = 0LL;
  v12 = ObReferenceObjectByHandle(TargetObjectHandle, 0x100000u, 0LL, PreviousMode, &v39, 0LL);
  v11 = v39;
  v38 = v12;
  if ( v12 < 0 )
    goto LABEL_26;
  v15 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)v39 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v39 - 48) >> 8)];
  v16 = *(__int16 **)(v15 + 32);
  if ( ((unsigned __int8)v16 & 1) != 0 )
  {
    if ( ((unsigned __int8)v16 & 2) == 0 )
    {
      v16 = *(__int16 **)((char *)v39 + (_QWORD)v16 - 1);
      goto LABEL_7;
    }
    if ( (*(_DWORD *)(v15 + 176) & *(_DWORD *)((_BYTE *)v39 + *(unsigned __int16 *)(v15 + 180))) == *(_DWORD *)(v15 + 176) )
    {
      v16 = *(__int16 **)((char *)v39 + *(unsigned __int16 *)(v15 + 182));
      goto LABEL_7;
    }
    v16 = (__int16 *)((char *)v16 - 3);
    goto LABEL_6;
  }
  if ( (__int64)v16 >= 0 )
LABEL_6:
    v16 = (__int16 *)((char *)v16 + (_QWORD)v39);
LABEL_7:
  v17 = 0LL;
  if ( v16 != &ObpDefaultObject )
    v17 = v16;
  if ( !v17 || (v18 = *(_BYTE *)v17 & 0x7F, v18 == 2) || v18 == 4 )
  {
    v12 = -1073741583;
    LOBYTE(v8) = v35;
  }
  else
  {
    v9 = 1;
    v19 = (volatile signed __int32 *)(v13 + 12);
    CurrentIrql = KeGetCurrentIrql();
    v35 = CurrentIrql;
    v21 = 2LL;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql);
      v19 = (volatile signed __int32 *)(v13 + 12);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64(v19, 0LL) )
        KxWaitForSpinLockAndAcquire(v19);
    }
    else
    {
      KiAcquireSpinLockInstrumented(v19);
    }
    if ( *((_BYTE *)Object + 104) )
    {
      v12 = -1073741585;
      LOBYTE(v8) = v35;
    }
    else
    {
      v26 = Object;
      *((_BYTE *)Object + 104) = 1;
      v26[6] = KeyContext;
      v26[7] = ApcContext;
      *((_DWORD *)v26 + 18) = IoStatus;
      v26[8] = IoStatusInformation;
      v26[10] = v39;
      v27 = v37;
      v26[11] = v37;
      *((_WORD *)v26 + 8) = 1026;
      v26[3] = v27;
      v26[4] = v17;
      v28 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v28);
      v36 = 0;
      if ( _interlockedbittestandset((volatile signed __int32 *)v17, 7u) )
      {
        do
        {
          v32 = v36 + 1;
          v36 = v32;
          if ( (v32 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v26) )
          {
            HvlNotifyLongSpinWait(v32);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( (*(_DWORD *)v17 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v17, 7u) );
      }
      if ( *((int *)v17 + 1) > 0 )
      {
        KiWaitSatisfyOther(v17, v21, v15, v14);
        v31 = (__int64 *)Object;
        *((_BYTE *)Object + 17) = 5;
        KiInsertQueueInternal((__int64)v37, v31);
        _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
        KiExitDispatcher((unsigned int)KeGetCurrentPrcb(), 0, 1, 0, v28);
        v23 = 1;
      }
      else
      {
        v29 = (__int16 **)*((_QWORD *)v17 + 2);
        if ( *v29 != v17 + 4 )
          __fastfail(3u);
        v22 = (__int16 *)Object;
        *(_QWORD *)Object = v17 + 4;
        *((_QWORD *)v22 + 1) = v29;
        *v29 = v22;
        *((_QWORD *)v17 + 2) = v22;
        _InterlockedAnd((volatile signed __int32 *)v17, 0xFFFFFF7F);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v28);
        __writecr8(v28);
        v23 = 0;
      }
      v24 = (volatile signed __int64 *)((char *)Object + 96);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        _InterlockedAnd64(v24, 0LL);
      else
        KiReleaseSpinLockInstrumented(v24, retaddr);
      LOBYTE(v8) = v35;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v35);
      __writecr8((unsigned __int8)v8);
      v9 = 0;
      if ( AlreadySignaled )
      {
        if ( PreviousMode )
        {
          v30 = 0x7FFFFFFF0000LL;
          if ( (unsigned __int64)AlreadySignaled < 0x7FFFFFFF0000LL )
            v30 = (__int64)AlreadySignaled;
          *(_BYTE *)v30 = *(_BYTE *)v30;
        }
        *AlreadySignaled = v23;
      }
      v10 = 0LL;
      v11 = 0LL;
      v13 = 0LL;
    }
  }
LABEL_26:
  if ( v9 )
    KeReleaseSpinLock(v13 + 12, v8);
  if ( v10 )
    ObfDereferenceObjectWithTag(v10, 0x746C6644u);
  if ( v11 )
    ObfDereferenceObjectWithTag(v11, 0x746C6644u);
  if ( v13 )
    ObfDereferenceObjectWithTag(v13, 0x746C6644u);
  return v12;
}
