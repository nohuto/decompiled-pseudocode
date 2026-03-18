/*
 * XREFs of EtwpCaptureRegistryData @ 0x14099B590
 * Callers:
 *     EtwpRegTraceCallback @ 0x14099AB00 (EtwpRegTraceCallback.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCaptureRegistryData(_QWORD *a1, const void *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  void *v6; // rdi
  int v8; // eax
  void *Pool2; // rax

  LOWORD(v3) = a3;
  v6 = 0LL;
  if ( a3 )
  {
    v8 = 2048;
    if ( a3 <= 0x800 )
      v8 = a3;
    v3 = v8;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v6 = Pool2;
    if ( Pool2 )
      memmove(Pool2, a2, v3);
    else
      LOWORD(v3) = 0;
  }
  *a1 = v6;
  return (unsigned __int16)v3;
}
