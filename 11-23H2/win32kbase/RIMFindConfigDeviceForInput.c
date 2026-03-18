/*
 * XREFs of RIMFindConfigDeviceForInput @ 0x1C0180CD0
 * Callers:
 *     RIMConfigurePointerDevice @ 0x1C0180550 (RIMConfigurePointerDevice.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1C0192B28 (RIMApiSetSetUserPTPEnabledPreference.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIsParentCommon @ 0x1C0182480 (RIMIsParentCommon.c)
 */

__int64 __fastcall RIMFindConfigDeviceForInput(__int64 a1, int a2, int a3, _QWORD *a4)
{
  unsigned int v4; // edi
  __int64 i; // rbx

  v4 = 0;
  if ( *a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2085);
  *a4 = 0LL;
  for ( i = *(_QWORD *)(a1 + 424); i; i = *(_QWORD *)(i + 40) )
  {
    if ( (*(_DWORD *)(i + 184) & 0x400) == 0
      && *(_BYTE *)(i + 48) == 3
      && (unsigned int)RIMIsParentCommon(
                         a3,
                         i,
                         a2,
                         *(unsigned __int16 *)(*(_QWORD *)(i + 456) + 110LL),
                         *(_WORD *)(*(_QWORD *)(i + 456) + 112LL)) )
    {
      v4 = 1;
      *a4 = i;
      return v4;
    }
  }
  return v4;
}
