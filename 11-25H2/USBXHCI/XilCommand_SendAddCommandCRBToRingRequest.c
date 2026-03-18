/*
 * XREFs of XilCommand_SendAddCommandCRBToRingRequest @ 0x14000AACC
 * Callers:
 *     Command_InternalSendCommand @ 0x1400080E4 (Command_InternalSendCommand.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x14000C25C (SecureChannel_SendRequestSynchronously.c)
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_sds @ 0x14004577C (WPP_RECORDER_SF_sds.c)
 *     memmove @ 0x1400597C0 (memmove.c)
 */

__int64 __fastcall XilCommand_SendAddCommandCRBToRingRequest(__int64 a1, __int64 a2)
{
  unsigned int v3; // r9d
  int v5; // edx
  __int64 v6; // rbp
  unsigned int v7; // eax
  __int64 v8; // r15
  unsigned int v9; // r14d
  __int64 Pool2; // rax
  int v11; // edx
  __int64 v12; // rsi
  unsigned int v13; // edi
  int v14; // edx
  int v15; // r9d
  unsigned int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  int v20; // edx
  __int64 v21; // r9
  const char *v22; // rcx
  int v24; // [rsp+60h] [rbp+8h] BYREF

  v24 = 0;
  v3 = *(_DWORD *)(a2 + 80);
  v5 = -1;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  if ( v3 + 72 >= v3 )
    v5 = v3 + 72;
  v7 = 0;
  v8 = *(_QWORD *)(v6 + 112);
  if ( v3 + 72 >= v3 )
    v7 = v5;
  v9 = v7;
  Pool2 = ExAllocatePool2(64LL, v7, 1229146200LL);
  v12 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 24) = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(Pool2 + 32) = 19;
    *(_OWORD *)(Pool2 + 40) = *(_OWORD *)(a2 + 24);
    v16 = *(_DWORD *)(a2 + 80);
    if ( v16 )
    {
      memmove((void *)(v12 + 72), *(const void **)(a2 + 72), v16);
      *(_DWORD *)(v12 + 68) = *(_DWORD *)(a2 + 80);
    }
    *(_DWORD *)(v12 + 64) = *(_DWORD *)(a2 + 84);
    v17 = *(_DWORD *)(a2 + 84);
    if ( v17 == 1 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 608LL);
    }
    else if ( v17 == 2 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 1320LL);
    }
    else
    {
      if ( v17 )
      {
        v13 = -1073741811;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = 2;
          WPP_RECORDER_SF_(*(_QWORD *)(v6 + 72), v11, 7, 20, (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids);
        }
        v21 = 570LL;
        v22 = "Crb->InputContextType is invalid";
        goto LABEL_29;
      }
      v18 = 0LL;
    }
    *(_QWORD *)(v12 + 56) = v18;
    v19 = SecureChannel_SendRequestSynchronously(v8, v12, v9, &v24, 4);
    v13 = v19;
    if ( v19 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v6 + 72),
          v20,
          7,
          21,
          (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids,
          v19);
      }
      goto LABEL_30;
    }
    v13 = v24;
    if ( v24 >= 0 )
    {
LABEL_30:
      ExFreePoolWithTag((PVOID)v12, 0x49434858u);
      return v13;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v20) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v6 + 72),
        v20,
        7,
        22,
        (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids,
        v24);
    }
    v21 = 593LL;
    v22 = "IOCTL succeeded but CommandAddCommandTRBToRing failed in VTL-1 failed";
LABEL_29:
    Debug_FreAssertMsg(v22, 0LL, "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c", v21);
    goto LABEL_30;
  }
  v13 = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_(*(_QWORD *)(v6 + 72), v11, 7, 19, (__int64)&WPP_db21d8d52d393cb96c062fdb7e607301_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        (unsigned int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilcommand.c",
        v15);
  }
  if ( !KdRefreshDebuggerNotPresent() )
    __debugbreak();
  return v13;
}
