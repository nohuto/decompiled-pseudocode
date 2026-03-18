/*
 * XREFs of ?NotifyInvalidResource@CSceneResourceManager@@UEAAXPEBVIDeviceResource@@@Z @ 0x18025F8A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CSceneResourceManager::NotifyInvalidResource(
        CSceneResourceManager *this,
        const struct IDeviceResource *a2)
{
  CSceneResourceManager::ReleaseSceneCompositor(this);
}
