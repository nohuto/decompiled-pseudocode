/*
 * XREFs of SmProcessListRequestExtended @ 0x140798368
 * Callers:
 *     SmProcessListRequest @ 0x1407980E8 (SmProcessListRequest.c)
 * Callees:
 *     SmKmStoreDereference @ 0x14022FA28 (SmKmStoreDereference.c)
 *     SmKmStoreReference @ 0x1402F6020 (SmKmStoreReference.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SmKmFileInfoGetPath @ 0x140799CF0 (SmKmFileInfoGetPath.c)
 */

__int64 __fastcall SmProcessListRequestExtended(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  unsigned int i; // r14d
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rax
  int Path; // esi

  v4 = 0;
  for ( i = 1; ; ++i )
  {
    if ( v4 >= *(unsigned __int8 *)(a2 + 1) )
      return 0;
    v6 = 4LL * v4;
    v7 = SmKmStoreReference(a1, *(_DWORD *)(v6 + a2 + 16));
    if ( !v7 )
    {
      memmove(
        (void *)(v6 + a2 + 16),
        (const void *)(a2 + 4LL * i-- + 16),
        4 * (*(unsigned __int8 *)(a2 + 1) - v4--) - 4);
      --*(_BYTE *)(a2 + 1);
      goto LABEL_10;
    }
    v8 = ((unsigned __int64)v4 << 7) + a2;
    if ( *(_BYTE *)(v7 + 6836) == 1 )
      break;
    *(_WORD *)(v8 + 144) = 0;
LABEL_9:
    SmKmStoreDereference(a1, *(_DWORD *)(v7 + 6832));
LABEL_10:
    ++v4;
  }
  Path = SmKmFileInfoGetPath(v7 + 7024, v8 + 144, 128LL);
  if ( Path >= 0 )
    goto LABEL_9;
  SmKmStoreDereference(a1, *(_DWORD *)(v7 + 6832));
  return (unsigned int)Path;
}
