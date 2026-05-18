/*
 * XREFs of sub_180028614 @ 0x180028614
 * Callers:
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 *     sub_18002808C @ 0x18002808C (sub_18002808C.c)
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 *     sub_18002822C @ 0x18002822C (sub_18002822C.c)
 *     sub_180028478 @ 0x180028478 (sub_180028478.c)
 *     sub_180028904 @ 0x180028904 (sub_180028904.c)
 * Callees:
 *     __tlregdtor @ 0x18000CB1C (__tlregdtor.c)
 */

_QWORD *sub_180028614()
{
  __int64 v0; // rdx
  int v1; // eax
  _QWORD *v2; // rbx

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  v1 = *(_DWORD *)(v0 + 304);
  v2 = (_QWORD *)(v0 + 312);
  if ( (v1 & 1) == 0 )
  {
    *(_DWORD *)(v0 + 304) = v1 | 1;
    *v2 = 0LL;
    *(_QWORD *)(v0 + 320) = 0LL;
    *(_QWORD *)(v0 + 328) = 0LL;
    _tlregdtor((__int64)sub_1800E2C40);
  }
  return v2;
}
