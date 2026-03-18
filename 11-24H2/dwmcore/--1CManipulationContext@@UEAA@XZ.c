/*
 * XREFs of ??1CManipulationContext@@UEAA@XZ @ 0x1802166E4
 * Callers:
 *     ??_GCManipulationContext@@UEAAPEAXI@Z @ 0x180216698 (--_GCManipulationContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_GTargetingInfo@@QEAAPEAXI@Z @ 0x18012B4F8 (--_GTargetingInfo@@QEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ @ 0x18012BE94 (-InternalRelease@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationContext::~CManipulationContext(CManipulationContext *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  void *v7; // rcx
  int j; // edi
  void *v9; // rcx
  int i; // edi

  *(_QWORD *)this = &CManipulationContext::`vftable'{for `IManipulationContext'};
  *((_QWORD *)this + 1) = &CManipulationContext::`vftable'{for `CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>'};
  v4 = *((_QWORD *)this + 17);
  if ( v4 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease((CCachedVisualImage **)this + 16, a2, a3);
  Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease((CCachedVisualImage **)this + 14, v5, v6);
  if ( *((_QWORD *)this + 10) )
  {
    for ( i = 0; i < *((_DWORD *)this + 24); ++i )
      TargetingInfo::`scalar deleting destructor'((TargetingInfo *)(*((_QWORD *)this + 11) + 16LL * i));
    operator delete(*((void **)this + 10));
    *((_QWORD *)this + 10) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 11);
  if ( v7 )
  {
    operator delete(v7);
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_DWORD *)this + 24) = 0;
  if ( *((_QWORD *)this + 7) )
  {
    for ( j = 0; j < *((_DWORD *)this + 18); ++j )
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(*((_QWORD *)this + 8) + 8LL * j));
    operator delete(*((void **)this + 7));
    *((_QWORD *)this + 7) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 8);
  if ( v9 )
  {
    operator delete(v9);
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_DWORD *)this + 18) = 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 6);
}
