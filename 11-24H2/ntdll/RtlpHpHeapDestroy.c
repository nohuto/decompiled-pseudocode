/*
 * XREFs of RtlpHpHeapDestroy @ 0x1800270BC
 * Callers:
 *     RtlpCreateHeap @ 0x1800248B0 (RtlpCreateHeap.c)
 *     RtlpHpHeapCreate @ 0x180026120 (RtlpHpHeapCreate.c)
 *     RtlDestroyHeap @ 0x1800280C0 (RtlDestroyHeap.c)
 * Callees:
 *     RtlpHpLfhContextCleanup @ 0x180026920 (RtlpHpLfhContextCleanup.c)
 *     RtlpHpSegContextCleanup @ 0x180026F44 (RtlpHpSegContextCleanup.c)
 *     RtlpHeapLogRangeDestroy @ 0x180027F40 (RtlpHeapLogRangeDestroy.c)
 *     RtlpHpMetadataFree @ 0x180064B08 (RtlpHpMetadataFree.c)
 *     RtlpHpVsContextCleanup @ 0x180064C78 (RtlpHpVsContextCleanup.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpRegisterEnvironment @ 0x18009B3C4 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpVaMgrCtxFree @ 0x18009D290 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpTlLogVAChange @ 0x18009D720 (RtlpHpTlLogVAChange.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800F5BB4 (RtlpHpLargeAllocationDestroy.c)
 *     RtlpLogHeapDestroyEvent @ 0x18010D118 (RtlpLogHeapDestroyEvent.c)
 */

int __fastcall RtlpHpHeapDestroy(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx
  bool v2; // zf
  unsigned __int64 v4; // rcx
  int v5; // esi
  char v6; // al
  __int128 v7; // xmm0
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  struct _PEB *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rdi
  _QWORD *v16; // rdx
  __int128 v18; // [rsp+20h] [rbp-20h] BYREF
  __int128 v19; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 v21; // [rsp+80h] [rbp+40h] BYREF

  v20 = a1;
  v21 = 0LL;
  v1 = a1 + 72;
  v2 = (*(_BYTE *)(a1 + 80) & 1) == 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v2 && v4 )
    v4 ^= v1;
  v5 = *(_BYTE *)(v1 + 8) & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v4 )
        {
          v16 = (_QWORD *)v4;
          if ( v5 )
            v4 ^= *(_QWORD *)v4;
          else
            v4 = *(_QWORD *)v4;
          *v16 = 0LL;
        }
        v14 = (unsigned __int64 *)(v4 + 8);
        if ( !*(_QWORD *)(v4 + 8) )
          break;
        if ( v5 )
          v4 ^= *v14;
        else
          v4 = *v14;
        *v14 = 0LL;
      }
      v15 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v5 && v15 )
        v15 ^= v4;
      RtlpHpLargeAllocationDestroy(v4, a1);
      if ( !v15 )
        break;
      v4 = v15;
    }
  }
  v6 = *(_BYTE *)(v1 + 8);
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  if ( (v6 & 1) != 0 )
    *(_BYTE *)(v1 + 8) = 1;
  RtlpHpVsContextCleanup(v20 + 704);
  RtlpHpLfhContextCleanup(v20 + 832);
  RtlpHpSegContextCleanup(v20 + 320);
  RtlpHpSegContextCleanup(v20 + 512);
  v7 = *(_OWORD *)v20;
  v8 = *(_QWORD *)(v20 + 264) - v20;
  v21 = v8;
  v2 = (*(_BYTE *)(v20 + 30) & 1) == 0;
  v19 = v7;
  if ( v2 )
  {
    v9 = v20 + v8 - ((v20 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL);
    v20 = (v20 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v21 = v9;
    if ( v9 )
    {
      RtlpHpVaMgrCtxFree(&unk_1801CD968, &v20, &v21);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogVAChange(0x8000LL, v21, v20, 0LL);
    }
  }
  else
  {
    v18 = *(_OWORD *)v20;
    RtlpHpMetadataFree(v20, &v18);
  }
  RtlpHpRegisterEnvironment(&v19, 0LL);
  if ( RtlGetCurrentServiceSessionId() )
    v10 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v10 = 2147353480LL;
  if ( *(_BYTE *)v10 )
    RtlpHeapLogRangeDestroy(v20);
  LODWORD(v11) = RtlGetCurrentServiceSessionId();
  v12 = 2147353472LL;
  if ( (_DWORD)v11 )
  {
    v11 = NtCurrentPeb();
    v13 = (__int64)v11->SharedData + 550;
  }
  else
  {
    v13 = 2147353472LL;
  }
  if ( *(_BYTE *)v13 )
  {
    v11 = NtCurrentPeb();
    if ( (v11->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v12 = (__int64)NtCurrentPeb()->SharedData + 550;
      LODWORD(v11) = RtlpLogHeapDestroyEvent(v20, *(unsigned __int8 *)v12);
    }
  }
  return (int)v11;
}
