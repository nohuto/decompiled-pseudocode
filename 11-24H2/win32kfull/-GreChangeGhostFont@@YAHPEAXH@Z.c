/*
 * XREFs of ?GreChangeGhostFont@@YAHPEAXH@Z @ 0x14032632C
 * Callers:
 *     NtGdiChangeGhostFont @ 0x140336DD0 (NtGdiChangeGhostFont.c)
 * Callees:
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x14030DA70 (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 */

__int64 __fastcall GreChangeGhostFont(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  v4 = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1, a2) + 96) + 20408LL);
  v6[0] = v4;
  if ( v4 && *(_DWORD *)(v4 + 28) )
    return PUBLIC_PFTOBJ::ChangeGhostFont((PUBLIC_PFTOBJ *)v6, a1, v2);
  else
    return 0LL;
}
