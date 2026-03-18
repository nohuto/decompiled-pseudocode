/*
 * XREFs of HWInsertAfter @ 0x14019A69C
 * Callers:
 *     ?ValidateZorder@@YAHPEAUtagCVR@@@Z @ 0x14008C8D4 (-ValidateZorder@@YAHPEAUtagCVR@@@Z.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1400F4FF8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     LinkWindow @ 0x1402B47A8 (LinkWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HWInsertAfter(__int64 a1)
{
  if ( !a1 || a1 == -2 || a1 == 1 || a1 == -1 )
    return a1;
  else
    return *(_QWORD *)a1;
}
