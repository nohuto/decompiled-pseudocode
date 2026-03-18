/*
 * XREFs of ?SpiGetStickyKeys@@YAHKPEAX@Z @ 0x14013D2D4
 * Callers:
 *     xxxSystemParametersInfo @ 0x140173780 (xxxSystemParametersInfo.c)
 * Callees:
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall SpiGetStickyKeys(__int64 a1, _WORD *a2)
{
  int v3; // ebx
  __int64 UserSessionState; // rax
  __int64 v5; // rsi
  __int64 result; // rax

  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1);
  v5 = UserSessionState;
  if ( (v3 & 0xFFFFFFF7) != 0 || !a2 || *(_DWORD *)a2 != 8 )
    return 0LL;
  memmove(a2 + 2, (const void *)(UserSessionState + 20628), 4uLL);
  a2[3] = 0;
  *((_DWORD *)a2 + 1) |= _byteswap_ulong(*(unsigned __int8 *)(v5 + 21905));
  result = 1LL;
  *((_DWORD *)a2 + 1) |= *(unsigned __int8 *)(v5 + 21906) << 16;
  return result;
}
