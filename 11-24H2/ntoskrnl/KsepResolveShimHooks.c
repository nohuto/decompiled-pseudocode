/*
 * XREFs of KsepResolveShimHooks @ 0x14073F1BC
 * Callers:
 *     KsepResolveApplicableShimsForDriver @ 0x14073F888 (KsepResolveApplicableShimsForDriver.c)
 * Callees:
 *     KsepGetModuleInfoByName @ 0x140740124 (KsepGetModuleInfoByName.c)
 *     RtlFindExportedRoutineByName @ 0x1408B0E30 (RtlFindExportedRoutineByName.c)
 */

__int64 __fastcall KsepResolveShimHooks(__int64 a1, int *a2)
{
  int v4; // r15d
  int *v5; // rsi
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rdi
  unsigned int i; // r12d
  __int64 ExportedRoutineByName; // rax
  __int64 v14; // [rsp+50h] [rbp+8h]

  v14 = 0LL;
  if ( a1 && a2 )
  {
    v4 = 0;
    v5 = a2;
LABEL_4:
    if ( !v5 )
      return 0LL;
    v6 = *v5;
    if ( *v5 == 4 )
      return 0LL;
    if ( !v6 )
    {
      v9 = *(_QWORD *)(a1 + 24);
      goto LABEL_15;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      v9 = *(_QWORD *)(a1 + 320);
      goto LABEL_15;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      result = KsepGetModuleInfoByName(*((PCWSTR *)v5 + 1));
      if ( (int)result < 0 )
        return result;
      v9 = v14;
      goto LABEL_16;
    }
    if ( v8 == 1 )
    {
      v9 = 0LL;
LABEL_15:
      v14 = v9;
LABEL_16:
      v11 = *((_QWORD *)v5 + 2);
      for ( i = 0; ; v11 = *((_QWORD *)v5 + 2) + 32LL * i )
      {
        if ( !v11 || *(_DWORD *)v11 == 2 )
        {
          v5 = &a2[6 * ++v4];
          goto LABEL_4;
        }
        if ( !*(_DWORD *)v11 )
        {
          ExportedRoutineByName = RtlFindExportedRoutineByName(v9, *(_QWORD *)(v11 + 8));
          if ( !ExportedRoutineByName )
            return 3221225473LL;
          *(_QWORD *)(v11 + 24) = ExportedRoutineByName;
        }
        ++i;
      }
    }
  }
  return 3221225485LL;
}
