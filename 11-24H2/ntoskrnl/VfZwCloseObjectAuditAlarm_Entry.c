/*
 * XREFs of VfZwCloseObjectAuditAlarm_Entry @ 0x140B96000
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140B96CE0 (ViZwCheckUnicodeString.c)
 *     ViZwShouldCheck @ 0x140B96DC4 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwCloseObjectAuditAlarm_Entry(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r8

  result = ViZwShouldCheck(a1, a2, a1);
  if ( (_DWORD)result )
    return ViZwCheckUnicodeString(*(_QWORD *)(v3 + 24), *(_QWORD *)v3);
  return result;
}
