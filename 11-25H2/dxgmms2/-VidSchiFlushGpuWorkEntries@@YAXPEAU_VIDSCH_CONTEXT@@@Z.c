/*
 * XREFs of ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x14002ABD4
 * Callers:
 *     VidSchiSetTransferContextRunningTime @ 0x140023890 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiSwitchContextWithCheck @ 0x140024800 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiSwitchContext @ 0x14002A380 (VidSchiSwitchContext.c)
 *     VidSchiDecrementContextReference @ 0x14002A940 (VidSchiDecrementContextReference.c)
 * Callees:
 *     McTemplateK0pqIR1_EtwWriteTransfer @ 0x140028FE0 (McTemplateK0pqIR1_EtwWriteTransfer.c)
 */

void __fastcall VidSchiFlushGpuWorkEntries(struct _VIDSCH_CONTEXT *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  v4 = *((_QWORD *)a1 + 124);
  if ( v4 )
  {
    v5 = *((unsigned int *)a1 + 246);
    if ( (_DWORD)v5 )
    {
      if ( (byte_140081242 & 8) != 0 )
        McTemplateK0pqIR1_EtwWriteTransfer(v4, v5, a3);
      *((_DWORD *)a1 + 246) = 0;
    }
  }
}
