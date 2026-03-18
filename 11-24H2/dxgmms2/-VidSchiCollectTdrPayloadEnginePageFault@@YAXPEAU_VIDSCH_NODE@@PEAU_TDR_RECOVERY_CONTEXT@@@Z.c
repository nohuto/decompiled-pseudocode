/*
 * XREFs of ?VidSchiCollectTdrPayloadEnginePageFault@@YAXPEAU_VIDSCH_NODE@@PEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1400519A8
 * Callers:
 *     VidSchiResetEngine @ 0x140047318 (VidSchiResetEngine.c)
 *     VidSchiResetHwEngine @ 0x140052878 (VidSchiResetHwEngine.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiCollectTdrPayloadEnginePageFault(struct _VIDSCH_NODE *a1, struct _TDR_RECOVERY_CONTEXT *a2)
{
  struct _VIDSCH_NODE *v2; // r11
  __int64 v3; // r9
  char *v4; // r8
  char v5; // al
  char *v6; // rax

  *((_QWORD *)a2 + 351) = *((_QWORD *)a1 + 272);
  v2 = (struct _TDR_RECOVERY_CONTEXT *)((char *)a2 + 2821);
  if ( a1 == (struct _VIDSCH_NODE *)-2156LL )
    goto LABEL_9;
  v3 = 15LL;
  v4 = (char *)a2 + 2821;
  do
  {
    if ( v3 == -2147483631 )
      break;
    v5 = v4[(struct _VIDSCH_NODE *)((char *)a1 + 2156) - v2];
    if ( !v5 )
      break;
    *v4++ = v5;
    --v3;
  }
  while ( v3 );
  v6 = v4 - 1;
  if ( v3 )
    v6 = v4;
  *v6 = 0;
  if ( !v3 )
LABEL_9:
    *(_BYTE *)v2 = 0;
  *((_DWORD *)a2 + 709) = *((_DWORD *)a1 + 543);
}
