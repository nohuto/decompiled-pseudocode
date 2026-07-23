/*
 * XREFs of HalpAcpiSetupPmRegisterLegacy @ 0x140C15740
 * Callers:
 *     HalpAcpiInitializePmRegisters @ 0x140C1540C (HalpAcpiInitializePmRegisters.c)
 * Callees:
 *     HalpAcpiSetupPmRegister @ 0x140C155F8 (HalpAcpiSetupPmRegister.c)
 */

__int64 __fastcall HalpAcpiSetupPmRegisterLegacy(
        __int64 a1,
        int a2,
        __int64 *a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned __int8 v6; // al
  int v8; // eax
  __int64 v9; // [rsp+20h] [rbp-10h] BYREF
  int v10; // [rsp+28h] [rbp-8h]

  v6 = *(_BYTE *)(a1 + 8);
  if ( v6 < 5u && !a2 )
    return 3221225473LL;
  v9 = 0LL;
  v10 = 0;
  if ( v6 < 5u )
  {
    BYTE2(v9) = 0;
    HIDWORD(v9) = a2;
    LOBYTE(v9) = 1;
    switch ( (unsigned __int8)a4 )
    {
      case 1u:
        BYTE3(v9) = 1;
        break;
      case 2u:
        BYTE3(v9) = 2;
        break;
      case 4u:
        BYTE3(v9) = 3;
        break;
      case 8u:
        BYTE3(v9) = 4;
        break;
      default:
        BYTE3(v9) = 0;
        break;
    }
    if ( 8 * a4 <= 0xFF )
      BYTE1(v9) = 8 * a4;
    else
      BYTE1(v9) = -1;
  }
  else
  {
    v8 = *((_DWORD *)a3 + 2);
    v9 = *a3;
    v10 = v8;
  }
  return HalpAcpiSetupPmRegister(a4, a5, (__int64)&v9, a6);
}
