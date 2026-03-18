/*
 * XREFs of ?ProcessDelayedActivation@CComputeScribbleRenderer@@AEAA_NXZ @ 0x18017402C
 * Callers:
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x180173CD0 (-PreRender@CComputeScribbleRenderer@@QEAAJXZ.c)
 * Callees:
 *     McTemplateU0x_EventWriteTransfer @ 0x1801EB924 (McTemplateU0x_EventWriteTransfer.c)
 */

char __fastcall CComputeScribbleRenderer::ProcessDelayedActivation(CComputeScribbleRenderer *this)
{
  char v1; // bl
  char v2; // al
  void *v4; // rdx

  v1 = *((_BYTE *)this + 48);
  v2 = *((_BYTE *)this + 49);
  if ( v1 )
  {
    if ( !v2 )
    {
      *((_BYTE *)this + 48) = 0;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
      {
        v4 = &EVTDESC_COMPUTESCRIBBLE_ACTIVE_Stop;
LABEL_9:
        McTemplateU0x_EventWriteTransfer(this, v4, *((_QWORD *)this + 3));
      }
    }
  }
  else if ( v2 )
  {
    *((_BYTE *)this + 48) = 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    {
      v4 = &EVTDESC_COMPUTESCRIBBLE_ACTIVE_Start;
      goto LABEL_9;
    }
  }
  return v1;
}
