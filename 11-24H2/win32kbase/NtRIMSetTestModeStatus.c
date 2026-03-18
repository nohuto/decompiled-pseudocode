/*
 * XREFs of NtRIMSetTestModeStatus @ 0x1401D50C0
 * Callers:
 *     <none>
 * Callees:
 *     RIMSetTestModeStatus @ 0x1401D3740 (RIMSetTestModeStatus.c)
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x140221E64 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 */

__int64 __fastcall NtRIMSetTestModeStatus(unsigned int a1)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMSetTestModeStatus(a1);
  else
    return 3221225506LL;
}
