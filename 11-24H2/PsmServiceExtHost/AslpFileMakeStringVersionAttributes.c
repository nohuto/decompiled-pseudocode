/*
 * XREFs of AslpFileMakeStringVersionAttributes @ 0x1800A2CA8
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x1800A1B9C (AslpFileGetVersionAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     AslStringXmlSanitize @ 0x18009EC48 (AslStringXmlSanitize.c)
 *     AslpFileQueryVersionString @ 0x1800A3300 (AslpFileQueryVersionString.c)
 *     AslpFileVerBlockGetValueOffset @ 0x1800A3600 (AslpFileVerBlockGetValueOffset.c)
 *     AslpFileVerQueryBlock @ 0x1800A3670 (AslpFileVerQueryBlock.c)
 */

__int64 __fastcall AslpFileMakeStringVersionAttributes(__int64 a1, __int64 a2)
{
  int v2; // r12d
  _DWORD *v4; // rax
  __int64 v5; // rcx
  int v6; // edi
  int v8; // eax
  unsigned __int16 *v9; // rsi
  unsigned int v10; // edi
  unsigned __int64 v11; // r14
  __int64 v12; // r15
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r15
  __int64 v15; // r13
  int VersionString; // eax
  __int64 v17; // r11
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  _WORD *v21; // [rsp+30h] [rbp-10h] BYREF
  __int64 v22; // [rsp+38h] [rbp-8h] BYREF
  unsigned __int64 v23; // [rsp+88h] [rbp+48h] BYREF
  __int64 v24; // [rsp+90h] [rbp+50h] BYREF
  unsigned __int64 v25; // [rsp+98h] [rbp+58h] BYREF

  v2 = a2;
  v21 = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  if ( a2 )
  {
    v8 = AslpFileVerQueryBlock(a2, L"\\VarFileInfo\\Translation", &v24, &v23);
    v6 = v8;
    if ( v8 == -1073741275 )
    {
      v9 = 0LL;
      v10 = 0;
    }
    else
    {
      if ( v8 < 0 )
      {
LABEL_10:
        AslLogCallPrintf(1LL);
        return (unsigned int)v6;
      }
      v11 = v23;
      v12 = v24;
      v9 = 0LL;
      v10 = 0;
      if ( (int)AslpFileVerBlockGetValueOffset(&v25, v24, v23) >= 0 && v25 < v11 )
      {
        v9 = (unsigned __int16 *)(v25 + v12);
        v10 = v11 - v25;
      }
    }
    v13 = 0LL;
    v14 = (unsigned __int64)v10 >> 2;
    while ( v13 < 0x80 )
    {
      v15 = *(int *)((char *)&unk_1800C0110 + v13);
      VersionString = AslpFileQueryVersionString(
                        (unsigned int)&v21,
                        (unsigned int)&v22,
                        v2,
                        (_DWORD)v9,
                        v14,
                        *(_QWORD *)((char *)&unk_1800C0110 + v13 + 8));
      v6 = VersionString;
      if ( VersionString < 0 )
      {
        if ( VersionString != -1073741275 )
          goto LABEL_10;
        *(_DWORD *)(32 * v15 + a1 + 24) |= 2u;
      }
      else
      {
        v6 = AslStringXmlSanitize(v21);
        if ( v6 < 0 )
          goto LABEL_10;
        v18 = -1LL;
        v19 = 32 * v15;
        *(_DWORD *)(32 * v15 + a1) = 4;
        do
          ++v18;
        while ( *(_WORD *)(v17 + 2 * v18) );
        *(_DWORD *)(v19 + a1 + 24) |= 1u;
        *(_QWORD *)(v19 + a1 + 8) = v18;
        *(_QWORD *)(v19 + a1 + 16) = v17;
      }
      v13 += 16LL;
    }
    if ( v9 && v14 == 1 )
    {
      *(_DWORD *)(a1 + 768) = 2;
      *(_QWORD *)(a1 + 776) = 4LL;
      v20 = *v9;
      *(_DWORD *)(a1 + 792) |= 1u;
      *(_QWORD *)(a1 + 784) = v20;
      return 0;
    }
  }
  else
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
  }
  *(_DWORD *)(a1 + 792) |= 2u;
  return 0;
}
