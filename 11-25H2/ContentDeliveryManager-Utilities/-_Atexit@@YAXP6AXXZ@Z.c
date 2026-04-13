/*
 * XREFs of ?_Atexit@@YAXP6AXXZ@Z @ 0x18000D010
 * Callers:
 *     ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x1800055B0 (-_Setgloballocale@locale@std@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall _Atexit(void (*a1)(void))
{
  PVOID v1; // rax

  if ( !qword_180178268 )
    abort();
  v1 = EncodePointer(a1);
  qword_180178570[--qword_180178268] = v1;
}
