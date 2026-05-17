/*
 * XREFs of RtlDetermineDosPathNameType_U @ 0x180083CF0
 * Callers:
 *     RtlDosSearchPath_U @ 0x180082890 (RtlDosSearchPath_U.c)
 *     LdrpGetDllPath @ 0x180083EF0 (LdrpGetDllPath.c)
 *     LdrpResValidateFilePath @ 0x1800E7188 (LdrpResValidateFilePath.c)
 *     LdrAddDllDirectory @ 0x18010C9F0 (LdrAddDllDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDetermineDosPathNameType_U(__int16 *a1)
{
  __int16 v1; // ax
  __int16 v2; // ax
  __int16 v3; // ax
  __int16 v4; // dx
  __int64 result; // rax
  __int16 v6; // ax

  v1 = *a1;
  if ( *a1 == 92 || v1 == 47 )
  {
    v2 = a1[1];
    if ( v2 == 92 || v2 == 47 )
    {
      v3 = a1[2];
      if ( v3 == 63 || v3 == 46 )
      {
        v4 = a1[3];
        if ( v4 == 92 || v4 == 47 )
        {
          return 6LL;
        }
        else
        {
          result = 1LL;
          if ( !v4 )
            return 7LL;
        }
      }
      else
      {
        return 1LL;
      }
    }
    else
    {
      return 4LL;
    }
  }
  else if ( v1 && a1[1] == 58 )
  {
    v6 = a1[2];
    if ( v6 == 92 || v6 == 47 )
      return 2LL;
    else
      return 3LL;
  }
  else
  {
    return 5LL;
  }
  return result;
}
