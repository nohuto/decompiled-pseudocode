/*
 * XREFs of VidSchReportHwQueue @ 0x14010D300
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003F30C (McTemplateK0ppp_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall VidSchReportHwQueue(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r9
  NTSTATUS result; // eax

  if ( !*(_QWORD *)(a1 + 48) && bTracingEnabled )
  {
    v1 = *(_QWORD *)(a1 + 40);
    v2 = *(_QWORD *)(v1 + 24);
    if ( !v2 || (result = *(_DWORD *)(v1 + 56), (result & 0x40) != 0) )
      v2 = *(_QWORD *)(a1 + 40);
    if ( (byte_140081241 & 8) != 0 )
      return McTemplateK0ppp_EtwWriteTransfer(a1, &EventReportHwQueue, 0LL, v2, 0LL, a1);
  }
  return result;
}
