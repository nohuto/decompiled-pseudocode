/*
 * XREFs of ?DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z @ 0x1401F1F20
 * Callers:
 *     ?DetachInputQueueFromWindow@@YAXPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1401F1EB8 (-DetachInputQueueFromWindow@@YAXPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall CInputQueueProp::DetachInputQueue(CInputQueueProp *this, struct IInputQueue *a2)
{
  unsigned int v3; // ecx
  __int64 i; // r9
  __int64 v5; // rcx

  v3 = *((_DWORD *)this + 8);
  for ( i = 0LL; (unsigned int)i < v3; i = (unsigned int)(i + 1) )
  {
    if ( a2 == *(struct IInputQueue **)(*((_QWORD *)this + 3) + 8 * i) )
    {
      for ( *((_DWORD *)this + 8) = v3 - 1;
            (unsigned int)i < *((_DWORD *)this + 8);
            *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v5) = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * (unsigned int)i) )
      {
        v5 = (unsigned int)i;
        LODWORD(i) = i + 1;
      }
      break;
    }
  }
  (*(void (__fastcall **)(struct IInputQueue *))(*(_QWORD *)a2 + 8LL))(a2);
}
