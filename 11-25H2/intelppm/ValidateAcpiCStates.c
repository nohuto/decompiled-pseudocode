/*
 * XREFs of ValidateAcpiCStates @ 0x14003FB70
 * Callers:
 *     InitAcpi2CStates @ 0x14003EC1C (InitAcpi2CStates.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x140009708 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_Sd @ 0x140009EAC (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_SDD @ 0x14000A000 (WPP_RECORDER_SF_SDD.c)
 *     IsValidAcpiGenericAddress @ 0x14002DACC (IsValidAcpiGenericAddress.c)
 */

__int64 __fastcall ValidateAcpiCStates(unsigned int *a1, const wchar_t *a2)
{
  unsigned int v2; // r10d
  unsigned int *v4; // r11
  unsigned int v5; // esi
  __int64 i; // rdx
  unsigned int j; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int16 v11; // r9

  v2 = 0;
  v4 = a1;
  if ( !a1 )
    return (unsigned int)-1073741823;
  v5 = *a1;
  for ( i = 1LL; (unsigned int)i < v5; i = (unsigned int)(i + 1) )
  {
    if ( LOBYTE(a1[5 * (unsigned int)i + 4]) < LOBYTE(a1[5 * (unsigned int)(i - 1) + 4])
      || HIWORD(a1[5 * (unsigned int)i + 4]) < HIWORD(a1[5 * (unsigned int)(i - 1) + 4])
      || a1[5 * (unsigned int)i + 5] > a1[5 * (unsigned int)(i - 1) + 5] )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_SDD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          i,
          5LL * (unsigned int)(i - 1),
          0x19u,
          (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
          a2,
          i,
          i - 1);
      return (unsigned int)-1073741823;
    }
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= v5 )
      return v2;
    if ( LOBYTE(v4[5 * j + 1]) == 127 )
      continue;
    if ( !LOBYTE(v4[5 * j + 4]) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_S(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0x1Cu,
          (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
          a2);
      return (unsigned int)-1073741823;
    }
    if ( LOBYTE(v4[5 * j + 4]) == 1 )
      return (unsigned int)-1073741823;
    if ( LOBYTE(v4[5 * j + 4]) == 2 )
      break;
    if ( !IsValidAcpiGenericAddress((__int64)&dword_140019B24)
      || !IsValidAcpiGenericAddress((__int64)&dword_140019AF4)
      || !IsValidAcpiGenericAddress((__int64)&dword_140019B0C) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1073741823;
      v11 = 27;
      goto LABEL_24;
    }
LABEL_11:
    ;
  }
  if ( IsValidAcpiGenericAddress((__int64)&dword_140019B0C) )
    goto LABEL_11;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = 26;
LABEL_24:
    WPP_RECORDER_SF_Sd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v9,
      v10,
      v11,
      (__int64)&WPP_55f5cba5bfed31fa58f2d2c50d7725f9_Traceguids,
      a2,
      j);
  }
  return (unsigned int)-1073741823;
}
