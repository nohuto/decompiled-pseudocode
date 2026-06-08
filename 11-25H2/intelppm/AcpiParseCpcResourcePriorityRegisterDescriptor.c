/*
 * XREFs of AcpiParseCpcResourcePriorityRegisterDescriptor @ 0x140032BB4
 * Callers:
 *     AcpiParseCpcResourcePriorities @ 0x1400329E0 (AcpiParseCpcResourcePriorities.c)
 * Callees:
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 *     AcpiTranslateAccessSize @ 0x140033D48 (AcpiTranslateAccessSize.c)
 *     AcpiParseCore @ 0x14003F8A0 (AcpiParseCore.c)
 */

__int64 __fastcall AcpiParseCpcResourcePriorityRegisterDescriptor(__int64 a1, PVOID *a2)
{
  __int64 v3; // rsi
  int v4; // r9d
  unsigned int v5; // ebx
  unsigned int *v6; // rbx
  _QWORD v8[3]; // [rsp+40h] [rbp-79h] BYREF
  __int64 v9; // [rsp+58h] [rbp-61h]
  __int64 (__fastcall *v10)(); // [rsp+68h] [rbp-51h]
  __int64 v11; // [rsp+70h] [rbp-49h]
  __int64 (__fastcall *v12)(); // [rsp+80h] [rbp-39h]
  __int64 v13; // [rsp+88h] [rbp-31h]
  __int64 (__fastcall *v14)(); // [rsp+98h] [rbp-21h]
  __int64 v15; // [rsp+A0h] [rbp-19h]
  __int64 (__fastcall *v16)(); // [rsp+B0h] [rbp-9h]
  __int64 v17; // [rsp+B8h] [rbp-1h]
  __int64 (__fastcall *v18)(); // [rsp+C8h] [rbp+Fh]
  __int64 v19; // [rsp+D0h] [rbp+17h]
  __int64 (__fastcall *v20)(); // [rsp+E0h] [rbp+27h]

  v12 = AcpiParseRegister;
  v14 = AcpiParseRegister;
  v10 = AcpiParseStaticRegister;
  v8[1] = "ControlledResources";
  v16 = AcpiParseStaticRegister;
  v18 = AcpiParseRegister;
  v8[2] = AcpiParseULongArray;
  v3 = 4LL;
  v20 = AcpiParseRegister;
  v4 = *(unsigned __int16 *)(a1 + 2);
  LOBYTE(v8[0]) = 0;
  *(_DWORD *)((char *)v8 + 2) = 3;
  LOBYTE(v9) = 1;
  *(_DWORD *)((char *)&v9 + 2) = 0x80000;
  LOBYTE(v11) = 1;
  *(_DWORD *)((char *)&v11 + 2) = 524290;
  LOBYTE(v13) = 2;
  *(_DWORD *)((char *)&v13 + 2) = 2097154;
  LOBYTE(v15) = 3;
  *(_DWORD *)((char *)&v15 + 2) = 3670016;
  LOBYTE(v17) = 3;
  *(_DWORD *)((char *)&v17 + 2) = 3670018;
  LOBYTE(v19) = 4;
  *(_DWORD *)((char *)&v19 + 2) = 5242882;
  if ( (int)AcpiParseCore(
              (unsigned int)v8,
              7,
              (int)a1 + 4,
              v4,
              (__int64)a2,
              104,
              (__int64)"_CPC.ResourcePriorityRegisters[]",
              1,
              v8[0],
              "ControlledResources",
              AcpiParseULongArray,
              v9,
              "EnableValue",
              AcpiParseStaticRegister,
              v11,
              "EnableValue",
              AcpiParseRegister,
              v13,
              "Enable",
              AcpiParseRegister,
              v15,
              "PriorityCount",
              AcpiParseStaticRegister,
              v17,
              "PriorityCount",
              AcpiParseRegister,
              v19,
              "Priority",
              AcpiParseRegister) >= 0 )
  {
    v6 = (unsigned int *)&CpcResourcePrioritiesRegisterTable;
    do
    {
      AcpiTranslateAccessSize((char *)a2 + *v6);
      v6 += 6;
      --v3;
    }
    while ( v3 );
    return 0;
  }
  else
  {
    v5 = -1072431089;
    if ( *a2 )
    {
      ExFreePoolWithTag(*a2, (ULONG)1919119952);
      *a2 = 0LL;
    }
  }
  return v5;
}
