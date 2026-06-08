/*
 * XREFs of ValidateMsr_PCT @ 0x14002F1A4
 * Callers:
 *     ValidateXPssPStates @ 0x14002FD60 (ValidateXPssPStates.c)
 * Callees:
 *     WPP_RECORDER_SF_Sd @ 0x140009EAC (WPP_RECORDER_SF_Sd.c)
 *     ValidateMsrGenAddr @ 0x14002F0D4 (ValidateMsrGenAddr.c)
 */

__int64 __fastcall ValidateMsr_PCT(__int64 a1, const wchar_t *a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // r8
  unsigned __int16 v7; // r9
  int v9; // [rsp+30h] [rbp-18h]

  v5 = ValidateMsrGenAddr((_BYTE *)a1);
  if ( v5 >= 0 )
  {
    if ( !*(_QWORD *)(a1 + 4) )
    {
      v5 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v5;
      v7 = 35;
      v9 = -1073741811;
      goto LABEL_5;
    }
    if ( !*(_QWORD *)(a1 + 16) )
      return 0;
    v5 = ValidateMsrGenAddr((_BYTE *)(a1 + 12));
    if ( v5 >= 0 )
      return 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 36;
      goto LABEL_4;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = 34;
LABEL_4:
    v9 = v5;
LABEL_5:
    WPP_RECORDER_SF_Sd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v4,
      v6,
      v7,
      (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
      a2,
      v9);
  }
  return (unsigned int)v5;
}
