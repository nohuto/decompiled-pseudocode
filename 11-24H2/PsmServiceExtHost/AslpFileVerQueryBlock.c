/*
 * XREFs of AslpFileVerQueryBlock @ 0x1800A3670
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x1800A2CA8 (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileQueryVersionString @ 0x1800A3300 (AslpFileQueryVersionString.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     AslFree @ 0x18009D9EC (AslFree.c)
 *     AslStringDuplicate @ 0x18009E508 (AslStringDuplicate.c)
 *     AslpFileStringTokenize @ 0x1800A3534 (AslpFileStringTokenize.c)
 *     AslpFileVerBlockGetValueOffset @ 0x1800A3600 (AslpFileVerBlockGetValueOffset.c)
 */

__int64 __fastcall AslpFileVerQueryBlock(unsigned __int16 *a1, __int64 a2, unsigned __int16 **a3, _QWORD *a4)
{
  unsigned __int16 *i; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  _WORD *v9; // rcx
  char *v10; // rsi
  unsigned __int16 *v11; // rbx
  __int16 v12; // bp
  const wchar_t *v13; // r14
  unsigned int v14; // ecx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdx
  _WORD *v18; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+80h] [rbp+8h] BYREF
  _WORD *v20; // [rsp+98h] [rbp+20h] BYREF

  i = a1;
  v20 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  *a4 = 0LL;
  if ( a1[2] )
    goto LABEL_2;
  v7 = AslStringDuplicate(&v20, a2);
  if ( v7 < 0 )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_22;
  }
  if ( (__int16)*i < 8 )
  {
LABEL_2:
    v7 = -1073741811;
    AslLogCallPrintf(1LL);
  }
  else
  {
    v9 = v20;
    v10 = (char *)i + *i;
    v11 = (unsigned __int16 *)v10;
    v12 = *((_WORD *)v10 - 1);
    *((_WORD *)v10 - 1) = 0;
LABEL_7:
    v13 = AslpFileStringTokenize(v9, v8, &v18);
    if ( v13 )
    {
      v14 = (_DWORD)v10 - (_DWORD)i;
      if ( (unsigned int)((_DWORD)v10 - (_DWORD)i) >= 8 )
      {
        v15 = *i;
        if ( (unsigned int)v15 <= v14 && (int)AslpFileVerBlockGetValueOffset(&v19, (__int64)i, v14) >= 0 )
        {
          v16 = v19 + ((i[1] + 3LL) & 0xFFFFFFFFFFFFFFFCuLL);
          v19 = v16;
          if ( v16 <= v15 )
          {
            v11 = (unsigned __int16 *)((char *)i + v15);
            for ( i = (unsigned __int16 *)((char *)i + v16);
                  i < v11 && *i > 8u && *i <= (unsigned __int64)((char *)v11 - (char *)i);
                  i = (unsigned __int16 *)((char *)i + ((*i + 3LL) & 0xFFFFFFFFFFFFFFFCuLL)) )
            {
              if ( !_wcsicmp(v13, i + 3) )
              {
                v9 = 0LL;
                goto LABEL_7;
              }
            }
          }
        }
      }
      v7 = -1073741275;
    }
    else
    {
      *a3 = i;
      *a4 = (char *)v11 - (char *)i;
      v7 = 0;
    }
    *((_WORD *)v10 - 1) = v12;
  }
LABEL_22:
  AslFree(NtCurrentPeb()->ProcessHeap, v20);
  return (unsigned int)v7;
}
