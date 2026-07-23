/*
 * XREFs of IopIoRingGetBuffer @ 0x140A96228
 * Callers:
 *     IopIoRingDispatchWrite @ 0x140714A08 (IopIoRingDispatchWrite.c)
 *     IopIoRingDispatchRead @ 0x140A912F8 (IopIoRingDispatchRead.c)
 * Callees:
 *     IopExceptionFilter @ 0x140593308 (IopExceptionFilter.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     IopMcGetBuffer @ 0x140A94B58 (IopMcGetBuffer.c)
 */

__int64 __fastcall IopIoRingGetBuffer(
        __int64 a1,
        volatile void *a2,
        char a3,
        unsigned int a4,
        char a5,
        char a6,
        void **a7,
        struct _MDL **a8)
{
  ULONG_PTR v9; // rcx

  *a7 = 0LL;
  *a8 = 0LL;
  if ( a3 )
  {
    if ( (unsigned int)a2 >= *(_DWORD *)(a1 + 176) )
    {
      return 3221226705LL;
    }
    else
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL * (unsigned int)a2);
      if ( v9 )
        return IopMcGetBuffer(v9, HIDWORD(a2), a4, a7, a8);
      else
        return 3221225704LL;
    }
  }
  else
  {
    if ( a5 && a6 )
      ProbeForWrite(a2, a4, 1u);
    *a7 = (void *)a2;
    return 0LL;
  }
}
