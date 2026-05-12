/*
 * XREFs of TcglibTPerReset @ 0x14013D1E4
 * Callers:
 *     RaidAdapterStorageTcgResetState @ 0x14007DE48 (RaidAdapterStorageTcgResetState.c)
 *     RaidUnitStorageTcgResetState @ 0x14008277C (RaidUnitStorageTcgResetState.c)
 * Callees:
 *     TcglibEalGetCommandPayload @ 0x140085744 (TcglibEalGetCommandPayload.c)
 *     TcglibpAllocateRequestResources @ 0x14013EE80 (TcglibpAllocateRequestResources.c)
 *     TcglibpExecuteCommand @ 0x14013F190 (TcglibpExecuteCommand.c)
 *     TcglibpReleaseRequestResources @ 0x14013F49C (TcglibpReleaseRequestResources.c)
 */

__int64 __fastcall TcglibTPerReset(_DWORD **a1)
{
  _DWORD *v1; // rdi
  int RequestResources; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  int v6; // [rsp+50h] [rbp+8h] BYREF
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  v1 = *a1;
  v7 = 0LL;
  v8 = 0LL;
  v6 = 0;
  RequestResources = TcglibpAllocateRequestResources((_DWORD)v1, 2, 4, 512, (__int64)&v7, (__int64)&v8);
  if ( RequestResources >= 0 )
  {
    TcglibEalGetCommandPayload(v1, v7, &v9, &v6);
    if ( v6 )
      RequestResources = TcglibpExecuteCommand(v1, v3, v4, 0LL);
    else
      RequestResources = -1073741789;
  }
  TcglibpReleaseRequestResources(v1, &v7, &v8);
  return (unsigned int)RequestResources;
}
