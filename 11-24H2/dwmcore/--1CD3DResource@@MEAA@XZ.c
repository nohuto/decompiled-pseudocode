/*
 * XREFs of ??1CD3DResource@@MEAA@XZ @ 0x18020443C
 * Callers:
 *     ??1CD3DConstantBuffer@@MEAA@XZ @ 0x180187B9C (--1CD3DConstantBuffer@@MEAA@XZ.c)
 *     ??1CD3DTexture@@MEAA@XZ @ 0x1801E60E8 (--1CD3DTexture@@MEAA@XZ.c)
 *     ??1CD3DPixelShader@@MEAA@XZ @ 0x18021296C (--1CD3DPixelShader@@MEAA@XZ.c)
 *     ??1CExternalD3DRenderer@@UEAA@XZ @ 0x1802B7DFC (--1CExternalD3DRenderer@@UEAA@XZ.c)
 *     ??1CD3DSurface@@MEAA@XZ @ 0x1802C86B0 (--1CD3DSurface@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CD3DResource::~CD3DResource(CD3DResource *this)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 8) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>::~CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>(this);
}
