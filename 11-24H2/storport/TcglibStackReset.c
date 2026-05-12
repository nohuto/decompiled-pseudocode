/*
 * XREFs of TcglibStackReset @ 0x14013CECC
 * Callers:
 *     TcglibpCheckError @ 0x14013D2CC (TcglibpCheckError.c)
 *     TcglibpGetCapabilities @ 0x14013FB04 (TcglibpGetCapabilities.c)
 *     TcglibpOpenSessionWithRetry @ 0x140141998 (TcglibpOpenSessionWithRetry.c)
 * Callees:
 *     TcglibEalExecuteCommandSync @ 0x1400853BC (TcglibEalExecuteCommandSync.c)
 *     TcglibEalGetCommandPayload @ 0x140085744 (TcglibEalGetCommandPayload.c)
 *     TcglibEalLogCommand @ 0x14008578C (TcglibEalLogCommand.c)
 *     TcglibEalReuseCommand @ 0x140085E7C (TcglibEalReuseCommand.c)
 *     TcglibReverseBytes @ 0x14013C3EC (TcglibReverseBytes.c)
 *     TcglibpAllocateRequestResources @ 0x14013EE80 (TcglibpAllocateRequestResources.c)
 *     TcglibpExecuteCommand @ 0x14013F190 (TcglibpExecuteCommand.c)
 *     TcglibpReleaseRequestResources @ 0x14013F49C (TcglibpReleaseRequestResources.c)
 */

__int64 __fastcall TcglibStackReset(__int64 a1, __int64 a2)
{
  int *v2; // rsi
  int v5; // r12d
  int v6; // edx
  int v7; // r8d
  int RequestResources; // ebx
  _WORD *v9; // rbx
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // r15
  __int64 v14; // r8
  __int64 v15; // rbx
  char v18[8]; // [rsp+30h] [rbp-38h] BYREF
  char v19[8]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v20; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-20h] BYREF
  _WORD *v22; // [rsp+50h] [rbp-18h] BYREF
  __int64 v23; // [rsp+58h] [rbp-10h] BYREF
  __int16 v24; // [rsp+B0h] [rbp+48h] BYREF
  __int16 v25; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v26; // [rsp+C0h] [rbp+58h] BYREF
  int v27; // [rsp+C8h] [rbp+60h] BYREF

  v2 = *(int **)a1;
  v22 = 0LL;
  v23 = 0LL;
  v26 = 0;
  v20 = 0LL;
  v5 = 4;
  v21 = 0LL;
  TcglibpReleaseRequestResources(v2, a2 + 40, a2 + 48);
  v7 = *(unsigned __int16 *)(a2 + 24);
  if ( !(_WORD)v7 )
  {
    v7 = *(unsigned __int16 *)(a1 + 28);
    *(_WORD *)(a2 + 24) = v7;
  }
  LOBYTE(v6) = 2;
  RequestResources = TcglibpAllocateRequestResources(*(_QWORD *)a1, v6, v7, 512, (__int64)&v20, (__int64)&v21);
  if ( RequestResources >= 0 )
  {
    TcglibEalGetCommandPayload(v2, v20, &v22, &v26);
    if ( v26 >= 8 )
    {
      v25 = *(_WORD *)(a2 + 24);
      TcglibReverseBytes((char *)&v25, 2u);
      v9 = v22;
      v27 = v10;
      *v22 = v25;
      TcglibReverseBytes((char *)&v27, 4u);
      v11 = v20;
      *((_DWORD *)v9 + 1) = v27;
      RequestResources = TcglibpExecuteCommand(v2, v11, v12, 0LL);
    }
    else
    {
      RequestResources = -1073741789;
    }
  }
  if ( RequestResources >= 0 )
  {
    v13 = v21;
    while ( 1 )
    {
      TcglibEalLogCommand(v2, "ResetStack", 0, 0, 0LL, 0LL);
      RequestResources = TcglibEalExecuteCommandSync((__int64)v2, v13, v14);
      if ( RequestResources < 0 )
        break;
      TcglibEalGetCommandPayload(v2, v13, &v23, &v26);
      if ( v26 < 0x10 )
        goto LABEL_19;
      v15 = v23;
      *(_DWORD *)v18 = *(_DWORD *)(v23 + 4);
      TcglibReverseBytes(v18, 4u);
      if ( *(_DWORD *)v18 != 2 )
        goto LABEL_19;
      v24 = *(_WORD *)(v15 + 10);
      TcglibReverseBytes((char *)&v24, 2u);
      if ( v24 == 4 )
      {
        *(_DWORD *)v19 = *(_DWORD *)(v15 + 12);
        TcglibReverseBytes(v19, 4u);
        if ( !*(_DWORD *)v19 )
        {
          RequestResources = 0;
LABEL_18:
          _InterlockedExchange((volatile __int32 *)(a1 + 8), 0);
          break;
        }
LABEL_19:
        RequestResources = -1073741435;
        break;
      }
      if ( v24 )
        goto LABEL_19;
      RequestResources = 259;
      TcglibEalReuseCommand(v2, v13);
      if ( !v5-- )
        goto LABEL_18;
    }
  }
  TcglibpReleaseRequestResources(v2, &v20, &v21);
  return (unsigned int)RequestResources;
}
