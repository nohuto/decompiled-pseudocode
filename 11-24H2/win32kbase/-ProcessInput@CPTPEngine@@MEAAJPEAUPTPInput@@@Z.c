/*
 * XREFs of ?ProcessInput@CPTPEngine@@MEAAJPEAUPTPInput@@@Z @ 0x1400CAF50
 * Callers:
 *     <none>
 * Callees:
 *     ?DoFinalProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB07C (-DoFinalProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB368 (-DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB6F0 (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CBE50 (-DoTPDiscreteButtonProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CC0FC (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CC728 (-DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     _lambda_b1e571efbfc61821245745bd1df533a0_::operator() @ 0x1400CCECC (_lambda_b1e571efbfc61821245745bd1df533a0_--operator().c)
 */

__int64 __fastcall CPTPEngine::ProcessInput(CPTPEngine *this, struct PTPInput *a2)
{
  int v3; // eax
  unsigned int v5; // edx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  struct PTPInput *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = a2;
  v3 = *((_DWORD *)a2 + 17);
  v5 = *((_DWORD *)this + 768);
  *((_DWORD *)this + 705) = v3 & 0x70;
  v7[1] = &v8;
  v7[0] = this;
  if ( (v5 & 1) == 0 )
  {
    v5 = *((_DWORD *)this + 768) & 0xFFFFFDFF | ((unsigned __int8)lambda_b1e571efbfc61821245745bd1df533a0_::operator()(
                                                                    v7,
                                                                    (unsigned __int16)(v5 & 0x200) >> 9,
                                                                    16LL) << 9);
    *((_DWORD *)this + 768) = v5;
  }
  if ( (v5 & 2) == 0 )
  {
    v5 = *((_DWORD *)this + 768) & 0xFFFFFBFF | ((unsigned __int8)lambda_b1e571efbfc61821245745bd1df533a0_::operator()(
                                                                    v7,
                                                                    (unsigned __int16)(v5 & 0x400) >> 10,
                                                                    32LL) << 10);
    *((_DWORD *)this + 768) = v5;
  }
  if ( (v5 & 4) == 0 )
    *((_DWORD *)this + 768) = *((_DWORD *)this + 768) & 0xFFFFF7FF | ((unsigned __int8)lambda_b1e571efbfc61821245745bd1df533a0_::operator()(
                                                                                         v7,
                                                                                         (unsigned __int16)(v5 & 0x800) >> 11,
                                                                                         64LL) << 11);
  CPTPEngine::ProcessInputFrame(this, a2);
  CPTPEngine::DoTPButtonAndDragProcessing(this, a2);
  CPTPEngine::DoTPDiscreteButtonProcessing(this, a2);
  CPTPEngine::DoTPGestureProcessing(this, a2);
  CPTPEngine::DoTPMouseProcessing(this, a2);
  CPTPEngine::DoFinalProcessing(this, a2);
  return 0LL;
}
