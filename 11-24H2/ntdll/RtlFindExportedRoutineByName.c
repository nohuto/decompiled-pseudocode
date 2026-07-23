/*
 * XREFs of RtlFindExportedRoutineByName @ 0x1800E8C20
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180035400 (RtlImageDirectoryEntryToData.c)
 */

PVOID __cdecl RtlFindExportedRoutineByName(PVOID BaseOfImage, PCSTR RoutineName)
{
  char *v4; // rax
  char *v5; // r9
  char *v6; // r8
  int v7; // edi
  char *v8; // rbp
  char *v9; // rsi
  int v10; // ecx
  PCSTR v11; // rax
  int v12; // edx
  signed __int64 v13; // r11
  CHAR v14; // r10
  int v15; // eax
  ULONG v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0;
  v4 = (char *)RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0, &v17);
  v5 = v4;
  v6 = 0LL;
  if ( v4 )
  {
    v7 = 0;
    v8 = (char *)BaseOfImage + *((unsigned int *)v4 + 8);
    v9 = (char *)BaseOfImage + *((unsigned int *)v4 + 9);
    v10 = *((_DWORD *)v4 + 6) - 1;
    while ( v10 >= v7 )
    {
      v11 = RoutineName;
      v12 = (v7 + v10) >> 1;
      v13 = (_BYTE *)BaseOfImage + *(unsigned int *)&v8[4 * v12] - RoutineName;
      while ( 1 )
      {
        v14 = *v11;
        if ( *v11 != v11[v13] )
          break;
        ++v11;
        if ( !v14 )
        {
          v15 = 0;
          goto LABEL_8;
        }
      }
      v15 = *v11 < (unsigned int)v11[v13] ? -1 : 1;
LABEL_8:
      if ( v15 < 0 )
      {
        if ( !v12 )
          return v6;
        v10 = v12 - 1;
      }
      else
      {
        if ( v15 <= 0 )
        {
          if ( (unsigned int)*(unsigned __int16 *)&v9[2 * v12] < *((_DWORD *)v5 + 5) )
          {
            v6 = (char *)BaseOfImage
               + *(unsigned int *)((char *)BaseOfImage
                                 + 4 * *(unsigned __int16 *)&v9[2 * v12]
                                 + *((unsigned int *)v5 + 7));
            if ( v6 > v5 && v6 < &v5[v17] )
              return 0LL;
          }
          return v6;
        }
        v7 = v12 + 1;
      }
    }
  }
  return v6;
}
