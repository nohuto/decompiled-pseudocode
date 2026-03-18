/*
 * XREFs of RtlpGetBootStatusPath @ 0x1405E976C
 * Callers:
 *     PopBootStatGet @ 0x140A3F048 (PopBootStatGet.c)
 *     PopBootStatSet @ 0x140A3F42C (PopBootStatSet.c)
 *     RtlLockBootStatusData @ 0x140A7C200 (RtlLockBootStatusData.c)
 *     PopBootStatRestoreDefaults @ 0x140AABC04 (PopBootStatRestoreDefaults.c)
 * Callees:
 *     RtlpGetBootStatusPathFromRegistry @ 0x1405E97C8 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlIsStateSeparationEnabled @ 0x14085F810 (RtlIsStateSeparationEnabled.c)
 */

__int64 __fastcall RtlpGetBootStatusPath(const wchar_t **a1, char *a2)
{
  __int64 result; // rax
  char v5; // bl
  const wchar_t *v6; // rcx

  result = RtlpGetBootStatusPathFromRegistry();
  v5 = 0;
  if ( (int)result < 0 )
  {
    result = RtlIsStateSeparationEnabled();
    v6 = L"\\OSDataRoot\\Windows\\bootstat.dat";
    if ( !(_BYTE)result )
      v6 = L"\\SystemRoot\\bootstat.dat";
    *a1 = v6;
  }
  else
  {
    v5 = 1;
  }
  *a2 = v5;
  return result;
}
