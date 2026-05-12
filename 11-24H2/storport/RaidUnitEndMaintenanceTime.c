/*
 * XREFs of RaidUnitEndMaintenanceTime @ 0x140078AF0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x14001D890 (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     McTemplateK0zjquuujssstq_EtwWriteTransfer @ 0x140076DC0 (McTemplateK0zjquuujssstq_EtwWriteTransfer.c)
 *     RaidUnitMaintenanceTime @ 0x140078D34 (RaidUnitMaintenanceTime.c)
 */

void __fastcall RaidUnitEndMaintenanceTime(__int64 a1, __int64 a2)
{
  _QWORD **v3; // rsi
  __int64 v4; // r9
  __int64 v5; // rbx

  if ( a2 && RaidUnitCheckAndAcquirePoFx(a2) )
  {
    v3 = (_QWORD **)(a2 + 1872);
    v4 = *(_QWORD *)(a2 + 1872);
    if ( (*(_DWORD *)(v4 + 148) & 1) != 0 )
    {
      if ( (byte_140171466 & 4) != 0 )
        McTemplateK0zjquuujssstq_EtwWriteTransfer(
          a2 + 177,
          a2 + 168,
          a2 + 2104,
          *(const wchar_t **)(*(_QWORD *)(a2 + 24) + 4720LL),
          *(_QWORD *)(a2 + 24) + 5064LL,
          *(_DWORD *)(*(_QWORD *)(a2 + 24) + 56LL),
          *(_BYTE *)(a2 + 104),
          *(_BYTE *)(a2 + 105),
          *(_BYTE *)(a2 + 106),
          a2 + 2104,
          (const char *)(a2 + 168),
          (const char *)(a2 + 177),
          (const char *)(a2 + 242),
          *(_DWORD *)(v4 + 144) == 0,
          *(_DWORD *)(v4 + 144));
      *((_DWORD *)*v3 + 37) &= ~1u;
      v5 = *(_QWORD *)(a2 + 24);
      if ( RaidUnitCheckAndAcquirePoFx(a2) )
      {
        PoFxIdleComponent(**v3, 0LL, 0LL);
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 1864));
        v3 = (_QWORD **)(a2 + 1872);
      }
      if ( *(_QWORD *)(v5 + 4960) )
        RaidAdapterPoFxIdleComponent(v5, 0LL, 0LL);
      if ( *((_DWORD *)*v3 + 36) )
        RaidUnitMaintenanceTime(a2);
      else
        (*v3)[17] = MEMORY[0xFFFFF78000000014];
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 1864));
  }
}
