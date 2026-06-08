/*
 * XREFs of AcpiParseCpcResourcePriorityRegisterDescriptor @ 0x14002B474
 * Callers:
 *     AcpiParseCpcResourcePriorities @ 0x14002B2A0 (AcpiParseCpcResourcePriorities.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E310 (__security_check_cookie.c)
 *     AcpiParseCore @ 0x14002AFD0 (AcpiParseCore.c)
 *     AcpiTranslateAccessSize @ 0x14002C6E8 (AcpiTranslateAccessSize.c)
 */

__int64 __fastcall AcpiParseCpcResourcePriorityRegisterDescriptor(__int64 a1, PVOID *a2)
{
  __int64 v3; // rsi
  unsigned int v4; // r9d
  __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned int *v7; // rbx
  unsigned __int8 v9[2]; // [rsp+40h] [rbp-79h] BYREF
  int v10; // [rsp+42h] [rbp-77h]
  const char *v11; // [rsp+48h] [rbp-71h]
  __int64 (__fastcall *v12)(); // [rsp+50h] [rbp-69h]
  char v13; // [rsp+58h] [rbp-61h]
  int v14; // [rsp+5Ah] [rbp-5Fh]
  const char *v15; // [rsp+60h] [rbp-59h]
  __int64 (__fastcall *v16)(); // [rsp+68h] [rbp-51h]
  char v17; // [rsp+70h] [rbp-49h]
  int v18; // [rsp+72h] [rbp-47h]
  const char *v19; // [rsp+78h] [rbp-41h]
  __int64 (__fastcall *v20)(); // [rsp+80h] [rbp-39h]
  char v21; // [rsp+88h] [rbp-31h]
  int v22; // [rsp+8Ah] [rbp-2Fh]
  const char *v23; // [rsp+90h] [rbp-29h]
  __int64 (__fastcall *v24)(); // [rsp+98h] [rbp-21h]
  char v25; // [rsp+A0h] [rbp-19h]
  int v26; // [rsp+A2h] [rbp-17h]
  const char *v27; // [rsp+A8h] [rbp-11h]
  __int64 (__fastcall *v28)(); // [rsp+B0h] [rbp-9h]
  char v29; // [rsp+B8h] [rbp-1h]
  int v30; // [rsp+BAh] [rbp+1h]
  const char *v31; // [rsp+C0h] [rbp+7h]
  __int64 (__fastcall *v32)(); // [rsp+C8h] [rbp+Fh]
  char v33; // [rsp+D0h] [rbp+17h]
  int v34; // [rsp+D2h] [rbp+19h]
  const char *v35; // [rsp+D8h] [rbp+1Fh]
  __int64 (__fastcall *v36)(); // [rsp+E0h] [rbp+27h]

  v20 = AcpiParseRegister;
  v24 = AcpiParseRegister;
  v16 = AcpiParseStaticRegister;
  v11 = "ControlledResources";
  v28 = AcpiParseStaticRegister;
  v32 = AcpiParseRegister;
  v12 = AcpiParseULongArray;
  v3 = 4LL;
  v36 = AcpiParseRegister;
  v4 = *(unsigned __int16 *)(a1 + 2);
  v15 = "EnableValue";
  v19 = "EnableValue";
  v9[0] = 0;
  v23 = "Enable";
  v27 = "PriorityCount";
  v31 = "PriorityCount";
  v35 = "Priority";
  v10 = 3;
  v13 = 1;
  v14 = 0x80000;
  v17 = 1;
  v18 = 524290;
  v21 = 2;
  v22 = 2097154;
  v25 = 3;
  v26 = 3670016;
  v29 = 3;
  v30 = 3670018;
  v33 = 4;
  v34 = 5242882;
  if ( (int)AcpiParseCore(v9, 7LL, a1 + 4, v4, (__int64)a2, 104, "_CPC.ResourcePriorityRegisters[]", 1) >= 0 )
  {
    v7 = (unsigned int *)&CpcResourcePrioritiesRegisterTable;
    do
    {
      AcpiTranslateAccessSize((char *)a2 + *v7, v5);
      v7 += 6;
      --v3;
    }
    while ( v3 );
    return 0;
  }
  else
  {
    v6 = -1072431089;
    if ( *a2 )
    {
      ExFreePoolWithTag(*a2, (ULONG)1919119952);
      *a2 = 0LL;
    }
  }
  return v6;
}
