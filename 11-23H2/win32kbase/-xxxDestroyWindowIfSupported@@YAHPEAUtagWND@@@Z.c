/*
 * XREFs of ?xxxDestroyWindowIfSupported@@YAHPEAUtagWND@@@Z @ 0x1C00AB800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxDestroyWindowIfSupported(struct tagWND *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C0295B48 && (int)qword_1C0295B48() >= 0 && qword_1C0295B50 )
    return (unsigned int)qword_1C0295B50(a1);
  return v1;
}
