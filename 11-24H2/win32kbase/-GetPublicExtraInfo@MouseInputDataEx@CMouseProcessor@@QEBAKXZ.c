/*
 * XREFs of ?GetPublicExtraInfo@MouseInputDataEx@CMouseProcessor@@QEBAKXZ @ 0x1400ECE24
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14005081C (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@@Z @ 0x14018BA34 (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessi.c)
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x14018CABC (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x14021E2F0 (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMouseProcessor::MouseInputDataEx::GetPublicExtraInfo(CMouseProcessor::MouseInputDataEx *this)
{
  unsigned int v1; // edx

  v1 = *((_DWORD *)this + 5);
  if ( (*((_BYTE *)this + 2) & 0x50) != 0 )
    return (unsigned __int8)v1 | 0xFF515700;
  else
    return v1;
}
