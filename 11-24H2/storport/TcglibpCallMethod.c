/*
 * XREFs of TcglibpCallMethod @ 0x14013EF38
 * Callers:
 *     TcglibpAssignNamespaceLocking @ 0x14013DAE0 (TcglibpAssignNamespaceLocking.c)
 *     TcglibpDeassignNamespaceLocking @ 0x14013DB88 (TcglibpDeassignNamespaceLocking.c)
 *     TcglibpEraseBand @ 0x14013DC1C (TcglibpEraseBand.c)
 *     TcglibpGetBandMetadata @ 0x14013DCF4 (TcglibpGetBandMetadata.c)
 *     TcglibpGetLockingObjectInfo @ 0x14013DE10 (TcglibpGetLockingObjectInfo.c)
 *     TcglibpSetBandMetadata @ 0x14013E5D4 (TcglibpSetBandMetadata.c)
 *     TcglibpGetTableColumns @ 0x14013F370 (TcglibpGetTableColumns.c)
 *     TcglibpSetTableColumns @ 0x14013F554 (TcglibpSetTableColumns.c)
 *     TcglibpActivateLockingSp @ 0x14013F7B4 (TcglibpActivateLockingSp.c)
 *     TcglibpRevertLockingSp @ 0x14013F9C0 (TcglibpRevertLockingSp.c)
 *     TcglibpSetACEBooleanExpr @ 0x14013FA60 (TcglibpSetACEBooleanExpr.c)
 *     TcglibpGetSecretProtection @ 0x1401407CC (TcglibpGetSecretProtection.c)
 *     TcglibpAuthenticateSession @ 0x14014147C (TcglibpAuthenticateSession.c)
 *     TcglibpGetTPerProperties @ 0x140141758 (TcglibpGetTPerProperties.c)
 *     TcglibpOpenSession @ 0x14014186C (TcglibpOpenSession.c)
 *     TcglibpSetMaxPacketSizes @ 0x140141A9C (TcglibpSetMaxPacketSizes.c)
 * Callees:
 *     TcglibEalGetCommandPayload @ 0x140085744 (TcglibEalGetCommandPayload.c)
 *     TcglibEalLogError @ 0x140085AEC (TcglibEalLogError.c)
 *     TcglibpExecuteCommand @ 0x14013F190 (TcglibpExecuteCommand.c)
 *     TcglibpReinitRequestResources @ 0x14013F424 (TcglibpReinitRequestResources.c)
 *     InitTcgParser @ 0x140141D30 (InitTcgParser.c)
 *     ParseTcgMethodData @ 0x1401421FC (ParseTcgMethodData.c)
 *     ParseTcgReceivedPayload @ 0x140142540 (ParseTcgReceivedPayload.c)
 *     GenCallMethodBegin @ 0x140142D70 (GenCallMethodBegin.c)
 *     GenCallMethodEnd @ 0x140142E18 (GenCallMethodEnd.c)
 *     GenTCGHeaders @ 0x140143434 (GenTCGHeaders.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TcglibpCallMethod(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64, __int64, __int64 *, __int64),
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 (__fastcall *a9)(__int64, __int64, __int64, __int64),
        __int64 a10)
{
  int *v10; // r12
  __int64 v12; // rax
  __int64 v16; // rdi
  int v17; // eax
  int v18; // r8d
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  const char *v23; // rdx
  int v24; // eax
  int v25; // eax
  __int64 v26; // rax
  const char *v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v31; // [rsp+30h] [rbp-30h]
  __int64 v32; // [rsp+38h] [rbp-28h] BYREF
  __int64 v33; // [rsp+40h] [rbp-20h]
  __int64 v34; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v35; // [rsp+50h] [rbp-10h]
  int v36; // [rsp+54h] [rbp-Ch]
  unsigned int v37; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v38; // [rsp+A8h] [rbp+48h] BYREF

  v10 = *(int **)a1;
  v12 = *(_QWORD *)(a2 + 48);
  v33 = *(_QWORD *)(a2 + 40);
  v38 = 0LL;
  v37 = 0;
  v31 = v12;
  TcglibEalGetCommandPayload(v10, v33, &v38, &v37);
  v36 = 0;
  v34 = v38 + 56;
  v35 = v37 - 56;
  LODWORD(v16) = GenCallMethodBegin(&v34, a3, a4);
  if ( (int)v16 >= 0 )
  {
    if ( !a5 || (LODWORD(v16) = a5(a1, a2, &v34, a6), (int)v16 >= 0) )
    {
      LODWORD(v16) = GenCallMethodEnd(&v34);
      if ( (int)v16 >= 0 )
      {
        v17 = 0;
        v18 = 0;
        if ( a3 != 255 )
        {
          v17 = *(_DWORD *)(a2 + 8);
          v18 = *(_DWORD *)(a2 + 4);
        }
        LODWORD(v16) = GenTCGHeaders(v38, v37, a2, v36, v17, v18);
        if ( (int)v16 >= 0 )
        {
          v20 = TcglibpExecuteCommand(v10, v33, v19, 0LL);
          v16 = v20;
          if ( v20 < 0 )
          {
            v23 = "TcglibpCallMethod-SEND failed";
LABEL_12:
            TcglibEalLogError(*(int **)a1, v23, a3, a4, v16, 0LL);
            goto LABEL_23;
          }
          LOBYTE(v22) = 1;
          v24 = TcglibpExecuteCommand(v10, v31, v21, v22);
          v16 = v24;
          if ( v24 < 0 )
          {
            v23 = "TcglibpCallMethod-RECV failed";
            goto LABEL_12;
          }
          TcglibEalGetCommandPayload(v10, v31, &v38, &v37);
          if ( !(unsigned int)InitTcgParser(a1, v38, v37) )
          {
            v32 = 0LL;
            v25 = ParseTcgReceivedPayload(a1);
            v16 = v25;
            if ( v25 < 0 )
            {
              v26 = *(unsigned __int8 *)(a1 + 88);
              v27 = "ParseTcgReceivedPayload failed";
              v28 = v16;
            }
            else
            {
              LODWORD(v26) = ParseTcgMethodData(a1, a7, a8, &v32);
              LODWORD(v16) = v26;
              if ( (int)v26 >= 0 )
              {
                if ( a9 )
                {
                  v29 = a9(a1, a2, v32, a10);
                  LODWORD(v16) = v29;
                  if ( v29 < 0 )
                    TcglibEalLogError(*(int **)a1, "TcglibpCallMethod-Parsing data failed", a3, a4, v29, 0LL);
                }
                goto LABEL_22;
              }
              v27 = "ParseTcgMethodData failed";
              v26 = (int)v26;
              v28 = 0LL;
            }
            TcglibEalLogError(*(int **)a1, v27, a3, a4, v26, v28);
          }
LABEL_22:
          _InterlockedExchange((volatile __int32 *)(a1 + 52), 0);
        }
      }
    }
  }
LABEL_23:
  TcglibpReinitRequestResources(v10, v33, v31);
  return (unsigned int)v16;
}
