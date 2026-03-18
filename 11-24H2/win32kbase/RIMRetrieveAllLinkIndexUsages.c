/*
 * XREFs of RIMRetrieveAllLinkIndexUsages @ 0x1401E1114
 * Callers:
 *     RIMIsParallelDevice @ 0x14013B224 (RIMIsParallelDevice.c)
 *     RIMValidateAllCollectionUsages @ 0x1401E1494 (RIMValidateAllCollectionUsages.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMRetrieveAllLinkIndexUsages(
        USHORT a1,
        struct _HIDP_PREPARSED_DATA *a2,
        USHORT *a3,
        char **a4,
        USHORT *ButtonCapsLength,
        char **a6)
{
  NTSTATUS SpecificValueCaps; // eax
  unsigned int v11; // ebx
  int v12; // r8d
  struct _HIDP_VALUE_CAPS *ValueCaps; // rax
  char v14; // di
  bool v15; // si
  int v16; // edx
  int v17; // r8d
  __int64 v18; // r9
  NTSTATUS SpecificButtonCaps; // eax
  struct _HIDP_BUTTON_CAPS *v20; // rax
  __int16 PreparsedData; // [rsp+30h] [rbp-38h]

  if ( *a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1624);
  if ( *a6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1625);
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, a1, 0, 0LL, a3, a2);
  v11 = SpecificValueCaps;
  if ( SpecificValueCaps == 1114112 )
  {
    v12 = 1637;
LABEL_7:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v12);
    return v11;
  }
  if ( SpecificValueCaps == -1072627705 )
  {
    if ( !*a3 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1640);
    ValueCaps = (struct _HIDP_VALUE_CAPS *)Win32AllocPoolZInitImpl(256LL, 72LL * *a3, 0x63767352u);
    *a4 = (char *)ValueCaps;
    if ( !ValueCaps )
      goto LABEL_35;
    v11 = HidP_GetSpecificValueCaps(HidP_Input, 0, a1, 0, ValueCaps, a3, a2);
    if ( v11 != 1114112 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v14 = 0;
      }
      v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_36;
      v18 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
      PreparsedData = 27;
      goto LABEL_20;
    }
    SpecificButtonCaps = HidP_GetSpecificButtonCaps(HidP_Input, 0, a1, 0, 0LL, ButtonCapsLength, a2);
    v11 = SpecificButtonCaps;
    if ( SpecificButtonCaps == 1114112 )
    {
      v12 = 1667;
      goto LABEL_7;
    }
    if ( SpecificButtonCaps == -1072627705 )
    {
      if ( !*ButtonCapsLength )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1670);
      v20 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPoolZInitImpl(256LL, 72LL * *ButtonCapsLength, 0x63767352u);
      *a6 = (char *)v20;
      if ( v20 )
      {
        v11 = HidP_GetSpecificButtonCaps(HidP_Input, 0, a1, 0, v20, ButtonCapsLength, a2);
        if ( v11 == 1114112 )
          return v11;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v14 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v14 = 0;
        }
        v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_36;
        v18 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
        PreparsedData = 28;
LABEL_20:
        LOBYTE(v17) = v15;
        LOBYTE(v16) = v14;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v16,
          v17,
          v18,
          3,
          1,
          PreparsedData,
          (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids);
        goto LABEL_36;
      }
LABEL_35:
      v11 = -1073741801;
    }
  }
LABEL_36:
  if ( *a4 )
  {
    GreDeleteFastMutex(*a4);
    *a4 = 0LL;
  }
  if ( *a6 )
  {
    GreDeleteFastMutex(*a6);
    *a6 = 0LL;
  }
  return v11;
}
