/*
 * XREFs of ?UnregisterSceneListener@CSceneResourceManager@@QEAAXPEAUISceneNotificationListener@@@Z @ 0x180269850
 * Callers:
 *     ??1CCompositionLight@@MEAA@XZ @ 0x1801FAB7C (--1CCompositionLight@@MEAA@XZ.c)
 *     ??1CCompositionMipmapSurface@@UEAA@XZ @ 0x1802A1648 (--1CCompositionMipmapSurface@@UEAA@XZ.c)
 *     ??1CSceneMesh@@MEAA@XZ @ 0x1802AD318 (--1CSceneMesh@@MEAA@XZ.c)
 *     ??1CSceneMaterial@@MEAA@XZ @ 0x1802AE4CC (--1CSceneMaterial@@MEAA@XZ.c)
 *     ??1CSceneSurfaceMaterialInput@@MEAA@XZ @ 0x1802AF8E0 (--1CSceneSurfaceMaterialInput@@MEAA@XZ.c)
 *     ??1CSceneWorld@@MEAA@XZ @ 0x1802B4A5C (--1CSceneWorld@@MEAA@XZ.c)
 * Callees:
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x1801EB4FC (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 *     __std_find_trivial_8 @ 0x18025BDA0 (__std_find_trivial_8.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSceneResourceManager::UnregisterSceneListener(
        const __m128i **this,
        struct ISceneNotificationListener *a2)
{
  __m128i *trivial_8; // rdi
  struct ISpectreRenderer *SpectreRenderer; // rdx

  trivial_8 = (__m128i *)_std_find_trivial_8(this[5], this[6], (unsigned __int64)a2);
  if ( trivial_8 != this[6] )
  {
    SpectreRenderer = CSceneResourceManager::GetSpectreRenderer((CSceneResourceManager *)this);
    if ( SpectreRenderer )
      (*(void (__fastcall **)(struct ISceneNotificationListener *, struct ISpectreRenderer *))(*(_QWORD *)a2 + 8LL))(
        a2,
        SpectreRenderer);
    memmove_0(trivial_8, &trivial_8->m128i_u64[1], (char *)this[6] - (char *)&trivial_8->m128i_u64[1]);
    this[6] = (const __m128i *)((char *)this[6] - 8);
  }
}
