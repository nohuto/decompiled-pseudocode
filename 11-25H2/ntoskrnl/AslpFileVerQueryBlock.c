/*
 * XREFs of AslpFileVerQueryBlock @ 0x1408299FC
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x1407FF91C (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileQueryVersionString @ 0x1407FFF6C (AslpFileQueryVersionString.c)
 * Callees:
 *     AslpFileStringTokenize @ 0x1404A12A8 (AslpFileStringTokenize.c)
 *     AslpFileVerBlockGetValueOffset @ 0x1404A9A78 (AslpFileVerBlockGetValueOffset.c)
 *     _wcsicmp @ 0x1404FBC30 (_wcsicmp.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     AslStringDuplicate @ 0x140829000 (AslStringDuplicate.c)
 *     AslFree @ 0x14082AD34 (AslFree.c)
 */

__int64 __fastcall AslpFileVerQueryBlock(unsigned __int16 *a1, const wchar_t *a2, unsigned __int16 **a3, _QWORD *a4)
{
  unsigned __int16 *i; // rdi
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rax
  wchar_t *v10; // rcx
  char *v11; // rsi
  __int16 v12; // bp
  unsigned __int16 *v13; // rbx
  signed __int64 v14; // rcx
  const wchar_t *v15; // r14
  unsigned __int16 v16; // r11
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  _WORD *v21; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+80h] [rbp+8h] BYREF
  wchar_t *v23; // [rsp+98h] [rbp+20h] BYREF

  i = a1;
  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  *a4 = 0LL;
  if ( a1[2] )
    goto LABEL_19;
  v8 = AslStringDuplicate(&v23, a2);
  if ( v8 < 0 )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_18;
  }
  v9 = *i;
  if ( (__int16)v9 < 8 )
  {
LABEL_19:
    v8 = -1073741811;
    AslLogCallPrintf(1LL);
  }
  else
  {
    v10 = v23;
    v11 = (char *)i + v9;
    v12 = *(unsigned __int16 *)((char *)i + v9 - 2);
    v13 = (unsigned __int16 *)v11;
    *((_WORD *)v11 - 1) = 0;
LABEL_5:
    v15 = AslpFileStringTokenize(v10, v7, &v21);
    if ( v15 )
    {
      v14 = (unsigned int)((_DWORD)v11 - (_DWORD)i);
      if ( (unsigned int)v14 >= 8
        && *i <= (unsigned int)v14
        && (int)AslpFileVerBlockGetValueOffset(&v22, (__int64)i, (unsigned int)v14) >= 0 )
      {
        v17 = *i;
        v18 = v22 + ((i[1] + 3LL) & 0xFFFFFFFFFFFFFFFCuLL);
        v22 = v18;
        if ( v18 <= v17 )
        {
          v13 = (unsigned __int16 *)((char *)i + v17);
          for ( i = (unsigned __int16 *)((char *)i + v18);
                i < v13;
                i = (unsigned __int16 *)((char *)i + ((*i + 3LL) & 0xFFFFFFFFFFFFFFFCuLL)) )
          {
            v19 = *i;
            if ( (unsigned __int16)v19 <= v16 )
              break;
            v14 = (char *)v13 - (char *)i;
            if ( v19 > (char *)v13 - (char *)i )
              break;
            if ( !wcsicmp(v15, i + 3) )
            {
              v10 = 0LL;
              goto LABEL_5;
            }
            v16 = 8;
          }
        }
      }
      v8 = -1073741275;
    }
    else
    {
      *a3 = i;
      *a4 = (char *)v13 - (char *)i;
      v8 = 0;
    }
    *((_WORD *)v11 - 1) = v12;
  }
LABEL_18:
  AslFree(v14);
  return (unsigned int)v8;
}
