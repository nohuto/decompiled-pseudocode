/*
 * XREFs of _wtoi @ 0x1404FE710
 * Callers:
 *     CmpCloneHwProfile @ 0x1407D305C (CmpCloneHwProfile.c)
 *     WmipPrepareWnodeSI @ 0x1409CEBB0 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x1409D0B10 (WmipFindISinGEbyName.c)
 * Callees:
 *     _wtol @ 0x1404FE730 (_wtol.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  return wtol(Str);
}
