/*
 * XREFs of ?PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1402EBFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140036F68 (McTemplateK0_EtwWriteTransfer.c)
 *     ?SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1402EC03C (-SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z.c)
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1402EC0C4 (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 */

__int64 __fastcall PDCIdleResiliencyEngagedCallBackFn(
        LPCGUID SettingGuid,
        int *Value,
        ULONG ValueLength,
        PVOID Context)
{
  int v4; // edi
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rsi
  __int64 v8; // r8
  unsigned int v9; // ebx
  DXGGLOBAL *v10; // rax

  v4 = *Value;
  if ( *((unsigned __int8 *)DXGGLOBAL::GetGlobal() + 304312) != v4 )
  {
    Global = DXGGLOBAL::GetGlobal();
    v9 = 2;
    if ( v4 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        McTemplateK0_EtwWriteTransfer(v6, &CSAccountingInProgress_Start, v8);
      v9 = 1;
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    {
      McTemplateK0_EtwWriteTransfer(v6, &CSAccountingInProgress_Stop, v8);
    }
    DXGGLOBAL::IterateProcessAndApplyCSFn(Global, v9);
    v10 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::SetPDCIdleResiliencyEngaged(v10, v4);
  }
  return 0LL;
}
