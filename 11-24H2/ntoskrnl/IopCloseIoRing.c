/*
 * XREFs of IopCloseIoRing @ 0x140714020
 * Callers:
 *     <none>
 * Callees:
 *     MiUnmapViewOfSection @ 0x140896E14 (MiUnmapViewOfSection.c)
 */

__int64 __fastcall IopCloseIoRing(struct _KPROCESS *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a4 == 1 )
  {
    if ( *(_QWORD *)(a2 + 40) )
    {
      result = MiUnmapViewOfSection(a1);
      *(_QWORD *)(a2 + 40) = 0LL;
    }
  }
  return result;
}
