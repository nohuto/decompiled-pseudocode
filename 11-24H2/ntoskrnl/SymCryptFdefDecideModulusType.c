/*
 * XREFs of SymCryptFdefDecideModulusType @ 0x14052FB68
 * Callers:
 *     SymCryptFdefIntToModulus @ 0x14052FD34 (SymCryptFdefIntToModulus.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x1404881BC (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptDigitsFromBits @ 0x14052103C (SymCryptDigitsFromBits.c)
 *     SymCryptIntBitsizeOfValue @ 0x1405210E4 (SymCryptIntBitsizeOfValue.c)
 *     SymCryptIntGetValueLsbits32 @ 0x140521258 (SymCryptIntGetValueLsbits32.c)
 *     SymCryptFdefRawGetValue @ 0x1405319BC (SymCryptFdefRawGetValue.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

__int64 __fastcall SymCryptFdefDecideModulusType(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  int v8; // edi
  unsigned int v9; // ebp
  __int64 *v10; // rbx
  int v11; // edi
  int v12; // esi
  char v14; // [rsp+30h] [rbp-68h] BYREF
  _BYTE Buf1[48]; // [rsp+40h] [rbp-58h] BYREF

  v8 = 0;
  v9 = SymCryptIntBitsizeOfValue();
  if ( (a4 & 3) != 0 && (SymCryptIntGetValueLsbits32(a1) & 1) != 0 && a3 >= 0xA )
  {
    v8 = 1;
    if ( (a4 & 1) != 0
      && v9 == 384
      && !(unsigned int)SymCryptFdefRawGetValue((int)a1 + 32, 1, (unsigned int)&v14, 64, 2)
      && !memcmp(Buf1, (char *)&(*SymCryptEcurveParamsNistP384)[3] + 4, 0x30uLL) )
    {
      v8 = 9;
    }
  }
  v10 = SymCryptModulusTypeSelections;
  v11 = ~v8;
  while ( 1 )
  {
    v12 = *((_DWORD *)v10 + 1);
    if ( ((unsigned int)SymCryptCpuFeaturesNeverPresent() & v12) == 0
      && (v12 & g_SymCryptCpuFeaturesNotPresent) == 0
      && (!*((_DWORD *)v10 + 2) || a2 <= (unsigned int)SymCryptDigitsFromBits() && v9 <= *((_DWORD *)v10 + 2))
      && (v11 & *((_DWORD *)v10 + 3)) == 0 )
    {
      break;
    }
    v10 += 2;
  }
  return *(unsigned int *)v10;
}
