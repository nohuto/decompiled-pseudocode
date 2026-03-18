/*
 * XREFs of ReadIoMemRaw @ 0x14003FE60
 * Callers:
 *     AcpiPccReadRegister @ 0x140053D9C (AcpiPccReadRegister.c)
 *     AcpiPccWriteRegister @ 0x140053E14 (AcpiPccWriteRegister.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140017C78 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall ReadIoMemRaw(unsigned __int8 *a1, int a2, int a3)
{
  __int64 v3; // rbx
  unsigned __int16 v6; // r9

  v3 = 0LL;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      switch ( a3 )
      {
        case 8:
          return __inbyte((unsigned __int16)a1);
        case 16:
          return __inword((unsigned __int16)a1);
        case 32:
          return __indword((unsigned __int16)a1);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v6 = 12;
LABEL_19:
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x15u,
          v6,
          (__int64)&WPP_ea8b413dcef53ae066f7a59abc49a3c8_Traceguids,
          a3);
      }
    }
  }
  else
  {
    switch ( a3 )
    {
      case 64:
        return *(_QWORD *)a1;
      case 8:
        return *a1;
      case 16:
        return *(unsigned __int16 *)a1;
      case 32:
        return *(unsigned int *)a1;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 13;
      goto LABEL_19;
    }
  }
  return v3;
}
