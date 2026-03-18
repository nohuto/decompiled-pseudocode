/*
 * XREFs of ??1CContentResource@@UEAA@XZ @ 0x140056AE4
 * Callers:
 *     ??_ECContentResource@@UEAAPEAXI@Z @ 0x140056AA0 (--_ECContentResource@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CFlipResource@@MEAA@XZ @ 0x140056BC0 (--1CFlipResource@@MEAA@XZ.c)
 *     ?SendToTokenManager@CDisableScanoutToken@@SAJAEAPEAV1@@Z @ 0x14005BF4C (-SendToTokenManager@CDisableScanoutToken@@SAJAEAPEAV1@@Z.c)
 *     ?ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z @ 0x140062A8C (-ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z.c)
 */

void __fastcall CContentResource::~CContentResource(CContentResource *this)
{
  bool v1; // zf
  struct CDisableScanoutToken *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 6) == 0LL;
  *(_QWORD *)this = &CContentResource::`vftable';
  if ( !v1 )
  {
    v3 = 0LL;
    CContentResource::ClearCompositionSurfaceBinding(this, &v3);
    CDisableScanoutToken::SendToTokenManager(&v3);
  }
  CFlipResource::~CFlipResource(this);
}
