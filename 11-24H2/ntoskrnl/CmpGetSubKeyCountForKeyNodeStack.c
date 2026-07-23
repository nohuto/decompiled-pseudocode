/*
 * XREFs of CmpGetSubKeyCountForKeyNodeStack @ 0x140909284
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140457A68 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpGetSubKeyCountForKcbStack @ 0x1409077DC (CmpGetSubKeyCountForKcbStack.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpKeyEnumStackStart @ 0x140908FBC (CmpKeyEnumStackStart.c)
 *     CmpKeyEnumStackAdvance @ 0x14090A2F8 (CmpKeyEnumStackAdvance.c)
 *     CmpCleanupKeyNodeStack @ 0x14090A6C8 (CmpCleanupKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14090A728 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackEntryCleanup @ 0x14090A78C (CmpKeyEnumStackEntryCleanup.c)
 *     CmpGetEffectiveKeyNodeSemantics @ 0x14090A984 (CmpGetEffectiveKeyNodeSemantics.c)
 *     CmpKeyEnumStackInitialize @ 0x14090A9A4 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackEntryBegin @ 0x14090AA50 (CmpKeyEnumStackEntryBegin.c)
 */

__int64 __fastcall CmpGetSubKeyCountForKeyNodeStack(unsigned __int16 *a1, int *a2)
{
  __int64 i; // rdx
  int j; // ebx
  int v6; // edi
  __int16 k; // bx
  __int64 v8; // rax
  char *v9; // rcx
  unsigned __int16 v11; // r9
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // bx
  _QWORD *EntryAtLayerHeight; // rax
  int EffectiveKeyNodeSemantics; // edi
  __int64 v16; // r9
  __int64 v17; // r10
  int v18; // eax
  __int16 v19; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v20[336]; // [rsp+28h] [rbp-D8h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+178h] [rbp+78h]

  memset_0(&v19, 0, 0x160uLL);
  CmpKeyEnumStackInitialize(&v19);
  for ( i = *a1; ; LOWORD(i) = i - 1 )
  {
    if ( (__int16)i <= 0 )
    {
      j = *(_DWORD *)(*((_QWORD *)a1 + 3) + 20LL) + *(_DWORD *)(*((_QWORD *)a1 + 3) + 24LL);
LABEL_4:
      *a2 = j;
      v6 = 0;
      goto LABEL_5;
    }
    if ( *(_QWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight(a1, i) + 16) )
      break;
  }
  v6 = CmpKeyEnumStackStart((__int64)&v19, v11);
  if ( v6 >= 0 )
  {
    v12 = v19;
    if ( v19 >= 0 )
    {
      do
      {
        v13 = v12;
        EntryAtLayerHeight = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, v12);
        if ( EntryAtLayerHeight[2] )
        {
          EffectiveKeyNodeSemantics = CmpGetEffectiveKeyNodeSemantics(*EntryAtLayerHeight);
          if ( EffectiveKeyNodeSemantics == 1 )
            break;
          CmpKeyEnumStackEntryBegin(v16, v17, 0LL);
          if ( (EffectiveKeyNodeSemantics & 0xFFFFFFFD) != 0 )
            break;
        }
        v12 = v13 - 1;
      }
      while ( (__int16)(v13 - 1) >= 0 );
    }
    for ( j = 0; ; ++j )
    {
      v18 = CmpKeyEnumStackAdvance(&v19);
      v6 = v18;
      if ( v18 == -2147483622 )
        break;
      if ( v18 < 0 )
        goto LABEL_5;
    }
    goto LABEL_4;
  }
LABEL_5:
  CmpCleanupKeyNodeStack(v20);
  for ( k = 0; k <= v19; ++k )
  {
    v8 = (unsigned int)k;
    if ( k >= 2 )
      v9 = (char *)Privileges + 128 * (unsigned __int64)(unsigned int)(v8 - 2);
    else
      v9 = &v20[128 * v8 + 80];
    CmpKeyEnumStackEntryCleanup(v9);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  return (unsigned int)v6;
}
