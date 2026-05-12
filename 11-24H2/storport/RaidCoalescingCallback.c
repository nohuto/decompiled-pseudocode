/*
 * XREFs of RaidCoalescingCallback @ 0x1400363E0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     RaidAdapterSystemPowerHintsEnabled @ 0x140036528 (RaidAdapterSystemPowerHintsEnabled.c)
 *     RaidAdapterGetSystemPowerHint @ 0x140036554 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x140036578 (RaidAdapterGetSystemPowerResumeLatency.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x14005838C (McTemplateK0qqqqq_EtwWriteTransfer.c)
 */

char __fastcall RaidCoalescingCallback(int a1, __int64 a2, __int64 a3)
{
  unsigned int SystemPowerResumeLatency; // eax
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned int SystemPowerHint; // eax
  __int64 v9; // rdx
  char v10; // al
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  char v14; // r9
  unsigned int v15; // eax
  __int64 v16; // rdx
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  char v20; // r9
  unsigned __int64 v21; // rcx

  LOBYTE(SystemPowerResumeLatency) = RaidIsAdapterControlSupported(a3 + 376, 12);
  if ( (_BYTE)SystemPowerResumeLatency )
  {
    LOBYTE(SystemPowerResumeLatency) = RaidAdapterSystemPowerHintsEnabled(a3);
    if ( (_BYTE)SystemPowerResumeLatency )
    {
      v6 = ((__int64 (*)(void))RaidAdapterGetSystemPowerHint)();
      SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(v6, v6);
      if ( a1 == 1 )
      {
        *(_BYTE *)(a3 + 108) |= 2u;
        SystemPowerHint = RaidAdapterGetSystemPowerHint(a3, v7, SystemPowerResumeLatency);
        v10 = RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint, v9);
        if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
          McTemplateK0qqqqq_EtwWriteTransfer(v12, v11, v13, *(_DWORD *)(a3 + 56), v11, v13, v14, v10);
        LOBYTE(SystemPowerResumeLatency) = MEMORY[0xFFFFF78000000008];
        *(_QWORD *)(a3 + 5224) = MEMORY[0xFFFFF78000000008];
      }
      else if ( a1 == 2 )
      {
        *(_BYTE *)(a3 + 108) &= ~2u;
        v15 = RaidAdapterGetSystemPowerHint(a3, v7, SystemPowerResumeLatency);
        LOBYTE(SystemPowerResumeLatency) = RaidAdapterGetSystemPowerResumeLatency(v15, v16);
        if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
          LOBYTE(SystemPowerResumeLatency) = McTemplateK0qqqqq_EtwWriteTransfer(
                                               v18,
                                               v17,
                                               v19,
                                               *(_DWORD *)(a3 + 56),
                                               v17,
                                               v19,
                                               v20,
                                               SystemPowerResumeLatency);
        if ( *(_QWORD *)(a3 + 5224) )
        {
          v21 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a3 + 5224);
          LOBYTE(SystemPowerResumeLatency) = 75 * v21;
          *(_QWORD *)(a3 + 5232) += v21 / 0x2710;
          *(_QWORD *)(a3 + 5224) = 0LL;
        }
      }
    }
  }
  return SystemPowerResumeLatency;
}
