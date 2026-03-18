/*
 * XREFs of ?ContainsMotionData@MouseInputDataEx@CMouseProcessor@@QEBA_NXZ @ 0x1400E8C48
 * Callers:
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1400501A8 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14005081C (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMouseProcessor::MouseInputDataEx::ContainsMotionData(CMouseProcessor::MouseInputDataEx *this)
{
  bool result; // al

  if ( (*((_BYTE *)this + 2) & 1) != 0 )
    return 1;
  result = 0;
  if ( *((_DWORD *)this + 3) || *((_DWORD *)this + 4) )
    return 1;
  return result;
}
