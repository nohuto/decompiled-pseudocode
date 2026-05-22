/*
 * XREFs of ?ReleaseBufferIfNeeded@ViewMenuChordedKeyHandler@@QEAAXXZ @ 0x18017CBDC
 * Callers:
 *     ?HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEA_N@Z @ 0x1800627A4 (-HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEA_N@Z.c)
 *     ?OnChordedKeyDelayTimeElapsed@ViewMenuChordedKeyHandler@@AEAAJXZ @ 0x18017CA70 (-OnChordedKeyDelayTimeElapsed@ViewMenuChordedKeyHandler@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ViewMenuChordedKeyHandler::ReleaseBufferIfNeeded(ViewMenuChordedKeyHandler *this)
{
  __int64 v1; // rax

  if ( *((_BYTE *)this + 72) )
  {
    v1 = *((_QWORD *)this + 6);
    if ( v1 != *((_QWORD *)this + 7) )
      *((_QWORD *)this + 7) = v1;
  }
  *((_BYTE *)this + 72) = 0;
}
