/*
 * XREFs of ?RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18000606C
 * Callers:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002A880 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180006310 (-RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180006368 (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x18002C71C (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180044BC0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?RmpPowerBoostArmTimedBoostTimer@@YAX_KPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x1800671C4 (-RmpPowerBoostArmTimedBoostTimer@@YAX_KPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z @ 0x180068288 (-RmpSystemApplyAppLaunchPowerBoost@@YAJK@Z.c)
 */

__int64 __fastcall RmpPowerBoostStartTimedBoost(struct _RM_SERVICE_GLOBALS *a1, unsigned int a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rbx
  __int64 v3; // rsi
  char *v4; // rdi
  int v5; // r8d
  int v6; // r9d
  unsigned __int64 UnbiasedInterruptTimeMs64; // rax
  unsigned __int64 v8; // rcx
  bool v9; // zf
  int v10; // ebx
  struct _RM_SERVICE_GLOBALS *v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  v12 = a1;
  v2 = RmSvcGlobals;
  v3 = a2;
  v4 = (char *)RmSvcGlobals + 104;
  RmpPowerBoostAcquireLockExclusive((struct _RM_SERVICE_GLOBALS *)((char *)RmSvcGlobals + 104));
  if ( (*((_BYTE *)v2 + 3528) & 1) != 0 )
  {
    v10 = -1073741585;
    goto LABEL_8;
  }
  if ( (v4[64] & 4) == 0 )
  {
    v10 = RmpSystemApplyAppLaunchPowerBoost(1u);
    if ( v10 < 0 )
      goto LABEL_8;
    *((_DWORD *)v4 + 16) |= 4u;
  }
  UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
  v8 = *((_QWORD *)v4 + 6);
  if ( v8 <= UnbiasedInterruptTimeMs64 + v3 )
    v8 = UnbiasedInterruptTimeMs64 + v3;
  v9 = (v4[64] & 8) == 0;
  *((_QWORD *)v4 + 6) = v8;
  if ( v9 )
    RmpPowerBoostArmTimedBoostTimer(UnbiasedInterruptTimeMs64, (struct _RM_POWERBOOST_CONTEXT *)v4);
  v10 = 0;
LABEL_8:
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 0x40) != 0 && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
  {
    v13 = *((_QWORD *)v4 + 6);
    LODWORD(v12) = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800E82B0,
      (unsigned int)&unk_1800D8B1E,
      v5,
      v6,
      (__int64)&v12,
      (__int64)&v13);
  }
  RmpPowerBoostReleaseLockExclusive((struct _RM_POWERBOOST_CONTEXT *)v4);
  return (unsigned int)v10;
}
