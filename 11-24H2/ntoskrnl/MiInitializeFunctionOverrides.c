/*
 * XREFs of MiInitializeFunctionOverrides @ 0x140C4F99C
 * Callers:
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     VslInitFunctionOverrideCapabilities @ 0x14058F0A8 (VslInitFunctionOverrideCapabilities.c)
 *     RtlFunctionOverrideSelfTest @ 0x1406A3720 (RtlFunctionOverrideSelfTest.c)
 *     RtlInitFunctionOverrideCapabilities @ 0x140787DC4 (RtlInitFunctionOverrideCapabilities.c)
 */

char __fastcall MiInitializeFunctionOverrides(__int64 a1)
{
  int inited; // eax

  if ( !RtlFunctionOverrideSelfTest() )
    KeBugCheckEx(0x1Au, 0x301uLL, 0LL, 0LL, 0LL);
  if ( (MiFlags & 0x4000) != 0 )
  {
    inited = VslInitFunctionOverrideCapabilities((struct _MDL *)&unk_140E2D9C0);
    if ( inited < 0 )
      KeBugCheckEx(0x1Au, 0x1083uLL, inited, 0LL, 0LL);
  }
  else
  {
    LOBYTE(inited) = RtlInitFunctionOverrideCapabilities(&unk_140E2D9C0, *(_QWORD *)(*(_QWORD *)(a1 + 240) + 3880LL));
  }
  return inited;
}
