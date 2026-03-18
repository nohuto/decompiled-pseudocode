/*
 * XREFs of VidSchReportHwContext @ 0x14010EC70
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pdd_EtwWriteTransfer @ 0x1400463F4 (McTemplateK0pdd_EtwWriteTransfer.c)
 *     McTemplateK0pqqqttt_EtwWriteTransfer @ 0x1400524EC (McTemplateK0pqqqttt_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchReportHwContext(__int64 a1)
{
  __int64 v3; // r9
  unsigned __int8 *v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+28h] [rbp-30h]

  if ( (byte_140081241 & 1) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    if ( !v3 || (*(_DWORD *)(a1 + 56) & 0x40) != 0 )
      v3 = a1;
    v4 = *(unsigned __int8 **)(*(_QWORD *)(a1 + 8) + 32LL);
    McTemplateK0pqqqttt_EtwWriteTransfer(
      v4[7062],
      *(unsigned int *)(a1 + 100),
      v4[7064],
      v3,
      *(_DWORD *)(a1 + 136),
      *(_DWORD *)(a1 + 96),
      *(_DWORD *)(a1 + 100),
      v4[7061],
      v4[7064],
      v4[7062]);
    if ( (byte_140081241 & 1) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 24);
      if ( !v7 || (*(_DWORD *)(a1 + 56) & 0x40) != 0 )
        v7 = a1;
      LODWORD(v9) = *(_DWORD *)(a1 + 72);
      LODWORD(v8) = v9;
      McTemplateK0pdd_EtwWriteTransfer((unsigned int)v9, v5, v6, v7, v8, v9);
    }
  }
  return 0LL;
}
