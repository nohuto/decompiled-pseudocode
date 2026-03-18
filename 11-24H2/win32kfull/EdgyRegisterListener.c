/*
 * XREFs of EdgyRegisterListener @ 0x1402A4EB4
 * Callers:
 *     NtUserRegisterEdgy @ 0x140208DD0 (NtUserRegisterEdgy.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z @ 0x1402A42F0 (-_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall EdgyRegisterListener(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  struct tagDESKTOP *v5; // rsi
  struct tagTHREADINFO *v6; // rax

  if ( !a1 )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v5 = *(struct tagDESKTOP **)a1;
  v6 = PtiCurrent(a1, a2);
  return Edgy::_AddOrUpdateListener(*((Edgy **)v6 + 62), v5, v4, v3);
}
