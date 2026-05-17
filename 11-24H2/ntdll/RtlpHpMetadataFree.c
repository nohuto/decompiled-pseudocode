/*
 * XREFs of RtlpHpMetadataFree @ 0x18004EF28
 * Callers:
 *     RtlpFreeHeapMetadata @ 0x18004EBD8 (RtlpFreeHeapMetadata.c)
 *     RtlpFlsHeapFree @ 0x18004EEDC (RtlpFlsHeapFree.c)
 *     RtlpHpHeapDestroy @ 0x180090050 (RtlpHpHeapDestroy.c)
 *     RtlpHpLargeFree @ 0x1800938E4 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x180093F08 (RtlpHpLargeAlloc.c)
 *     RtlpHpTagContextAllocateTag @ 0x1800B79F0 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpStackTraceAddStack @ 0x1800DF290 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1800DF434 (RtlpHpStackTraceAllocAdd.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1800F23FC (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800FAE54 (RtlpHpLargeAllocationDestroy.c)
 *     RtlpHpTagRunOnceInit @ 0x18010AF10 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x18014B774 (RtlpHpPerHeapStackTraceCleanup.c)
 *     RtlpHpStackDbFreeRoutine @ 0x18014B9A0 (RtlpHpStackDbFreeRoutine.c)
 *     RtlpHpStackTraceAllocRemove @ 0x18014BBE4 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceEtwCallback @ 0x18014BDA0 (RtlpHpStackTraceEtwCallback.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x180157C64 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18002CA00 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLfhContextFree @ 0x18004F530 (RtlpHpLfhContextFree.c)
 *     RtlpHpSegFreeInternal @ 0x18004F7C0 (RtlpHpSegFreeInternal.c)
 *     RtlpHpLargeFree @ 0x1800938E4 (RtlpHpLargeFree.c)
 *     RtlpLogHeapFreeEvent @ 0x180095BD4 (RtlpLogHeapFreeEvent.c)
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
  v5 = qword_1801D21B8[2 * (unsigned int)dword_1801800C8[v3]];
  if ( (_WORD)a1 )
  {
    v6 = 0;
  }
  else
  {
    v7 = RtlCSparseBitmapBitmaskRead((__int64)&unk_1801CE930, 2 * ((unsigned __int64)(a1 - qword_1801CE928) >> 20));
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
