/*
 * XREFs of ?xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z @ 0x14022C46C
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14022B0AC (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x14022C22C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsSingleThreadAttached@tagQ@@QEBA_NXZ @ 0x1401E18E8 (-IsSingleThreadAttached@tagQ@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall xxxSendPosMessage(struct tagTHREADINFO **a1, __int64 a2, struct tagWINDOWPOS *a3)
{
  __int64 v3; // r14
  unsigned int v5; // r15d
  struct tagTHREADINFO *v7; // rax
  struct tagTHREADINFO *v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // [rsp+90h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  v5 = a2;
  v7 = PtiCurrent((__int64)a1, a2);
  v8 = v7;
  if ( (*((_DWORD *)v7 + 340) & 0x40000) == 0 || v7 == a1[2] )
  {
    xxxSendTransformableMessageTimeout(a1, v5, 0LL, a3, 0, 0, 0LL, 1, 0);
    goto LABEL_10;
  }
  if ( !tagQ::IsSingleThreadAttached(*((tagQ **)v7 + 59)) )
    goto LABEL_8;
  v9 = *((_QWORD *)v8 + 199);
  if ( !v9 )
    goto LABEL_8;
  if ( *(struct tagTHREADINFO **)(v9 + 16) == v8 )
  {
    LODWORD(v10) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 369LL);
  }
  if ( *(struct tagTHREADINFO **)(*((_QWORD *)v8 + 199) + 16LL) != a1[2] )
  {
LABEL_8:
    v10 = 0LL;
    xxxSendTransformableMessageTimeout(a1, v5, 0LL, a3, 2u, 0x64u, &v10, 1, 0);
LABEL_10:
    *(_QWORD *)a3 = v3;
  }
}
