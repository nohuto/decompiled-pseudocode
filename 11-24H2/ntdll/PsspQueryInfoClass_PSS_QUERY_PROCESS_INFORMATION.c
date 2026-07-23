/*
 * XREFs of PsspQueryInfoClass_PSS_QUERY_PROCESS_INFORMATION @ 0x1800BD7EC
 * Callers:
 *     PssNtQuerySnapshot @ 0x1800BC370 (PssNtQuerySnapshot.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsspQueryInfoClass_PSS_QUERY_PROCESS_INFORMATION(__int64 a1, __int64 a2)
{
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 48);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 64);
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 80);
  *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 96);
  *(_WORD *)(a2 + 96) = *(_WORD *)(a1 + 112);
  *(_OWORD *)(a2 + 104) = *(_OWORD *)(a1 + 120);
  *(_OWORD *)(a2 + 120) = *(_OWORD *)(a1 + 136);
  *(_OWORD *)(a2 + 136) = *(_OWORD *)(a1 + 152);
  *(_OWORD *)(a2 + 152) = *(_OWORD *)(a1 + 168);
  *(_OWORD *)(a2 + 168) = *(_OWORD *)(a1 + 184);
  *(_OWORD *)(a2 + 184) = *(_OWORD *)(a1 + 200);
  *(_OWORD *)(a2 + 216) = *(_OWORD *)(a1 + 280);
  *(_DWORD *)(a2 + 232) = *(_DWORD *)(a1 + 272);
  *(_DWORD *)(a2 + 236) = *(_DWORD *)(a1 + 276);
  return 0LL;
}
