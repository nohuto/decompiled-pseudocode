/*
 * XREFs of ??1CContentResource@@UEAA@XZ @ 0x140056394
 * Callers:
 *     ??_ECContentResource@@UEAAPEAXI@Z @ 0x140056350 (--_ECContentResource@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CFlipResource@@MEAA@XZ @ 0x140056470 (--1CFlipResource@@MEAA@XZ.c)
 *     ?SendToTokenManager@CDisableScanoutToken@@SAJAEAPEAV1@@Z @ 0x14005B94C (-SendToTokenManager@CDisableScanoutToken@@SAJAEAPEAV1@@Z.c)
 *     ?ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z @ 0x14006337C (-ClearCompositionSurfaceBinding@CContentResource@@QEAAJPEAPEAVCDisableScanoutToken@@@Z.c)
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
