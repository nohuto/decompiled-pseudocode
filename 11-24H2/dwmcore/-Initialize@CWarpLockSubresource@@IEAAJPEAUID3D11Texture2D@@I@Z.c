/*
 * XREFs of ?Initialize@CWarpLockSubresource@@IEAAJPEAUID3D11Texture2D@@I@Z @ 0x180195A20
 * Callers:
 *     ?Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z @ 0x1801958FC (-Create@CWarpLockSubresource@@SAJPEAVIWarpPalLockSubresourceExtension@@PEAUID3D11Texture2D@@IPEA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Lock@CWarpLockSubresource@@IEAAJXZ @ 0x180195ADC (-Lock@CWarpLockSubresource@@IEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWarpLockSubresource::Initialize(CWarpLockSubresource *this, struct ID3D11Texture2D *a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax

  v3 = (_QWORD *)((char *)this + 24);
  v5 = *((_QWORD *)this + 3);
  *v3 = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v8 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, _QWORD *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
         v3);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x37u, 0LL);
  }
  else
  {
    *((_DWORD *)this + 8) = a3;
    v10 = CWarpLockSubresource::Lock(this);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x3Au, 0LL);
  }
  return v9;
}
