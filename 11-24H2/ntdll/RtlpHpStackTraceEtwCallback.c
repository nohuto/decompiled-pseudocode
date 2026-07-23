/*
 * XREFs of RtlpHpStackTraceEtwCallback @ 0x18014A150
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryHeapInformation @ 0x18002AB10 (RtlQueryHeapInformation.c)
 *     RtlpHpMetadataAlloc @ 0x18003D230 (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataFree @ 0x180064B08 (RtlpHpMetadataFree.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

void __fastcall RtlpHpStackTraceEtwCallback(LPCGUID a1, int a2)
{
  __int64 v2; // rax
  _DWORD *v3; // rdi
  signed __int32 v4; // ebx
  __int128 v5; // [rsp+30h] [rbp-40h] BYREF
  _DWORD HeapInformation[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v7; // [rsp+48h] [rbp-28h]
  __int64 (__fastcall *v8)(void *, size_t); // [rsp+50h] [rbp-20h]
  _DWORD *v9; // [rsp+58h] [rbp-18h]
  int v10; // [rsp+60h] [rbp-10h]

  if ( a2 == 2 )
  {
    v10 = 0;
    HeapInformation[1] = 0;
    v5 = RtlpHpEnvHandle;
    v2 = RtlpHpMetadataAlloc(0x4010uLL, 0x4010uLL, 0, &v5);
    v3 = (_DWORD *)v2;
    if ( v2 )
    {
      v4 = _InterlockedIncrement(&RtlpHpStackTraceLogInstance);
      memset_thunk_772440563353939046((void *)(v2 + 4), 0, 0x400CuLL);
      *v3 = v4;
      v7 = -1LL;
      HeapInformation[0] = 2;
      v9 = v3;
      v8 = RtlpHpStackTraceEventWriter;
      RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)5, HeapInformation, 0x28uLL, 0LL);
      v5 = RtlpHpEnvHandle;
      RtlpHpMetadataFree((__int64)v3, &v5);
    }
  }
}
