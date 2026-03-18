/*
 * XREFs of VidSchReportContext @ 0x1401062F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0pdd_EtwWriteTransfer @ 0x140044634 (McTemplateK0pdd_EtwWriteTransfer.c)
 *     McTemplateK0pqqtttt_EtwWriteTransfer @ 0x140049930 (McTemplateK0pqqtttt_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchReportContext(__int64 a1)
{
  __int64 v2; // r9
  int v3; // edi
  unsigned __int8 *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+28h] [rbp-30h]

  if ( a1 )
  {
    if ( (byte_140081241 & 1) != 0 )
    {
      v2 = *(_QWORD *)(a1 + 56);
      v3 = *(_DWORD *)(a1 + 400);
      v4 = *(unsigned __int8 **)(*(_QWORD *)(a1 + 104) + 32LL);
      if ( !v2 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
        v2 = a1;
      McTemplateK0pqqtttt_EtwWriteTransfer(
        *(unsigned int *)(a1 + 404),
        v4[7062],
        v4[7064],
        v2,
        v3,
        *(_DWORD *)(a1 + 404),
        v4[7061],
        v4[7063],
        v4[7064],
        v4[7062]);
      if ( (byte_140081241 & 1) != 0 )
      {
        v9 = *(_QWORD *)(a1 + 56);
        if ( !v9 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
          v9 = a1;
        LODWORD(v11) = *(_DWORD *)(a1 + 408);
        LODWORD(v10) = v11;
        McTemplateK0pdd_EtwWriteTransfer((unsigned int)v11, v5, v6, v9, v10, v11);
      }
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    WdLogGlobalForLineNumber = 5986;
    DxgkLogInternalTriageEvent(v8, 0x40000LL);
    return 3221225485LL;
  }
}
