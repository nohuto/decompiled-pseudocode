/*
 * XREFs of ?SendHandle@HandleSendReceiveClient@@AEAAJW4AE_MSG_TYPE@@PEAX@Z @ 0x14009108C
 * Callers:
 *     ?SetEventHandle@?$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAX@Z @ 0x140085110 (-SetEventHandle@-$CCrossProcessBaseClientEndpoint@UStaticControlData_V1@@UVolatileControlData_V0.c)
 *     ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x14008F810 (-SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?AeSendDuplicateHandle@HandleSendReceiveClient@@AEAAJPEAXPEAU_AE_API_MSG@@K0@Z @ 0x140090E18 (-AeSendDuplicateHandle@HandleSendReceiveClient@@AEAAJPEAXPEAU_AE_API_MSG@@K0@Z.c)
 */

signed int __fastcall HandleSendReceiveClient::SendHandle(
        HandleSendReceiveClient *a1,
        __int64 a2,
        void *a3,
        __int64 a4)
{
  signed int result; // eax
  void *v5; // rdx
  NTSTATUS v6; // eax
  _OWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  NTSTATUS Status[4]; // [rsp+50h] [rbp-18h]

  if ( (((unsigned __int64)a3 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    return -2147024890;
  v5 = (void *)*((_QWORD *)a1 + 1);
  memset(v7, 0, sizeof(v7));
  LODWORD(v7[0]) = 3145736;
  *(_OWORD *)Status = 0LL;
  Status[2] = 1;
  v6 = HandleSendReceiveClient::AeSendDuplicateHandle(a1, v5, (struct _AE_API_MSG *)v7, a4, a3);
  if ( v6 >= 0 )
    v6 = Status[3];
  if ( v6 >= 0 )
    return 0;
  RtlSetLastWin32ErrorAndNtStatusFromNtStatus(v6);
  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
