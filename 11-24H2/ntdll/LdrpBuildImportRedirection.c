/*
 * XREFs of LdrpBuildImportRedirection @ 0x18015F334
 * Callers:
 *     LdrpInitializeImportRedirection @ 0x1800F56E8 (LdrpInitializeImportRedirection.c)
 * Callees:
 *     LdrpGetProcedureAddress @ 0x18006E980 (LdrpGetProcedureAddress.c)
 *     LdrpAddRedirectedFunction @ 0x18015EFF0 (LdrpAddRedirectedFunction.c)
 */

__int64 __fastcall LdrpBuildImportRedirection(__int64 a1)
{
  int ProcedureAddress; // edi
  char *v3; // rsi
  __int64 v4; // rbx
  char *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  ProcedureAddress = LdrpGetProcedureAddress(*(_QWORD *)(a1 + 48), "__RedirectionInformation__", 0, &v6);
  if ( ProcedureAddress >= 0 )
  {
    LdrpGetProcedureAddress(*(_QWORD *)(a1 + 48), "__ShouldApplyRedirection__", 0, (char **)&LdrpRedirectionCalloutFunc);
    LdrpGetProcedureAddress(
      *(_QWORD *)(a1 + 48),
      "__ShouldApplyRedirectionToFunction__",
      0,
      (char **)&LdrpRedirectionByFunctionCalloutFunc);
    v3 = v6;
    if ( *(_DWORD *)v6 == 1 )
    {
      v4 = 0LL;
      if ( *((_DWORD *)v6 + 1) )
      {
        do
        {
          ProcedureAddress = LdrpAddRedirectedFunction(*((_QWORD *)v3 + 1) + 24 * v4, v4);
          if ( ProcedureAddress < 0 )
            break;
          v4 = (unsigned int)(v4 + 1);
        }
        while ( (unsigned int)v4 < *((_DWORD *)v3 + 1) );
      }
    }
    else
    {
      return (unsigned int)-1073739509;
    }
  }
  return (unsigned int)ProcedureAddress;
}
