/*
 * XREFs of ViThunkFindExportAddress @ 0x140C3DD2C
 * Callers:
 *     ViThunkFindAllExportAddresses @ 0x140C3DC84 (ViThunkFindAllExportAddresses.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402EEB70 (RtlImageDirectoryEntryToData.c)
 */

char *__fastcall ViThunkFindExportAddress(char *a1, int *a2)
{
  PVOID *v2; // rdi
  int v5; // esi
  int v6; // ebx
  char *v7; // rbp
  _DWORD *v8; // rax
  _DWORD *v9; // r9
  int v10; // r10d
  char *v11; // r12
  char *v12; // r15
  int v13; // edx
  __int64 v14; // rcx
  bool v15; // cc
  char *v16; // rax
  char *v17; // r11
  char v18; // r8
  int v19; // eax
  unsigned int v20; // r10d
  __int64 v21; // r8
  __int64 v22; // rcx
  char *v23; // r11
  int v24; // edx
  char *v25; // r9
  unsigned __int16 i; // cx
  ULONG Size; // [rsp+58h] [rbp+10h] BYREF

  v2 = (PVOID *)PsLoadedModuleList;
  *a2 = 0;
  v5 = 0;
  v6 = 1;
  while ( 1 )
  {
    if ( v2 == &PsLoadedModuleList )
      return 0LL;
    v7 = (char *)v2[6];
    v8 = RtlImageDirectoryEntryToData(v7, 1u, 0, &Size);
    v9 = v8;
    if ( v8 )
    {
      v10 = 0;
      v11 = &v7[v8[8]];
      v12 = &v7[v8[9]];
      v13 = v8[6] - 1;
      LODWORD(v14) = 0;
      while ( 1 )
      {
        v15 = v13 < v10;
        if ( v13 < (unsigned int)v10 )
          break;
        v16 = a1;
        v14 = (unsigned int)(v13 + v10) >> 1;
        v17 = (char *)(&v7[*(unsigned int *)&v11[4 * v14]] - a1);
        while ( 1 )
        {
          v18 = *v16;
          if ( *v16 != v17[(_QWORD)v16] )
            break;
          ++v16;
          if ( !v18 )
          {
            v19 = 0;
            goto LABEL_11;
          }
        }
        v19 = (unsigned __int8)*v16 < (unsigned int)v17[(_QWORD)v16] ? -1 : 1;
LABEL_11:
        if ( v19 >= 0 )
        {
          if ( v19 <= 0 )
          {
            v15 = v13 < v10;
            break;
          }
          v10 = v14 + 1;
        }
        else
        {
          if ( !(_DWORD)v14 )
            goto LABEL_19;
          v13 = v14 - 1;
        }
      }
      if ( !v15 )
      {
        v20 = v9[5];
        v21 = *(unsigned __int16 *)&v12[2 * (unsigned int)v14];
        if ( (unsigned int)v21 < v20 )
          break;
      }
    }
LABEL_19:
    if ( ++v5 == 2 )
      return 0LL;
    v2 = (PVOID *)*v2;
  }
  v22 = (unsigned int)v9[7];
  v23 = &v7[v22];
  v24 = *(_DWORD *)&v7[4 * v21 + v22];
  v25 = &v7[*(unsigned int *)&v7[4 * v21 + v22]];
  for ( i = 0; i < v20; ++i )
  {
    if ( i != (_WORD)v21 && *(_DWORD *)&v23[4 * i] == v24 )
      goto LABEL_27;
  }
  v6 = 0;
LABEL_27:
  *a2 = v6;
  return v25;
}
