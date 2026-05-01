/*
 * XREFs of AslpFileGetImageResourceDirectoryRoot @ 0x1800A1774
 * Callers:
 *     AslpFileGetCrcChecksumBoot @ 0x1800A0A34 (AslpFileGetCrcChecksumBoot.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x1800A253C (AslpFileGetVersionBlockImageOnly.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x1800A16A0 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x1800A399C (AslpImageRvaToVa.c)
 *     AslpMemoryCheckBounds @ 0x1800A3A14 (AslpMemoryCheckBounds.c)
 */

__int64 __fastcall AslpFileGetImageResourceDirectoryRoot(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v7; // rbp
  __int64 v8; // r14
  int ImageNtHeader; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r11
  _WORD *v13; // rcx
  unsigned int *v14; // r11
  unsigned int v15; // eax
  unsigned int *v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // [rsp+60h] [rbp+18h] BYREF

  v19 = 0LL;
  if ( *(_DWORD *)(a3 + 56) != 6 )
  {
    AslLogCallPrintf(1LL);
    return 3221225659LL;
  }
  v7 = *(_QWORD *)(a3 + 32);
  v8 = *(_QWORD *)(a3 + 40);
  ImageNtHeader = AslpFileGetImageNtHeader(&v19, a3);
  if ( ImageNtHeader < 0 )
    goto LABEL_26;
  if ( !(unsigned __int8)AslpMemoryCheckBounds(v19, 8LL, v7, v8) )
  {
    ImageNtHeader = -1073741266;
LABEL_26:
    AslLogCallPrintf(1LL);
    return (unsigned int)ImageNtHeader;
  }
  v13 = (_WORD *)(v12 + 24);
  if ( *(_WORD *)(v12 + 24) == 267 )
  {
    if ( *(_WORD *)(v12 + 20) >= 0x60u )
    {
      if ( !(unsigned __int8)AslpMemoryCheckBounds(v13, 224LL, v10, v11) )
      {
LABEL_8:
        AslLogCallPrintf(1LL);
        return 3221226030LL;
      }
      v15 = v14[29];
      v16 = v14 + 34;
      goto LABEL_14;
    }
    return 3221225595LL;
  }
  if ( *v13 != 523 || *(_WORD *)(v12 + 20) < 0x70u )
    return 3221225595LL;
  if ( !(unsigned __int8)AslpMemoryCheckBounds(v13, 240LL, v10, v11) )
    goto LABEL_8;
  v15 = v14[33];
  v16 = v14 + 38;
LABEL_14:
  if ( v15 <= 2 )
    return 3221225609LL;
  if ( v16[1] < 0x10 )
    return 3221225609LL;
  v17 = *v16;
  if ( !(_DWORD)v17 )
    return 3221225609LL;
  v18 = AslpImageRvaToVa(v14, a3 + 8, v17);
  if ( !v18 || !(unsigned __int8)AslpMemoryCheckBounds(v18, v16[1], v7, v8) )
    return v18 != 0 ? -1073741266 : -1073741687;
  *a1 = v18;
  if ( a2 )
    *a2 = v16[1];
  return 0LL;
}
