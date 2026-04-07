/*
 * XREFs of ?ReActivate@CLivePreview@@QEAAJXZ @ 0x1800C7DA0
 * Callers:
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x1800EE880 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x180045584 (-Activate@CLivePreview@@QEAAJXZ.c)
 */

__int64 __fastcall CLivePreview::ReActivate(CLivePreview *this)
{
  unsigned int v1; // ebx
  int v2; // eax

  v1 = 0;
  if ( *((_BYTE *)this + 240) )
  {
    v2 = CLivePreview::Activate(this);
    v1 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x428u, 0LL);
  }
  return v1;
}
