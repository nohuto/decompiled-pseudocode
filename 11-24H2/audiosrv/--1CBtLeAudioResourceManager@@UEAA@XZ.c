/*
 * XREFs of ??1CBtLeAudioResourceManager@@UEAA@XZ @ 0x1800F18EC
 * Callers:
 *     ??_GCBtLeAudioResourceManager@@UEAAPEAXI@Z @ 0x1800F1C20 (--_GCBtLeAudioResourceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBtLeAudioResourceManager::~CBtLeAudioResourceManager(CBtLeAudioResourceManager *this)
{
  *((_DWORD *)this + 143) = -1073741823;
  CBtAudioResourceManagerBase::~CBtAudioResourceManagerBase(this);
}
