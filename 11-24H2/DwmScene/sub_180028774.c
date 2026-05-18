/*
 * XREFs of sub_180028774 @ 0x180028774
 * Callers:
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 *     sub_1800281EC @ 0x1800281EC (sub_1800281EC.c)
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 *     sub_18002838C @ 0x18002838C (sub_18002838C.c)
 *     sub_1800285D8 @ 0x1800285D8 (sub_1800285D8.c)
 *     sub_180028A64 @ 0x180028A64 (sub_180028A64.c)
 * Callees:
 *     __tlregdtor @ 0x18000CC8C (__tlregdtor.c)
 */

_QWORD *sub_180028774()
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
    _tlregdtor((__int64)sub_1800E2DA0);
  }
  return v2;
}
