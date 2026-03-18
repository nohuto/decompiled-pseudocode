/*
 * XREFs of ACPICacheCoherencyInterface @ 0x14009BF30
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x140043A60 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     AcpiGetDriverProxyEndpoint @ 0x1400441B8 (AcpiGetDriverProxyEndpoint.c)
 */

__int64 __fastcall ACPICacheCoherencyInterface(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned int v3; // r8d
  int v4; // ecx
  char v5; // al
  __int64 v6; // r9
  __int64 v7; // rdx
  _WORD *v8; // r9
  __int16 v9; // r11

  v2 = *(_QWORD *)(a2 + 24);
  v3 = -1073741637;
  if ( *(_WORD *)(a2 + 16) >= 0x28u )
  {
    if ( *(_WORD *)(a2 + 18) && (*(_DWORD *)(a1 + 1120) & 0x1000000) != 0 )
    {
      v4 = *(_DWORD *)(a1 + 940) - 2;
      if ( v4 )
      {
        if ( v4 != 1 )
          return v3;
        v5 = 0;
      }
      else
      {
        v5 = 1;
      }
      *(_BYTE *)(v2 + 32) = v5;
      *(_QWORD *)(v2 + 8) = 0LL;
      *(_WORD *)(v2 + 2) = 1;
      AcpiGetDriverProxyEndpoint((_QWORD *)(v2 + 16), (__int64)AcpiInterfaceDereference);
      AcpiGetDriverProxyEndpoint((_QWORD *)(v6 + 24), v7);
      v3 = 0;
      *v8 = v9;
    }
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v3;
}
