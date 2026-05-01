/*
 * XREFs of ?HampHostIsElasticRecipient@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005A930
 * Callers:
 *     ?HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x18001A264 (-HampActInsert@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x1800243C0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampHostIsElasticRecipient(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rax

  v1 = (_QWORD *)((char *)a1 + 608);
  v2 = (_QWORD *)*v1;
  return (_QWORD *)*v1 != v1 && v2 != (_QWORD *)96 && (v2[2] & 0x80000) != 0;
}
