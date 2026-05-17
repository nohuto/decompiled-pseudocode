/*
 * XREFs of RtlpHpHeapDestroy @ 0x1800B93D0
 * Callers:
 *     RtlpHpHeapCreate @ 0x1800351B4 (RtlpHpHeapCreate.c)
 *     RtlpCreateHeap @ 0x180036390 (RtlpCreateHeap.c)
 *     RtlDestroyHeap @ 0x1800B8900 (RtlDestroyHeap.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x18000AB68 (RtlpHpMetadataFree.c)
 *     RtlpHpVsContextCleanup @ 0x18000ACD8 (RtlpHpVsContextCleanup.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpLogHeapDestroyEvent @ 0x1800B7B0C (RtlpLogHeapDestroyEvent.c)
 *     RtlpHpLfhContextCleanup @ 0x1800B8168 (RtlpHpLfhContextCleanup.c)
 *     RtlpHeapLogRangeDestroy @ 0x1800B9128 (RtlpHeapLogRangeDestroy.c)
 *     RtlpHpSegContextCleanup @ 0x1800B9644 (RtlpHpSegContextCleanup.c)
 *     RtlpHpRegisterEnvironment @ 0x1800B9BB8 (RtlpHpRegisterEnvironment.c)
 *     RtlpHpVaMgrCtxFree @ 0x1800BBA80 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpTlLogVAChange @ 0x1800BBF10 (RtlpHpTlLogVAChange.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800BD714 (RtlpHpLargeAllocationDestroy.c)
 */

unsigned int *__fastcall RtlpHpHeapDestroy(unsigned __int64 a1)
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
  unsigned int *result; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // rdi
  _QWORD *v16; // rdx
  __int128 v17; // [rsp+20h] [rbp-20h] BYREF
  __int128 v18; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v19; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int64 v20; // [rsp+80h] [rbp+40h] BYREF

  v19 = a1;
  v20 = 0LL;
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
  RtlpHpVsContextCleanup((_WORD *)(v19 + 704));
  RtlpHpLfhContextCleanup(v19 + 832);
  RtlpHpSegContextCleanup(v19 + 320);
  RtlpHpSegContextCleanup(v19 + 512);
  v7 = *(_OWORD *)v19;
  v8 = *(_QWORD *)(v19 + 264) - v19;
  v20 = v8;
  v2 = (*(_BYTE *)(v19 + 30) & 1) == 0;
  v18 = v7;
  if ( v2 )
  {
    v9 = v19 + v8 - ((v19 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL);
    v19 = (v19 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v20 = v9;
    if ( v9 )
    {
      RtlpHpVaMgrCtxFree(&unk_1801D09C8, &v19, &v20);
      if ( (RtlpHpHeapFeatures & 8) != 0 )
        RtlpHpTlLogVAChange(0x8000LL, v20, v19, 0LL);
    }
  }
  else
  {
    v17 = *(_OWORD *)v19;
    RtlpHpMetadataFree(v19, &v17);
  }
  RtlpHpRegisterEnvironment(&v18, 0LL);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v10 = (__int64)NtCurrentPeb()->SharedData + 558;
  else
    v10 = 2147353480LL;
  if ( *(_BYTE *)v10 )
    RtlpHeapLogRangeDestroy(v19);
  result = RtlGetCurrentServiceSessionId();
  v12 = 2147353472LL;
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v13 = *((_QWORD *)result + 18) + 550LL;
  }
  else
  {
    v13 = 2147353472LL;
  }
  if ( *(_BYTE *)v13 )
  {
    result = (unsigned int *)NtCurrentPeb();
    if ( (result[222] & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v12 = (__int64)NtCurrentPeb()->SharedData + 550;
      return (unsigned int *)RtlpLogHeapDestroyEvent(v19, *(unsigned __int8 *)v12);
    }
  }
  return result;
}
