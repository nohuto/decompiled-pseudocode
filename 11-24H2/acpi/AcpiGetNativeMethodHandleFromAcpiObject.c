/*
 * XREFs of AcpiGetNativeMethodHandleFromAcpiObject @ 0x14004E66C
 * Callers:
 *     AcpiSetupNativeMethodContext @ 0x140054B44 (AcpiSetupNativeMethodContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiGetNativeMethodHandleFromAcpiObject(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r9
  unsigned int v4; // r8d
  __int64 v5; // rdx
  __int64 i; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int16 v9; // dx

  v2 = 0LL;
  v4 = -1073741823;
  v5 = *a1;
  while ( (unsigned int)v2 < 5 )
  {
    if ( AmliGlobalPreDefinedRootObjects[v2] == v5 )
    {
      for ( i = 0LL; (unsigned int)i < 5; i = (unsigned int)(i + 1) )
      {
        if ( (__int64 *)AcpiAmliPreDefinedRootAcpiObjects[i] == a1 )
        {
          v7 = AcpiAmliPreDefinedRootNativeHandles[i];
          goto LABEL_17;
        }
      }
      return (unsigned int)-1073741275;
    }
    v2 = (unsigned int)(v2 + 1);
  }
  v8 = *(_QWORD *)(v5 + 104);
  if ( !v8 )
    return v4;
  v9 = *(_WORD *)(v5 + 66);
  if ( v9 == 6 || (unsigned __int16)(v9 - 12) <= 1u )
  {
    v7 = *(_QWORD *)(v8 + 944);
  }
  else
  {
    if ( v9 != 11 )
      return v4;
    v7 = *(_QWORD *)(v8 + 136);
  }
LABEL_17:
  *a2 = v7;
  return 0;
}
