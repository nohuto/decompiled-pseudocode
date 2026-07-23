/*
 * XREFs of PoStoreDiagnosticContext @ 0x1402BA9FC
 * Callers:
 *     PopTraceThermalRequestPassiveHistogram @ 0x1402B93A8 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1404A5290 (PopTraceThermalRequestActiveActivity.c)
 *     ExGetWakeTimerList @ 0x1404BB1AC (ExGetWakeTimerList.c)
 *     PopTracePowerLimitHistogram @ 0x1405D3820 (PopTracePowerLimitHistogram.c)
 *     PopExecutePowerAction @ 0x140751894 (PopExecutePowerAction.c)
 *     PopDiagTracePowerLimitRequest @ 0x140755880 (PopDiagTracePowerLimitRequest.c)
 *     PopDiagTracePowerLimitRequestValueUpdate @ 0x140755B98 (PopDiagTracePowerLimitRequestValueUpdate.c)
 *     PopUmpoSendPowerRequestCreate @ 0x140A5E938 (PopUmpoSendPowerRequestCreate.c)
 *     PopDiagTraceThermalRequest @ 0x140A6CC64 (PopDiagTraceThermalRequest.c)
 *     PopGetPowerRequestListInfo @ 0x140A76148 (PopGetPowerRequestListInfo.c)
 *     ExGetNextWakeTime @ 0x140B6FA08 (ExGetNextWakeTime.c)
 * Callees:
 *     PoStoreRequester @ 0x1402BAE34 (PoStoreRequester.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
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
