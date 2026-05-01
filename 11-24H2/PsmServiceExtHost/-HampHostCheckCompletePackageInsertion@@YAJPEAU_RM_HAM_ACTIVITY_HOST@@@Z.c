/*
 * XREFs of ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800092AC
 * Callers:
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x1800175A0 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z @ 0x180038AE8 (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1@Z.c)
 *     ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x180038F00 (-HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z.c)
 * Callees:
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800090C0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009E5C (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009EEC (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AF14 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA04 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgEnterInsertion@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180066AA8 (-HampPkgEnterInsertion@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 */

__int64 __fastcall HampHostCheckCompletePackageInsertion(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v1; // r14d
  DWORD v2; // esi
  __int64 v4; // rbp
  _QWORD *Value; // rdi
  int v6; // edi
  __int64 *v7; // rax
  __int64 v8; // rcx
  bool v9; // zf
  __int64 *v11; // rax
  __int64 v12; // rcx
  DWORD v13; // esi
  _QWORD *v14; // rdi
  __int64 *v15; // rax
  __int64 v16; // rcx

  v1 = 0;
  v2 = HampLockTrackerId;
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockShared(a1);
  if ( (*((_QWORD *)a1 + 83) & 0x800000000000LL) == 0 )
  {
    if ( HampLockTrackerId != -1 )
    {
      v11 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v12 = *v11;
      if ( (*v11 & 2) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v9 = v11[2]-- == 1;
      if ( v9 )
        *v11 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    RtlReleaseSRWLockShared(a1);
    v1 = 1;
    HampPkgEnterInsertion((struct _HAM_PACKAGE *)v4);
    v13 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v14 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v13) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *v14 |= 2uLL;
      ++v14[2];
    }
    RtlAcquireSRWLockShared(a1);
    if ( (*((_QWORD *)a1 + 83) & 0x800000000000LL) == 0 )
    {
      if ( HampLockTrackerId != -1 )
      {
        v15 = (__int64 *)TlsGetValue(HampLockTrackerId);
        v16 = *v15;
        if ( (*v15 & 2) == 0 )
          NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
        v9 = v15[2]-- == 1;
        if ( v9 )
          *v15 = v16 & 0xFFFFFFFFFFFFFFFDuLL;
      }
      RtlReleaseSRWLockShared(a1);
      v6 = HampHostCompletePackageInsertion(a1);
      if ( v6 >= 0 )
      {
        HampHostAcquireLockExclusiveEx(a1, 0);
        *((_QWORD *)a1 + 83) |= 0x800000000000uLL;
        HampHostReleaseLockExclusive(a1);
        v6 = 0;
      }
      goto LABEL_10;
    }
  }
  v6 = 0;
  if ( HampLockTrackerId != -1 )
  {
    v7 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v8 = *v7;
    if ( (*v7 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v9 = v7[2]-- == 1;
    if ( v9 )
      *v7 = v8 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  RtlReleaseSRWLockShared(a1);
  if ( v1 )
  {
LABEL_10:
    HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v4);
    *(_DWORD *)(v4 + 336) = 0;
    HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v4);
    RtlWakeAddressSingle(v4 + 336);
  }
  return (unsigned int)v6;
}
