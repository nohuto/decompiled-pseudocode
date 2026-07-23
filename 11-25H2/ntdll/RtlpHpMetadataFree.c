/*
 * XREFs of RtlpHpMetadataFree @ 0x18000AB68
 * Callers:
 *     RtlpHpLargeFree @ 0x180009DDC (RtlpHpLargeFree.c)
 *     RtlpFreeHeapMetadata @ 0x18000A864 (RtlpFreeHeapMetadata.c)
 *     RtlpFlsHeapFree @ 0x18000AB1C (RtlpFlsHeapFree.c)
 *     RtlpHpTagContextAllocateTag @ 0x18002DE84 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpHeapDestroy @ 0x1800B93D0 (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeAlloc @ 0x1800BD0E4 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800BD714 (RtlpHpLargeAllocationDestroy.c)
 *     RtlpHpStackTraceAddStack @ 0x1800DCD90 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1800DCF34 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1800F3F6C (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpTagRunOnceInit @ 0x18010D670 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x18014CD24 (RtlpHpPerHeapStackTraceCleanup.c)
 *     RtlpHpStackDbFreeRoutine @ 0x18014CF50 (RtlpHpStackDbFreeRoutine.c)
 *     RtlpHpStackTraceAllocRemove @ 0x18014D194 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceEtwCallback @ 0x18014D350 (RtlpHpStackTraceEtwCallback.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x180159214 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 * Callees:
 *     RtlpLogHeapFreeEvent @ 0x1800010D4 (RtlpLogHeapFreeEvent.c)
 *     RtlpHpLargeFree @ 0x180009DDC (RtlpHpLargeFree.c)
 *     RtlpHpLfhContextFree @ 0x18000B170 (RtlpHpLfhContextFree.c)
 *     RtlpHpSegFreeInternal @ 0x18000B400 (RtlpHpSegFreeInternal.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1800554D0 (RtlCSparseBitmapBitmaskRead.c)
 */

NTSTATUS __fastcall RtlpHpMetadataFree(unsigned __int64 a1, _QWORD *a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v5; // rsi
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // r10
  unsigned __int64 v10; // rdx
  char v11; // cl
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  NTSTATUS result; // eax
  int v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (unsigned __int8)BYTE1(*a2);
  v16 = 0;
  v5 = qword_1801D4208[2 * (unsigned int)dword_1801816F8[v3]];
  if ( (_WORD)a1 )
  {
    v6 = 0;
  }
  else
  {
    v7 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((a1 - qword_1801D0978) >> 20));
    if ( !v7 || (v6 = v7 - 1, (_DWORD)v7 == 3) )
    {
      result = RtlpHpLargeFree((__int128 *)v5, a1);
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
    result = RtlpLogHeapFailure(9, *(_QWORD *)(v9 + 56), a1, 0, 0LL, 0LL);
  }
LABEL_10:
  if ( *(char *)(v5 + 20) < 0 )
    return RtlpLogHeapFreeEvent(v5, a1, v2);
  return result;
}
