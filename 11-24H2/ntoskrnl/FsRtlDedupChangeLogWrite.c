/*
 * XREFs of FsRtlDedupChangeLogWrite @ 0x14070A5E0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0xxxqq_EtwWriteTransfer @ 0x14057EF3C (McTemplateK0xxxqq_EtwWriteTransfer.c)
 */

__int64 __fastcall FsRtlDedupChangeLogWrite(_DWORD *a1, __int64 a2, int a3, _QWORD *a4, const GUID *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  if ( !*a1 && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    __debugbreak();
  if ( (Microsoft_Windows_Dedup_ChangeEnableBits & 2) != 0 )
    return (unsigned int)McTemplateK0xxxqq_EtwWriteTransfer(
                           MS_Dedup_Change_Provider_Context,
                           (const EVENT_DESCRIPTOR *)TieredStorage_HeatRead,
                           a5,
                           *a4,
                           a4[1],
                           a2,
                           a3,
                           *a1);
  return v5;
}
