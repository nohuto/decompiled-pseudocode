/*
 * XREFs of DpiDxgkDdiDisplayMuxGetDriverSupportLevel @ 0x14008C1D8
 * Callers:
 *     DpiFdoInitializeFdo @ 0x140242CBC (DpiFdoInitializeFdo.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1400118A8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     Feature_DisplayMux_ForceDriverFullSupport__private_IsEnabledDeviceUsageNoInline @ 0x14008CE68 (Feature_DisplayMux_ForceDriverFullSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiDxgkDdiDisplayMuxGetDriverSupportLevel(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rax
  int IsEnabledDeviceUsageNoInline; // eax
  int v13; // ecx
  __int64 v15; // [rsp+20h] [rbp-18h]
  __int64 v16; // [rsp+28h] [rbp-10h]
  int v17; // [rsp+40h] [rbp+8h] BYREF

  v17 = 0;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(
      a1,
      (__int64)&EventEnterDdiDisplayMuxGetDriverSupportLevel,
      a3,
      *(_QWORD *)(a1 + 48),
      0,
      0);
  v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(a1 + 5928))(*(_QWORD *)(a1 + 48), &v17);
  v10 = v5;
  if ( bTracingEnabled )
  {
    v9 = *(_QWORD *)(a1 + 48);
    if ( v5 < 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        goto LABEL_11;
      LODWORD(v16) = v5;
      LODWORD(v15) = 0;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        goto LABEL_11;
      v7 = (unsigned int)v17;
      LODWORD(v16) = v5;
      LODWORD(v15) = v17;
    }
    McTemplateK0pqq_EtwWriteTransfer(v7, (__int64)&EventExitDdiDisplayMuxGetDriverSupportLevel, v8, v9, v15, v16);
  }
LABEL_11:
  v11 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  *(_QWORD *)(v11 + 24) = a1;
  *(_QWORD *)(v11 + 32) = v17;
  *(_QWORD *)(v11 + 40) = v10;
  *(_OWORD *)(v11 + 48) = 0LL;
  WdLogGlobalForLineNumber = 1065;
  if ( (int)v10 >= 0 )
  {
    IsEnabledDeviceUsageNoInline = Feature_DisplayMux_ForceDriverFullSupport__private_IsEnabledDeviceUsageNoInline();
    v13 = v17;
    if ( IsEnabledDeviceUsageNoInline && v17 != 1 )
    {
      v13 = 4;
      v17 = 4;
    }
    switch ( v13 )
    {
      case 1:
        *a2 = 1;
        break;
      case 2:
        *a2 = 2;
        break;
      case 3:
        *a2 = 3;
        break;
      case 4:
        *a2 = 4;
        break;
      default:
        WdLogSingleEntry1(1LL, v13);
        WdLogGlobalForLineNumber = 1107;
        LODWORD(v10) = -1073739509;
        break;
    }
  }
  return (unsigned int)v10;
}
