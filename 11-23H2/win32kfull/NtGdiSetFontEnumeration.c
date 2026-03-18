/*
 * XREFs of NtGdiSetFontEnumeration @ 0x1C02AD1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtGdiSetFontEnumeration()
{
  Gre::Base *v0; // rcx

  EngSetLastError(0x32u);
  return *((unsigned int *)Gre::Base::Globals(v0) + 41);
}
