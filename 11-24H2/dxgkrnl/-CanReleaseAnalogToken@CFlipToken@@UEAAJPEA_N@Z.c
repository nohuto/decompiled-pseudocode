/*
 * XREFs of ?CanReleaseAnalogToken@CFlipToken@@UEAAJPEA_N@Z @ 0x14009BC10
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x14001E4D0 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N_K@Z @ 0x14009BE80 (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N_K@Z.c)
 */

int __fastcall CFlipToken::CanReleaseAnalogToken(CFlipToken *this, bool *a2)
{
  int result; // eax
  CompositionSurfaceObject *v4; // rcx
  bool v5; // [rsp+30h] [rbp+8h] BYREF

  result = 0;
  *a2 = 0;
  if ( *((_DWORD *)this + 6) == 2 )
  {
    *a2 = 1;
    *((_DWORD *)this + 6) = 3;
    CFlipToken::TraceStateChanged(this);
    v4 = (CompositionSurfaceObject *)*((_QWORD *)this + 6);
    v5 = 0;
    result = CompositionSurfaceObject::NotifyTokenInFrame(v4, this, &v5, 0LL);
    if ( result >= 0 )
      *((_BYTE *)this + 577) = v5;
  }
  else
  {
    ++*((_DWORD *)this + 10);
  }
  return result;
}
