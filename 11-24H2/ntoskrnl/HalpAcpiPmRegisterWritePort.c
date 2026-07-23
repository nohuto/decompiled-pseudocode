/*
 * XREFs of HalpAcpiPmRegisterWritePort @ 0x1403F9FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAcpiPmRegisterWritePort(unsigned __int16 a1, int a2, unsigned __int8 *a3)
{
  switch ( a2 )
  {
    case 1:
      __outbyte(a1, *a3);
      return 0LL;
    case 2:
      __outword(a1, *(_WORD *)a3);
      return 0LL;
    case 4:
      __outdword(a1, *(_DWORD *)a3);
      return 0LL;
    default:
      return 3221225473LL;
  }
}
