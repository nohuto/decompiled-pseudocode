/*
 * XREFs of ?RuntimeClassInitialize@CBtLeAudioResourceManager@@QEAAJU_GUID@@PEAUIBluetoothResourceArbitrator@@@Z @ 0x1800E90C8
 * Callers:
 *     ??$MakeAndInitialize@VCBtLeAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@PEAUIBluetoothResourceArbitrator@@@Details@WRL@Microsoft@@YAJPEAPEAUIBtAudioResourceManager@@AEAU_GUID@@$$QEAPEAUIBluetoothResourceArbitrator@@@Z @ 0x1800F10A8 (--$MakeAndInitialize@VCBtLeAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@PEAUIBluet.c)
 * Callees:
 *     ?Initialize@CBtAudioResourceManagerBase@@QEAAJU_GUID@@PEAUIBluetoothResourceArbitrator@@@Z @ 0x1800DEEB8 (-Initialize@CBtAudioResourceManagerBase@@QEAAJU_GUID@@PEAUIBluetoothResourceArbitrator@@@Z.c)
 */

__int64 __fastcall CBtLeAudioResourceManager::RuntimeClassInitialize(
        CBtLeAudioResourceManager *this,
        struct _GUID *a2,
        struct IBluetoothResourceArbitrator *a3)
{
  struct _GUID v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a2;
  return CBtAudioResourceManagerBase::Initialize(this, &v4, a3);
}
