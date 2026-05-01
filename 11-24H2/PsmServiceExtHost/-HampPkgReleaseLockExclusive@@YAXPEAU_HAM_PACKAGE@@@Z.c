/*
 * XREFs of ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009EEC
 * Callers:
 *     ?HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800092AC (-HampHostCheckCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009D70 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AF14 (-HampHostCompletePackageInsertion@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckWaitForQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z @ 0x18000BAA4 (-HampHostCheckWaitForQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z.c)
 *     ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000D5C0 (-HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180026DF0 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180044598 (-HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 *     ?HampPkgEnterInsertion@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180066AA8 (-HampPkgEnterInsertion@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z @ 0x180067830 (-HampClientPkgDestroy@@YAXPEAU_CEM_RC_OBJECT@@@Z.c)
 *     ?HampHostEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006F5C8 (-HampHostEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@PEAPEAPEAXPEAK@Z @ 0x180070C78 (-HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@PEAP.c)
 *     ?HamSrvEnableDebugMode@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18007F8E4 (-HamSrvEnableDebugMode@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampPkgReleaseLockExclusive(struct _HAM_PACKAGE *a1)
{
  __int64 *Value; // rax
  __int64 v3; // rdx

  if ( HampLockTrackerId != -1 )
  {
    Value = (__int64 *)TlsGetValue(HampLockTrackerId);
    v3 = *Value;
    if ( (*Value & 0x40) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( Value[7]-- == 1 )
      *Value = v3 & 0xFFFFFFFFFFFFFFBFuLL;
  }
  *((_DWORD *)a1 + 78) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 304);
}
