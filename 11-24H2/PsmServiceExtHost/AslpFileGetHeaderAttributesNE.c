/*
 * XREFs of AslpFileGetHeaderAttributesNE @ 0x1800A10EC
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x18009FB14 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     AslStringXmlSanitize @ 0x18009EC48 (AslStringXmlSanitize.c)
 *     AslFileMappingEnsure @ 0x18009F0F0 (AslFileMappingEnsure.c)
 *     AslpFileGet16BitDescription @ 0x1800A00C4 (AslpFileGet16BitDescription.c)
 *     AslpFileGet16BitModuleName @ 0x1800A01A8 (AslpFileGet16BitModuleName.c)
 */

__int64 __fastcall AslpFileGetHeaderAttributesNE(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 v6; // rbp
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 v9; // r11
  PWSTR v10; // [rsp+60h] [rbp+18h] BYREF
  PWSTR v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v4 = AslFileMappingEnsure(a2);
  if ( v4 < 0 )
    goto LABEL_2;
  if ( *(_DWORD *)(a2 + 56) != 5 )
  {
    *(_DWORD *)(a1 + 664) |= 2u;
LABEL_5:
    *(_DWORD *)(a1 + 696) |= 2u;
    return 0;
  }
  *(_DWORD *)(a1 + 600) |= 2u;
  *(_DWORD *)(a1 + 632) |= 2u;
  *(_DWORD *)(a1 + 728) |= 2u;
  *(_DWORD *)(a1 + 56) |= 2u;
  *(_DWORD *)(a1 + 824) |= 2u;
  *(_DWORD *)(a1 + 760) |= 2u;
  *(_DWORD *)(a1 + 952) |= 2u;
  *(_DWORD *)(a1 + 984) |= 2u;
  *(_DWORD *)(a1 + 1016) |= 2u;
  *(_DWORD *)(a1 + 1080) |= 2u;
  v6 = -1LL;
  if ( (int)AslpFileGet16BitDescription(&v10, a2) < 0 )
  {
    *(_DWORD *)(a1 + 664) |= 2u;
  }
  else
  {
    v4 = AslStringXmlSanitize(v10);
    if ( v4 < 0 )
      goto LABEL_2;
    *(_DWORD *)(a1 + 640) = 4;
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(v7 + 2 * v8) );
    *(_DWORD *)(a1 + 664) |= 5u;
    *(_QWORD *)(a1 + 648) = v8;
    *(_QWORD *)(a1 + 656) = v7;
  }
  if ( (int)AslpFileGet16BitModuleName(&v11, a2) < 0 )
    goto LABEL_5;
  v4 = AslStringXmlSanitize(v11);
  if ( v4 >= 0 )
  {
    *(_DWORD *)(a1 + 672) = 4;
    do
      ++v6;
    while ( *(_WORD *)(v9 + 2 * v6) );
    *(_DWORD *)(a1 + 696) |= 5u;
    *(_QWORD *)(a1 + 680) = v6;
    *(_QWORD *)(a1 + 688) = v9;
    return 0;
  }
LABEL_2:
  AslLogCallPrintf(1LL);
  return (unsigned int)v4;
}
