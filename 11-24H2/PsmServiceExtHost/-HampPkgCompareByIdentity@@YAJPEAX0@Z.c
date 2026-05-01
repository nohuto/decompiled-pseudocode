/*
 * XREFs of ?HampPkgCompareByIdentity@@YAJPEAX0@Z @ 0x180014AD0
 * Callers:
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012F30 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PE.c)
 *     ?HampPkgFindInUser@@YAPEAU_HAM_PACKAGE@@PEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180013D00 (-HampPkgFindInUser@@YAPEAU_HAM_PACKAGE@@PEAU_HAM_USER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180013DE4 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HamSrvPackageGetDebugMode@@YAEPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXK@Z @ 0x180014160 (-HamSrvPackageGetDebugMode@@YAEPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXK@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1800A7AE6 (memcmp_0.c)
 */

int __fastcall HampPkgCompareByIdentity(const wchar_t *a1, const wchar_t *a2)
{
  char *v3; // rbx
  int result; // eax
  unsigned int v5; // eax
  const void *v6; // rsi
  ULONG v7; // ebx
  ULONG v8; // eax

  if ( !a2 )
    a2 = 0LL;
  v3 = (char *)(a2 + 48);
  result = _wcsicmp(a1, a2 + 48);
  if ( !result )
  {
    v5 = *((_DWORD *)a1 + 50);
    if ( v5 < *((_DWORD *)v3 + 50) )
    {
      return -1;
    }
    else if ( v5 > *((_DWORD *)v3 + 50) )
    {
      return 1;
    }
    else
    {
      v6 = v3 + 132;
      v7 = RtlLengthSid(v3 + 132);
      v8 = RtlLengthSid((PSID)(a1 + 66));
      if ( v8 < v7 )
      {
        return -1;
      }
      else if ( v8 > v7 )
      {
        return 1;
      }
      else
      {
        return memcmp_0(a1 + 66, v6, v8);
      }
    }
  }
  return result;
}
