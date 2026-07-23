/*
 * XREFs of ViPtLogPoolTraceWrapper @ 0x140B84104
 * Callers:
 *     VfPtMiscPoolNotification @ 0x1403FA750 (VfPtMiscPoolNotification.c)
 *     VerifierExAllocatePool @ 0x140B93070 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePool2 @ 0x140B93190 (VerifierExAllocatePool2.c)
 *     VerifierExAllocatePoolWithTag @ 0x140B935C0 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x140B936E0 (VerifierExAllocatePoolWithTagPriority.c)
 *     VfHandlePoolAlloc @ 0x140BAAAA0 (VfHandlePoolAlloc.c)
 *     VfPtFreePoolNotification @ 0x140BAB6EC (VfPtFreePoolNotification.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ViPtProcessApt @ 0x140B8EAC8 (ViPtProcessApt.c)
 *     ViPtCaptureStackTrace @ 0x140BA9324 (ViPtCaptureStackTrace.c)
 *     ViPtLogPoolTrace @ 0x140BA9474 (ViPtLogPoolTrace.c)
 */

struct _KTHREAD *__fastcall ViPtLogPoolTraceWrapper(__int64 a1, int a2, __int64 a3, char a4)
{
  struct _KTHREAD *result; // rax
  _QWORD Parameter[53]; // [rsp+20h] [rbp-1C8h] BYREF
  int v10; // [rsp+1CCh] [rbp-1Ch]
  int v11; // [rsp+1D0h] [rbp-18h]
  char v12; // [rsp+1D4h] [rbp-14h]

  result = (struct _KTHREAD *)memset_0(Parameter, 0, 0x1B8uLL);
  if ( a1 && ((VfOptionFlags & 0x1000) != 0 || VfPoolTraces) && a2 != 1850304854 )
  {
    result = (struct _KTHREAD *)ViPtCaptureStackTrace(Parameter);
    if ( v10 )
    {
      v11 = a2;
      Parameter[0] = a1;
      v12 = a4 & 1;
      Parameter[1] = a3;
      result = KeGetCurrentThread();
      Parameter[2] = result;
      if ( (VfOptionFlags & 0x1000) != 0 )
        result = (struct _KTHREAD *)ViPtProcessApt(Parameter);
      if ( (a4 & 2) == 0 )
        return (struct _KTHREAD *)ViPtLogPoolTrace(Parameter);
    }
  }
  return result;
}
