/*
 * XREFs of ViThunkFindExportAddress @ 0x140C3BBD4
 * Callers:
 *     ViThunkFindAllExportAddresses @ 0x140C3BB2C (ViThunkFindAllExportAddresses.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042CAF0 (RtlImageDirectoryEntryToData.c)
 */

unsigned __int64 __fastcall ViThunkFindExportAddress(char *a1, int *a2)
{
  PVOID *v2; // rdi
  int v5; // esi
  int v6; // ebx
  unsigned __int64 v7; // rbp
  _DWORD *v8; // rax
  _DWORD *v9; // r9
  int v10; // r10d
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r15
  int v13; // edx
  __int64 v14; // rcx
  bool v15; // cc
  char *v16; // rax
  unsigned __int64 v17; // r11
  char v18; // r8
  int v19; // eax
  unsigned int v20; // r10d
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r11
  int v24; // edx
  unsigned __int64 v25; // r9
  unsigned __int16 i; // cx
  int v28; // [rsp+58h] [rbp+10h] BYREF

  v2 = (PVOID *)PsLoadedModuleList;
  *a2 = 0;
  v5 = 0;
  v6 = 1;
  while ( 1 )
  {
    if ( v2 == &PsLoadedModuleList )
      return 0LL;
    v7 = (unsigned __int64)v2[6];
    v8 = (_DWORD *)RtlImageDirectoryEntryToData(v7, 1, 0, &v28);
    v9 = v8;
    if ( v8 )
    {
      v10 = 0;
      v11 = v7 + (unsigned int)v8[8];
      v12 = v7 + (unsigned int)v8[9];
      v13 = v8[6] - 1;
      LODWORD(v14) = 0;
      while ( 1 )
      {
        v15 = v13 < v10;
        if ( v13 < (unsigned int)v10 )
          break;
        v16 = a1;
        v14 = (unsigned int)(v13 + v10) >> 1;
        v17 = v7 + *(unsigned int *)(v11 + 4 * v14) - (_QWORD)a1;
        while ( 1 )
        {
          v18 = *v16;
          if ( *v16 != v16[v17] )
            break;
          ++v16;
          if ( !v18 )
          {
            v19 = 0;
            goto LABEL_11;
          }
        }
        v19 = (unsigned __int8)*v16 < (unsigned __int8)v16[v17] ? -1 : 1;
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
        v21 = *(unsigned __int16 *)(v12 + 2LL * (unsigned int)v14);
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
  v23 = v22 + v7;
  v24 = *(_DWORD *)(v22 + v7 + 4 * v21);
  v25 = v7 + *(unsigned int *)(v22 + 4 * v21 + v7);
  for ( i = 0; i < v20; ++i )
  {
    if ( i != (_WORD)v21 && *(_DWORD *)(v23 + 4LL * i) == v24 )
      goto LABEL_27;
  }
  v6 = 0;
LABEL_27:
  *a2 = v6;
  return v25;
}
