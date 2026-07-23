/*
 * XREFs of MiInitializeFunctionOverrides @ 0x140C51B2C
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     VslInitFunctionOverrideCapabilities @ 0x14058C0C8 (VslInitFunctionOverrideCapabilities.c)
 *     RtlFunctionOverrideSelfTest @ 0x1406A476C (RtlFunctionOverrideSelfTest.c)
 *     RtlInitFunctionOverrideCapabilities @ 0x140787CF4 (RtlInitFunctionOverrideCapabilities.c)
 */

char __fastcall MiInitializeFunctionOverrides(__int64 a1)
{
  int inited; // eax

  if ( !RtlFunctionOverrideSelfTest() )
    KeBugCheckEx(0x1Au, 0x301uLL, 0LL, 0LL, 0LL);
  if ( (MiFlags & 0x4000) != 0 )
  {
    inited = VslInitFunctionOverrideCapabilities((struct _MDL *)&unk_140E2DB00);
    if ( inited < 0 )
      KeBugCheckEx(0x1Au, 0x1083uLL, inited, 0LL, 0LL);
  }
  else
  {
    LOBYTE(inited) = RtlInitFunctionOverrideCapabilities(&unk_140E2DB00, *(_QWORD *)(*(_QWORD *)(a1 + 240) + 3880LL));
  }
  return inited;
}
