/*
 * XREFs of ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x140020FC4
 * Callers:
 *     VidSchiSetTransferContextRunningTime @ 0x140018430 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiSwitchContextWithCheck @ 0x1400193A0 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiDecrementContextReference @ 0x140020D30 (VidSchiDecrementContextReference.c)
 *     VidSchiSwitchContext @ 0x140021240 (VidSchiSwitchContext.c)
 * Callees:
 *     McTemplateK0pqIR1_EtwWriteTransfer @ 0x140034D30 (McTemplateK0pqIR1_EtwWriteTransfer.c)
 */

void __fastcall VidSchiFlushGpuWorkEntries(struct _VIDSCH_CONTEXT *a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // r9

  v4 = *((_QWORD *)a1 + 124);
  if ( v4 )
  {
    v5 = *((_DWORD *)a1 + 246);
    if ( v5 )
    {
      if ( (byte_140081242 & 8) != 0 )
      {
        v6 = *((_QWORD *)a1 + 7);
        if ( !v6 || (*((_DWORD *)a1 + 28) & 0x40) != 0 )
          LODWORD(v6) = (_DWORD)a1;
        McTemplateK0pqIR1_EtwWriteTransfer(v4, v5, a3, v6, v5, v4);
      }
      *((_DWORD *)a1 + 246) = 0;
    }
  }
}
