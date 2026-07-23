/*
 * XREFs of ExpWnfReleaseCapturedScopeInstanceId @ 0x1409E8C7C
 * Callers:
 *     ExpNtDeleteWnfStateData @ 0x1407BFBF8 (ExpNtDeleteWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x140AE4930 (NtQueryWnfStateNameInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWnfReleaseCapturedScopeInstanceId(int a1, PVOID *a2, char a3)
{
  int v3; // ecx
  int v4; // ecx
  PVOID v5; // rcx
  ULONG v6; // edx

  v3 = a1 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        v5 = *a2;
        if ( *a2 )
        {
          v6 = 543583831;
LABEL_7:
          ObfDereferenceObjectWithTag(v5, v6);
        }
      }
    }
    else if ( *a2 && a3 == 1 )
    {
      ExFreePoolWithTag(*a2, 0);
    }
  }
  else
  {
    v5 = *a2;
    if ( *a2 )
    {
      v6 = 2035381072;
      goto LABEL_7;
    }
  }
}
