/*
 * XREFs of ??$?0AEBT_LARGE_INTEGER@@AEAUCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@$0A@@?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@std@@QEAA@AEBT_LARGE_INTEGER@@AEAUCAPTURE_WINDOW_MAP_ENTRY@CCaptureManager@@@Z @ 0x1800AB4FC
 * Callers:
 *     ?_AddWindowCaptureEntry@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAVCCaptureControllerProxy@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800B2F78 (-_AddWindowCaptureEntry@CCaptureManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowRepresentation@@PEAV.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 */

_QWORD *__fastcall std::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>::pair<_LARGE_INTEGER const,CCaptureManager::CAPTURE_WINDOW_MAP_ENTRY>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  _QWORD *v3; // r9
  CMILRefCountBase *v4; // rcx
  CMILRefCountBase *v5; // rcx

  v3 = a1;
  *a1 = *a2;
  a1[1] = *(_QWORD *)a3;
  v4 = *(CMILRefCountBase **)(a3 + 8);
  v3[2] = v4;
  if ( v4 )
    CMILRefCountBase::AddRef(v4);
  v3[3] = *(_QWORD *)(a3 + 16);
  v5 = *(CMILRefCountBase **)(a3 + 24);
  v3[4] = v5;
  if ( v5 )
    CMILRefCountBase::AddRef(v5);
  *((_BYTE *)v3 + 40) = *(_BYTE *)(a3 + 32);
  *((_BYTE *)v3 + 41) = *(_BYTE *)(a3 + 33);
  return v3;
}
