/*
 * XREFs of RtlpGetBootStatusPath @ 0x1405E6CBC
 * Callers:
 *     PopBootStatGet @ 0x140A348F8 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x140A34CDC (PopBootStatSet.c)
 *     RtlLockBootStatusData @ 0x140A76500 (RtlLockBootStatusData.c)
 *     PopBootStatRestoreDefaults @ 0x140AA6BD8 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     RtlpGetBootStatusPathFromRegistry @ 0x1405E6D18 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlIsStateSeparationEnabled @ 0x140A579B0 (RtlIsStateSeparationEnabled.c)
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
