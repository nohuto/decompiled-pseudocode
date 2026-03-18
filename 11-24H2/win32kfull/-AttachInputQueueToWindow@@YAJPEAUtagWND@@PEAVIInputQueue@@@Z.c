/*
 * XREFs of ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x14008ACA8
 * Callers:
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x14008AE58 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z.c)
 * Callees:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1400312D0 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1400315C4 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x140065490 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ??$CreateWindowProp@VCInputQueueProp@@@CWindowProp@@SAJPEAPEAVCInputQueueProp@@@Z @ 0x14008A444 (--$CreateWindowProp@VCInputQueueProp@@@CWindowProp@@SAJPEAPEAVCInputQueueProp@@@Z.c)
 *     ?AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z @ 0x14008A72C (-AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AttachInputQueueToWindow(struct tagWND *a1, struct IInputQueue *a2)
{
  CInputQueueProp *v4; // rbx
  int Window; // esi
  CInputQueueProp *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( (*((_DWORD *)a1 + 95) & 0x40000000) != 0 )
  {
    CWindowProp::GetProp<CInputQueueProp>((__int64)a1, (__int64 *)&v7);
    v4 = v7;
  }
  else
  {
    Window = CWindowProp::CreateWindowProp<CInputQueueProp>((__int64 *)&v7);
    if ( Window < 0 )
      return (unsigned int)Window;
    v4 = v7;
    if ( !(unsigned int)CWindowProp::SetProp(v7, (unsigned __int64)a1) )
    {
      (**(void (__fastcall ***)(CInputQueueProp *))v4)(v4);
      return (unsigned int)-1073741790;
    }
    *((_DWORD *)a1 + 95) |= 0x40000000u;
  }
  Window = CInputQueueProp::AttachInputQueue(v4, a2);
  if ( Window < 0 && !*((_DWORD *)v4 + 8) )
  {
    CWindowProp::RemoveAndDeleteProp(v4);
    *((_DWORD *)a1 + 95) &= ~0x40000000u;
  }
  return (unsigned int)Window;
}
