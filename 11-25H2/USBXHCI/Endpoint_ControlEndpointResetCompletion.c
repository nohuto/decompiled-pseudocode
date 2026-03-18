/*
 * XREFs of Endpoint_ControlEndpointResetCompletion @ 0x14000FF70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     Command_SendCommand @ 0x140008550 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     TR_InitializeTransferRing @ 0x1400104C4 (TR_InitializeTransferRing.c)
 *     TR_GetDequeuePointer @ 0x140010580 (TR_GetDequeuePointer.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x14001103C (Controller_HwVerifierBreakIfEnabled.c)
 *     ESM_AddEsmEvent @ 0x140012218 (ESM_AddEsmEvent.c)
 *     Controller_ReportFatalError @ 0x140013068 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_ddi @ 0x14002F914 (WPP_RECORDER_SF_ddi.c)
 *     memset @ 0x140059AC0 (memset.c)
 */

__int64 __fastcall Endpoint_ControlEndpointResetCompletion(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  int v6; // ecx
  __int64 v7; // rsi
  unsigned int v8; // r10d
  int v9; // r10d
  __int64 v10; // r9
  __int64 DequeuePointer; // r8
  __int64 result; // rax
  int v13; // edx

  v3 = a1[6];
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(v3 + 80),
        4u,
        0xDu,
        0x56u,
        (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL),
        *(_DWORD *)(v3 + 144));
  }
  else
  {
    v6 = *((unsigned __int8 *)a1 + 60);
    if ( (_BYTE)v6 == 1 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)v3 + 144LL);
      TR_InitializeTransferRing(*(_QWORD *)(v3 + 88));
      memset(a1, 0, 0x60uLL);
      v8 = *((_DWORD *)a1 + 9) & 0xFFFF43FF;
      a1[5] = Endpoint_ControlEndpointResetSetDequeuePointerCompletion;
      v9 = v8 | 0x4000;
      a1[6] = v3;
      v10 = 0LL;
      *((_DWORD *)a1 + 9) = v9;
      if ( *(_BYTE *)(v3 + 37) )
        DequeuePointer = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 136) + 32LL) + 24LL);
      else
        DequeuePointer = TR_GetDequeuePointer(*(_QWORD *)(v3 + 88));
      a1[3] = DequeuePointer;
      *((_DWORD *)a1 + 9) = v9 ^ (v9 ^ (*(_DWORD *)(v3 + 144) << 16)) & 0x1F0000;
      *((_BYTE *)a1 + 39) = *(_BYTE *)(*(_QWORD *)(v3 + 16) + 135LL);
      a1[9] = v10;
      a1[10] = v10;
      a1[11] = v10;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = *((_WORD *)a1 + 19) & 0x1F;
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_ddi(*(_QWORD *)(v3 + 80), v13, DequeuePointer, 88);
      }
      return Command_SendCommand(v7, (__int64)a1);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v3 + 80),
        2u,
        0xDu,
        0x57u,
        (__int64)&WPP_0e51d3b82fdb347dedaae242937bad3f_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(v3 + 16) + 135LL),
        *(_DWORD *)(v3 + 144),
        v6);
    Controller_HwVerifierBreakIfEnabled(
      *(_QWORD *)v3,
      *(_QWORD *)(v3 + 8),
      *(_QWORD *)(v3 + 24),
      256,
      (__int64)"Endpoint Reset Command failed",
      (__int64)(a1 + 3),
      a3);
    Controller_ReportFatalError(*(_QWORD *)v3, 2, 4102, 0, *(_QWORD *)(v3 + 16), v3, 0LL);
  }
  _m_prefetchw((const void *)(v3 + 32));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v3 + 32), 2u);
  if ( (result & 2) == 0 )
    return ESM_AddEsmEvent(v3, 12LL);
  return result;
}
