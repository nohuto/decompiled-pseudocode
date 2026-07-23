/*
 * XREFs of _wtoi @ 0x1404FBFD0
 * Callers:
 *     CmpCloneHwProfile @ 0x1407D354C (CmpCloneHwProfile.c)
 *     WmipFindISinGEbyName @ 0x1409AFB60 (WmipFindISinGEbyName.c)
 *     WmipPrepareWnodeSI @ 0x1409B3B80 (WmipPrepareWnodeSI.c)
 * Callees:
 *     _wtol @ 0x1404FBFF0 (_wtol.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  return wtol(Str);
}
