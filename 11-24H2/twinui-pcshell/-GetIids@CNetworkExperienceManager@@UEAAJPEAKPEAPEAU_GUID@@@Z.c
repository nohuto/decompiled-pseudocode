/*
 * XREFs of ?GetIids@CNetworkExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1803C4B40
 * Callers:
 *     ?GetIids@CNetworkExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1803C4BC0 (-GetIids@CNetworkExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CNetworkExperienceManager::GetIids(
        CNetworkExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = GUID_c9ddc674_b44b_4c67_9d79_2b237d9be05a;
    v6[1] = _uuidof__AUIWeakReferenceSource_Details_Platform__;
    v6[2] = _uuidof__AUIDisposable_Platform__;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
