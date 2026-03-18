/*
 * XREFs of Endpoint_ControlEndpointResetCompletion @ 0x1400091E0
 * Callers:
 *     <none>
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1400049B4 (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEsmEvent @ 0x140005BC0 (ESM_AddEsmEvent.c)
 *     Controller_ReportFatalError @ 0x140006A08 (Controller_ReportFatalError.c)
 *     TR_GetDequeuePointer @ 0x14000A060 (TR_GetDequeuePointer.c)
 *     TR_InitializeTransferRing @ 0x14000A7FC (TR_InitializeTransferRing.c)
 *     Command_SendCommand @ 0x14000BCD4 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_ddL @ 0x14001F9A4 (WPP_RECORDER_SF_ddL.c)
 *     WPP_RECORDER_SF_ddi @ 0x14002EC64 (WPP_RECORDER_SF_ddi.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall Endpoint_ControlEndpointResetCompletion(char *a1, int a2, __int128 *a3)
{
  __int64 *v3; // rbx
  char v6; // cl
  __int64 v7; // rsi
  unsigned int v8; // r10d
  int v9; // r10d
  __int64 v10; // r9
  __int64 DequeuePointer; // r8
  __int64 result; // rax
  int v13; // edx
  int v14; // edx

  v3 = (__int64 *)*((_QWORD *)a1 + 6);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_dD(
        v3[10],
        a2,
        13,
        89,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(_BYTE *)(v3[2] + 143),
        *((_DWORD *)v3 + 38));
    }
  }
  else
  {
    v6 = a1[60];
    if ( v6 == 1 )
    {
      v7 = *(_QWORD *)(*v3 + 144);
      TR_InitializeTransferRing(v3[11]);
      memset(a1, 0, 0x60uLL);
      v8 = *((_DWORD *)a1 + 9) & 0xFFFF43FF;
      *((_QWORD *)a1 + 5) = Endpoint_ControlEndpointResetSetDequeuePointerCompletion;
      v9 = v8 | 0x4000;
      *((_QWORD *)a1 + 6) = v3;
      v10 = 0LL;
      *((_DWORD *)a1 + 9) = v9;
      if ( *((_BYTE *)v3 + 37) )
        DequeuePointer = *(_QWORD *)(*(_QWORD *)(v3[18] + 32) + 24LL);
      else
        DequeuePointer = TR_GetDequeuePointer(v3[11]);
      *((_QWORD *)a1 + 3) = DequeuePointer;
      *((_DWORD *)a1 + 9) = v9 ^ (v9 ^ (*((_DWORD *)v3 + 38) << 16)) & 0x1F0000;
      a1[39] = *(_BYTE *)(v3[2] + 143);
      *((_QWORD *)a1 + 9) = v10;
      *((_QWORD *)a1 + 10) = v10;
      *((_QWORD *)a1 + 11) = v10;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = *((_WORD *)a1 + 19) & 0x1F;
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_ddi(v3[10], v13, DequeuePointer, 91);
      }
      return Command_SendCommand(v7, a1);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = *(unsigned __int8 *)(v3[2] + 143);
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_ddL(
        v3[10],
        v14,
        13,
        90,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        *(_BYTE *)(v3[2] + 143),
        *((_DWORD *)v3 + 38),
        v6);
    }
    Controller_HwVerifierBreakIfEnabled(
      *v3,
      v3[1],
      v3[3],
      256LL,
      "Endpoint Reset Command failed",
      (__int128 *)(a1 + 24),
      a3);
    Controller_ReportFatalError(*v3, 2, 4102, 0, v3[2], (__int64)v3, 0LL);
  }
  _m_prefetchw(v3 + 4);
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
  if ( (result & 2) == 0 )
    return ESM_AddEsmEvent((__int64)v3);
  return result;
}
