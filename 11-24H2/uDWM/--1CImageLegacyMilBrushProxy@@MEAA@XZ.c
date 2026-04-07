/*
 * XREFs of ??1CImageLegacyMilBrushProxy@@MEAA@XZ @ 0x18006ACAC
 * Callers:
 *     ??_ECImageLegacyMilBrushProxy@@MEAAPEAXI@Z @ 0x18006AC60 (--_ECImageLegacyMilBrushProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CResourceProxy@@MEAA@XZ @ 0x180026524 (--1CResourceProxy@@MEAA@XZ.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CImageLegacyMilBrushProxy::~CImageLegacyMilBrushProxy(CImageLegacyMilBrushProxy *this)
{
  __int64 v2; // rdx
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int128 v5; // [rsp+90h] [rbp-38h] BYREF
  __int128 v6; // [rsp+A0h] [rbp-28h] BYREF

  *(_QWORD *)this = &CImageLegacyMilBrushProxy::`vftable';
  v2 = *((_QWORD *)this + 2);
  v3 = *(__int64 **)(v2 + 16);
  v4 = *v3;
  v5 = 0LL;
  v6 = 0LL;
  (*(void (__fastcall **)(__int64 *, _QWORD, __int128 *, __int128 *, __int128 *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v4 + 664))(
    v3,
    *(unsigned int *)(v2 + 24),
    &v5,
    &v6,
    &v5,
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
