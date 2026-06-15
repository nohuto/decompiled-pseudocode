/*
 * XREFs of ?Initialize@CBtAudioResourceManagerBase@@QEAAJU_GUID@@PEAUIBluetoothResourceArbitrator@@@Z @ 0x1800D9340
 * Callers:
 *     ?RuntimeClassInitialize@CBtLeAudioResourceManager@@QEAAJU_GUID@@PEAUIBluetoothResourceArbitrator@@@Z @ 0x1800E4B34 (-RuntimeClassInitialize@CBtLeAudioResourceManager@@QEAAJU_GUID@@PEAUIBluetoothResourceArbitrator.c)
 *     ??$MakeAndInitialize@VCBtAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@PEAUIBluetoothResourceArbitrator@@@Details@WRL@Microsoft@@YAJPEAPEAUIBtAudioResourceManager@@AEAU_GUID@@$$QEAPEAUIBluetoothResourceArbitrator@@@Z @ 0x1800EC010 (--$MakeAndInitialize@VCBtAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@PEAUIBluetoo.c)
 * Callees:
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBtAudioResourceManagerBase::Initialize(
        CBtAudioResourceManagerBase *this,
        struct _GUID *a2,
        struct IBluetoothResourceArbitrator *a3)
{
  __int64 v4; // rbx

  *(struct _GUID *)((char *)this + 40) = *a2;
  v4 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IBluetoothResourceArbitrator *))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  memset_0((char *)this + 280, 0, 0x60uLL);
  memset_0((char *)this + 376, 0, 0x60uLL);
  return 0LL;
}
