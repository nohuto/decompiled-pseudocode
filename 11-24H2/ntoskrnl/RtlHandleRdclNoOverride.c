/*
 * XREFs of RtlHandleRdclNoOverride @ 0x140B62CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlHandleRdclNoOverride(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rcx

  LOBYTE(v2) = *(_BYTE *)(a1 + 4);
  if ( (_BYTE)v2 == 2 )
  {
    if ( *(_DWORD *)(a1 + 8) == 6 )
    {
      v2 = *(unsigned int *)(a1 + 12);
      if ( (unsigned int)v2 <= 0x36 )
      {
        v3 = 0x6000C010000000LL;
        if ( _bittest64(&v3, v2) )
          goto LABEL_9;
      }
    }
  }
  else if ( (_BYTE)v2 != 3 || *(_DWORD *)(a1 + 8) == 6 && *(_DWORD *)(a1 + 12) == 13 )
  {
LABEL_9:
    *a2 = 1;
  }
  return v2;
}
