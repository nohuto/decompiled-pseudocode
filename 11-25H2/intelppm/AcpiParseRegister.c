/*
 * XREFs of AcpiParseRegister @ 0x140044EC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003CF8 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall AcpiParseRegister(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // r9d

  if ( a3 < 0xC )
    return 3221225485LL;
  if ( *(_WORD *)(a1 + 2) >= 0xFu )
  {
    if ( *(_BYTE *)(a1 + 4) == 0x82 && *(_WORD *)(a1 + 5) >= 0xCu )
    {
      *(_BYTE *)a2 = *(_BYTE *)(a1 + 7);
      *(_BYTE *)(a2 + 1) = *(_BYTE *)(a1 + 8);
      *(_BYTE *)(a2 + 2) = *(_BYTE *)(a1 + 9);
      *(_QWORD *)(a2 + 4) = *(_QWORD *)(a1 + 11);
      *(_BYTE *)(a2 + 3) = *(_BYTE *)(a1 + 10);
      return 0LL;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3222536200LL;
    v4 = 80;
    goto LABEL_12;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = 79;
LABEL_12:
    LOBYTE(a2) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      1,
      v4,
      (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
  }
  return 3222536200LL;
}
