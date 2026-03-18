/*
 * XREFs of ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x140040D8C
 * Callers:
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x140318A20 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x14031A9CC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ProtectableFromChange::IsModifyingActionAllowed(
        ProtectableFromChange *this,
        unsigned __int8 a2)
{
  unsigned int v2; // ebx
  int v4; // eax

  v2 = a2;
  if ( a2 >= *((_BYTE *)this + 20) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 243;
  }
  v4 = *((unsigned __int16 *)this + 11);
  return _bittest(&v4, v2);
}
