/*
 * XREFs of SmmIoMmuUnmapStagingMdl @ 0x14003A8A8
 * Callers:
 *     SmmIommuUnmapReferenced @ 0x14003A854 (SmmIommuUnmapReferenced.c)
 *     SmmIommuMapStagingMdl @ 0x14003A994 (SmmIommuMapStagingMdl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     SmmUnmapIommu @ 0x14003A748 (SmmUnmapIommu.c)
 *     SmmIoMmuReferenceMdl @ 0x14003AA6C (SmmIoMmuReferenceMdl.c)
 */

__int64 __fastcall SmmIoMmuUnmapStagingMdl(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // edx
  __int64 v5; // rcx
  unsigned int v6; // edx
  __int64 result; // rax

  do
  {
    if ( (int)SmmIoMmuReferenceMdl(a1 + 64, a2, 0LL) < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 759;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"(((NTSTATUS)(Status)) >= 0)", 759LL, 0LL, 0LL, 0LL, 0LL);
    }
    v4 = a2[7];
    if ( v4 )
    {
      v5 = *(_QWORD *)(a1 + 176);
      v6 = v4 << 12;
      *(_DWORD *)(v5 + 40) = v6;
      *(_QWORD *)v5 = 0LL;
      *(_WORD *)(v5 + 10) = 0;
      *(_QWORD *)(v5 + 32) = 0LL;
      *(_DWORD *)(v5 + 44) = 0;
      *(_WORD *)(v5 + 8) = 8 * ((v6 >> 12) + 6);
      SmmUnmapIommu(a1, 0LL, *(_QWORD *)(a1 + 176));
    }
    result = a2[4];
  }
  while ( a2[6] != (_DWORD)result );
  return result;
}
