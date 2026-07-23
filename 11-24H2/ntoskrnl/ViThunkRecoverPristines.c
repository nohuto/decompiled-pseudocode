/*
 * XREFs of ViThunkRecoverPristines @ 0x140B99A00
 * Callers:
 *     VfThunkAddSpecialDriverThunks @ 0x140B98ED4 (VfThunkAddSpecialDriverThunks.c)
 * Callees:
 *     ViThunkReplacePristine @ 0x140B99D44 (ViThunkReplacePristine.c)
 */

void __fastcall ViThunkRecoverPristines(__int64 a1)
{
  unsigned int v1; // r11d
  _QWORD *v2; // r8
  __int64 i; // r10
  PVOID *j; // rdx
  PVOID *v5; // rcx
  _QWORD *v6; // r9
  unsigned int k; // edi
  __int64 v8; // rdx
  __int64 v9; // rdx

  v1 = 0;
  v2 = (_QWORD *)(a1 + 32);
  for ( i = a1; v1 < *(_DWORD *)(i + 24); ++v1 )
  {
    for ( j = (PVOID *)ViVerifierDriverAddedSpecialThunkListHead; ; j = (PVOID *)*j )
    {
      if ( j == &ViVerifierDriverAddedSpecialThunkListHead )
      {
        if ( (unsigned int)ViThunkReplacePristine(&VfRegularThunks, j, v2) != 1
          && (unsigned int)ViThunkReplacePristine(&VfPoolThunks, v8, v2) != 1 )
        {
          ViThunkReplacePristine(&VfDifThunks, v9, v2);
        }
        goto LABEL_15;
      }
      v5 = (PVOID *)j[3];
LABEL_9:
      if ( v5 != j + 3 )
        break;
    }
    v6 = v5 + 4;
    for ( k = 0; ; ++k )
    {
      if ( k >= *((_DWORD *)v5 + 6) )
      {
        v5 = (PVOID *)*v5;
        goto LABEL_9;
      }
      if ( *v2 == v6[1] )
        break;
      v6 += 2;
    }
    *v2 = *v6;
LABEL_15:
    v2 += 2;
  }
}
