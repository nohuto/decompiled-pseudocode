/*
 * XREFs of MiCheckAndUpdateIoAttribution @ 0x140273B00
 * Callers:
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14020D960 (IoDiskIoAttributionDereference.c)
 *     IoReferenceIoAttributionFromThread @ 0x140273BD0 (IoReferenceIoAttributionFromThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall MiCheckAndUpdateIoAttribution(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rbp
  unsigned __int64 v7; // rbp
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  if ( qword_140E2DCC0 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140E2DCC0;
  v3 = *(_QWORD *)(v2 >> 16);
  if ( (*(_DWORD *)(v3 + 56) & 0x20) == 0 && (int)IoReferenceIoAttributionFromThread(CurrentThread, &v8) >= 0 )
  {
    v4 = v8;
    if ( v8 == (*(_QWORD *)(v3 + 120) & 0xFFFFFFFFFFFFFFF8uLL) )
    {
      v5 = v8;
    }
    else
    {
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      v6 = *(_QWORD *)(v3 + 120);
      *(_QWORD *)(v3 + 120) = v4 & 0xFFFFFFFFFFFFFFF8uLL | v6 & 7;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 72));
      v7 = v6 & 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v7 )
        return;
      v5 = v7;
    }
    IoDiskIoAttributionDereference(v5);
  }
}
