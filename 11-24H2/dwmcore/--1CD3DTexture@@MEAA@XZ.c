/*
 * XREFs of ??1CD3DTexture@@MEAA@XZ @ 0x1801E60E8
 * Callers:
 *     ??_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z @ 0x1801E60A0 (--_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z.c)
 *     ??_GCD3DTexture@@MEAAPEAXI@Z @ 0x1802DF4D0 (--_GCD3DTexture@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePresentData@@@Z @ 0x180024308 (--$ReleaseInterfaceNoNULL@UIHolographicExclusivePresentData@@@@YAXPEAUIHolographicExclusivePrese.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DTexture::~CD3DTexture(CD3DTexture *this)
{
  bool v1; // zf
  __int64 v3; // rcx
  __int64 v4; // rcx
  int i; // eax
  int v6; // eax
  _QWORD *v7; // rcx

  v1 = *((_QWORD *)this + 24) == 0LL;
  *(_QWORD *)this = &CD3DTexture::`vftable';
  if ( !v1 )
  {
    for ( i = *((_DWORD *)this + 46); ; i = *((_DWORD *)this + 46) )
    {
      v7 = (_QWORD *)*((_QWORD *)this + 24);
      if ( !i )
        break;
      v6 = i - 1;
      *((_DWORD *)this + 46) = v6;
      ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(v7[v6]);
    }
    *((_DWORD *)this + 46) = -1;
    operator delete(v7);
  }
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(*((_QWORD *)this + 15));
  v3 = *((_QWORD *)this + 25);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(*((_QWORD *)this + 27));
  v4 = *((_QWORD *)this + 26);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(*((_QWORD *)this + 28));
  ReleaseInterfaceNoNULL<IHolographicExclusivePresentData>(*((_QWORD *)this + 29));
  CD3DResource::~CD3DResource(this);
}
