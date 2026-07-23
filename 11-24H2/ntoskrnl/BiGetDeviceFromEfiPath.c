/*
 * XREFs of BiGetDeviceFromEfiPath @ 0x1409A7044
 * Callers:
 *     BiUpdateBcdObject @ 0x140815EFC (BiUpdateBcdObject.c)
 *     BiCreateMergedBootEntry @ 0x1409A7CDC (BiCreateMergedBootEntry.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     BiTranslateFilePath @ 0x1409A71BC (BiTranslateFilePath.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetDeviceFromEfiPath(char *Src, _QWORD *a2, unsigned int *a3)
{
  int v5; // ebx
  unsigned int v6; // ebx
  _FILE_PATH *Pool2; // rax
  _FILE_PATH *v8; // rsi
  char *i; // rbx
  unsigned int v11; // ebp
  unsigned int v12; // r15d
  _DWORD *v13; // rax
  _DWORD *v14; // r14

  if ( (*Src & 0x7F) == 0x7F )
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
    v6 = (_DWORD)i - (_DWORD)Src;
    Pool2 = (_FILE_PATH *)ExAllocatePool2(0x102uLL, v6 + 16, 0x4B444342u);
    v8 = Pool2;
    if ( Pool2 )
    {
      Pool2->Version = 1;
      Pool2->Length = v6 + 16;
      Pool2->Type = 4;
      memmove(Pool2->FilePath, Src, v6);
      *(_DWORD *)&v8->FilePath[v6] = 327551;
      v5 = BiTranslateFilePath(v8, 3u);
      if ( v5 >= 0 )
      {
        v11 = MEMORY[4] - 12;
        v12 = MEMORY[4] - 12 + 20;
        v13 = (_DWORD *)ExAllocatePool2(0x102uLL, v12, 0x4B444342u);
        v14 = v13;
        if ( v13 )
        {
          memset_0(v13, 0, v11 + 20);
          *v14 = 2;
          memmove(v14 + 5, (const void *)0xC, v11);
          *a3 = v12;
          *a2 = v14;
        }
        else
        {
          v5 = -1073741670;
        }
      }
      ExFreePoolWithTag(v8, 0x4B444342u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v5;
}
