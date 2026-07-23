/*
 * XREFs of RtlDetermineDosPathNameType_U @ 0x180005BA0
 * Callers:
 *     RtlDosSearchPath_U @ 0x180004710 (RtlDosSearchPath_U.c)
 *     LdrpGetDllPath @ 0x180005DA0 (LdrpGetDllPath.c)
 *     LdrpResValidateFilePath @ 0x1800E2638 (LdrpResValidateFilePath.c)
 *     LdrAddDllDirectory @ 0x180107730 (LdrAddDllDirectory.c)
 * Callees:
 *     <none>
 */

RTL_PATH_TYPE __cdecl RtlDetermineDosPathNameType_U(PCWSTR DosFileName)
{
  WCHAR v1; // ax
  WCHAR v2; // ax
  WCHAR v3; // ax
  WCHAR v4; // dx
  RTL_PATH_TYPE result; // eax
  WCHAR v6; // ax

  v1 = *DosFileName;
  if ( *DosFileName == 92 || v1 == 47 )
  {
    v2 = DosFileName[1];
    if ( v2 == 92 || v2 == 47 )
    {
      v3 = DosFileName[2];
      if ( v3 == 63 || v3 == 46 )
      {
        v4 = DosFileName[3];
        if ( v4 == 92 || v4 == 47 )
        {
          return 6;
        }
        else
        {
          result = RtlPathTypeUncAbsolute;
          if ( !v4 )
            return 7;
        }
      }
      else
      {
        return 1;
      }
    }
    else
    {
      return 4;
    }
  }
  else if ( v1 && DosFileName[1] == 58 )
  {
    v6 = DosFileName[2];
    if ( v6 == 92 || v6 == 47 )
      return 2;
    else
      return 3;
  }
  else
  {
    return 5;
  }
  return result;
}
