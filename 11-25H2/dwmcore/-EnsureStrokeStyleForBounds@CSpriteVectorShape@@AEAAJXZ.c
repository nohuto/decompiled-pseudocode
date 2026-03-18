/*
 * XREFs of ?EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ @ 0x18007A108
 * Callers:
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x18007AC1C (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSpriteVectorShape::EnsureStrokeStyleForBounds(CSpriteVectorShape *this)
{
  _QWORD *v1; // rdi
  unsigned int v2; // ebx
  int v3; // eax
  float v4; // xmm0_4
  bool v5; // zf
  int v6; // eax
  _DWORD v8[8]; // [rsp+30h] [rbp-38h] BYREF

  v1 = (_QWORD *)((char *)this + 128);
  v2 = 0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(fmaxf(0.0, *((float *)this + 52))) & _xmm) < 0.0000011920929 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 128);
    return (unsigned int)-2003304438;
  }
  else if ( !*v1 )
  {
    v3 = *((_DWORD *)this + 47);
    v4 = fmaxf(1.0, *((float *)this + 51));
    v8[5] = 0;
    v8[6] = 0;
    v8[0] = v3;
    v8[1] = *((_DWORD *)this + 48);
    v8[2] = *((_DWORD *)this + 46);
    v8[3] = *((_DWORD *)this + 49);
    v5 = *((_BYTE *)this + 212) == 0;
    *(float *)&v8[4] = v4;
    v8[7] = !v5;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((char *)this + 128);
    v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)g_DeviceManager + 144LL))(
           g_DeviceManager,
           v8,
           0LL,
           0LL,
           v1);
    v2 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x1D6u, 0LL);
  }
  return v2;
}
