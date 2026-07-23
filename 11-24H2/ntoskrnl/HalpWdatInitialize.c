/*
 * XREFs of HalpWdatInitialize @ 0x14055D360
 * Callers:
 *     <none>
 * Callees:
 *     HalpWdatInitializeWdat @ 0x14055D3D8 (HalpWdatInitializeWdat.c)
 *     HalpWdatInitializeWdrt @ 0x14055D46C (HalpWdatInitializeWdrt.c)
 *     HalSocGetAcpiTable @ 0x14055DB80 (HalSocGetAcpiTable.c)
 */

__int64 __fastcall HalpWdatInitialize(__int64 a1)
{
  bool v1; // zf
  __int64 AcpiTable; // rdi
  __int64 v5; // rax

  v1 = *(_DWORD *)(a1 + 44) == 0;
  *(_BYTE *)(a1 + 40) = 0;
  if ( !v1 )
    return 0LL;
  AcpiTable = HalSocGetAcpiTable(1413563479LL);
  v5 = HalSocGetAcpiTable(1414677591LL);
  if ( AcpiTable )
  {
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = AcpiTable;
    return HalpWdatInitializeWdat(a1);
  }
  else if ( v5 )
  {
    *(_DWORD *)a1 = 1;
    *(_QWORD *)(a1 + 8) = v5;
    return HalpWdatInitializeWdrt(a1);
  }
  else
  {
    return 3221225473LL;
  }
}
