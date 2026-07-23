/*
 * XREFs of x86BiosWriteIoSpace @ 0x140461350
 * Callers:
 *     XmOutOp @ 0x140461300 (XmOutOp.c)
 *     XmOutsOp @ 0x140573B20 (XmOutsOp.c)
 * Callees:
 *     x86BiosWritePciAddressPort @ 0x140461F74 (x86BiosWritePciAddressPort.c)
 *     x86BiosWriteCmosPort @ 0x140544078 (x86BiosWriteCmosPort.c)
 *     x86BiosWritePciDataPort @ 0x1405441D0 (x86BiosWritePciDataPort.c)
 */

char __fastcall x86BiosWriteIoSpace(__int64 a1, __int64 a2, __int16 a3)
{
  unsigned __int16 v3; // dx
  char result; // al

  _mm_lfence();
  if ( !XmPciBiosPresent )
    goto LABEL_2;
  if ( (unsigned __int16)(a2 - 3320) <= 3u )
    return x86BiosWritePciAddressPort(a1, (unsigned __int16)(a2 - 3320));
  if ( XmPCIConfigAddress < 0 && (unsigned __int16)a2 >= 0xCFCu )
  {
    if ( (unsigned __int16)a2 <= 0xCFFu )
    {
      LOWORD(a2) = a2 - 3324;
      return x86BiosWritePciDataPort(a1, a2);
    }
  }
  else
  {
LABEL_2:
    if ( (unsigned __int16)(a2 - 112) <= 1u )
      return x86BiosWriteCmosPort();
  }
  v3 = x86BiosIoSpace + a2;
  if ( (_DWORD)a1 )
  {
    result = a3;
    if ( (_DWORD)a1 == 3 )
      __outdword(v3, a3);
    else
      __outword(v3, a3);
  }
  else
  {
    result = a3;
    __outbyte(v3, a3);
  }
  return result;
}
