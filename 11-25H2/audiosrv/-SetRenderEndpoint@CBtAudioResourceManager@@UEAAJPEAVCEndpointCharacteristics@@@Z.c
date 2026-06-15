/*
 * XREFs of ?SetRenderEndpoint@CBtAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@@Z @ 0x1800D2C90
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckBtAudioStreamContextSupported@CBtAudioResourceManager@@AEBAJXZ @ 0x1800D25A0 (-CheckBtAudioStreamContextSupported@CBtAudioResourceManager@@AEBAJXZ.c)
 *     ?FindAudioControllerInterface@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@@Z @ 0x1800D26D4 (-FindAudioControllerInterface@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@@Z.c)
 */

int __fastcall CBtAudioResourceManager::SetRenderEndpoint(LPCWSTR *this, struct CEndpointCharacteristics *a2)
{
  bool v4; // bl

  v4 = 0;
  if ( (int)CBtAudioResourceManager::FindAudioControllerInterface((void **)this - 1, a2) >= 0 )
    v4 = (int)CBtAudioResourceManager::CheckBtAudioStreamContextSupported(this - 1) >= 0;
  *((_BYTE *)this + 484) = v4;
  return CBtAudioResourceManagerBase::SetRenderEndpoint((CBtAudioResourceManagerBase *)this, a2);
}
