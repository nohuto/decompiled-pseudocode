/*
 * XREFs of EmpSearchEntryDatabase @ 0x14057F538
 * Callers:
 *     EmProviderRegisterEntry @ 0x140709C00 (EmProviderRegisterEntry.c)
 *     EmpProviderRegister @ 0x140AB3EE0 (EmpProviderRegister.c)
 *     EmpParseCallbacks @ 0x140C1640C (EmpParseCallbacks.c)
 *     EmpParseEntryTypes @ 0x140C16644 (EmpParseEntryTypes.c)
 *     EmpParseRules @ 0x140C172EC (EmpParseRules.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EmpSearchEntryDatabase(_QWORD *a1)
{
  _QWORD *i; // rdx
  _QWORD *v2; // r8
  __int64 v3; // r9

  for ( i = (_QWORD *)EmpEntryListHead; ; i = (_QWORD *)*i )
  {
    v2 = 0LL;
    if ( !i )
      break;
    v2 = i - 3;
    v3 = *(i - 3) - *a1;
    if ( !v3 )
      v3 = v2[1] - a1[1];
    if ( !v3 )
      break;
  }
  return v2;
}
