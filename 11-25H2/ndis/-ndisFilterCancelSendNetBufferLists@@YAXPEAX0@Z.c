/*
 * XREFs of ?ndisFilterCancelSendNetBufferLists@@YAXPEAX0@Z @ 0x14009AE50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisFilterCancelSendNetBufferLists(void *a1, void *a2)
{
  _QWORD Parameter[5]; // [rsp+30h] [rbp-28h] BYREF

  Parameter[1] = a1;
  Parameter[3] = a2;
  Parameter[0] = 0LL;
  Parameter[2] = 0LL;
  KeExpandKernelStackAndCalloutEx(ndisFilterCancelSendNetBufferListsInternal, Parameter, (unsigned int)Size, 0, 0LL);
}
