/*
 * XREFs of WdInstrInitializeInstruction @ 0x14056A184
 * Callers:
 *     HalpWdatExecuteActionBeforeInitialize @ 0x14055D1F8 (HalpWdatExecuteActionBeforeInitialize.c)
 *     HalpWdatInitializeWdat @ 0x14055D3D8 (HalpWdatInitializeWdat.c)
 *     HalpWdatInitializeWdrt @ 0x14055D46C (HalpWdatInitializeWdrt.c)
 * Callees:
 *     WdHwCreateHardwareRegister @ 0x140569DC8 (WdHwCreateHardwareRegister.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall WdInstrInitializeInstruction(_BYTE *a1, char a2, char a3, __int64 a4, int a5, int a6, char a7)
{
  char v7; // di
  __int64 result; // rax
  char v13; // r8

  v7 = 0;
  if ( !a1 )
    return 3221225485LL;
  memset_0(a1, 0, 0x40uLL);
  v13 = 3;
  if ( !a7 )
    v13 = *(_BYTE *)(a4 + 3);
  result = WdHwCreateHardwareRegister(*(LARGE_INTEGER *)(a4 + 4), *(_BYTE *)a4, v13, (__int64)(a1 + 8));
  if ( (int)result >= 0 )
  {
    *a1 = a2;
    a1[1] = a3;
    if ( a7 )
    {
      a1[48] = 32;
    }
    else
    {
      a1[48] = *(_BYTE *)(a4 + 1);
      v7 = *(_BYTE *)(a4 + 2);
    }
    a1[49] = v7;
    *((_DWORD *)a1 + 13) = a5;
    *((_DWORD *)a1 + 14) = a6;
    return 0LL;
  }
  return result;
}
