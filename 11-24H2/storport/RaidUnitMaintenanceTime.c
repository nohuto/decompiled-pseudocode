/*
 * XREFs of RaidUnitMaintenanceTime @ 0x140078D34
 * Callers:
 *     RaidUnitEndMaintenanceTime @ 0x140078AF0 (RaidUnitEndMaintenanceTime.c)
 *     RaidUnitIoCoalescingCallback @ 0x140078CA0 (RaidUnitIoCoalescingCallback.c)
 *     RaidUnitPowerSettingCallback @ 0x140078F00 (RaidUnitPowerSettingCallback.c)
 * Callees:
 *     RaidUnitPoFxActivateComponent @ 0x14001D8D0 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     McTemplateK0zjquuujsss_EtwWriteTransfer @ 0x140076C24 (McTemplateK0zjquuujsss_EtwWriteTransfer.c)
 */

void __fastcall RaidUnitMaintenanceTime(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rax

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    v2 = *(_QWORD *)(a1 + 1872);
    v3 = *(_DWORD *)(v2 + 32);
    if ( (v3 & 0x100) != 0
      && (v3 & 0x400) != 0
      && (v3 & 0x800) == 0
      && !_interlockedbittestandset((volatile signed __int32 *)(v2 + 148), 0) )
    {
      v4 = *(_QWORD *)(a1 + 1872);
      if ( (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v4 + 136)) <= 864000000000LL )
      {
        *(_DWORD *)(v4 + 148) &= ~1u;
      }
      else
      {
        if ( !*(_QWORD *)(v4 + 128) )
          *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 128LL) = ExAllocateTimer(RaidUnitEndMaintenanceTime, a1, 0LL);
        v5 = *(_QWORD *)(a1 + 1872);
        if ( *(_QWORD *)(v5 + 128) )
        {
          if ( (byte_140171466 & 4) != 0 )
            McTemplateK0zjquuujsss_EtwWriteTransfer(
              a1 + 177,
              a1 + 168,
              a1 + 2104,
              *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4720LL),
              *(_QWORD *)(a1 + 24) + 5064LL,
              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
              *(_BYTE *)(a1 + 104),
              *(_BYTE *)(a1 + 105),
              *(_BYTE *)(a1 + 106),
              a1 + 2104,
              (const char *)(a1 + 168),
              (const char *)(a1 + 177),
              (const char *)(a1 + 242));
          RaidUnitPoFxActivateComponent(a1, 0, 2LL, 0LL);
          *(_DWORD *)(*(_QWORD *)(a1 + 1872) + 144LL) = 0;
          ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 1872) + 128LL), -600000000LL, 0LL, 0LL);
        }
        else
        {
          *(_DWORD *)(v5 + 148) &= ~1u;
        }
      }
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  }
}
