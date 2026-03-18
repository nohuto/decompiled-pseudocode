/*
 * XREFs of ExpVerifyCallbackResult @ 0x1407C0A60
 * Callers:
 *     ExRegisterExtension @ 0x1407C0470 (ExRegisterExtension.c)
 *     ExUnregisterExtension @ 0x1407C08C0 (ExUnregisterExtension.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __fastcall ExpVerifyCallbackResult(int a1, int a2)
{
  if ( a2 < 0 )
    KeBugCheckEx(0x203u, 1uLL, a1, a2, 0LL);
}
