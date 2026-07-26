/*
 * XREFs of ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014A5F4
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z @ 0x14014A74C (-ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015DDF0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x14015DFC0 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140174910 (-ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisPcwNotifyMiniportCreation(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_PCW_DATA_BLOCK *PcwDataBlock; // rcx
  __int64 v3; // r9
  KLockHolder v4; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v4, &ndisPcwMutex);
  PcwDataBlock = a1->IfBlock->PcwDataBlock;
  if ( PcwDataBlock )
  {
    a1->Reserved4.Buffer = (wchar_t *)PcwDataBlock;
    *((_QWORD *)PcwDataBlock + 22) = a1;
    ++*((_DWORD *)a1->Reserved4.Buffer + 42);
    ndisPcwUpdateMiniportDataBlock(a1->Reserved4.Buffer, 1LL, 0LL, 0LL);
    ndisPcwUpdateMiniportDataBlock(a1->Reserved4.Buffer, (unsigned int)(v3 + 2), 0LL, v3);
  }
  KLockHolder::ReleaseExclusive(&v4);
  ndisPcwEnableAlwaysOnCounters(a1);
  KLockHolder::~KLockHolder(&v4);
}
