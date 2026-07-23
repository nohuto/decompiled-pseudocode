/*
 * XREFs of CsrpClientConnectToServer @ 0x1800357D0
 * Callers:
 *     CsrClientConnectToServer @ 0x1800355E0 (CsrClientConnectToServer.c)
 * Callees:
 *     CsrAllocateCaptureBuffer @ 0x180035B10 (CsrAllocateCaptureBuffer.c)
 *     CsrFreeCaptureBuffer @ 0x180035BE0 (CsrFreeCaptureBuffer.c)
 *     CsrClientCallServer @ 0x180035C10 (CsrClientCallServer.c)
 *     CsrAllocateMessagePointer @ 0x180035DE0 (CsrAllocateMessagePointer.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall CsrpClientConnectToServer(int a1, void *a2, unsigned int a3)
{
  __int64 CaptureBuffer; // rax
  void *v7; // rbx
  unsigned int v8; // ebp
  int v9; // edi
  _PORT_MESSAGE SendMessageA; // [rsp+20h] [rbp-3C8h] BYREF
  int v12; // [rsp+60h] [rbp-388h]
  void *Src; // [rsp+68h] [rbp-380h] BYREF
  unsigned int v14; // [rsp+70h] [rbp-378h]

  memset_thunk_772440563353939046(&SendMessageA, 0, 0x3B8uLL);
  v12 = a1;
  v14 = a3;
  CaptureBuffer = CsrAllocateCaptureBuffer(1LL, a3);
  v7 = (void *)CaptureBuffer;
  if ( !CaptureBuffer )
    return 3221225495LL;
  CsrAllocateMessagePointer(CaptureBuffer, a3, &Src);
  v8 = a3;
  memmove(Src, a2, a3);
  v9 = CsrClientCallServer(&SendMessageA);
  if ( v9 >= 0 )
    memmove(a2, Src, v8);
  CsrFreeCaptureBuffer(v7);
  return (unsigned int)v9;
}
