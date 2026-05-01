/*
 * XREFs of ?HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BE78
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000BBA0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180001DF4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?HamReleaseEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006B08 (-HamReleaseEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HamAcquireEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006B20 (-HamAcquireEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempListEntryIsNull @ 0x18000C00C (CempListEntryIsNull.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000C030 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000D550 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     CempListEntryRemoveAndClear @ 0x180027644 (CempListEntryRemoveAndClear.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?HampHostIsAllowedToInswap@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800661E0 (-HampHostIsAllowedToInswap@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostWaitForInSwapTurn(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned __int64 v2; // rbx
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  _QWORD *v5; // rcx
  int v6; // edx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  int v10; // [rsp+70h] [rbp+8h] BYREF
  int v11; // [rsp+78h] [rbp+10h] BYREF
  int v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v10 = 0;
  v2 = (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                              + 120)
                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
     - 392;
  HampManagerAcquireLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v2);
  v3 = (_QWORD *)((char *)a1 + 992);
  while ( !HampHostIsAllowedToInswap(a1) )
  {
    if ( (unsigned int)CempListEntryIsNull((char *)a1 + 992) )
    {
      v5 = *(_QWORD **)(v2 + 1056);
      if ( *v5 != v2 + 1048 )
        __fastfail(3u);
      *v3 = v2 + 1048;
      *((_QWORD *)a1 + 125) = v5;
      *v5 = v3;
      *(_QWORD *)(v2 + 1056) = v3;
    }
    v10 = *(_DWORD *)(v2 + 1068);
    HampManagerReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v2);
    HamReleaseEnforcementLocks(a1);
    if ( (unsigned int)dword_1800E82B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E82B0, 64LL) )
    {
      v9 = (unsigned int)(v6 - 32);
      v11 = *(_DWORD *)(v2 + 1064);
      v12 = *((_DWORD *)a1 + 170);
      if ( a1 )
        v9 = (__int64)a1 - 32;
      v13 = *(_QWORD *)v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v9,
        (__int64)&unk_1800D36A5,
        v7,
        v8,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11);
    }
    RtlWaitOnAddress(v2 + 1068, &v10, 4LL);
    HamAcquireEnforcementLocks(a1);
    HampManagerAcquireLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v2);
  }
  if ( !(unsigned int)CempListEntryIsNull((char *)a1 + 992) )
    CempListEntryRemoveAndClear(v4);
  ++*(_DWORD *)(v2 + 1064);
  HampManagerReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v2);
}
