/*
 * XREFs of TcglibpGetCapabilities @ 0x14013FB04
 * Callers:
 *     TcglibDiscoverDevice @ 0x14013BF5C (TcglibDiscoverDevice.c)
 * Callees:
 *     WPP_SF_ @ 0x14005585C (WPP_SF_.c)
 *     WPP_SF_d @ 0x140055B28 (WPP_SF_d.c)
 *     TcglibEalAllocateIfRecvCommand @ 0x140084DA4 (TcglibEalAllocateIfRecvCommand.c)
 *     TcglibEalAllocateIfSendCommand @ 0x1400850B0 (TcglibEalAllocateIfSendCommand.c)
 *     TcglibEalExecuteCommandSync @ 0x1400853BC (TcglibEalExecuteCommandSync.c)
 *     TcglibEalFreeCommand @ 0x140085678 (TcglibEalFreeCommand.c)
 *     TcglibEalGetCommandPayload @ 0x140085744 (TcglibEalGetCommandPayload.c)
 *     TcglibEalLogCommand @ 0x14008578C (TcglibEalLogCommand.c)
 *     TcglibStackReset @ 0x14013CECC (TcglibStackReset.c)
 *     TcglibpGetTableColumnData @ 0x14013F300 (TcglibpGetTableColumnData.c)
 *     TcglibpGetLockingInfoTable @ 0x14013FE34 (TcglibpGetLockingInfoTable.c)
 *     TcglibpParseLevel0Data @ 0x140140108 (TcglibpParseLevel0Data.c)
 *     TcglibpGetSecretProtection @ 0x1401407CC (TcglibpGetSecretProtection.c)
 *     TcglibpCloseSession @ 0x14014155C (TcglibpCloseSession.c)
 *     TcglibpGetTPerProperties @ 0x140141758 (TcglibpGetTPerProperties.c)
 *     TcglibpOpenSessionWithRetry @ 0x140141998 (TcglibpOpenSessionWithRetry.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall TcglibpGetCapabilities(int **a1, __int64 a2)
{
  int *v2; // r15
  char v4; // r14
  int IfSendCommand; // ebx
  __int64 v7; // r8
  __int64 v8; // r12
  __int64 v9; // r8
  int v10; // eax
  _BYTE v12[4]; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v13; // [rsp+44h] [rbp-35h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-31h] BYREF
  unsigned __int64 v15; // [rsp+50h] [rbp-29h] BYREF
  __int64 v16; // [rsp+58h] [rbp-21h] BYREF
  _OWORD v17[3]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v18; // [rsp+90h] [rbp+17h]

  v2 = *a1;
  v15 = 0LL;
  v14 = 0LL;
  v18 = 0LL;
  v4 = 1;
  v16 = 0LL;
  v13 = 0;
  memset(v17, 0, sizeof(v17));
  IfSendCommand = TcglibEalAllocateIfSendCommand((__int64)v2, 1, 1, 2048, (__int64 *)&v14);
  if ( IfSendCommand >= 0 )
  {
    IfSendCommand = TcglibEalExecuteCommandSync((__int64)v2, v14, v7);
    TcglibEalFreeCommand(*a1, v14);
    if ( IfSendCommand >= 0 )
    {
      IfSendCommand = TcglibEalAllocateIfRecvCommand((__int64)v2, 1, 1, 2048, (__int64 *)&v15);
      if ( IfSendCommand >= 0 )
      {
        TcglibEalLogCommand(*a1, "GetCapabilities", 0, 0, 0LL, 0LL);
        v8 = v15;
        IfSendCommand = TcglibEalExecuteCommandSync((__int64)v2, v15, v9);
        if ( IfSendCommand >= 0 )
        {
          TcglibEalGetCommandPayload(*a1, v8, &v16, &v13);
          IfSendCommand = TcglibpParseLevel0Data(a1, v16, v13, a2);
        }
        TcglibEalFreeCommand(v2, v8);
        if ( IfSendCommand >= 0 )
        {
          if ( (int)TcglibpGetTPerProperties(a1, v17, a2 + 8) >= 0 )
            goto LABEL_13;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
            WPP_SF_(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xBu,
              (__int64)&WPP_0ef325dc9a723379ae6740d6b32d6064_Traceguids);
          v10 = TcglibStackReset((__int64)a1, (__int64)v17);
          IfSendCommand = v10;
          if ( v10 >= 0 )
          {
            IfSendCommand = TcglibpGetTPerProperties(a1, v17, a2 + 8);
            if ( IfSendCommand < 0 )
              return (unsigned int)IfSendCommand;
LABEL_13:
            IfSendCommand = TcglibpOpenSessionWithRetry(a1, v17, 0x20500000001LL);
            if ( IfSendCommand < 0 )
              return (unsigned int)IfSendCommand;
            IfSendCommand = TcglibpGetTableColumnData((__int64)a1, (__int64)v17, 0x20500000002LL, 6u, a2 + 68, 4, 0LL);
            if ( IfSendCommand < 0 )
              goto LABEL_22;
            *(_BYTE *)(a2 + 64) = 1;
            v12[0] = 0;
            IfSendCommand = TcglibpGetTableColumnData(
                              (__int64)a1,
                              (__int64)v17,
                              0x900000006LL,
                              5u,
                              (__int64)v12,
                              1,
                              0LL);
            if ( IfSendCommand < 0 || v12[0] )
            {
              if ( !*(_BYTE *)(a2 + 148) )
              {
LABEL_22:
                TcglibpCloseSession(a1, v17);
                if ( IfSendCommand >= 0 )
                {
                  if ( *(_BYTE *)(a2 + 64) )
                  {
                    if ( *(_DWORD *)(a2 + 68) == 9 )
                    {
                      IfSendCommand = TcglibpOpenSessionWithRetry(a1, v17, 0x20500000002LL);
                      if ( IfSendCommand >= 0 )
                      {
                        IfSendCommand = TcglibpGetLockingInfoTable(a1, v17, a2);
                        if ( IfSendCommand >= 0 )
                          IfSendCommand = TcglibpGetSecretProtection(a1, v17, a2 + 80);
                        TcglibpCloseSession(a1, v17);
                      }
                    }
                  }
                }
                return (unsigned int)IfSendCommand;
              }
              if ( !*(_BYTE *)(a2 + 149) && *(_BYTE *)(a2 + 150) )
                v4 = 0;
            }
            *(_BYTE *)(a2 + 4) = v4;
            goto LABEL_22;
          }
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            WPP_SF_d(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xCu,
              (__int64)&WPP_0ef325dc9a723379ae6740d6b32d6064_Traceguids,
              v10);
        }
      }
    }
  }
  return (unsigned int)IfSendCommand;
}
