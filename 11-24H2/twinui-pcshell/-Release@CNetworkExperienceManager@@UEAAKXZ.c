/*
 * XREFs of ?Release@CNetworkExperienceManager@@UEAAKXZ @ 0x1802C3F70
 * Callers:
 *     ?Release@CNetworkExperienceManager@@W7EAAKXZ @ 0x1803C4ED0 (-Release@CNetworkExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CNetworkExperienceManager@@WBA@EAAKXZ @ 0x1803C4EE0 (-Release@CNetworkExperienceManager@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CNetworkExperienceManager::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::INetworkFlyoutExperienceManager,Windows::Foundation::IClosable>::Release(this);
}
