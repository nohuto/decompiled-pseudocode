/*
 * XREFs of ??1CBtLeAudioResourceManager@@UEAA@XZ @ 0x1800EC8BC
 * Callers:
 *     ??_GCBtLeAudioResourceManager@@UEAAPEAXI@Z @ 0x1800ECBC0 (--_GCBtLeAudioResourceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CBtLeAudioResourceManager::~CBtLeAudioResourceManager(CBtLeAudioResourceManager *this)
{
  *((_DWORD *)this + 127) = -1073741823;
  CBtAudioResourceManagerBase::~CBtAudioResourceManagerBase(this);
}
