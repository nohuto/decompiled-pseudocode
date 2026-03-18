/*
 * XREFs of Crashdump_Register_SaveStateForHybridSleep @ 0x1400524EC
 * Callers:
 *     Crashdump_Cleanup @ 0x1400504F0 (Crashdump_Cleanup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Crashdump_Register_SaveStateForHybridSleep(__int64 a1)
{
  _DWORD *v1; // rsi
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int i; // edi
  int v5; // eax
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_DWORD **)(*(_QWORD *)a1 + 32LL);
  v2 = v1[1];
  if ( (v2 & 1) == 0 )
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Controller not halted\n");
    return (unsigned int)-1073741630;
  }
  if ( (v2 & 0x300) != 0 )
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Controller State Save or Restore operation in progress\n");
    return (unsigned int)-1073741630;
  }
  *v1 |= 0x100u;
  v3 = 0;
  _InterlockedOr(v7, 0);
  for ( i = 0; i < 0x14; ++i )
  {
    v5 = v1[1];
    if ( (v5 & 0x400) != 0 )
    {
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Controller State Save failed\n");
      v1[1] = 1024;
      _InterlockedOr(v7, 0);
      return (unsigned int)-1073741630;
    }
    if ( (v5 & 0x100) == 0 )
    {
      DbgPrintEx(0x93u, 3u, "XHCIDUMP: Controller State Save successful\n");
      return v3;
    }
    KeStallExecutionProcessor(0xC8u);
  }
  if ( i == 20 )
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Controller State Save failed to complete\n");
    return (unsigned int)-1073741643;
  }
  return v3;
}
