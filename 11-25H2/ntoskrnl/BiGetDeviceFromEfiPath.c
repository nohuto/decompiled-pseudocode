/*
 * XREFs of BiGetDeviceFromEfiPath @ 0x140A264BC
 * Callers:
 *     BiCreateMergedBootEntry @ 0x140A253DC (BiCreateMergedBootEntry.c)
 *     BiUpdateBcdObject @ 0x140AD63A8 (BiUpdateBcdObject.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     BiTranslateFilePath @ 0x140A26634 (BiTranslateFilePath.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetDeviceFromEfiPath(char *Src, _QWORD *a2, _DWORD *a3)
{
  char v3; // al
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  char *Pool2; // rax
  char *v9; // rsi
  int v10; // eax
  char *v11; // rdi
  char *i; // rbx
  unsigned int v14; // ebp
  _DWORD *v15; // rax
  _DWORD *v16; // r14
  _QWORD *v17; // rax
  PVOID P; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v19; // [rsp+68h] [rbp+10h]

  v19 = a2;
  v3 = *Src;
  P = 0LL;
  if ( (v3 & 0x7F) == 0x7F )
  {
    return (unsigned int)-1073741766;
  }
  else
  {
    for ( i = &Src[*((unsigned __int16 *)Src + 1)];
          (*i & 0x7F) != 0x7F && (*i != 4 || i[1] != 4);
          i += *((unsigned __int16 *)i + 1) )
    {
      ;
    }
    v7 = (_DWORD)i - (_DWORD)Src;
    Pool2 = (char *)ExAllocatePool2(0x102uLL);
    v9 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1;
      *((_DWORD *)Pool2 + 1) = v7 + 16;
      *((_DWORD *)Pool2 + 2) = 4;
      memmove(Pool2 + 12, Src, v7);
      *(_DWORD *)&v9[v7 + 12] = 327551;
      v10 = BiTranslateFilePath(v9, 3LL, &P);
      v11 = (char *)P;
      v6 = v10;
      if ( v10 >= 0 )
      {
        v14 = *((_DWORD *)P + 1) - 12;
        v15 = (_DWORD *)ExAllocatePool2(0x102uLL);
        v16 = v15;
        if ( v15 )
        {
          memset_0(v15, 0, v14 + 20);
          *v16 = 2;
          memmove(v16 + 5, v11 + 12, v14);
          v17 = v19;
          *a3 = v14 + 20;
          *v17 = v16;
        }
        else
        {
          v6 = -1073741670;
        }
      }
      if ( v11 )
        ExFreePoolWithTag(v11, 0x4B444342u);
      ExFreePoolWithTag(v9, 0x4B444342u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v6;
}
