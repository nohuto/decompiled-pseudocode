/*
 * XREFs of Bulk_TransferData_Initialize @ 0x140014580
 * Callers:
 *     Bulk_WdfEvtIoCanceledOnQueue @ 0x140014490 (Bulk_WdfEvtIoCanceledOnQueue.c)
 *     Bulk_RetrieveNextStage @ 0x140038F50 (Bulk_RetrieveNextStage.c)
 * Callees:
 *     McTemplateK0uqqq_EtwWriteTransfer @ 0x14000C7C0 (McTemplateK0uqqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

NTSTATUS __fastcall Bulk_TransferData_Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v6; // ax
  NTSTATUS result; // eax
  __int64 v8; // rbp
  char v9; // cl
  NTSTATUS *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-78h]
  __int64 v15; // [rsp+28h] [rbp-70h]
  __int64 v16; // [rsp+30h] [rbp-68h]
  _OWORD v17[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v18; // [rsp+60h] [rbp-38h]

  v18 = 0LL;
  memset(v17, 0, sizeof(v17));
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v17[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v6 = -1;
  }
  else
  {
    v6 = 40;
  }
  LOWORD(v17[0]) = v6;
LABEL_7:
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
             WdfDriverGlobals,
             a3,
             v17);
  if ( !*(_BYTE *)(a2 + 16) )
  {
    v8 = *((_QWORD *)&v17[0] + 1);
    switch ( *(_WORD *)(*((_QWORD *)&v17[0] + 1) + 2LL) )
    {
      case '9':
      case ':':
        v9 = 1;
        break;
      default:
        v9 = 0;
        break;
    }
    v10 = (NTSTATUS *)(*((_QWORD *)&v17[0] + 1) + 52LL);
    if ( !v9 )
      v10 = (NTSTATUS *)(*((_QWORD *)&v17[0] + 1) + 36LL);
    *(_DWORD *)(a2 + 17) = 0;
    *(_WORD *)(a2 + 21) = 0;
    *(_BYTE *)(a2 + 23) = 0;
    *(_OWORD *)(a2 + 32) = 0LL;
    memset((void *)(a2 + 104), 0, 0xF8uLL);
    *(_QWORD *)(a2 + 8) = a2;
    *(_QWORD *)a2 = a2;
    *(_QWORD *)(a2 + 48) = v8;
    *(_QWORD *)(a2 + 64) = 0LL;
    *(_QWORD *)(a2 + 80) = 0LL;
    *(_QWORD *)(a2 + 88) = 0LL;
    *(_QWORD *)(a2 + 96) = 0LL;
    *(_BYTE *)(a2 + 16) = 1;
    *(_QWORD *)(a2 + 24) = a3;
    *(_QWORD *)(a2 + 56) = a1;
    *(_QWORD *)(a2 + 72) = 259LL;
    result = *v10;
    *(_DWORD *)(a2 + 104) = *v10;
    *(_DWORD *)(a2 + 128) = 464;
    *(_WORD *)(a2 + 132) = 0;
    *(_BYTE *)(a2 + 134) = 0;
    *(_QWORD *)(a2 + 108) = 0LL;
    *(_QWORD *)(a2 + 116) = 0LL;
    *v10 = 0;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    {
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 2280))(WdfDriverGlobals, a3);
      result = IoGetActivityIdIrp(v11, a2 + 32);
      if ( result < 0 )
        result = EtwActivityIdControl(3u, (LPGUID)(a2 + 32));
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      {
        v13 = *(_QWORD *)(a1 + 56);
        LODWORD(v16) = *(_DWORD *)(a2 + 104);
        LODWORD(v15) = *(_DWORD *)(a1 + 64);
        LODWORD(v14) = *(_DWORD *)(v13 + 152);
        return McTemplateK0uqqq_EtwWriteTransfer(
                 v13,
                 v12,
                 a2 + 32,
                 *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
                 v14,
                 v15,
                 v16);
      }
    }
  }
  return result;
}
