/*
 * XREFs of ??1CSpriteVectorShape@@UEAA@XZ @ 0x1801FAA8C
 * Callers:
 *     ??_GCSpriteVectorShape@@UEAAPEAXI@Z @ 0x1801FAA40 (--_GCSpriteVectorShape@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CSpriteVectorShape::~CSpriteVectorShape(CSpriteVectorShape *this)
{
  struct CResource *v1; // rdx
  _QWORD *v3; // rcx

  v1 = (struct CResource *)*((_QWORD *)this + 13);
  *(_QWORD *)this = &CSpriteVectorShape::`vftable';
  CResource::UnRegisterNotifierInternal(this, v1);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 14));
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 15));
  v3 = (_QWORD *)*((_QWORD *)this + 20);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 22) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 20) = 0LL;
    *((_QWORD *)this + 21) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
  CVectorShape::~CVectorShape(this);
}
