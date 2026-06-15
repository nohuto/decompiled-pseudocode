/*
 * XREFs of ?InitializePlaybackConstrictorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x140004314
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140003144 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000E2F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPipeInstance::InitializePlaybackConstrictorInterface(
        struct IUnknown **this,
        struct CProcessNode *a2,
        struct IAudioProcessingObject *a3)
{
  struct IAudioProcessingObject *v3; // r9
  struct IUnknown *v5; // rcx
  int v6; // ebx
  struct IUnknown *v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = a3;
  v5 = 0LL;
  v8 = 0LL;
  if ( *((_DWORD *)this + 30)
    || (v6 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IUnknown **))a3->lpVtbl->QueryInterface)(
               a3,
               &GUID_6b54b2b5_45ee_4f11_9935_9ec3183ad534,
               &v8),
        v5 = v8,
        v6 < 0) )
  {
    v6 = 0;
  }
  else if ( this[23] != v8 )
  {
    ATL::AtlComPtrAssign(this + 23, v8);
    v5 = v8;
  }
  if ( v5 )
    ((void (__fastcall *)(struct IUnknown *, struct CProcessNode *, struct IAudioProcessingObject *, struct IAudioProcessingObject *))v5->lpVtbl->Release)(
      v5,
      a2,
      a3,
      v3);
  return (unsigned int)v6;
}
