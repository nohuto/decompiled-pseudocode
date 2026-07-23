/*
 * XREFs of PiProcessClearDeviceProblem @ 0x140981B8C
 * Callers:
 *     PnpDeviceActionWorker @ 0x140467910 (PnpDeviceActionWorker.c)
 * Callees:
 *     PnpRestartDeviceNode @ 0x140721454 (PnpRestartDeviceNode.c)
 *     PipIsProblemReadonly @ 0x140722134 (PipIsProblemReadonly.c)
 *     PipClearDevNodeFlags @ 0x1408B8F2C (PipClearDevNodeFlags.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     PipClearDevNodeProblem @ 0x14098187C (PipClearDevNodeProblem.c)
 */

__int64 __fastcall PiProcessClearDeviceProblem(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  _DWORD *v4; // rdi
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  bool v8; // zf
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  P = 0LL;
  v4 = *(_DWORD **)(*(_QWORD *)(v1 + 312) + 40LL);
  v5 = v4[75];
  if ( (unsigned int)(v5 - 769) > 3 && v5 != 788 )
  {
    if ( (unsigned int)(v5 - 789) <= 1 )
      return (unsigned int)-1073741738;
    return v2;
  }
  v6 = v4[99];
  if ( (v6 & 0x6000) == 0 )
    return v2;
  v7 = *(_DWORD *)(a1 + 24);
  switch ( v7 )
  {
    case 1:
      if ( PipIsProblemReadonly((__int64)v4, v4[101]) )
        return (unsigned int)-1073741584;
      goto LABEL_17;
    case 3:
      if ( (v6 & 0x2000) == 0 )
        return (unsigned int)-1073741808;
      v8 = v4[101] == 47;
      break;
    case 25:
      if ( (v6 & 0x2000) == 0 )
        return (unsigned int)-1073741808;
      v8 = v4[101] == 55;
      break;
    default:
      goto LABEL_17;
  }
  if ( !v8 )
    return (unsigned int)-1073741808;
LABEL_17:
  PiPnpRtlBeginOperation(&P);
  PipClearDevNodeFlags((__int64)v4, 0x4000);
  PipClearDevNodeProblem((__int64)v4);
  if ( (unsigned int)(v4[75] - 769) > 1 )
    PnpRestartDeviceNode((__int64)v4);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return v2;
}
