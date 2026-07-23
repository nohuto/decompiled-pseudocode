/*
 * XREFs of MiReferenceDriverPage @ 0x140205D18
 * Callers:
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14043A2FC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiLockDriverPageRange @ 0x14066C080 (MiLockDriverPageRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReferenceDriverPage(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx
  int v3; // r8d
  bool v4; // zf
  __int64 result; // rax
  unsigned int v6; // [rsp+8h] [rbp+8h]

  if ( (*(_QWORD *)(a1 + 40) & 0x10000000000LL) == 0 && !_bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
  {
    v1 = *(_DWORD *)(a1 + 32);
    v2 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    v3 = 0;
    if ( !(_WORD)v1 )
    {
LABEL_9:
      *(_BYTE *)(a1 + 35) |= 0x20u;
      goto LABEL_10;
    }
    if ( (_WORD)v1 == 1 )
    {
      if ( v2 || (*(_BYTE *)(a1 + 34) & 8) != 0 )
        v3 = 1;
      v4 = v3 == 0;
    }
    else
    {
      if ( (_WORD)v1 != 2 || !v2 )
        goto LABEL_10;
      v4 = (*(_BYTE *)(a1 + 34) & 8) == 0;
    }
    if ( !v4 )
      goto LABEL_9;
  }
LABEL_10:
  v6 = *(_DWORD *)(a1 + 32);
  LOWORD(v6) = v6 + 1;
  result = v6;
  *(_DWORD *)(a1 + 32) = v6;
  return result;
}
