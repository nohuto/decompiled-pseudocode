/*
 * XREFs of ?UpdateOnManipulationThreadWithoutDelta@CManipulation@@UEAAJAEBUUpdateOnManipulationThreadWithoutDeltaArgs@@@Z @ 0x1800E8A70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z @ 0x1800EA7F8 (-_ResetManipulationThreadDataIfNecessary@CManipulation@@AEAAXW4InteractionState@@@Z.c)
 *     ?_UpdateCaptureState@CManipulation@@AEAAX_N@Z @ 0x1800EA8A0 (-_UpdateCaptureState@CManipulation@@AEAAX_N@Z.c)
 *     ?_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z @ 0x1800EA8DC (-_SendUpdateToRenderThread@CManipulation@@AEAAJ_NPEBUD2DVector3@@1@Z.c)
 */

__int64 __fastcall CManipulation::UpdateOnManipulationThreadWithoutDelta(
        CManipulation *this,
        const struct UpdateOnManipulationThreadWithoutDeltaArgs *a2)
{
  unsigned int v2; // ebx
  unsigned int *v3; // r10
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r10
  CManipulation *v7; // r11
  unsigned __int8 v8; // dl
  char v10; // dl
  int v11; // eax

  v2 = 0;
  CManipulation::_UpdateCaptureState((CManipulation *)((char *)this - 80), (*((_BYTE *)a2 + 16) & 4) != 0);
  CManipulation::_ResetManipulationThreadDataIfNecessary(v4, *v3);
  *(_DWORD *)(v5 + 20) = 0;
  *(_DWORD *)(v5 + 24) = 0;
  *(_DWORD *)(v5 + 28) = 0;
  *(_DWORD *)(v5 + 44) = 1065353216;
  *(_DWORD *)(v5 + 48) = 1065353216;
  *(_DWORD *)(v5 + 52) = 1065353216;
  if ( __PAIR64__(*(_DWORD *)(v5 + 176), *(_DWORD *)(v5 + 164)) != *(_QWORD *)v6
    || *(_DWORD *)(v5 + 180) != *(_DWORD *)(v6 + 8)
    || *(_DWORD *)(v5 + 184) != *(_DWORD *)(v6 + 12)
    || (v8 = *(_BYTE *)(v5 + 188), ((v8 ^ *(_BYTE *)(v6 + 16)) & 1) != 0)
    || ((v8 ^ *(_BYTE *)(v6 + 16)) & 2) != 0 )
  {
    *(_DWORD *)(v5 + 136) = 0;
    *(_DWORD *)(v5 + 140) = 0;
    *(_DWORD *)(v5 + 144) = 0;
    *(_DWORD *)(v5 + 148) = 0;
    *(_DWORD *)(v5 + 152) = 0;
    *(_DWORD *)(v5 + 156) = 0;
    *(_DWORD *)(v5 + 160) = 0;
    *(_DWORD *)(v5 + 164) = *(_DWORD *)v6;
    *(_DWORD *)(v5 + 176) = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(v5 + 180) = *(_DWORD *)(v6 + 8);
    *(_DWORD *)(v5 + 184) = *(_DWORD *)(v6 + 12);
    v10 = *(_BYTE *)(v5 + 188) ^ (*(_BYTE *)(v6 + 16) ^ *(_BYTE *)(v5 + 188)) & 1;
    *(_BYTE *)(v5 + 188) = v10;
    *(_BYTE *)(v5 + 188) = v10 ^ (*(_BYTE *)(v6 + 16) ^ v10) & 2;
    v11 = CManipulation::_SendUpdateToRenderThread(v7, 0, 0LL, 0LL);
    v2 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xAAu, 0LL);
  }
  return v2;
}
