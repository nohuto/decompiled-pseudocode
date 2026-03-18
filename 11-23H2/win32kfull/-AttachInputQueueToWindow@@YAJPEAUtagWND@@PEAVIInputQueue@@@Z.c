/*
 * XREFs of ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C0041350
 * Callers:
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x1C0041524 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z.c)
 * Callees:
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C0026BF4 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ?AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z @ 0x1C00412C4 (-AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C00413D4 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ??$CreateWindowProp@VCInputQueueProp@@@CWindowProp@@SAJPEAPEAVCInputQueueProp@@@Z @ 0x1C008DC5C (--$CreateWindowProp@VCInputQueueProp@@@CWindowProp@@SAJPEAPEAVCInputQueueProp@@@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00EDB04 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AttachInputQueueToWindow(struct tagWND *a1, struct IInputQueue *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  CInputQueueProp *v6; // rbx
  int v7; // edi
  struct tagWND *v9; // rdx
  CInputQueueProp *v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CInputQueueProp>(a1, &v10) )
  {
    v6 = v10;
  }
  else
  {
    v7 = CWindowProp::CreateWindowProp<CInputQueueProp>(&v10);
    if ( v7 < 0 )
      return (unsigned int)v7;
    v9 = a1;
    v6 = v10;
    if ( !(unsigned int)CWindowProp::SetProp(v10, v9) )
    {
      (**(void (__fastcall ***)(CInputQueueProp *))v6)(v6);
      return (unsigned int)-1073741790;
    }
  }
  v7 = CInputQueueProp::AttachInputQueue(v6, a2, v4, v5);
  if ( v7 < 0 && !*((_DWORD *)v6 + 8) )
    CWindowProp::RemoveAndDeleteProp(v6);
  return (unsigned int)v7;
}
