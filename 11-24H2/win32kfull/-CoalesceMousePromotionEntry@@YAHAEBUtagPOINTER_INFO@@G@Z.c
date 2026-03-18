/*
 * XREFs of ?CoalesceMousePromotionEntry@@YAHAEBUtagPOINTER_INFO@@G@Z @ 0x1400A82F8
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1400A7F68 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoalesceMousePromotionEntry(const struct tagPOINTER_INFO *a1, __int64 a2)
{
  char v2; // si
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  int v7; // eax

  v2 = a2;
  v6 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 16440);
  if ( !v6
    || *(_DWORD *)(v6 + 20) != *((_DWORD *)a1 + 3)
    || *((_DWORD *)a1 + 2) <= *(_DWORD *)(v6 + 36)
    || *(_QWORD *)(W32GetUserSessionState(v5, v4) + 16664) != *((_QWORD *)a1 + 3) )
  {
    return 0LL;
  }
  *(_QWORD *)(v6 + 8) = *((_QWORD *)a1 + 6);
  *(_DWORD *)(v6 + 36) = *((_DWORD *)a1 + 2);
  v7 = *(_DWORD *)(v6 + 44);
  *(_QWORD *)(v6 + 24) = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  if ( (v7 & 8) == 0 && (v2 & 4) != 0 )
  {
    v7 |= 8u;
    *(_DWORD *)(v6 + 44) = v7;
  }
  if ( (v7 & 0x10) == 0 && (v2 & 8) != 0 )
    *(_DWORD *)(v6 + 44) = v7 | 0x10;
  return 1LL;
}
