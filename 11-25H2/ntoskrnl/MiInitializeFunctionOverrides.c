/*
 * XREFs of MiInitializeFunctionOverrides @ 0x140C3E76C
 * Callers:
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     VslInitFunctionOverrideCapabilities @ 0x14058B8C8 (VslInitFunctionOverrideCapabilities.c)
 *     RtlFunctionOverrideSelfTest @ 0x140698540 (RtlFunctionOverrideSelfTest.c)
 *     RtlInitFunctionOverrideCapabilities @ 0x140778B74 (RtlInitFunctionOverrideCapabilities.c)
 */

char __fastcall MiInitializeFunctionOverrides(__int64 a1)
{
  int inited; // eax

  if ( !RtlFunctionOverrideSelfTest() )
    KeBugCheckEx(0x1Au, 0x301uLL, 0LL, 0LL, 0LL);
  if ( (MiFlags & 0x4000) != 0 )
  {
    inited = VslInitFunctionOverrideCapabilities((struct _MDL *)&unk_140E2D780);
    if ( inited < 0 )
      KeBugCheckEx(0x1Au, 0x1083uLL, inited, 0LL, 0LL);
  }
  else
  {
    LOBYTE(inited) = RtlInitFunctionOverrideCapabilities(&unk_140E2D780, *(_QWORD *)(*(_QWORD *)(a1 + 240) + 3880LL));
  }
  return inited;
}
