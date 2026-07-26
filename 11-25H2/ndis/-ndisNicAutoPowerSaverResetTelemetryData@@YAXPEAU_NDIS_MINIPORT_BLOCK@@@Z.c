/*
 * XREFs of ?ndisNicAutoPowerSaverResetTelemetryData@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140066680
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x140065EE0 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 *     ?ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14014BFA4 (-ndisSelectiveSuspendInitialize@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     memset @ 0x1400EE380 (memset.c)
 */

void __fastcall ndisNicAutoPowerSaverResetTelemetryData(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  KIRQL v2; // di
  __int64 v3; // rax

  if ( (a1->PMHardwareCapabilities.Flags & 6) != 0 )
  {
    SelectiveSuspend = a1->SelectiveSuspend;
    if ( SelectiveSuspend )
    {
      v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
      memset((char *)SelectiveSuspend + 704, 0, 0x390uLL);
      v3 = MEMORY[0xFFFFF78000000014];
      *((_QWORD *)SelectiveSuspend + 89) = *((_QWORD *)SelectiveSuspend + 84);
      *((_DWORD *)SelectiveSuspend + 176) = *((_DWORD *)SelectiveSuspend + 161);
      *((_QWORD *)SelectiveSuspend + 90) = *((_QWORD *)SelectiveSuspend + 86);
      *((_QWORD *)SelectiveSuspend + 91) = v3;
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v2);
    }
  }
}
