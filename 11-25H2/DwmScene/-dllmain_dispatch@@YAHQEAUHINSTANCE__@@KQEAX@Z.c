/*
 * XREFs of ?dllmain_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x18000B128
 * Callers:
 *     DllEntryPoint @ 0x18000B260 (DllEntryPoint.c)
 * Callees:
 *     ?dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x18000AF30 (-dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 *     sub_18000B490 @ 0x18000B490 (sub_18000B490.c)
 *     ?raw_length@charNode@@UEBAHXZ_0 @ 0x18000FFB0 (-raw_length@charNode@@UEBAHXZ_0.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall dllmain_dispatch(charNode *a1, int a2, void *const a3)
{
  unsigned int v7; // ebx
  unsigned int v8; // eax

  if ( !a2 && dword_1801C2C90 <= 0 )
    return 0LL;
  if ( (unsigned int)(a2 - 1) > 1 || (v7 = dllmain_crt_dispatch((HINSTANCE)a1, a2, a3)) != 0 )
  {
    v8 = charNode::raw_length(a1);
    v7 = v8;
    if ( a2 == 1 && !v8 )
    {
      charNode::raw_length(a1);
      dllmain_crt_dispatch((HINSTANCE)a1, 0, a3);
    }
    if ( !a2 || a2 == 3 )
      JUMPOUT(0x18000B206LL);
  }
  return v7;
}
