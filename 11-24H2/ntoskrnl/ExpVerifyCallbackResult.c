/*
 * XREFs of ExpVerifyCallbackResult @ 0x1407C0EB0
 * Callers:
 *     ExRegisterExtension @ 0x1407C08C0 (ExRegisterExtension.c)
 *     ExUnregisterExtension @ 0x1407C0D10 (ExUnregisterExtension.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall ExpVerifyCallbackResult(int a1, int a2)
{
  if ( a2 < 0 )
    KeBugCheckEx(0x203u, 1uLL, a1, a2, 0LL);
}
