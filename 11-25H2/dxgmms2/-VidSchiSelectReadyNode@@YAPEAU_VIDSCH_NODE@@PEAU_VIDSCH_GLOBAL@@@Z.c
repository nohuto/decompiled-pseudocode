/*
 * XREFs of ?VidSchiSelectReadyNode@@YAPEAU_VIDSCH_NODE@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x140022600
 * Callers:
 *     VidSchiSelectContext @ 0x140020E50 (VidSchiSelectContext.c)
 *     VidSchiScheduleCommandToRun @ 0x140023BF0 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     <none>
 */

struct _VIDSCH_NODE *__fastcall VidSchiSelectReadyNode(struct _VIDSCH_GLOBAL *a1)
{
  _QWORD *v1; // rdi
  __int64 SetBits; // rax
  unsigned int v4; // edx
  struct _VIDSCH_NODE **v5; // rax
  struct _VIDSCH_NODE *result; // rax

  v1 = (_QWORD *)((char *)a1 + 592);
  RtlCopyBitMapEx((char *)a1 + 496, (char *)a1 + 592, 0LL);
  RtlIntersectBitMapsEx(v1, (char *)a1 + 544);
  if ( (unsigned __int8)RtlAreBitsClearEx(v1, 0LL, *v1) )
    RtlCopyBitMapEx((char *)a1 + 496, v1, 0LL);
  SetBits = RtlFindSetBitsEx(v1, 1LL, (unsigned int)(*((_DWORD *)a1 + 192) + 1));
  v4 = SetBits;
  if ( SetBits == -1 )
    return 0LL;
  v5 = (struct _VIDSCH_NODE **)*((_QWORD *)a1 + 86);
  if ( v4 < *((_DWORD *)a1 + 190) )
    v5 += v4;
  result = *v5;
  *((_DWORD *)a1 + 192) = v4;
  return result;
}
