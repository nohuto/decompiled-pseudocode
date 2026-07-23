/*
 * XREFs of RtlpGetBootStatusPath @ 0x1405DD61C
 * Callers:
 *     PopBootStatGet @ 0x140A1C0B0 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x140A1C6F8 (PopBootStatSet.c)
 *     RtlLockBootStatusData @ 0x140A7A490 (RtlLockBootStatusData.c)
 *     PopBootStatRestoreDefaults @ 0x140AA6644 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     RtlpGetBootStatusPathFromRegistry @ 0x1405DD678 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlIsStateSeparationEnabled @ 0x140A28CA0 (RtlIsStateSeparationEnabled.c)
 */

char __fastcall RtlpGetBootStatusPath(const wchar_t **a1, char *a2)
{
  int BootStatusPathFromRegistry; // eax
  char v5; // bl
  const wchar_t *v6; // rcx

  BootStatusPathFromRegistry = RtlpGetBootStatusPathFromRegistry();
  v5 = 0;
  if ( BootStatusPathFromRegistry < 0 )
  {
    LOBYTE(BootStatusPathFromRegistry) = RtlIsStateSeparationEnabled();
    v6 = L"\\OSDataRoot\\Windows\\bootstat.dat";
    if ( !(_BYTE)BootStatusPathFromRegistry )
      v6 = L"\\SystemRoot\\bootstat.dat";
    *a1 = v6;
  }
  else
  {
    v5 = 1;
  }
  *a2 = v5;
  return BootStatusPathFromRegistry;
}
