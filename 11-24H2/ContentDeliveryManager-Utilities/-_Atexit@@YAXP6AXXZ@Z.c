/*
 * XREFs of ?_Atexit@@YAXP6AXXZ@Z @ 0x18000D020
 * Callers:
 *     ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x1800055C0 (-_Setgloballocale@locale@std@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall _Atexit(void (*a1)(void))
{
  PVOID v1; // rax

  if ( !qword_18017A268 )
    abort();
  v1 = EncodePointer(a1);
  qword_18017A510[--qword_18017A268] = v1;
}
