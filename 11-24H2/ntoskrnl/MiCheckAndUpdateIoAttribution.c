/*
 * XREFs of MiCheckAndUpdateIoAttribution @ 0x1403C6078
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     MiValidFault @ 0x1404F2C70 (MiValidFault.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     IoDiskIoAttributionDereference @ 0x140245180 (IoDiskIoAttributionDereference.c)
 *     IoReferenceIoAttributionFromThread @ 0x1403C6140 (IoReferenceIoAttributionFromThread.c)
 */

void __fastcall MiCheckAndUpdateIoAttribution(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rbp
  unsigned __int64 v6; // rbp

  CurrentThread = KeGetCurrentThread();
  v2 = *(_QWORD *)(a1 + 16);
  if ( qword_140E2DB80 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140E2DB80;
  v3 = *(_QWORD *)(v2 >> 16);
  if ( (*(_DWORD *)(v3 + 56) & 0x20) == 0 && (int)IoReferenceIoAttributionFromThread(CurrentThread) >= 0 )
  {
    if ( (*(_QWORD *)(v3 + 120) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      v5 = *(_QWORD *)(v3 + 120);
      *(_QWORD *)(v3 + 120) = v5 & 7;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      v6 = v5 & 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v6 )
        return;
      v4 = v6;
    }
    else
    {
      v4 = 0LL;
    }
    IoDiskIoAttributionDereference(v4);
  }
}
