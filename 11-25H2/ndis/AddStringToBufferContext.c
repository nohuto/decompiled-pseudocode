/*
 * XREFs of AddStringToBufferContext @ 0x1400D6434
 * Callers:
 *     AddKnobNameToBuffer @ 0x140153A44 (AddKnobNameToBuffer.c)
 *     ?Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z @ 0x140153DD0 (-Ioctl@KnobNamespace@@SAJ_NKKKPEAX1PEAK@Z.c)
 * Callees:
 *     memmove @ 0x1400EE080 (memmove.c)
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
