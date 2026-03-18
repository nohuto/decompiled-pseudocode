/*
 * XREFs of ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400E8790
 * Callers:
 *     ?DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB368 (-DoTPGestureProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB6F0 (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CC0FC (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CC728 (-DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?ApplyHeuristics@CPTPEngine@@AEAAXPEAUPTPInput@@_N1@Z @ 0x1400E7B6C (-ApplyHeuristics@CPTPEngine@@AEAAXPEAUPTPInput@@_N1@Z.c)
 *     ?HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x14019078C (-HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPTPEngine::ResetDragThresholds(CPTPEngine *this, struct PTPInput *a2)
{
  unsigned int v2; // r8d
  _QWORD *v5; // r10
  __int64 v6; // rdx
  int v7; // ecx
  unsigned int v8; // ecx

  v2 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v5 = (_QWORD *)((char *)a2 + 96);
    do
    {
      v6 = 328LL * (unsigned int)(*((_DWORD *)v5 - 9) % *((_DWORD *)this + 4));
      v7 = *(_DWORD *)((char *)this + v6 + 816);
      if ( (v7 & 1) != 0 )
      {
        v8 = v7 & 0xFFEFFFFB;
        *(_QWORD *)((char *)this + v6 + 832) = *v5;
        *(_QWORD *)((char *)this + v6 + 944) = *(_QWORD *)a2;
        *(_DWORD *)((char *)this + v6 + 952) = *((_DWORD *)a2 + 6);
        *(_DWORD *)((char *)this + v6 + 816) = v8;
        if ( (v8 & 0x80u) == 0 )
          *(_DWORD *)((char *)this + v6 + 816) = v8 & 0xFFFDFFFF;
      }
      ++v2;
      v5 += 12;
    }
    while ( v2 < *((_DWORD *)a2 + 12) );
  }
}
