/*
 * XREFs of PrExtControlOperations @ 0x1406627DC
 * Callers:
 *     HalpMcEnumerateAndSetPatchConfig @ 0x1405570E8 (HalpMcEnumerateAndSetPatchConfig.c)
 *     HalpMcGetRollbackRequest @ 0x14055759C (HalpMcGetRollbackRequest.c)
 *     HalpMcUpdateInitializeBSP @ 0x1405577DC (HalpMcUpdateInitializeBSP.c)
 *     HalpLoadMicrocode @ 0x1406FF6C0 (HalpLoadMicrocode.c)
 *     HalpProcInitSystem @ 0x140B4F200 (HalpProcInitSystem.c)
 * Callees:
 *     MicrocodeValidate @ 0x140663410 (MicrocodeValidate.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     RtlFindExportedRoutineByName @ 0x140907090 (RtlFindExportedRoutineByName.c)
 */

__int64 __fastcall PrExtControlOperations(int a1, unsigned int *a2, int a3)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rcx
  int v10; // eax
  PVOID v11; // rax
  __int64 v12; // rdx
  PVOID ExportedRoutineByName; // rax

  v3 = a1 - 1;
  if ( !v3 )
  {
    LODWORD(v9) = 0;
    if ( a2 && a3 == 12 )
    {
      PatchConfig = (__int64)a2;
      PatchConfigFound = 0;
      return (unsigned int)v9;
    }
    goto LABEL_26;
  }
  v4 = v3 - 2;
  if ( !v4 )
  {
    LODWORD(v9) = 0;
    if ( a2 && a3 == 1 )
    {
      SelfhostEnabled = *(_BYTE *)a2;
      return (unsigned int)v9;
    }
    goto LABEL_26;
  }
  v5 = v4 - 2;
  if ( !v5 )
  {
    if ( a3 == 44 )
    {
      LODWORD(v9) = 0;
      if ( a2 )
      {
        MCUpdateRegistryData = *(_OWORD *)a2;
        xmmword_140EF7AF0 = *((_OWORD *)a2 + 1);
        qword_140EF7B00 = *((_QWORD *)a2 + 4);
        dword_140EF7B08 = a2[10];
        return (unsigned int)v9;
      }
    }
    goto LABEL_26;
  }
  v6 = v5 - 3;
  if ( !v6 )
  {
    ExportedRoutineByName = RtlFindExportedRoutineByName(a2, "UcpUpdateControls");
    v9 = 0LL;
    if ( !ExportedRoutineByName )
      return (unsigned int)v9;
LABEL_15:
    v10 = guard_dispatch_icall_no_overrides(v9, v12);
    goto LABEL_16;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v11 = RtlFindExportedRoutineByName(a2, "UcpUpdateControls");
    LODWORD(v9) = 0;
    if ( !v11 )
      return (unsigned int)v9;
    v9 = 1LL;
    goto LABEL_15;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( a3 == 4 )
    {
      v10 = MicrocodeValidate(*a2);
LABEL_16:
      LODWORD(v9) = v10;
      return (unsigned int)v9;
    }
LABEL_26:
    LODWORD(v9) = -1073741811;
    return (unsigned int)v9;
  }
  if ( v8 != 1 || a3 != 1 )
    goto LABEL_26;
  LODWORD(v9) = 0;
  AllowRollback = *(_BYTE *)a2;
  return (unsigned int)v9;
}
