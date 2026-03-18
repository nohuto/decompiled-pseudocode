/*
 * XREFs of VidSchiCleanupQueuedCommand @ 0x140053090
 * Callers:
 *     VidSchFlushAdapter @ 0x1400A6CB0 (VidSchFlushAdapter.c)
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1400316A0 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchiCleanupPacket_PriorityTable @ 0x1400A801C (VidSchiCleanupPacket_PriorityTable.c)
 */

void __fastcall VidSchiCleanupQueuedCommand(struct _VIDSCH_GLOBAL *a1)
{
  struct _ERESOURCE *v1; // rdi
  char v3; // al
  _BYTE v4[56]; // [rsp+20h] [rbp-38h] BYREF

  v1 = (struct _ERESOURCE *)((char *)a1 + 1240);
  if ( (*((_DWORD *)a1 + 698) & 2) != 0 )
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1240), 1u);
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v4, (unsigned __int64 *)a1 + 248, 1, 0);
  *((_BYTE *)a1 + 3268) |= 1u;
  AcquireSpinLock::Release((AcquireSpinLock *)v4);
  VidSchiCleanupPacket_PriorityTable(a1);
  v3 = *((_BYTE *)a1 + 3268);
  if ( (v3 & 2) == 0 )
    *((_BYTE *)a1 + 3268) = v3 & 0xFE;
  if ( (*((_DWORD *)a1 + 698) & 2) != 0 )
    ExReleaseResourceLite(v1);
  AcquireSpinLock::Release((AcquireSpinLock *)v4);
}
