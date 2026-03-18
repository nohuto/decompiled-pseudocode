/*
 * XREFs of MapClientToServerPfn @ 0x14019D504
 * Callers:
 *     xxxSetClassData @ 0x14007D32C (xxxSetClassData.c)
 *     InternalRegisterClassEx @ 0x1400B54C0 (InternalRegisterClassEx.c)
 *     xxxSetWindowData @ 0x1402DD148 (xxxSetWindowData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MapClientToServerPfn(__int64 a1, __int64 a2)
{
  int v3; // ebx
  _QWORD *v4; // rdx
  _QWORD *v5; // rcx

  v3 = 666;
  v4 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19928) + 584LL);
  while ( v3 <= 672 )
  {
    if ( v3 != 666 && *v4 == a1 )
      return *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 19928) + 8LL * ((v3 & 0xFFFF2FFF) - 666) + 272);
    ++v3;
    ++v4;
  }
  v3 = 666;
  v5 = (_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 19928) + 392LL);
  while ( v3 <= 672 )
  {
    if ( v3 != 666 && *v5 == a1 )
      return *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 19928) + 8LL * ((v3 & 0xFFFF2FFF) - 666) + 272);
    ++v3;
    ++v5;
  }
  return 0LL;
}
