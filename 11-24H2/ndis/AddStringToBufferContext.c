/*
 * XREFs of AddStringToBufferContext @ 0x1400CEDF4
 * Callers:
 *     AddKnobNameToBuffer @ 0x140148D74 (AddKnobNameToBuffer.c)
 *     ?Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z @ 0x140149100 (-Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z.c)
 * Callees:
 *     memmove @ 0x1400E7200 (memmove.c)
 */

void *__fastcall AddStringToBufferContext(__int64 a1, const void *a2, unsigned int a3)
{
  size_t v5; // rbx
  void *result; // rax

  *(_DWORD *)(a1 + 4) += a3;
  if ( *(_DWORD *)(a1 + 16) >= a3 )
  {
    v5 = 2LL * a3;
    result = memmove(*(void **)(a1 + 8), a2, v5);
    *(_QWORD *)(a1 + 8) += v5;
    *(_DWORD *)(a1 + 16) -= a3;
  }
  return result;
}
