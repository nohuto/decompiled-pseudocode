/*
 * XREFs of RtlpHpStackTraceEtwCallback @ 0x18014D350
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpMetadataFree @ 0x18000AB68 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x18004F990 (RtlpHpMetadataAlloc.c)
 *     RtlQueryHeapInformation @ 0x18009A820 (RtlQueryHeapInformation.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

void __fastcall RtlpHpStackTraceEtwCallback(__int64 a1, int a2)
{
  unsigned __int64 v2; // rax
  _DWORD *v3; // rdi
  signed __int32 v4; // ebx
  __int128 v5; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v6[4]; // [rsp+40h] [rbp-30h] BYREF
  int v7; // [rsp+60h] [rbp-10h]

  if ( a2 == 2 )
  {
    v7 = 0;
    HIDWORD(v6[0]) = 0;
    v5 = RtlpHpEnvHandle;
    v2 = RtlpHpMetadataAlloc(0x4010uLL, 0x4010uLL, 0, &v5);
    v3 = (_DWORD *)v2;
    if ( v2 )
    {
      v4 = _InterlockedIncrement(&RtlpHpStackTraceLogInstance);
      memset_thunk_772440563353939046((void *)(v2 + 4), 0, 0x400CuLL);
      *v3 = v4;
      v6[1] = -1LL;
      LODWORD(v6[0]) = 2;
      v6[3] = v3;
      v6[2] = RtlpHpStackTraceEventWriter;
      RtlQueryHeapInformation(0LL, 5, v6, 0x28uLL, 0LL);
      v5 = RtlpHpEnvHandle;
      RtlpHpMetadataFree((unsigned __int64)v3, &v5);
    }
  }
}
