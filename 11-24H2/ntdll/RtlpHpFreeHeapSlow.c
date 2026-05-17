/*
 * XREFs of RtlpHpFreeHeapSlow @ 0x18002B6C4
 * Callers:
 *     RtlpHpTagFreeHeap @ 0x1800274C0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x18002B020 (RtlpHpFreeHeap.c)
 * Callees:
 *     RtlpCallInterceptRoutine @ 0x1800280E0 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18002CA00 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpExtrasGet @ 0x18002CA80 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeap @ 0x18002D260 (RtlpHpSizeHeap.c)
 *     RtlpHpLfhContextFree @ 0x18004F530 (RtlpHpLfhContextFree.c)
 *     RtlpHpSegFreeInternal @ 0x18004F7C0 (RtlpHpSegFreeInternal.c)
 *     RtlpHpLargeFree @ 0x1800938E4 (RtlpHpLargeFree.c)
 *     RtlpLogHeapFreeEvent @ 0x180095BD4 (RtlpLogHeapFreeEvent.c)
 *     RtlpHpStackLoggingEnabled @ 0x1800DB020 (RtlpHpStackLoggingEnabled.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1800E28F0 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011CBF4 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 */

_BOOL8 __fastcall RtlpHpFreeHeapSlow(unsigned int *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // ebp
  unsigned int v4; // esi
  __int64 v7; // rax
  int v8; // ebp
  __int64 v9; // rdx
  BOOL v10; // esi
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int *v14; // r10
  __int64 v15; // rax
  int v16; // eax
  unsigned __int64 v17; // rdx
  char v18; // cl
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  int v22; // eax
  unsigned int v23; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v4 = a3;
  v23 = 0;
  if ( (a3 & 0x20) != 0 )
  {
    if ( a1[6] )
    {
      v7 = RtlpHpExtrasGet(a1, a2, a3, 0LL);
      if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && (*(_BYTE *)(v7 + 2) & 0xF) != 0 )
      {
        __writegsqword(0x1858u, 0LL);
        v8 = RtlpCallInterceptRoutine(*(_BYTE *)(v7 + 2) & 0xF, (__int64)a1, a2, 3u, v7 + 16);
        __writegsqword(0x1858u, (unsigned __int64)(a1 + 5));
        v9 = a1[5];
        if ( (v9 & 0x10) != 0 && a1[56] != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
          RtlpHpEnvAcquireGlobalLockSharedContended(a1 + 5, v9);
        if ( v8 < 0 )
          return 0;
        v3 = v23;
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
    v14 = a1 + 80;
LABEL_19:
    v17 = *(_QWORD *)v14 & a2;
    if ( (unsigned int *)(RtlpHpHeapGlobals ^ *(_QWORD *)(v17 + 0x10) ^ v17) == v14 )
    {
      v18 = *((_BYTE *)v14 + 8);
      v19 = v17 + 32 * ((unsigned __int64)(unsigned int)(a2 - v17) >> v18);
      v20 = -32LL * *(unsigned __int8 *)(v19 + 26) + v19;
      v21 = v17 + ((__int64)(v20 - v17) >> 5 << v18);
      if ( *(_BYTE *)(v20 + 24) + (v21 == a2) == 11 )
      {
        v22 = RtlpHpLfhContextFree(*((_QWORD *)v14 + 3), v21, a2);
        v3 = 2;
      }
      else
      {
        v22 = RtlpHpSegFreeInternal(v14, a2, v20, &v23);
        v3 = v23;
      }
      v10 = v22;
    }
    else
    {
      RtlpLogHeapFailure(9, *((_QWORD *)v14 + 7), a2, 0LL, 0LL, 0LL);
      v10 = 0;
    }
    goto LABEL_21;
  }
  v15 = RtlCSparseBitmapBitmaskRead(&unk_1801CE930, 2 * ((a2 - qword_1801CE928) >> 20), v12, v13);
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 != 2 )
    {
      v14 = a1 + 80;
      if ( v16 == 1 )
        v14 = a1 + 128;
      goto LABEL_19;
    }
  }
  v3 = 3;
  v10 = RtlpHpLargeFree(a1, a2) != 0;
LABEL_21:
  if ( *((char *)a1 + 20) < 0 && v10 )
    RtlpLogHeapFreeEvent(a1, a2, v3);
  return v10;
}
