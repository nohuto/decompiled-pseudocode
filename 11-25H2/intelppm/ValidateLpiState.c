/*
 * XREFs of ValidateLpiState @ 0x14002EFB4
 * Callers:
 *     ValidateCoordinatedLpiStates @ 0x14002E7EC (ValidateCoordinatedLpiStates.c)
 *     ValidateProcessorLpiStates @ 0x14002F9E4 (ValidateProcessorLpiStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_SS @ 0x14000A31C (WPP_RECORDER_SF_SS.c)
 *     WPP_RECORDER_SF_SSD @ 0x14000A4B4 (WPP_RECORDER_SF_SSD.c)
 *     IsValidAcpiGenericAddress @ 0x14002DACC (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall ValidateLpiState(__int64 a1, __int64 a2, const wchar_t *a3)
{
  unsigned int v3; // r10d
  __int64 v5; // r11
  char v6; // cl
  unsigned __int16 v7; // r9
  int v9; // [rsp+20h] [rbp-28h]

  v3 = 0;
  v5 = a1;
  if ( *(_DWORD *)(a1 + 12) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        1,
        105,
        (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids);
    }
    return (unsigned int)-1073741823;
  }
  v6 = *(_BYTE *)(a1 + 24);
  if ( v6 != 127 )
  {
    if ( v6 == 1 )
    {
      if ( !IsValidAcpiGenericAddress((__int64)&dword_140019B0C) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741823;
        v7 = 106;
LABEL_9:
        WPP_RECORDER_SF_SS(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          a2,
          (__int64)a3,
          v7,
          v9,
          a3,
          *(const wchar_t **)(v5 + 72));
        return (unsigned int)-1073741823;
      }
    }
    else
    {
      if ( v6 != 126 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_SSD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            a2,
            (__int64)a3,
            0x6Cu,
            v9,
            a3,
            *(const wchar_t **)(v5 + 72));
        return (unsigned int)-1073741823;
      }
      if ( !(_BYTE)a2 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)-1073741823;
        v7 = 107;
        goto LABEL_9;
      }
    }
  }
  return v3;
}
