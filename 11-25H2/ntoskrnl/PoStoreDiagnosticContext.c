/*
 * XREFs of PoStoreDiagnosticContext @ 0x1404259A0
 * Callers:
 *     PopTraceThermalRequestPassiveHistogram @ 0x140425554 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x140427548 (PopTraceThermalRequestActiveActivity.c)
 *     ExGetWakeTimerList @ 0x1404C1614 (ExGetWakeTimerList.c)
 *     PopTracePowerLimitHistogram @ 0x1405D18AC (PopTracePowerLimitHistogram.c)
 *     PopExecutePowerAction @ 0x140747484 (PopExecutePowerAction.c)
 *     PopDiagTracePowerLimitRequest @ 0x14074B34C (PopDiagTracePowerLimitRequest.c)
 *     PopDiagTracePowerLimitRequestValueUpdate @ 0x14074B664 (PopDiagTracePowerLimitRequestValueUpdate.c)
 *     PopUmpoSendPowerRequestCreate @ 0x140A638E8 (PopUmpoSendPowerRequestCreate.c)
 *     PopDiagTraceThermalRequest @ 0x140A70EF4 (PopDiagTraceThermalRequest.c)
 *     PopGetPowerRequestListInfo @ 0x140A7A0E0 (PopGetPowerRequestListInfo.c)
 *     ExGetNextWakeTime @ 0x140B5EEBC (ExGetNextWakeTime.c)
 * Callees:
 *     PoStoreRequester @ 0x140425FC4 (PoStoreRequester.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

__int64 __fastcall PoStoreDiagnosticContext(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r14
  __int64 result; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // rcx
  unsigned int v10; // edi
  bool v11; // dl
  _BYTE *v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a3;
  v14 = *a3;
  result = PoStoreRequester(a1, a2, &v14, 0LL);
  v8 = *(_QWORD *)(a1 + 48);
  v9 = v14;
  v10 = result;
  v11 = (int)result >= 0;
  if ( v8 )
  {
    v12 = (_BYTE *)(((unsigned __int64)a2 + v14 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    v13 = v12 - (_BYTE *)a2 + v8;
    *a3 = v13;
    if ( v11 && v3 >= v13 )
    {
      a2[4] = v12 - (_BYTE *)a2;
      *a2 = v13;
      memmove(v12, (const void *)((a1 + 63) & 0xFFFFFFFFFFFFFFF8uLL), *(_QWORD *)(a1 + 48));
      return v10;
    }
    else
    {
      return 3221225507LL;
    }
  }
  else
  {
    if ( (int)result >= 0 )
    {
      a2[4] = 0LL;
      *a2 = v9;
    }
    *a3 = v9;
  }
  return result;
}
