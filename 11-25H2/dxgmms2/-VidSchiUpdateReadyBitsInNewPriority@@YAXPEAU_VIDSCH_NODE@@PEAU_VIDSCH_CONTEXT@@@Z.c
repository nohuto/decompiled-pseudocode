/*
 * XREFs of ?VidSchiUpdateReadyBitsInNewPriority@@YAXPEAU_VIDSCH_NODE@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x140036B60
 * Callers:
 *     VidSchiSetPriorityContext @ 0x1400488DC (VidSchiSetPriorityContext.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiUpdateReadyBitsInNewPriority(struct _VIDSCH_NODE *a1, struct _VIDSCH_CONTEXT *a2)
{
  __int64 v2; // r10
  unsigned int v4; // ecx
  unsigned __int64 v6; // rdx

  v2 = *((_QWORD *)a1 + 3);
  v4 = *((_DWORD *)a2 + 101);
  if ( *((struct _VIDSCH_NODE **)a1 + 2 * v4 + 273) == (struct _VIDSCH_NODE *)((char *)a1 + 16 * v4 + 2184) )
  {
    *((_DWORD *)a1 + 472) |= 1 << v4;
    v6 = *((unsigned __int16 *)a1 + 2);
    if ( !_bittest64(*(const signed __int64 **)(v2 + 552), v6)
      && ((-1 << *((_DWORD *)a2 + 101)) & *((_DWORD *)a1 + 473)) == 0
      && !*((_DWORD *)a1 + 757) )
    {
      RtlSetBitEx(v2 + 544, v6);
    }
  }
}
