/*
 * XREFs of TxtpAddCacheEntry @ 0x140BB53FC
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x14046ECF8 (BgpTxtDisplayCharacter.c)
 * Callees:
 *     BgpFwAllocateMemory @ 0x14045ED38 (BgpFwAllocateMemory.c)
 *     TxtpDestroyCacheEntry @ 0x140BB63D4 (TxtpDestroyCacheEntry.c)
 */

__int64 __fastcall TxtpAddCacheEntry(__int64 *a1, __int16 a2, __int64 a3, __int64 a4)
{
  __int64 Memory; // rax
  unsigned int v9; // edi
  __int64 v10; // rcx
  int v11; // ecx
  __int64 **v12; // rcx
  __int64 **v13; // rax

  Memory = BgpFwAllocateMemory(0x38uLL);
  v9 = 0;
  if ( Memory )
  {
    *(_WORD *)(Memory + 16) = a2;
    *(_OWORD *)(Memory + 24) = *(_OWORD *)a3;
    *(_QWORD *)(Memory + 40) = *(_QWORD *)(a3 + 16);
    *(_QWORD *)(Memory + 48) = a4;
    v10 = *a1;
    if ( *(__int64 **)(*a1 + 8) != a1 )
      goto LABEL_10;
    *(_QWORD *)Memory = v10;
    *(_QWORD *)(Memory + 8) = a1;
    *(_QWORD *)(v10 + 8) = Memory;
    *a1 = Memory;
    v11 = *((_DWORD *)a1 + 4);
    if ( v11 != 125 )
    {
      *((_DWORD *)a1 + 4) = v11 + 1;
      return v9;
    }
    v12 = (__int64 **)a1[1];
    if ( *v12 != a1 || (v13 = (__int64 **)v12[1], *v13 != (__int64 *)v12) )
LABEL_10:
      __fastfail(3u);
    a1[1] = (__int64)v13;
    *v13 = a1;
    TxtpDestroyCacheEntry();
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v9;
}
