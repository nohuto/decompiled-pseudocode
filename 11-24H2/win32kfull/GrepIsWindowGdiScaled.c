/*
 * XREFs of GrepIsWindowGdiScaled @ 0x1400B23A0
 * Callers:
 *     ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z @ 0x1401C256C (-vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z.c)
 * Callees:
 *     ?Lookup@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1400B2430 (-Lookup@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 */

__int64 __fastcall GrepIsWindowGdiScaled(unsigned __int64 a1, _WORD *a2, __int64 a3)
{
  __int64 SessionState; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 result; // rax
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  SessionState = W32GetSessionState(a1, a2, a3);
  v9 = 0LL;
  v6 = a1 >> 1;
  v7 = *(_QWORD *)(SessionState + 96);
  LOBYTE(result) = RtlTestBit((PRTL_BITMAP)(v7 + 4848), v6 & 0x3FFF);
  if ( (_BYTE)result )
  {
    LOBYTE(result) = NSInstrumentation::CPointerHashTable::Lookup(
                       *(NSInstrumentation::CPointerHashTable **)(v7 + 4840),
                       (const void *)(v6 & 0x3FFF),
                       &v9);
    if ( (_BYTE)result )
      *a2 = (_WORD)v9;
  }
  return (unsigned __int8)result;
}
