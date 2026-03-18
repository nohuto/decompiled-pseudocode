/*
 * XREFs of ?DetachInputQueueFromWindow@@YAXPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1401F1EB8
 * Callers:
 *     UserDetachQueueFromInputWindow @ 0x1400A4408 (UserDetachQueueFromInputWindow.c)
 * Callees:
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1400315C4 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x140065490 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ?DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z @ 0x1401F1F20 (-DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z.c)
 */

void __fastcall DetachInputQueueFromWindow(struct tagWND *a1, struct IInputQueue *a2)
{
  struct IInputQueue *v4; // rdx
  CInputQueueProp *v5; // rdi
  CInputQueueProp *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)a1 + 95) & 0x40000000) != 0 )
  {
    v6 = 0LL;
    CWindowProp::GetProp<CInputQueueProp>((__int64)a1, (__int64 *)&v6);
    v4 = a2;
    v5 = v6;
    CInputQueueProp::DetachInputQueue(v6, v4);
    if ( !*((_DWORD *)v5 + 8) )
    {
      CWindowProp::RemoveAndDeleteProp(v5);
      *((_DWORD *)a1 + 95) &= ~0x40000000u;
    }
  }
}
