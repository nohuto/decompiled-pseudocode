/*
 * XREFs of TcglibReverseBytes @ 0x14013C3EC
 * Callers:
 *     TcglibStackReset @ 0x14013CECC (TcglibStackReset.c)
 *     GenAssignNamespaceParams @ 0x14013D340 (GenAssignNamespaceParams.c)
 *     GenDeassignNamespaceParams @ 0x14013D3A0 (GenDeassignNamespaceParams.c)
 *     ParseAssignNamespace @ 0x14013D4F0 (ParseAssignNamespace.c)
 *     ParseLockingObjectInfo @ 0x14013D7F0 (ParseLockingObjectInfo.c)
 *     TcglibpGetLockingObjectInfo @ 0x14013DE10 (TcglibpGetLockingObjectInfo.c)
 *     TcglibpExecuteCommand @ 0x14013F190 (TcglibpExecuteCommand.c)
 *     GenActivateParams @ 0x14013F600 (GenActivateParams.c)
 *     GenSetACEBooleanExpr @ 0x14013F6C0 (GenSetACEBooleanExpr.c)
 *     TcglibpGetLockingInfoTable @ 0x14013FE34 (TcglibpGetLockingInfoTable.c)
 *     TcglibpParseLevel0Data @ 0x140140108 (TcglibpParseLevel0Data.c)
 *     TcglibpGetSecretProtection @ 0x1401407CC (TcglibpGetSecretProtection.c)
 *     GenAuthenticateParams @ 0x1401409D0 (GenAuthenticateParams.c)
 *     GenStartSessionParams @ 0x140140C00 (GenStartSessionParams.c)
 *     InitTcgParser @ 0x140141D30 (InitTcgParser.c)
 *     ParseTcgMethodData @ 0x1401421FC (ParseTcgMethodData.c)
 *     GenCallMethodBegin @ 0x140142D70 (GenCallMethodBegin.c)
 *     GenTCGHeaders @ 0x140143434 (GenTCGHeaders.c)
 * Callees:
 *     <none>
 */

char __fastcall TcglibReverseBytes(char *a1, unsigned int a2)
{
  unsigned int v3; // ebx
  char *v4; // r11
  char v5; // r8
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  char result; // al

  v3 = 0;
  if ( a2 >> 1 )
  {
    v4 = a1;
    do
    {
      v5 = *v4;
      v6 = a2 - v3++;
      v7 = v6 - 1;
      v8 = (unsigned int)v7;
      result = a1[v7];
      *v4++ = result;
      a1[v8] = v5;
    }
    while ( v3 < a2 >> 1 );
  }
  return result;
}
