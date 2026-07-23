/*
 * XREFs of IopDisassociateThreadIrp @ 0x1405930AC
 * Callers:
 *     IoCancelThreadIo @ 0x1408FE8DC (IoCancelThreadIo.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     IoAllocateErrorLogEntry @ 0x14049D630 (IoAllocateErrorLogEntry.c)
 *     IoWriteErrorLogEntry @ 0x1404A6840 (IoWriteErrorLogEntry.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

LONG_PTR IopDisassociateThreadIrp()
{
  unsigned __int8 CurrentIrql; // bl
  char *p_SystemCallNumber; // rsi
  KIRQL v2; // al
  __int64 v3; // rdi
  KIRQL v4; // bp
  LONG_PTR result; // rax
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  void *v11; // rdi
  _DWORD *ErrorLogEntry; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
  p_SystemCallNumber = (char *)&KeGetCurrentThread()[1].SystemCallNumber;
  if ( *(char **)p_SystemCallNumber == p_SystemCallNumber )
    goto LABEL_6;
  v2 = KeAcquireQueuedSpinLock(0xBuLL);
  v3 = *(_QWORD *)p_SystemCallNumber;
  v4 = v2;
  if ( *(char *)(*(_QWORD *)p_SystemCallNumber + 35LL) == *(char *)(*(_QWORD *)p_SystemCallNumber + 34LL) + 2 )
  {
    KeReleaseQueuedSpinLock(0xBuLL, v2);
LABEL_6:
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    return result;
  }
  ObfReferenceObjectWithTag(*(PVOID *)(v3 + 120), 0x746C6644u);
  v6 = *(_QWORD **)p_SystemCallNumber;
  if ( *(char **)(*(_QWORD *)p_SystemCallNumber + 8LL) != p_SystemCallNumber
    || (v7 = *v6, *(_QWORD **)(*v6 + 8LL) != v6)
    || (*(_QWORD *)p_SystemCallNumber = v7,
        *(_QWORD *)(v7 + 8) = p_SystemCallNumber,
        *(_QWORD *)(v3 + 8) = v3,
        *(_QWORD *)v3 = v3,
        v8 = (_QWORD *)qword_140F8C9E8,
        *(__int64 **)qword_140F8C9E8 != &IopDeadIrps) )
  {
    __fastfail(3u);
  }
  *v6 = &IopDeadIrps;
  v6[1] = v8;
  *v8 = v6;
  qword_140F8C9E8 = (__int64)v6;
  if ( *(_BYTE *)(v3 + 35) <= *(_BYTE *)(v3 + 34)
    && (v9 = *(_QWORD *)(v3 + 160)) != 0
    && (v10 = *(_QWORD *)(v3 + 152), v11 = *(void **)(v10 + 40), *(void **)(v9 + 8) == v11) )
  {
    ObfReferenceObjectWithTag(*(PVOID *)(v10 + 40), 0x746C6644u);
  }
  else
  {
    v11 = 0LL;
  }
  KeReleaseQueuedSpinLock(0xBuLL, v4);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v11 )
  {
    ErrorLogEntry = IoAllocateErrorLogEntry(v11, 0x30u);
    if ( ErrorLogEntry )
    {
      ErrorLogEntry[3] = -2147221450;
      IoWriteErrorLogEntry(ErrorLogEntry);
    }
    return ObfDereferenceObjectWithTag(v11, 0x746C6644u);
  }
  return result;
}
