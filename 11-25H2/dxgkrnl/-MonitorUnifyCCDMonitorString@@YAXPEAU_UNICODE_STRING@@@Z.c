/*
 * XREFs of ?MonitorUnifyCCDMonitorString@@YAXPEAU_UNICODE_STRING@@@Z @ 0x140268B80
 * Callers:
 *     DpiFdoInitializeAdapterUniqueString @ 0x1403ED95C (DpiFdoInitializeAdapterUniqueString.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1403EFB88 (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MonitorUnifyCCDMonitorString(struct _UNICODE_STRING *a1)
{
  __int64 v1; // rdx
  __int64 i; // r8
  wchar_t *Buffer; // r10

  if ( a1 )
  {
    v1 = 0LL;
    if ( (a1->Length & 0xFFFE) != 0 )
    {
      do
      {
        for ( i = 0LL; (unsigned int)i < 6; i = (unsigned int)(i + 1) )
        {
          Buffer = a1->Buffer;
          if ( Buffer[v1] == asc_14012C9B8[i] )
          {
            Buffer[v1] = 95;
            break;
          }
        }
        v1 = (unsigned int)(v1 + 1);
      }
      while ( (unsigned int)v1 < a1->Length >> 1 );
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4118;
  }
}
