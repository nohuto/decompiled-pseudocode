/*
 * XREFs of KiParseLoadOptions @ 0x140B57170
 * Callers:
 *     KiInitializeXSaveConfiguration @ 0x140B56AA0 (KiInitializeXSaveConfiguration.c)
 * Callees:
 *     KiMatchLoadOption @ 0x140B57128 (KiMatchLoadOption.c)
 */

void __fastcall KiParseLoadOptions(const char *a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v2 = 0LL;
    if ( KiMatchLoadOption(a1, "XSAVEPOLICY", 11LL, &v2) )
      KeXSavePolicyId = v2;
    if ( KiMatchLoadOption(a1, "XSAVEREMOVEFEATURE", 18LL, &v2) && v2 )
      KeTestRemovedFeatureMask = v2 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( KiMatchLoadOption(a1, "XSAVEDISABLE", 12LL, &v2) )
      KeTestDisableXSave = v2 != 0;
  }
}
