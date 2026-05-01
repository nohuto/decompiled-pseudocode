/*
 * XREFs of ?RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@W4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001EA10
 * Callers:
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180038718 (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z @ 0x1800599C8 (-HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z.c)
 * Callees:
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001E464 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027680 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     memcmp_0 @ 0x1800A7AE6 (memcmp_0.c)
 */

__int64 __fastcall RmHamFindHostWithFullInfo(__int64 a1, __int64 a2, char a3, struct _RM_HAM_ACTIVITY_HOST **a4)
{
  __int64 v4; // r13
  __int64 v5; // r12
  struct _RM_HAM_ACTIVITY_HOST *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r10
  int v12; // ebx
  __int64 v13; // r15
  __int64 v14; // r11
  int v15; // r9d
  struct _RM_HAM_ACTIVITY_HOST *v16; // rcx
  const wchar_t *v17; // rbx

  v4 = *(_QWORD *)(a2 + 544);
  v5 = a1 - 2216;
  v9 = 0LL;
  v10 = 0LL;
  RtlAcquireSRWLockShared(a1 - 2216);
  v11 = 0LL;
  v12 = -1073741275;
  v13 = -1LL << (*(_BYTE *)(a1 - 2228) & 0x1F);
  v14 = v13 & (HIBYTE(v4)
             + 37
             * (BYTE6(v4)
              + 37
              * (BYTE5(v4)
               + 37
               * (BYTE4(v4)
                + 37 * (BYTE3(v4) + 37 * (BYTE2(v4) + 37 * (BYTE1(v4) + 37 * ((unsigned __int8)v4 + 11623883LL))))))));
LABEL_2:
  if ( v11 )
    goto LABEL_5;
  v15 = *(_DWORD *)(a1 - 2228) >> 5;
  if ( v15 )
  {
    v11 = *(_QWORD *)(a1 - 2224)
        + 8LL
        * ((37
          * (BYTE6(v14)
           + 37
           * (BYTE5(v14)
            + 37
            * (BYTE4(v14)
             + 37 * (BYTE3(v14) + 37 * (BYTE2(v14) + 37 * (BYTE1(v14) + 37 * ((unsigned __int8)v14 + 11623883)))))))
          + HIBYTE(v14)) & (unsigned int)(v15 - 1));
LABEL_5:
    while ( 1 )
    {
      v11 = *(_QWORD *)v11;
      if ( (v11 & 1) != 0 )
        break;
      if ( v14 == (v13 & *(_QWORD *)(v11 + 8)) )
      {
        if ( !v11 )
          break;
        if ( v4 == *(_QWORD *)(v11 + 32) )
        {
          v12 = 0;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v11 + 16)) <= 1 )
            __fastfail(0xEu);
          v10 = v11;
          break;
        }
        goto LABEL_2;
      }
    }
  }
  RtlReleaseSRWLockShared(v5);
  if ( v12 >= 0 )
  {
    if ( *(_BYTE *)(v10 + 656) == a3 || a3 == 2 )
    {
      RmpAcquireGlobalLock();
      if ( (unsigned int)RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)(v10 + 64)) )
      {
        v9 = v16;
        v12 = 0;
      }
      else
      {
        v12 = -1073741275;
      }
      RmpReleaseGlobalLock();
      if ( v10 )
        RmpObjectRelease((PVOID)v10);
    }
    else
    {
      v12 = -1073741776;
      if ( v10 )
      {
        RmpObjectRelease((PVOID)v10);
        return (unsigned int)v12;
      }
    }
    if ( v12 >= 0 )
    {
      v17 = (const wchar_t *)88;
      if ( v9 )
        v17 = (const wchar_t *)((char *)v9 + 24);
      if ( !_wcsicmp((const wchar_t *)a2, v17) && !memcmp_0((const void *)(a2 + 464), v17 + 232, 0x58uLL) )
      {
        v12 = 0;
        *a4 = v9;
        return (unsigned int)v12;
      }
      v12 = -1073741584;
    }
  }
  if ( v9 )
    RmHamHostDereference(v9);
  return (unsigned int)v12;
}
