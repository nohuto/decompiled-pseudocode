/*
 * XREFs of EdgyUnregisterListener @ 0x140219360
 * Callers:
 *     NtUserRegisterEdgy @ 0x140208DD0 (NtUserRegisterEdgy.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?_FindListener@Edgy@@YAPEAUtagEDGY_LISTENER@@AEAUtagEDGY_DATA@@PEAXW4tagEDGY_LOCATION@@@Z @ 0x1402A449C (-_FindListener@Edgy@@YAPEAUtagEDGY_LISTENER@@AEAUtagEDGY_DATA@@PEAXW4tagEDGY_LOCATION@@@Z.c)
 *     ?_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z @ 0x1402A4CDC (-_RemoveListenerCore@Edgy@@YAXAEAUtagEDGY_DATA@@PEAUtagEDGY_LISTENER@@@Z.c)
 */

__int64 __fastcall EdgyUnregisterListener(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // rcx
  struct tagEDGY_DATA *Listener; // rax
  Edgy *v8; // rcx
  struct tagEDGY_LISTENER *v9; // r8

  v2 = 0;
  if ( !a1 )
    return 0LL;
  v4 = *(_DWORD *)(a1 + 16);
  v5 = *(_QWORD *)a1;
  v6 = *(_QWORD *)(*((_QWORD *)PtiCurrent(a1, a2) + 62) + 248LL);
  if ( v6 )
  {
    Listener = (struct tagEDGY_DATA *)Edgy::_FindListener(v6, v5, v4);
    if ( Listener )
    {
      Edgy::_RemoveListenerCore(v8, Listener, v9);
      return 1;
    }
  }
  return v2;
}
