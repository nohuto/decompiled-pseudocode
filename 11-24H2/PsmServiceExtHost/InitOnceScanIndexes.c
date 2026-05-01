/*
 * XREFs of InitOnceScanIndexes @ 0x180097770
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbGetFirstChild @ 0x1800924D0 (SdbGetFirstChild.c)
 *     SdbGetTagFromTagID @ 0x18009295C (SdbGetTagFromTagID.c)
 *     SdbFindFirstTag @ 0x180097EEC (SdbFindFirstTag.c)
 *     SdbFindNextTag @ 0x180097F60 (SdbFindNextTag.c)
 *     SdbReadDWORDTag @ 0x180098588 (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x1800986C4 (SdbReadWORDTag.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 */

__int64 __fastcall InitOnceScanIndexes(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // esi
  __int64 v7; // r12
  unsigned int FirstChild; // eax
  unsigned int v9; // ebp
  unsigned int i; // eax
  unsigned int v11; // r14d
  unsigned int FirstTag; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // edx
  __int64 v16; // rax

  v3 = 0;
  if ( a2 && a3 )
  {
    v7 = a2 + 48;
    memset_0((void *)(a2 + 48), 0, 0xA00uLL);
    FirstChild = SdbGetFirstChild(a2, 0);
    v9 = FirstChild;
    if ( FirstChild && (unsigned __int16)SdbGetTagFromTagID(a2, FirstChild) == 30722 )
    {
      *(_DWORD *)(a2 + 2636) = 0;
      for ( i = SdbFindFirstTag(a2, v9, 30723LL); ; i = SdbFindNextTag(a2, v9, v11) )
      {
        v11 = i;
        if ( !i )
          break;
        if ( *(_DWORD *)(a2 + 2636) == 64 )
          goto LABEL_6;
        FirstTag = SdbFindFirstTag(a2, i, 14338LL);
        if ( !FirstTag )
          goto LABEL_6;
        *(_WORD *)(a2 + 40LL * *(unsigned int *)(a2 + 2636) + 52) = SdbReadWORDTag(a2, FirstTag);
        v13 = SdbFindFirstTag(a2, v11, 14339LL);
        if ( !v13 )
          goto LABEL_6;
        *(_WORD *)(a2 + 40LL * *(unsigned int *)(a2 + 2636) + 54) = SdbReadWORDTag(a2, v13);
        v14 = SdbFindFirstTag(a2, v11, 16406LL);
        if ( v14 )
          *(_DWORD *)(a2 + 40 * (*(unsigned int *)(a2 + 2636) + 2LL)) = SdbReadDWORDTag(a2, v14, 0LL);
        else
          *(_DWORD *)(a2 + 40 * (*(unsigned int *)(a2 + 2636) + 2LL)) = 0;
        v15 = SdbFindFirstTag(a2, v11, 38913LL);
        v16 = *(unsigned int *)(a2 + 2636);
        if ( !v15 )
        {
          *(_WORD *)(a2 + 40 * v16 + 52) = 0;
          goto LABEL_6;
        }
        *(_DWORD *)(a2 + 40 * v16 + 48) = v15;
        ++*(_DWORD *)(a2 + 2636);
      }
      *a3 = v7;
      return 1;
    }
    else
    {
LABEL_6:
      AslLogCallPrintf(1LL);
    }
    return v3;
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
}
