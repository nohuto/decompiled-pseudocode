/*
 * XREFs of ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@@Z @ 0x14018BA34
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14005081C (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x140051ED8 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ?IsUMSuppressed@CBaseProcessor@@QEBA_NXZ @ 0x1400C1FA0 (-IsUMSuppressed@CBaseProcessor@@QEBA_NXZ.c)
 *     ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1400D77DC (-DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?GetPublicExtraInfo@MouseInputDataEx@CMouseProcessor@@QEBAKXZ @ 0x1400ECE24 (-GetPublicExtraInfo@MouseInputDataEx@CMouseProcessor@@QEBAKXZ.c)
 *     ?CommitPosition@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@W4_CommitMousePosAndMoveResult@@@Z @ 0x1400EDC14 (-CommitPosition@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@W4_CommitMousePosAndMoveResult@@@Z.c)
 *     ApiSetEditionCommitMousePosAndMove @ 0x14019151C (ApiSetEditionCommitMousePosAndMove.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::CommitMousePosAndMoveCursor(
        CMouseProcessor *this,
        struct CMouseProcessor::MouseInputDataEx *a2,
        struct MouseInputProcessingState *a3,
        struct _MousePacketPerf *a4)
{
  unsigned int v8; // ebx
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int16 v11; // ax
  __int64 v12; // rcx
  BOOL v13; // ebx
  int v14; // edi
  int v15; // ebx
  bool v16; // al
  int v17; // edx
  int v18; // ecx
  __int64 v19; // [rsp+40h] [rbp-30h] BYREF
  _WORD v20[4]; // [rsp+48h] [rbp-28h] BYREF
  int v21; // [rsp+50h] [rbp-20h]
  int v22; // [rsp+54h] [rbp-1Ch]
  int v23; // [rsp+58h] [rbp-18h]
  int PublicExtraInfo; // [rsp+5Ch] [rbp-14h]

  if ( !CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 16) && CBaseProcessor::IsUMSuppressed(this) )
  {
    v8 = 0;
    v9 = 4;
LABEL_24:
    InputTraceLogging::Mouse::DropMove(*((_QWORD *)a2 + 7), v9);
    goto LABEL_25;
  }
  if ( *((_DWORD *)a2 + 22) )
  {
    v8 = ApiSetEditionCommitMousePosAndMove((_DWORD)a3, 0, 0, (int)a2 + 24, 0, 0LL, 6, (__int64)a4);
  }
  else
  {
    if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 0x8000) )
    {
      LODWORD(v19) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3135LL);
    }
    if ( (*((_DWORD *)a3 + 2) || *((_DWORD *)a3 + 3)) && (*((_BYTE *)a2 + 2) & 1) != 0 )
    {
      LODWORD(v19) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3143LL);
    }
    v11 = *((_WORD *)a2 + 1) & 0xF;
    v20[0] = 0;
    v20[1] = v11;
    v20[2] = *((_WORD *)a2 + 2);
    v20[3] = *((_WORD *)a2 + 3);
    v22 = *((_DWORD *)a3 + 2) + *((_DWORD *)a2 + 3);
    v23 = *((_DWORD *)a3 + 3) + *((_DWORD *)a2 + 4);
    PublicExtraInfo = CMouseProcessor::MouseInputDataEx::GetPublicExtraInfo(a2);
    v21 = 0;
    v13 = CMouseProcessor::MouseInputDataEx::TestProcessingOption(v12, 16);
    v14 = v13 | 2;
    if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 2) )
      v14 = v13;
    v15 = v14 | 4;
    if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 0x2000) )
      v15 = v14;
    v16 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 0x10000);
    v17 = v15 | 8;
    if ( !v16 )
      v17 = v15;
    v18 = v17 | 0x10;
    if ( (*((_WORD *)a2 + 1) & 0x100) == 0 )
      v18 = v17;
    v8 = ApiSetEditionCommitMousePosAndMove(
           (_DWORD)a3,
           PublicExtraInfo,
           (unsigned int)v20,
           (int)a2 + 24,
           *((_DWORD *)a2 + 12),
           *((_QWORD *)a2 + 7),
           v18,
           (__int64)a4);
    if ( (v8 & 8) != 0 )
      *((_QWORD *)a3 + 1) = 0LL;
  }
  if ( !v8 )
  {
    v9 = 2;
    goto LABEL_24;
  }
LABEL_25:
  v19 = *(_QWORD *)(W32GetUserSessionState(v10) + 19240);
  InputTraceLogging::Mouse::CommitPosition(*((_QWORD *)a2 + 7), (__int64)&v19, v8);
  if ( v8 && (v8 & 1) == 0 )
  {
    LODWORD(v19) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2451LL);
  }
  *((_DWORD *)a2 + 19) = v8;
}
