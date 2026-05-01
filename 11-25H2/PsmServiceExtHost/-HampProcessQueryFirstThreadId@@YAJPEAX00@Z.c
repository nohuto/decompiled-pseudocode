/*
 * XREFs of ?HampProcessQueryFirstThreadId@@YAJPEAX00@Z @ 0x18007E3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpSystemGetThreadId@@YAKPEAX@Z @ 0x18006A404 (-RmpSystemGetThreadId@@YAKPEAX@Z.c)
 */

__int64 __fastcall HampProcessQueryFirstThreadId(void *a1, void *a2, _DWORD *a3)
{
  *a3 = RmpSystemGetThreadId(a2);
  return 3221226614LL;
}
