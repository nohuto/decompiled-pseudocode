/*
 * XREFs of ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1801E5B78
 * Callers:
 *     ?ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETPRIMITIVES@@@Z @ 0x1801E593C (-ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETPRIMITIVES.c)
 *     ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x180220B98 (-ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_APPEND@@PEBXI@Z.c)
 *     ?OnAddBinding@CScalar@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z @ 0x1802A34C0 (-OnAddBinding@CScalar@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z.c)
 *     ?ProcessSetValue@CScalar@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCALAR_SETVALUE@@@Z @ 0x1802A3500 (-ProcessSetValue@CScalar@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCALAR_SETVALUE@@@Z.c)
 *     ?ProcessTrigger@CLegacyAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYANIMATIONTRIGGER_TRIGGER@@@Z @ 0x1802A8F14 (-ProcessTrigger@CLegacyAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYANIMATIONT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x1801E5BE4 (-RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 */

__int64 __fastcall CBaseAnimation::RegisterAnimateResource(CComposition **this)
{
  unsigned int v1; // ebx
  _BYTE *v2; // rdi
  int v3; // eax

  v1 = 0;
  v2 = this + 14;
  if ( !*((_BYTE *)this + 112) )
  {
    v3 = CComposition::RegisterAnimateResource(
           this[3],
           (struct IAnimationResource *)((unsigned __int64)(this + 9) & -(__int64)(this != 0LL)));
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x78u, 0LL);
    else
      *v2 = 1;
  }
  return v1;
}
