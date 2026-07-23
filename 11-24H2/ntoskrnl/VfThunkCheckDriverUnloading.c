/*
 * XREFs of VfThunkCheckDriverUnloading @ 0x140BAAF14
 * Callers:
 *     VfDriverUnloadImage @ 0x140B8C5C0 (VfDriverUnloadImage.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     ViThunkRemoveImportEntry @ 0x140B99AD0 (ViThunkRemoveImportEntry.c)
 */

void __fastcall VfThunkCheckDriverUnloading(__int64 a1)
{
  PVOID *v2; // rdi
  PVOID *v3; // rax
  PVOID *v4; // rdx
  PVOID *v5; // rcx

  if ( ViActiveVerifierThunks )
  {
    ViThunkRemoveImportEntry((_QWORD **)&ViVerifierDriverAddedThunkListHead, a1);
    v2 = (PVOID *)ViVerifierDriverAddedSpecialThunkListHead;
    while ( v2 != &ViVerifierDriverAddedSpecialThunkListHead )
    {
      ViThunkRemoveImportEntry((_QWORD **)v2 + 3, a1);
      v3 = (PVOID *)*v2;
      if ( v2[3] == v2 + 3 )
      {
        if ( v3[1] != v2 || (v4 = (PVOID *)v2[1], *v4 != v2) )
          __fastfail(3u);
        *v4 = v3;
        v5 = v2;
        v3[1] = v4;
        v2 = (PVOID *)*v2;
        ExFreePoolWithTag(v5, 0);
        --ViVerifierSpecialThunkTables;
      }
      else
      {
        v2 = (PVOID *)*v2;
      }
    }
  }
}
