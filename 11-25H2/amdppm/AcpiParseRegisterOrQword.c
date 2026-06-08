/*
 * XREFs of AcpiParseRegisterOrQword @ 0x14002B050
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003C68 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x14000D7C0 (memmove.c)
 */

__int64 __fastcall AcpiParseRegisterOrQword(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned __int16 v4; // ax
  int v5; // r9d
  _BYTE *v6; // r9

  if ( a3 >= 0xC )
  {
    v4 = *(_WORD *)(a1 + 2);
    if ( v4 >= 0xFu || v4 == 8 )
    {
      v3 = 0;
      v6 = (_BYTE *)(a1 + 4);
      if ( v4 == 8 )
      {
        *(_DWORD *)a2 = 126;
        memmove((void *)(a2 + 4), v6, *(unsigned __int16 *)(a1 + 2));
        return v3;
      }
      if ( *v6 == 0x82 && *(_WORD *)(a1 + 5) >= 0xCu )
      {
        *(_BYTE *)a2 = *(_BYTE *)(a1 + 7);
        *(_BYTE *)(a2 + 1) = *(_BYTE *)(a1 + 8);
        *(_BYTE *)(a2 + 2) = *(_BYTE *)(a1 + 9);
        *(_QWORD *)(a2 + 4) = *(_QWORD *)(a1 + 11);
        *(_BYTE *)(a2 + 3) = *(_BYTE *)(a1 + 10);
        return v3;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v5 = 82;
        goto LABEL_14;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 81;
LABEL_14:
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        1,
        v5,
        (__int64)&WPP_e690713d58863fa7cec45a9b3d23a63c_Traceguids);
    }
    return (unsigned int)-1072431096;
  }
  return (unsigned int)-1073741811;
}
