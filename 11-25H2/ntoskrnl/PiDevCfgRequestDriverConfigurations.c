/*
 * XREFs of PiDevCfgRequestDriverConfigurations @ 0x14071F4B8
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1408906D0 (PiDevCfgProcessDevice.c)
 * Callees:
 *     PiDevCfgAppendMultiSz @ 0x14071C748 (PiDevCfgAppendMultiSz.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     PiDevCfgSetObjectProperty @ 0x140A740D0 (PiDevCfgSetObjectProperty.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x140A7AA64 (PiDevCfgQueryDriverConfiguration.c)
 */

__int64 __fastcall PiDevCfgRequestDriverConfigurations(__int64 a1, __int64 a2)
{
  int DriverConfiguration; // eax
  int appended; // ebx
  const void ***v6; // rsi
  const void **i; // rdi
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-28h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  DriverConfiguration = PiDevCfgQueryDriverConfiguration(a2);
  appended = DriverConfiguration;
  if ( (int)(DriverConfiguration + 0x80000000) < 0 || DriverConfiguration == -1073740653 )
  {
    appended = PiDevCfgAppendMultiSz(&UnicodeString, (const void **)(a2 + 424), 0LL, 1);
    if ( appended >= 0 )
    {
      v6 = (const void ***)(a2 + 208);
      for ( i = *v6; i != (const void **)v6; i = (const void **)*i )
      {
        appended = PiDevCfgQueryDriverConfiguration(i);
        if ( ((appended + 0x80000000) & 0x80000000) == 0 && appended != -1073740653 )
          goto LABEL_13;
        appended = PiDevCfgAppendMultiSz(&UnicodeString, i + 53, 0LL, 1);
        if ( appended < 0 )
          goto LABEL_13;
      }
      if ( UnicodeString.Buffer )
        appended = PiDevCfgSetObjectProperty(PiPnpRtlCtx, a1, *(_QWORD *)(a1 + 8), 1, *(_QWORD *)(a1 + 16));
      else
        appended = -1073740653;
    }
  }
LABEL_13:
  RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)appended;
}
