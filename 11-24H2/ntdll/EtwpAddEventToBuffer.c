/*
 * XREFs of EtwpAddEventToBuffer @ 0x1800F3000
 * Callers:
 *     EtwpAddDebugInfoEvents @ 0x18008145C (EtwpAddDebugInfoEvents.c)
 * Callees:
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall EtwpAddEventToBuffer(
        __int64 a1,
        __int16 a2,
        _QWORD *a3,
        const void *a4,
        unsigned int Size,
        unsigned int a6,
        _DWORD *a7)
{
  __int16 v9; // ax
  __int64 v10; // rcx

  *a7 = Size + 16;
  if ( a6 < Size + 16 )
    return 3221225507LL;
  v9 = *(_WORD *)a7;
  v10 = a1 + *(unsigned int *)(a1 + 48);
  *(_WORD *)(v10 + 6) = a2;
  *(_WORD *)(v10 + 4) = v9;
  *(_DWORD *)v10 = -1072627710;
  *(_QWORD *)(v10 + 8) = *a3;
  memmove((void *)(v10 + 16), a4, Size);
  *(_DWORD *)(a1 + 48) += (Size + 23) & 0xFFFFFFF8;
  return 0LL;
}
