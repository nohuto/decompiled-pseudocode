/*
 * XREFs of NtGdiDdDDIGetPresentQueueEvent @ 0x1403257D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtGdiDdDDIGetPresentQueueEvent(__int64 a1, void *a2, __int64 a3)
{
  void *v3; // rdi
  unsigned int v4; // esi
  int IsCurrentProcessDwm; // eax
  signed int PresentQueueEvent; // ebx
  HANDLE Src; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  v4 = a1;
  Src = 0LL;
  IsCurrentProcessDwm = UserUnsafeIsCurrentProcessDwm(a1, a2, a3);
  PresentQueueEvent = IsCurrentProcessDwm == 0 ? 0xC0000022 : 0;
  if ( IsCurrentProcessDwm )
    PresentQueueEvent = GreSfmGetPresentQueueEvent(v4, &Src);
  if ( PresentQueueEvent < 0 )
  {
    if ( Src )
      ObCloseHandle(Src, 1);
  }
  else
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v3, &Src, 8uLL);
  }
  return (unsigned int)PresentQueueEvent;
}
