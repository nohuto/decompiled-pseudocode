/*
 * XREFs of ?ShouldCoalesceMouseInputData@CMouseProcessor@@AEBA_NPEBVMouseInputDataEx@1@PEBU_MOUSE_INPUT_DATA@@PEBUMouseInputProcessingState@@@Z @ 0x14018FA74
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14005081C (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 * Callees:
 *     ApiSetEditionRawInputRequestedForMouse @ 0x1402221D4 (ApiSetEditionRawInputRequestedForMouse.c)
 */

char __fastcall CMouseProcessor::ShouldCoalesceMouseInputData(
        CMouseProcessor *this,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        const struct _MOUSE_INPUT_DATA *a3,
        const struct MouseInputProcessingState *a4)
{
  char v7; // bl
  char v8; // cl
  int v9; // r9d
  int v10; // r8d
  LONG LastX; // edx
  int v12; // edx
  char v13; // r9
  LONG LastY; // edx
  char v15; // al

  if ( !a3 || *((_WORD *)a2 + 2) || a3->ButtonFlags || !a3->LastX && !a3->LastY )
    return 0;
  v7 = 1;
  v8 = *((_BYTE *)a2 + 2) & 1;
  if ( v8 != (a3->Flags & 1) )
    return 0;
  if ( !v8 && (unsigned int)ApiSetEditionRawInputRequestedForMouse() )
  {
    v9 = *((_DWORD *)a4 + 2) + *((_DWORD *)a2 + 3);
    v10 = *((_DWORD *)a4 + 3) + *((_DWORD *)a2 + 4);
    LastX = a3->LastX;
    if ( v9 <= 0 == LastX <= 0 || (v12 = ~v9 ^ ~LastX, v13 = 0, v12 >= 0) )
      v13 = 1;
    LastY = a3->LastY;
    if ( v10 <= 0 == LastY <= 0 || (v15 = 0, (~v10 ^ ~LastY) >= 0) )
      v15 = 1;
    if ( !v13 || !v15 )
      return 0;
  }
  return v7;
}
