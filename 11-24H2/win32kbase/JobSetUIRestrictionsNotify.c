/*
 * XREFs of JobSetUIRestrictionsNotify @ 0x1401AA5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z @ 0x1401AA2F0 (-SetUIRestrictions@Win32JobObject@@YAXPEAU_JOBOBJECT_BASIC_PROCESS_ID_LIST@@@Z.c)
 *     IsModerncoreAtomTableSupported @ 0x14023B4A8 (IsModerncoreAtomTableSupported.c)
 */

void __fastcall JobSetUIRestrictionsNotify(Win32JobObject *this)
{
  struct _JOBOBJECT_BASIC_PROCESS_ID_LIST *v2; // rdx

  if ( (int)IsModerncoreAtomTableSupported() < 0 )
    Win32JobObject::SetUIRestrictions(this, v2);
}
