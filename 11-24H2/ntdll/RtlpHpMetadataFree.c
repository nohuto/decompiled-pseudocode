/*
 * XREFs of RtlpHpMetadataFree @ 0x180064B08
 * Callers:
 *     RtlpHpHeapDestroy @ 0x1800270BC (RtlpHpHeapDestroy.c)
 *     RtlpFreeHeapMetadata @ 0x1800647B8 (RtlpFreeHeapMetadata.c)
 *     RtlpFlsHeapFree @ 0x180064ABC (RtlpFlsHeapFree.c)
 *     RtlpHpLargeAlloc @ 0x18009A714 (RtlpHpLargeAlloc.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x18009AC38 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpLargeFree @ 0x18009E878 (RtlpHpLargeFree.c)
 *     RtlpHpTagContextAllocateTag @ 0x1800A1D38 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpStackTraceAddStack @ 0x1800DA400 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1800DA5A4 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800F5BB4 (RtlpHpLargeAllocationDestroy.c)
 *     RtlpHpTagRunOnceInit @ 0x180105CB0 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x180149B24 (RtlpHpPerHeapStackTraceCleanup.c)
 *     RtlpHpStackDbFreeRoutine @ 0x180149D50 (RtlpHpStackDbFreeRoutine.c)
 *     RtlpHpStackTraceAllocRemove @ 0x180149F94 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceEtwCallback @ 0x18014A150 (RtlpHpStackTraceEtwCallback.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x180156024 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180059400 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLfhContextFree @ 0x180065110 (RtlpHpLfhContextFree.c)
 *     RtlpHpSegFreeInternal @ 0x1800653A0 (RtlpHpSegFreeInternal.c)
 *     RtlpHpLargeFree @ 0x18009E878 (RtlpHpLargeFree.c)
 *     RtlpLogHeapFreeEvent @ 0x1800A19C4 (RtlpLogHeapFreeEvent.c)
 */

__int64 __fastcall RtlpHpMetadataFree(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v5; // rsi
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // r10
  __int64 v10; // rdx
  char v11; // cl
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  __int64 v14; // r9
  __int64 result; // rax
  unsigned int v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (unsigned __int8)BYTE1(*a2);
  v16 = 0;
  v5 = qword_1801D11A8[2 * (unsigned int)dword_18017E8C8[v3]];
  if ( (_WORD)a1 )
  {
    v6 = 0;
  }
  else
  {
    v7 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((unsigned __int64)(a1 - qword_1801CD918) >> 20));
    if ( !v7 || (v6 = v7 - 1, (_DWORD)v7 == 3) )
    {
      result = RtlpHpLargeFree(v5, a1);
      v2 = 3;
      goto LABEL_10;
    }
  }
  v8 = 512LL;
  if ( v6 != 1 )
    v8 = 320LL;
  v9 = v5 + v8;
  v10 = *(_QWORD *)v9 & a1;
  if ( (RtlpHpHeapGlobals ^ *(_QWORD *)(v10 + 0x10) ^ v10) == v9 )
  {
    v11 = *(_BYTE *)(v9 + 8);
    v12 = v10 + 32 * ((unsigned __int64)(unsigned int)(a1 - v10) >> v11);
    v13 = -32LL * *(unsigned __int8 *)(v12 + 26) + v12;
    v14 = v10 + ((__int64)(v13 - v10) >> 5 << v11);
    if ( *(_BYTE *)(v13 + 24) + (v14 == a1) == 11 )
    {
      result = RtlpHpLfhContextFree(*(_QWORD *)(v9 + 24), v14, a1);
      v2 = 2;
    }
    else
    {
      result = RtlpHpSegFreeInternal(v9, a1, v13, &v16);
      v2 = v16;
    }
  }
  else
  {
    result = RtlpLogHeapFailure(9, *(_QWORD *)(v9 + 56), a1, 0LL, 0LL, 0LL);
  }
LABEL_10:
  if ( *(char *)(v5 + 20) < 0 )
    return RtlpLogHeapFreeEvent(v5, a1, v2);
  return result;
}
