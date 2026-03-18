/*
 * XREFs of NVMeHwPassiveInitialize @ 0x1400185A0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerInitPart2 @ 0x140007440 (NVMeControllerInitPart2.c)
 *     NVMeControllerStartFailureEventLog @ 0x14000D720 (NVMeControllerStartFailureEventLog.c)
 *     NVMeControllerInitPart3 @ 0x14000FB50 (NVMeControllerInitPart3.c)
 *     NVMeLogEtwControllerInfo @ 0x14001890C (NVMeLogEtwControllerInfo.c)
 *     NVMeLogTelemetryControllerInfo @ 0x140018DF4 (NVMeLogTelemetryControllerInfo.c)
 *     NVMePowerInitialize @ 0x14001E528 (NVMePowerInitialize.c)
 */

char __fastcall NVMeHwPassiveInitialize(__int64 a1)
{
  char v1; // di
  __int64 v2; // rsi
  __int64 v5; // rdx
  __int64 v6; // r9
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 1560);
  if ( (*(_DWORD *)(a1 + 4064) & 0x1000) != 0 )
    return 1;
  StorPortExtendedFunction(55LL, a1, 0LL, &unk_140036AB8);
  if ( *(_DWORD *)(v2 + 516) )
  {
    LOBYTE(v5) = 1;
    if ( (unsigned int)NVMeControllerInitPart2(a1, v5, 0LL, v6) )
      goto LABEL_13;
    v7 = 0xFFFFFFFFLL;
    v8 = *(unsigned __int16 *)(a1 + 330);
    v9 = v8 * (*(unsigned __int16 *)(a1 + 326) - 1LL);
    if ( v9 <= 0xFFFFFFFF )
    {
      v7 = v8 * (*(unsigned __int16 *)(a1 + 326) - 1LL);
      if ( !v9 )
        v7 = 128LL;
    }
    v10 = *(unsigned int *)(a1 + 152);
    if ( (_DWORD)v10 )
    {
      if ( v7 >= v10 )
        v7 = *(unsigned int *)(a1 + 152);
    }
    StorPortExtendedFunction(84LL, a1, v7, (unsigned int)v7);
  }
  if ( NVMeControllerInitPart3(a1, 0) )
  {
    NVMePowerInitialize(a1);
    v1 = 1;
    NVMeLogEtwControllerInfo(a1);
    NVMeLogTelemetryControllerInfo(a1);
    return v1;
  }
LABEL_13:
  NVMeControllerStartFailureEventLog(a1);
  NVMeLogEtwControllerInfo(a1);
  return v1;
}
