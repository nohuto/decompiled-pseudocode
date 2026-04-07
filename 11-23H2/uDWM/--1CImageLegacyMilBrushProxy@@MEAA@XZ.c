/*
 * XREFs of ??1CImageLegacyMilBrushProxy@@MEAA@XZ @ 0x1800500FC
 * Callers:
 *     ??_ECImageLegacyMilBrushProxy@@MEAAPEAXI@Z @ 0x1800501D0 (--_ECImageLegacyMilBrushProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CResourceProxy@@MEAA@XZ @ 0x180038948 (--1CResourceProxy@@MEAA@XZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CImageLegacyMilBrushProxy::~CImageLegacyMilBrushProxy(CImageLegacyMilBrushProxy *this)
{
  __int128 v2; // [rsp+90h] [rbp-38h] BYREF
  __int128 v3; // [rsp+A0h] [rbp-28h] BYREF

  *(_QWORD *)this = &CImageLegacyMilBrushProxy::`vftable';
  v2 = 0LL;
  v3 = 0LL;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int128 *, __int128 *, __int128 *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 952LL))(
    *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
    *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
    &v2,
    &v3,
    &v2,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0);
  CResourceProxy::~CResourceProxy(this);
}
