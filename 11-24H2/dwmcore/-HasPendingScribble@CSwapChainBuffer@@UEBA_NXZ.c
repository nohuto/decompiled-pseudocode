/*
 * XREFs of ?HasPendingScribble@CSwapChainBuffer@@UEBA_NXZ @ 0x1801E1C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSwapChainBuffer::HasPendingScribble(CSwapChainBuffer *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 14);
  if ( v1 )
    LOBYTE(v1) = *(_BYTE *)(v1 + 256);
  return v1;
}
