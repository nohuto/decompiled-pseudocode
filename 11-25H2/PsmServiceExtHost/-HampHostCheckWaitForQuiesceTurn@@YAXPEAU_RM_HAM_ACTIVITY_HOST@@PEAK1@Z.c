/*
 * XREFs of ?HampHostCheckWaitForQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z @ 0x18000BB24
 * Callers:
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000B2C4 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HamReleaseEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006E4C (-HamReleaseEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HamAcquireEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006E64 (-HamAcquireEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009EDC (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180009F6C (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     CempLockSleepConditionVariableExclusive @ 0x1800463B0 (CempLockSleepConditionVariableExclusive.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180056F70 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180066730 (-HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostCheckWaitForQuiesceTurn(struct _RM_HAM_ACTIVITY_HOST *a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v6; // ebx
  unsigned int v7; // esi
  __int64 v8; // rsi
  int v9; // eax
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  if ( HampHostIsQuiesceSerialized(a1) )
  {
    v8 = *(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL);
    HampPkgAcquireLockExclusive((struct _HAM_PACKAGE *)v8);
    v9 = *(_DWORD *)(v8 + 340);
    if ( (v9 & 8) != 0 )
    {
      HamReleaseEnforcementLocks(a1);
      if ( (unsigned int)dword_1800E72B0 > 5 )
      {
        v12 = 32LL;
        if ( a1 )
          v12 = (__int64)a1 - 32;
        v13 = *(_QWORD *)v12;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
          (unsigned int)&dword_1800E72B0,
          (unsigned int)&unk_1800D2C74,
          v10,
          v11,
          (__int64)&v13);
      }
      CempLockSleepConditionVariableExclusive(v8 + 304, v8 + 320, 0LL);
      HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v8);
      v7 = 1;
      HamAcquireEnforcementLocks(a1);
    }
    else
    {
      *(_DWORD *)(v8 + 340) = v9 | 8;
      HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v8);
      v7 = 0;
      v6 = 1;
    }
  }
  else
  {
    v7 = 0;
  }
  *a2 = v7;
  *a3 = v6;
}
