/*
 * XREFs of AslpFileGetClrVersion @ 0x1800A05CC
 * Callers:
 *     AslpFileGetClrVersionAttribute @ 0x1800A07A0 (AslpFileGetClrVersionAttribute.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x1800A16A0 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x1800A399C (AslpImageRvaToVa.c)
 *     memcpy_0 @ 0x1800A7AF2 (memcpy_0.c)
 */

__int64 __fastcall AslpFileGetClrVersion(_BYTE *a1, __int64 a2)
{
  unsigned int *v4; // rdi
  int ImageNtHeader; // ebx
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rax
  _DWORD *v9; // rax
  __int64 v10; // rbx
  __int64 v12; // [rsp+70h] [rbp+8h] BYREF
  unsigned int *v13; // [rsp+80h] [rbp+18h]
  __int64 v14; // [rsp+88h] [rbp+20h]

  v12 = 0LL;
  v4 = 0LL;
  v13 = 0LL;
  *a1 = 0;
  ImageNtHeader = AslpFileGetImageNtHeader(&v12, a2);
  if ( ImageNtHeader < 0 )
    goto LABEL_2;
  v6 = v12;
  if ( *(_WORD *)(v12 + 24) == 267 )
  {
    v4 = (unsigned int *)(v12 + 232);
  }
  else
  {
    if ( *(_WORD *)(v12 + 24) != 523 )
      goto LABEL_8;
    v4 = (unsigned int *)(v12 + 248);
  }
  v13 = v4;
LABEL_8:
  if ( !v4 )
    return (unsigned int)-1073741701;
  v7 = *v4;
  if ( !(_DWORD)v7 || v4[1] < 0x48 )
    return (unsigned int)-1073741701;
  v8 = AslpImageRvaToVa(v12, a2 + 8, v7);
  v14 = v8;
  if ( v8 )
  {
    if ( *(_WORD *)(v8 + 4) != 2 )
      return (unsigned int)-1073741637;
    v9 = (_DWORD *)AslpImageRvaToVa(v6, a2 + 8, *(unsigned int *)(v8 + 8));
    if ( v9 )
    {
      if ( *v9 != 1112167234 )
      {
        ImageNtHeader = -1073741637;
        goto LABEL_2;
      }
      v10 = (unsigned int)v9[3];
      if ( (unsigned __int64)(v10 - 1) <= 0xFE )
      {
        memcpy_0(a1, v9 + 4, (unsigned int)v10);
        a1[v10] = 0;
        return 0;
      }
    }
  }
  ImageNtHeader = -1073741701;
LABEL_2:
  AslLogCallPrintf(1LL);
  return (unsigned int)ImageNtHeader;
}
