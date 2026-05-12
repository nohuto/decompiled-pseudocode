/*
 * XREFs of NvmeQueryLedStateByAcpiDsm @ 0x140088738
 * Callers:
 *     NvmeAdapterQueryLedState @ 0x14008775C (NvmeAdapterQueryLedState.c)
 * Callees:
 *     NvmeDsmQuerySupportedFunctionForLedState @ 0x140087EF8 (NvmeDsmQuerySupportedFunctionForLedState.c)
 *     RaidDsmGetLedState @ 0x14008BC30 (RaidDsmGetLedState.c)
 */

__int64 __fastcall NvmeQueryLedStateByAcpiDsm(struct _DEVICE_OBJECT *a1, int *a2)
{
  int SupportedFunctionForLedState; // r8d
  _QWORD *DeviceExtension; // rax
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0;
  SupportedFunctionForLedState = NvmeDsmQuerySupportedFunctionForLedState(a1);
  if ( SupportedFunctionForLedState >= 0 )
  {
    DeviceExtension = a1->DeviceExtension;
    if ( !DeviceExtension )
      return 3221225473LL;
    if ( (*(_BYTE *)(DeviceExtension[72] + 152LL) & 5) == 5 )
    {
      SupportedFunctionForLedState = RaidDsmGetLedState(a1, &v7);
      if ( SupportedFunctionForLedState >= 0 )
        *a2 = (v7 >> 2) & 0x1FF;
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return (unsigned int)SupportedFunctionForLedState;
}
