/*
 * XREFs of EngCTGetGammaTable @ 0x1C0056950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngCTGetGammaTable(ULONG ulGamma, const BYTE **pGammaTable, const BYTE **pInverseGammaTable)
{
  const BYTE *v3; // rax
  const BYTE *v4; // rcx

  if ( ulGamma < 0x44C )
  {
    v3 = (const BYTE *)&unk_1C030E8B0;
    v4 = (const BYTE *)&unk_1C030E8B0;
  }
  else if ( ulGamma < 0x4B0 )
  {
    v3 = (const BYTE *)&unk_1C030EAB0;
    v4 = (const BYTE *)&unk_1C030E9B0;
  }
  else if ( ulGamma < 0x514 )
  {
    v3 = (const BYTE *)&unk_1C030E7B0;
    v4 = (const BYTE *)&unk_1C030E6B0;
  }
  else if ( ulGamma < 0x578 )
  {
    v3 = (const BYTE *)&unk_1C030ECB0;
    v4 = (const BYTE *)&unk_1C030EBB0;
  }
  else if ( ulGamma < 0x5DC )
  {
    v3 = (const BYTE *)&unk_1C030EEB0;
    v4 = (const BYTE *)&unk_1C030EDB0;
  }
  else if ( ulGamma < 0x640 )
  {
    v3 = (const BYTE *)&unk_1C030F0B0;
    v4 = (const BYTE *)&unk_1C030EFB0;
  }
  else if ( ulGamma < 0x6A4 )
  {
    v3 = (const BYTE *)&unk_1C030F2B0;
    v4 = (const BYTE *)&unk_1C030F1B0;
  }
  else if ( ulGamma < 0x708 )
  {
    v3 = (const BYTE *)&unk_1C030F4B0;
    v4 = (const BYTE *)&unk_1C030F3B0;
  }
  else if ( ulGamma < 0x76C )
  {
    v3 = (const BYTE *)&unk_1C030F6B0;
    v4 = (const BYTE *)&unk_1C030F5B0;
  }
  else if ( ulGamma < 0x7D0 )
  {
    v3 = (const BYTE *)&unk_1C030F8B0;
    v4 = (const BYTE *)&unk_1C030F7B0;
  }
  else if ( ulGamma < 0x834 )
  {
    v3 = (const BYTE *)&unk_1C030FAB0;
    v4 = (const BYTE *)&unk_1C030F9B0;
  }
  else if ( ulGamma < 0x898 )
  {
    v3 = (const BYTE *)&unk_1C030FCB0;
    v4 = (const BYTE *)&unk_1C030FBB0;
  }
  else
  {
    v3 = (const BYTE *)&unk_1C030FEB0;
    v4 = (const BYTE *)&unk_1C030FDB0;
  }
  *pGammaTable = v4;
  *pInverseGammaTable = v3;
}
