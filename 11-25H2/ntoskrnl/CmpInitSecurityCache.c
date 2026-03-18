/*
 * XREFs of CmpInitSecurityCache @ 0x140A34BA4
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x14091C778 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpHiveInitialize @ 0x140A34AE0 (CmpHiveInitialize.c)
 *     CmpGetSystemControlValues @ 0x140C377A8 (CmpGetSystemControlValues.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpInitSecurityCache(__int64 a1)
{
  _QWORD *v1; // rcx
  __int64 result; // rax

  *(_DWORD *)(a1 + 1880) = -1;
  *(_QWORD *)(a1 + 1888) = 0LL;
  *(_QWORD *)(a1 + 1872) = 0LL;
  v1 = (_QWORD *)(a1 + 1896);
  result = 64LL;
  do
  {
    v1[1] = v1;
    *v1 = v1;
    v1 += 2;
    --result;
  }
  while ( result );
  return result;
}
