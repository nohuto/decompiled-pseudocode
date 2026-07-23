/*
 * XREFs of CmpGetValueCountForKeyNodeStack @ 0x140457F40
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140457A68 (CmpQueryKeyDataFromKeyNodeStack.c)
 * Callees:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140458108 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpValueEnumStackAdvance @ 0x1408E2E18 (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x140908A14 (CmpValueEnumStackCleanup.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14090A728 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14090A984 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpSortedValueEnumStackCleanup @ 0x140A1CD80 (CmpSortedValueEnumStackCleanup.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140A1CDE4 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpSortedValueEnumStackAdvance @ 0x140A1CED8 (CmpSortedValueEnumStackAdvance.c)
 *     CmpValueEnumStackInitialize @ 0x140A4B228 (CmpValueEnumStackInitialize.c)
 *     CmpSortedValueEnumStackInitialize @ 0x140A66118 (CmpSortedValueEnumStackInitialize.c)
 */

__int64 __fastcall CmpGetValueCountForKeyNodeStack(__int16 *a1, _DWORD *a2)
{
  __int16 v4; // r9
  int v5; // ebx
  _QWORD *EntryAtLayerHeight; // rax
  __int16 v8; // r9
  char v9; // r10
  __int16 v10; // r11
  int i; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  _BYTE v15[96]; // [rsp+20h] [rbp-99h] BYREF
  _BYTE v16[96]; // [rsp+80h] [rbp-39h] BYREF

  memset_0(v15, 0, 0x58uLL);
  memset_0(v16, 0, 0x58uLL);
  CmpSortedValueEnumStackInitialize(v15);
  CmpValueEnumStackInitialize(v16);
  v4 = *a1;
  if ( *a1 >= 0 )
  {
    do
    {
      EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)v4);
      if ( EntryAtLayerHeight[2] && (unsigned int)CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight) )
        break;
      v4 = v8 - 1;
    }
    while ( v4 >= 0 );
    if ( v10 )
    {
      if ( !v9 )
      {
        *a2 = *(_DWORD *)(*(_QWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight(a1, 0LL) + 16) + 36LL);
        goto LABEL_3;
      }
      if ( v10 > 1 )
      {
        v13 = CmpSortedValueEnumStackStartFromKeyNodeStack(v15, a1);
        v5 = v13;
        if ( v13 >= 0 )
        {
          for ( i = 0; ; ++i )
          {
            v14 = CmpSortedValueEnumStackAdvance(v15);
            v5 = v14;
            if ( v14 == -2147483622 )
              break;
            if ( v14 < 0 )
              goto LABEL_4;
          }
LABEL_17:
          *a2 = i;
          goto LABEL_3;
        }
        if ( v13 != -1073741670 )
          goto LABEL_4;
        CmpSortedValueEnumStackCleanup(v15);
        CmpSortedValueEnumStackInitialize(v15);
      }
      v5 = CmpValueEnumStackStartFromKeyNodeStack(v16, a1);
      if ( v5 < 0 )
        goto LABEL_4;
      for ( i = 0; ; ++i )
      {
        v12 = CmpValueEnumStackAdvance(v16);
        v5 = v12;
        if ( v12 == -2147483622 )
          break;
        if ( v12 < 0 )
          goto LABEL_4;
      }
      goto LABEL_17;
    }
  }
  *a2 = 0;
LABEL_3:
  v5 = 0;
LABEL_4:
  CmpValueEnumStackCleanup(v16);
  CmpSortedValueEnumStackCleanup(v15);
  return (unsigned int)v5;
}
