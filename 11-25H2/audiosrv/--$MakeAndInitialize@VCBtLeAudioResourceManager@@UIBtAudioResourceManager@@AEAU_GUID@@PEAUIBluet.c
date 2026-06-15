/*
 * XREFs of ??$MakeAndInitialize@VCBtLeAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@PEAUIBluetoothResourceArbitrator@@@Details@WRL@Microsoft@@YAJPEAPEAUIBtAudioResourceManager@@AEAU_GUID@@$$QEAPEAUIBluetoothResourceArbitrator@@@Z @ 0x1800EC0EC
 * Callers:
 *     ?TryGetResourceManagerService@CBluetoothAudioEndpointResourceManagerProvider@@UEAAJPEAVCEndpointCharacteristics@@AEBU_GUID@@PEAPEAX@Z @ 0x1800ED6C0 (-TryGetResourceManagerService@CBluetoothAudioEndpointResourceManagerProvider@@UEAAJPEAVCEndpoint.c)
 * Callees:
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A6194 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@CBtLeAudioResourceManager@@QEAAJU_GUID@@PEAUIBluetoothResourceArbitrator@@@Z @ 0x1800E4B34 (-RuntimeClassInitialize@CBtLeAudioResourceManager@@QEAAJU_GUID@@PEAUIBluetoothResourceArbitrator.c)
 *     ??0CBtLeAudioResourceManager@@QEAA@XZ @ 0x1800EC670 (--0CBtLeAudioResourceManager@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CBtLeAudioResourceManager,IBtAudioResourceManager,_GUID &,IBluetoothResourceArbitrator *>(
        _QWORD *a1,
        struct _GUID *a2,
        struct IBluetoothResourceArbitrator **a3)
{
  void *v6; // rax
  int v7; // edi
  CBtLeAudioResourceManager *v8; // rbx
  struct _GUID v10; // [rsp+20h] [rbp-18h] BYREF
  void *v11; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x200uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v6;
  if ( v6 )
  {
    v8 = CBtLeAudioResourceManager::CBtLeAudioResourceManager((CBtLeAudioResourceManager *)v6);
    v11 = 0LL;
    v10 = *a2;
    v7 = CBtLeAudioResourceManager::RuntimeClassInitialize(v8, &v10, *a3);
    if ( v7 >= 0 )
    {
      v7 = (**(__int64 (__fastcall ***)(CBtLeAudioResourceManager *, GUID *, _QWORD *))v8)(
             v8,
             &GUID_107fde7c_f81d_4321_90b0_d0cbb8ba74a8,
             a1);
      (*(void (__fastcall **)(CBtLeAudioResourceManager *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    else if ( v8 )
    {
      (*(void (__fastcall **)(CBtLeAudioResourceManager *))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  else
  {
    v7 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v11);
  return (unsigned int)v7;
}
