/*
 * XREFs of CsrCaptureMessageBuffer @ 0x180023800
 * Callers:
 *     <none>
 * Callees:
 *     CsrAllocateMessagePointer @ 0x180024390 (CsrAllocateMessagePointer.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

void *__fastcall CsrCaptureMessageBuffer(__int64 a1, const void *a2, unsigned int a3, void **a4)
{
  size_t v5; // rbx
  void *result; // rax

  v5 = a3;
  if ( !LdrpIsSecureProcess )
  {
    result = (void *)CsrAllocateMessagePointer(a1, a3, a4);
    if ( a2 )
    {
      if ( (_DWORD)v5 )
        return memmove(*a4, a2, v5);
    }
  }
  return result;
}
