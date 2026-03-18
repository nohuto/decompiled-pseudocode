/*
 * XREFs of ?ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z @ 0x18029D2B0
 * Callers:
 *     ?ProcessApplyPositionShift@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_APPLYPOSITIONSHIFT@@PEBXI@Z @ 0x18029D768 (-ProcessApplyPositionShift@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTI.c)
 * Callees:
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x180014980 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1800E3B2C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CInteractionTracker::ApplyPositionShift(__int64 a1, int a2, float a3)
{
  int v3; // r8d
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = *(_DWORD *)(a1 + 184);
  if ( v3 )
  {
    if ( (unsigned int)(v3 - 1) <= 1 && CInteractionTracker::AreInteractionAnimationsAlive((CInteractionTracker *)a1) )
    {
      if ( v4 )
      {
        if ( v4 != 1 )
          ModuleFailFastForHRESULT(0x80070057, retaddr);
        v6 = *(_QWORD *)(v5 + 344);
      }
      else
      {
        v6 = *(_QWORD *)(v5 + 336);
      }
      *(float *)(v6 + 576) = a3 + *(float *)(v6 + 576);
    }
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 96);
    v8 = *(_QWORD *)(a1 + 88);
    v9 = v7;
    if ( a2 )
      *((float *)&v8 + 1) = *((float *)&v8 + 1) + a3;
    else
      *(float *)&v8 = *(float *)&v8 + a3;
    CInteractionTracker::SetPosition(a1, (__int64)&v8, 0);
  }
}
