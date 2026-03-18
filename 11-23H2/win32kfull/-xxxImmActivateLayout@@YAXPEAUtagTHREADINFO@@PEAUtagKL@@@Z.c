/*
 * XREFs of ?xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z @ 0x1C009F498
 * Callers:
 *     EditionImmActivateLayout @ 0x1C009F480 (EditionImmActivateLayout.c)
 *     ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x1C01B7354 (-xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z.c)
 *     ?xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z @ 0x1C01B7734 (-xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01278C0 (xxxSendTransformableMessageTimeout.c)
 */

void __fastcall xxxImmActivateLayout(struct tagTHREADINFO *a1, struct tagKL *a2)
{
  char *v2; // rsi
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rcx
  ULONG_PTR v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD v11[2]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v12[4]; // [rsp+60h] [rbp-28h] BYREF

  v12[2] = 0LL;
  v2 = (char *)a1 + 440;
  if ( *((struct tagKL **)a1 + 55) != a2 )
  {
    if ( *((_QWORD *)a1 + 98) )
    {
      v5 = PtiCurrentShared();
      v6 = *((_QWORD *)a1 + 98);
      v12[0] = *((_QWORD *)v5 + 52);
      *((_QWORD *)v5 + 52) = v12;
      v12[1] = v6;
      HMLockObject(v6);
      v7 = *((_QWORD *)a1 + 98);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v7, 0, 0, 0LL, 1, 1);
      ThreadUnlock1(v9, v8, v10);
    }
    v11[0] = v2;
    v11[1] = a2;
    HMAssignmentLock(v11, 0LL);
  }
}
