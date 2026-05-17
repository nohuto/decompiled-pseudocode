/*
 * XREFs of RtlFindExportedRoutineByName @ 0x1800EE8C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180022220 (RtlImageDirectoryEntryToData.c)
 */

unsigned __int64 __fastcall RtlFindExportedRoutineByName(unsigned __int64 a1, char *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // r9
  unsigned __int64 v6; // r8
  int v7; // edi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rsi
  int v10; // ecx
  char *v11; // rax
  int v12; // edx
  unsigned __int64 v13; // r11
  char v14; // r10
  int v15; // eax
  unsigned int v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0;
  v4 = (_DWORD *)RtlImageDirectoryEntryToData(a1, 1, 0, &v17);
  v5 = v4;
  v6 = 0LL;
  if ( v4 )
  {
    v7 = 0;
    v8 = a1 + (unsigned int)v4[8];
    v9 = a1 + (unsigned int)v4[9];
    v10 = v4[6] - 1;
    while ( v10 >= v7 )
    {
      v11 = a2;
      v12 = (v7 + v10) >> 1;
      v13 = a1 + *(unsigned int *)(v8 + 4LL * v12) - (_QWORD)a2;
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
      v15 = (unsigned __int8)*v11 < (unsigned __int8)v11[v13] ? -1 : 1;
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
          if ( (unsigned int)*(unsigned __int16 *)(v9 + 2LL * v12) < v5[5] )
          {
            v6 = a1 + *(unsigned int *)(a1 + (unsigned int)v5[7] + 4LL * *(unsigned __int16 *)(v9 + 2LL * v12));
            if ( v6 > (unsigned __int64)v5 && v6 < (unsigned __int64)v5 + v17 )
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
