/*
 * XREFs of HalpDmaFlushDriverMdl @ 0x140539DBC
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x140332110 (HalFlushAdapterBuffersEx.c)
 *     HalMapTransferEx @ 0x140332780 (HalMapTransferEx.c)
 * Callees:
 *     KeFlushIoBuffers @ 0x14043D260 (KeFlushIoBuffers.c)
 */

char __fastcall HalpDmaFlushDriverMdl(_QWORD *BugCheckParameter4, char a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rbx
  char result; // al

  if ( BugCheckParameter4 )
  {
    v5 = BugCheckParameter4;
    do
    {
      result = KeFlushIoBuffers((ULONG_PTR)v5, a2, 1, a4);
      v5 = (_QWORD *)*v5;
    }
    while ( v5 );
  }
  return result;
}
