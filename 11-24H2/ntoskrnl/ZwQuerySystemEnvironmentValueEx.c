/*
 * XREFs of ZwQuerySystemEnvironmentValueEx @ 0x1406A91B0
 * Callers:
 *     SepRmVerifyLsaProtectionLevel @ 0x14078EC48 (SepRmVerifyLsaProtectionLevel.c)
 *     BiDeleteEfiVariable @ 0x1409C13D0 (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemEnvironmentValueEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
