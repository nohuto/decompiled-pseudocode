/*
 * XREFs of RtlpHpFreeHeapSlow @ 0x180054194
 * Callers:
 *     RtlpHpFreeHeap @ 0x180053AF0 (RtlpHpFreeHeap.c)
 *     RtlpHpTagFreeHeap @ 0x1800818A0 (RtlpHpTagFreeHeap.c)
 * Callees:
 *     RtlpLogHeapFreeEvent @ 0x1800010D4 (RtlpLogHeapFreeEvent.c)
 *     RtlpHpLargeFree @ 0x180009DDC (RtlpHpLargeFree.c)
 *     RtlpHpLfhContextFree @ 0x18000B170 (RtlpHpLfhContextFree.c)
 *     RtlpHpSegFreeInternal @ 0x18000B400 (RtlpHpSegFreeInternal.c)
 *     RtlpCallInterceptRoutine @ 0x18004F6D0 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1800554D0 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpExtrasGet @ 0x180055550 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeap @ 0x180055D30 (RtlpHpSizeHeap.c)
 *     RtlpHpStackLoggingEnabled @ 0x1800D83B0 (RtlpHpStackLoggingEnabled.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1800DF5A0 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011E484 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 */

_BOOL8 __fastcall RtlpHpFreeHeapSlow(unsigned int *a1, unsigned __int64 a2, __int64 a3)
{
  int v3; // ebp
  unsigned int v4; // esi
  __int64 v7; // rax
  int v8; // ebp
  __int64 v9; // rdx
  BOOL v10; // esi
  __int64 v12; // r10
  __int64 v13; // rax
  int v14; // eax
  unsigned __int64 v15; // rdx
  char v16; // cl
  unsigned __int64 v17; // r8
  __int64 v18; // r8
  unsigned __int64 v19; // r9
  int v20; // eax
  int v21; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v4 = a3;
  v21 = 0;
  if ( (a3 & 0x20) != 0 )
  {
    if ( a1[6] )
    {
      v7 = RtlpHpExtrasGet(a1, a2, a3, 0LL);
      if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && (*(_BYTE *)(v7 + 2) & 0xF) != 0 )
      {
        __writegsqword(0x1858u, 0LL);
        v8 = RtlpCallInterceptRoutine(*(_BYTE *)(v7 + 2) & 0xF, a1, a2, 3u, v7 + 16);
        __writegsqword(0x1858u, (unsigned __int64)(a1 + 5));
        v9 = a1[5];
        if ( (v9 & 0x10) != 0 && a1[56] != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
          RtlpHpEnvAcquireGlobalLockSharedContended(a1 + 5, v9);
        if ( v8 < 0 )
          return 0;
        v3 = v21;
      }
    }
  }
  if ( (v4 & 0x2000) != 0 && RtlpHpSizeHeap(a1, a2, v4) == -1 )
  {
    RtlpLogHeapFailure(9, (__int64)a1, a2, 0LL, 0LL, 0LL);
    return 0;
  }
  if ( (unsigned int)RtlpHpStackLoggingEnabled(a1) )
    RtlpHpStackTraceRemoveStack(a1, a2);
  if ( (_WORD)a2 )
  {
    v12 = (__int64)(a1 + 80);
LABEL_19:
    v15 = *(_QWORD *)v12 & a2;
    if ( (RtlpHpHeapGlobals ^ *(_QWORD *)(v15 + 0x10) ^ v15) == v12 )
    {
      v16 = *(_BYTE *)(v12 + 8);
      v17 = v15 + 32 * ((unsigned __int64)(unsigned int)(a2 - v15) >> v16);
      v18 = -32LL * *(unsigned __int8 *)(v17 + 26) + v17;
      v19 = v15 + ((__int64)(v18 - v15) >> 5 << v16);
      if ( *(_BYTE *)(v18 + 24) + (v19 == a2) == 11 )
      {
        v20 = RtlpHpLfhContextFree(*(_QWORD *)(v12 + 24), v19, a2);
        v3 = 2;
      }
      else
      {
        v20 = RtlpHpSegFreeInternal(v12, a2, v18, &v21);
        v3 = v21;
      }
      v10 = v20;
    }
    else
    {
      RtlpLogHeapFailure(9, *(_QWORD *)(v12 + 56), a2, 0LL, 0LL, 0LL);
      v10 = 0;
    }
    goto LABEL_21;
  }
  v13 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((a2 - qword_1801D0978) >> 20));
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 != 2 )
    {
      v12 = (__int64)(a1 + 80);
      if ( v14 == 1 )
        v12 = (__int64)(a1 + 128);
      goto LABEL_19;
    }
  }
  v3 = 3;
  v10 = RtlpHpLargeFree((__int128 *)a1, a2) != 0;
LABEL_21:
  if ( *((char *)a1 + 20) < 0 && v10 )
    RtlpLogHeapFreeEvent((__int64)a1, a2, v3);
  return v10;
}
