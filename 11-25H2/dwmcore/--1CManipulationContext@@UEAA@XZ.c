/*
 * XREFs of ??1CManipulationContext@@UEAA@XZ @ 0x1802221A4
 * Callers:
 *     ??_GCManipulationContext@@UEAAPEAXI@Z @ 0x180222158 (--_GCManipulationContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_GTargetingInfo@@QEAAPEAXI@Z @ 0x18017EDD8 (--_GTargetingInfo@@QEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ @ 0x18017F774 (-InternalRelease@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationContext::~CManipulationContext(CManipulationContext *this)
{
  __int64 v2; // rcx
  void *v3; // rcx
  int j; // edi
  void *v5; // rcx
  int i; // edi

  *(_QWORD *)this = &CManipulationContext::`vftable'{for `IManipulationContext'};
  *((_QWORD *)this + 1) = &CManipulationContext::`vftable'{for `CMILRefCountBaseT<IMILRefCount,CMilObjectDeleter>'};
  v2 = *((_QWORD *)this + 17);
  if ( v2 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease((CResource **)this + 16);
  Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease((CResource **)this + 14);
  if ( *((_QWORD *)this + 10) )
  {
    for ( i = 0; i < *((_DWORD *)this + 24); ++i )
      TargetingInfo::`scalar deleting destructor'((TargetingInfo *)(*((_QWORD *)this + 11) + 16LL * i));
    operator delete(*((void **)this + 10));
    *((_QWORD *)this + 10) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 11);
  if ( v3 )
  {
    operator delete(v3);
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
  v5 = (void *)*((_QWORD *)this + 8);
  if ( v5 )
  {
    operator delete(v5);
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_DWORD *)this + 18) = 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 6);
}
