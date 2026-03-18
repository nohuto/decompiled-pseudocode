/*
 * XREFs of ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x180207C4C
 * Callers:
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x180207BB0 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?UpdateAnimateValues@CScalar@@UEAA_NXZ @ 0x1802AD090 (-UpdateAnimateValues@CScalar@@UEAA_NXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x180207CB8 (-UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z.c)
 */

__int64 __fastcall CBaseAnimation::UnregisterAnimateResource(CComposition **this)
{
  unsigned int v1; // ebx
  _BYTE *v2; // rdi
  int v3; // eax

  v1 = 0;
  v2 = this + 14;
  if ( *((_BYTE *)this + 112) )
  {
    v3 = CComposition::UnregisterAnimateResource(
           this[3],
           (struct IAnimationResource *)((unsigned __int64)(this + 9) & -(__int64)(this != 0LL)));
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x8Eu, 0LL);
    else
      *v2 = 0;
  }
  return v1;
}
