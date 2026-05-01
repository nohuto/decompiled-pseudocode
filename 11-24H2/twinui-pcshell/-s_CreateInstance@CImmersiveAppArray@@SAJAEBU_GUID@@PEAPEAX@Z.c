/*
 * XREFs of ?s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x18008F514
 * Callers:
 *     ?Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmersiveMonitor@@@Z @ 0x18008EF90 (-Set@CImmersiveWindowManager@@UEAAXW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@PEAUIImmer.c)
 *     ?GetAllApplicationsByHostIDSafe@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z @ 0x18008F1E0 (-GetAllApplicationsByHostIDSafe@CApplicationManager@@UEAAJ_KPEAPEAUIObjectArray@@@Z.c)
 *     ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x18008F410 (-GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@.c)
 *     ?GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationArray@@@Z @ 0x1802E8470 (-GetRunningApplicationsFromPackageId@CApplicationManager@@UEAAJPEBGPEAPEAUIImmersiveApplicationA.c)
 * Callees:
 *     ??0CImmersiveAppArray@@QEAA@XZ @ 0x18008F5C8 (--0CImmersiveAppArray@@QEAA@XZ.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18008FA98 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveAppArray::s_CreateInstance(const struct _GUID *a1, void **a2)
{
  void **v3; // rbx
  CImmersiveAppArray *v4; // rax
  const struct _GUID *v5; // rdx
  int v6; // ecx
  int Instance; // edi

  *a2 = 0LL;
  v3 = 0LL;
  v4 = (CImmersiveAppArray *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *((_OWORD *)v4 + 1) = 0LL;
    v4 = CImmersiveAppArray::CImmersiveAppArray(v4);
    v3 = (void **)v4;
  }
  if ( v4 )
  {
    Instance = CEnumerableObjectCollection::CreateInstance(v6, v5, v3 + 3);
    if ( Instance >= 0 )
      Instance = (*(__int64 (__fastcall **)(void **, GUID *, void **))*v3)(
                   v3,
                   &GUID_05581915_c410_44c8_819a_f310f6c0ffee,
                   a2);
  }
  else
  {
    Instance = -2147024882;
  }
  if ( v3 )
    (*((void (__fastcall **)(void **))*v3 + 2))(v3);
  return (unsigned int)Instance;
}
