/*
 * XREFs of ?RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x1800552C4
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000BC20 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180006300 (-RmpPowerBoostReleaseLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180006358 (-RmpPowerBoostAcquireLockExclusive@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x18002C79C (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z @ 0x180055464 (-RmpPowerBoostArmWatchdog@@YAXPEAU_RM_POWERBOOST_CONTEXT@@@Z.c)
 *     ?RmpSystemApplyInswapPowerBoost@@YAJK@Z @ 0x1800554C8 (-RmpSystemApplyInswapPowerBoost@@YAJK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U3@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@5544@Z @ 0x180055528 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U3@U3@U2@U2@.c)
 */

__int64 __fastcall RmpPowerBoostEnableDisable(struct _RM_SERVICE_GLOBALS *a1, unsigned int a2)
{
  char *v2; // rbx
  int v5; // r8d
  int v6; // r9d
  unsigned __int64 v7; // rax
  int v8; // edi
  __int64 v10; // rax
  struct _TP_TIMER *v11; // rcx
  int v12; // ecx
  char v13; // al
  unsigned __int64 UnbiasedInterruptTimeMs64; // rax
  __int64 v15; // [rsp+60h] [rbp+17h] BYREF
  __int64 v16; // [rsp+68h] [rbp+1Fh] BYREF
  _QWORD v17[6]; // [rsp+70h] [rbp+27h] BYREF
  char v18; // [rsp+B0h] [rbp+67h] BYREF
  bool v19; // [rsp+B8h] [rbp+6Fh] BYREF
  bool v20; // [rsp+C0h] [rbp+77h] BYREF
  int v21; // [rsp+C8h] [rbp+7Fh] BYREF

  v2 = (char *)a1 + 104;
  RmpPowerBoostAcquireLockExclusive((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 104));
  if ( !a2 )
  {
    v10 = *((_QWORD *)v2 + 2);
    if ( v10 == 1 && (v2[64] & 2) != 0 )
    {
      RmpSystemApplyInswapPowerBoost(0);
      v11 = (struct _TP_TIMER *)*((_QWORD *)v2 + 3);
      *((_DWORD *)v2 + 16) &= ~2u;
      *((_QWORD *)v2 + 2) = 0LL;
      SetThreadpoolTimer(v11, 0LL, 0, 0);
      *((_DWORD *)v2 + 16) &= ~1u;
    }
    else
    {
      *((_QWORD *)v2 + 2) = v10 - 1;
    }
    goto LABEL_6;
  }
  if ( (*((_BYTE *)a1 + 3528) & 1) != 0 )
  {
    v8 = -1073741585;
    goto LABEL_7;
  }
  if ( (v2[64] & 1) != 0 )
  {
    UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
    ++*((_QWORD *)v2 + 2);
    *((_QWORD *)v2 + 1) = UnbiasedInterruptTimeMs64;
    goto LABEL_6;
  }
  v7 = CempQueryUnbiasedInterruptTimeMs64();
  *(_QWORD *)v2 = v7;
  *((_QWORD *)v2 + 1) = v7;
  v8 = RmpSystemApplyInswapPowerBoost(a2);
  if ( v8 >= 0 )
  {
    *((_DWORD *)v2 + 16) |= 2u;
    *((_QWORD *)v2 + 2) = 1LL;
    RmpPowerBoostArmWatchdog((struct _RM_POWERBOOST_CONTEXT *)v2);
LABEL_6:
    v8 = 0;
  }
LABEL_7:
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 0x40) != 0 && (qword_1800E72C8 & 0x40) == qword_1800E72C8 )
  {
    v12 = *((_DWORD *)v2 + 16);
    v13 = v12;
    v21 = v8;
    LOBYTE(v12) = v12 & 1;
    v18 = v12;
    v19 = (v13 & 2) != 0;
    v15 = *((_QWORD *)v2 + 2);
    v20 = a2 != 0;
    v16 = *((_QWORD *)v2 + 1);
    v17[0] = *(_QWORD *)v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v12,
      (unsigned int)&unk_1800D7BD2,
      v5,
      v6,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v18,
      (__int64)&v19);
  }
  RmpPowerBoostReleaseLockExclusive((struct _RM_POWERBOOST_CONTEXT *)v2);
  return (unsigned int)v8;
}
