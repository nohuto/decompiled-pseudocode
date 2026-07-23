/*
 * XREFs of AslpFileMakeStringVersionAttributes @ 0x14080FBCC
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x14080EBD8 (AslpFileGetVersionAttributes.c)
 * Callees:
 *     AslpFileVerBlockGetValueOffset @ 0x1404A4D8C (AslpFileVerBlockGetValueOffset.c)
 *     AslpFileQueryVersionString @ 0x14081021C (AslpFileQueryVersionString.c)
 *     AslpFileVerQueryBlock @ 0x14094329C (AslpFileVerQueryBlock.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     AslStringXmlSanitize @ 0x140AAE348 (AslStringXmlSanitize.c)
 */

__int64 __fastcall AslpFileMakeStringVersionAttributes(__int64 a1, __int64 a2)
{
  int v2; // r12d
  _DWORD *v4; // rax
  __int64 v5; // rcx
  int v6; // edi
  int v8; // eax
  unsigned __int16 *v9; // rsi
  unsigned int v10; // r11d
  const char *v11; // r9
  int v12; // r8d
  __int64 v13; // rdi
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r15
  __int64 v17; // r13
  int VersionString; // eax
  __int64 v19; // r11
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23[2]; // [rsp+30h] [rbp-10h] BYREF
  int v24[2]; // [rsp+38h] [rbp-8h] BYREF
  __int64 v25; // [rsp+88h] [rbp+48h] BYREF
  __int64 v26; // [rsp+90h] [rbp+50h] BYREF
  unsigned __int64 v27; // [rsp+98h] [rbp+58h] BYREF

  v2 = a2;
  *(_QWORD *)v23 = 0LL;
  *(_QWORD *)v24 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  if ( !a2 )
  {
    v4 = (_DWORD *)(a1 + 184);
    v5 = 8LL;
    do
    {
      *v4 |= 2u;
      v4 += 8;
      --v5;
    }
    while ( v5 );
    goto LABEL_4;
  }
  v8 = AslpFileVerQueryBlock(a2, L"\\VarFileInfo\\Translation", &v26, &v25);
  v6 = v8;
  if ( v8 == -1073741275 )
  {
    v9 = 0LL;
    v10 = 0;
LABEL_15:
    v15 = 0LL;
    v16 = (unsigned __int64)v10 >> 2;
    while ( v15 < 0x80 )
    {
      v17 = *(int *)&byte_14000C010[v15];
      VersionString = AslpFileQueryVersionString(
                        (int)v23,
                        (int)v24,
                        v2,
                        (int)v9,
                        v16,
                        *(NTSTRSAFE_PCWSTR *)&byte_14000C010[v15 + 8]);
      v6 = VersionString;
      if ( VersionString < 0 )
      {
        if ( VersionString != -1073741275 )
        {
          v11 = "AslpFileQueryVersionString failed [%x]";
          v12 = 2672;
          goto LABEL_11;
        }
        *(_DWORD *)(32 * v17 + a1 + 24) |= 2u;
      }
      else
      {
        v6 = AslStringXmlSanitize(*(_QWORD *)v23);
        if ( v6 < 0 )
        {
          v11 = "AslStringXmlSanitize failed [%x]";
          v12 = 2659;
          goto LABEL_11;
        }
        v20 = -1LL;
        v21 = 32 * v17;
        *(_DWORD *)(32 * v17 + a1) = 4;
        do
          ++v20;
        while ( *(_WORD *)(v19 + 2 * v20) );
        *(_DWORD *)(v21 + a1 + 24) |= 1u;
        *(_QWORD *)(v21 + a1 + 8) = v20;
        *(_QWORD *)(v21 + a1 + 16) = v19;
      }
      v15 += 16LL;
    }
    if ( v9 && v16 == 1 )
    {
      *(_DWORD *)(a1 + 768) = 2;
      *(_QWORD *)(a1 + 776) = 4LL;
      v22 = *v9;
      *(_DWORD *)(a1 + 792) |= 1u;
      *(_QWORD *)(a1 + 784) = v22;
      return 0;
    }
LABEL_4:
    *(_DWORD *)(a1 + 792) |= 2u;
    return 0;
  }
  if ( v8 >= 0 )
  {
    v13 = v26;
    v9 = 0LL;
    if ( (int)AslpFileVerBlockGetValueOffset(&v27, v26, v25) >= 0 && v27 < v14 )
    {
      v9 = (unsigned __int16 *)(v27 + v13);
      v10 = v14 - v27;
    }
    goto LABEL_15;
  }
  v11 = "AslpFileVerQueryBlock failed [%x]";
  v12 = 2617;
LABEL_11:
  AslLogCallPrintf(1, (unsigned int)"AslpFileMakeStringVersionAttributes", v12, (_DWORD)v11);
  return (unsigned int)v6;
}
