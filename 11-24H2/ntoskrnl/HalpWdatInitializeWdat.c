/*
 * XREFs of HalpWdatInitializeWdat @ 0x14055D3D8
 * Callers:
 *     HalpWdatInitialize @ 0x14055D360 (HalpWdatInitialize.c)
 * Callees:
 *     WdInstrInitializeInstruction @ 0x14056A184 (WdInstrInitializeInstruction.c)
 */

__int64 __fastcall HalpWdatInitializeWdat(__int64 a1)
{
  _DWORD *v1; // rbx
  int v2; // edi
  __int64 result; // rax
  __int64 i; // rsi
  int v5; // edx

  v1 = *(_DWORD **)(a1 + 8);
  v2 = a1;
  *(_DWORD *)(a1 + 16) = v1[13];
  *(_DWORD *)(a1 + 20) = v1[14];
  *(_DWORD *)(a1 + 24) = v1[12];
  *(_DWORD *)(a1 + 44) = v1[16];
  result = 0LL;
  for ( i = 0LL; (unsigned int)i < v1[16]; i = (unsigned int)(i + 1) )
  {
    v5 = 3 * i;
    LOBYTE(v5) = v1[6 * i + 17];
    result = WdInstrInitializeInstruction(
               ((_DWORD)i << 6) + v2 + 48,
               v5,
               BYTE1(v1[6 * i + 17]),
               (int)v1 + 72 + 24 * (int)i,
               v1[6 * i + 21],
               v1[6 * i + 22],
               0);
    if ( (int)result < 0 )
      break;
  }
  return result;
}
