/*
 * XREFs of AslpFileVerQueryBlock @ 0x14094329C
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x14080FBCC (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileQueryVersionString @ 0x14081021C (AslpFileQueryVersionString.c)
 * Callees:
 *     AslpFileStringTokenize @ 0x14049B3A8 (AslpFileStringTokenize.c)
 *     AslpFileVerBlockGetValueOffset @ 0x1404A4D8C (AslpFileVerBlockGetValueOffset.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     AslStringDuplicate @ 0x140942210 (AslStringDuplicate.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
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
  const char *v21; // r9
  int v22; // r8d
  _WORD *v23; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+80h] [rbp+8h] BYREF
  wchar_t *v25; // [rsp+98h] [rbp+20h] BYREF

  i = a1;
  v25 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  *a4 = 0LL;
  if ( a1[2] )
  {
    v21 = "Version block invalid";
    v22 = 2843;
LABEL_22:
    v8 = -1073741811;
    AslLogCallPrintf(1, (unsigned int)"AslpFileVerQueryBlock", v22, (_DWORD)v21);
    goto LABEL_19;
  }
  v8 = AslStringDuplicate(&v25, a2);
  if ( v8 < 0 )
  {
    AslLogCallPrintf(1, (unsigned int)"AslpFileVerQueryBlock", 2849, (unsigned int)"AslStringDuplicate failed [%x]");
    goto LABEL_19;
  }
  v9 = *i;
  if ( (unsigned __int16)v9 > 0x7FFFu )
  {
    v21 = "VersionBlock is too long";
    v22 = 2861;
    goto LABEL_22;
  }
  if ( (unsigned __int16)v9 < 8u )
  {
    v21 = "VersionBlock not long enough";
    v22 = 2866;
    goto LABEL_22;
  }
  v10 = v25;
  v11 = (char *)i + v9;
  v12 = *(unsigned __int16 *)((char *)i + v9 - 2);
  v13 = (unsigned __int16 *)v11;
  *((_WORD *)v11 - 1) = 0;
LABEL_6:
  v15 = AslpFileStringTokenize(v10, v7, &v23);
  if ( v15 )
  {
    v14 = (unsigned int)((_DWORD)v11 - (_DWORD)i);
    if ( (unsigned int)v14 >= 8
      && *i <= (unsigned int)v14
      && (int)AslpFileVerBlockGetValueOffset(&v24, (__int64)i, (unsigned int)v14) >= 0 )
    {
      v17 = *i;
      v18 = v24 + ((i[1] + 3LL) & 0xFFFFFFFFFFFFFFFCuLL);
      v24 = v18;
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
            goto LABEL_6;
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
LABEL_19:
  AslFree(v14);
  return (unsigned int)v8;
}
