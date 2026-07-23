/*
 * XREFs of CsrAllocateMessagePointer @ 0x180024390
 * Callers:
 *     CsrCaptureMessageBuffer @ 0x180023800 (CsrCaptureMessageBuffer.c)
 *     CsrpClientConnectToServer @ 0x180023D80 (CsrpClientConnectToServer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CsrAllocateMessagePointer(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 result; // rax

  if ( !a2 )
  {
    *a3 = 0LL;
    a3 = 0LL;
    goto LABEL_4;
  }
  *a3 = *(_QWORD *)(a1 + 24);
  if ( a2 < 0x7FFFFFFF )
  {
    a2 = (a2 + 3) & 0xFFFFFFFC;
    *(_QWORD *)(a1 + 24) += a2;
LABEL_4:
    *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 16) + 32) = a3;
    result = a2;
    ++*(_DWORD *)(a1 + 16);
    return result;
  }
  return 0LL;
}
