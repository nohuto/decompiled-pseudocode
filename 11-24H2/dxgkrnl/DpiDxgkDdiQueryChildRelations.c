/*
 * XREFs of DpiDxgkDdiQueryChildRelations @ 0x14018CC64
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1403FF92C (DpiFdoEnumChildDevices.c)
 * Callees:
 *     McTemplateK0hbr0pqx_EtwWriteTransfer @ 0x14008CEBC (McTemplateK0hbr0pqx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiQueryChildRelations(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rax
  __int64 result; // rax

  v5 = (unsigned int)a4;
  if ( bTracingEnabled )
  {
    a4 = (unsigned int)a4;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0hbr0pqx_EtwWriteTransfer(
        a1,
        &EventEnterDdiQueryChildRelations,
        a3,
        a4,
        a3,
        a2,
        0,
        (unsigned int)a4 / 0x1C);
  }
  v10 = (*(int (__fastcall **)(__int64, __int64, _QWORD, __int64))(a1 + 200))(a2, a3, (unsigned int)v5, a4);
  if ( bTracingEnabled )
  {
    v12 = v5;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0hbr0pqx_EtwWriteTransfer(v9, &EventExitDdiQueryChildRelations, v11, v5, a3, a2, v10, v5 / 0x1C);
  }
  v13 = WdLogNewEntry5_WdTrace(v9, v8, v11, v12);
  *(_QWORD *)(v13 + 40) = v10;
  *(_QWORD *)(v13 + 24) = a1;
  *(_QWORD *)(v13 + 32) = a3;
  *(_OWORD *)(v13 + 48) = 0LL;
  result = (unsigned int)v10;
  WdLogGlobalForLineNumber = 248;
  return result;
}
