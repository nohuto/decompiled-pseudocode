/*
 * XREFs of RtlpHpPerHeapStackTraceCleanup @ 0x18014CD24
 * Callers:
 *     RtlpHpStackTraceHeapDestroy @ 0x1800B90C8 (RtlpHpStackTraceHeapDestroy.c)
 *     RtlpHpStackTraceHeapDisable @ 0x18014D530 (RtlpHpStackTraceHeapDisable.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x18000AB68 (RtlpHpMetadataFree.c)
 *     RtlRunOnceBeginInitialize @ 0x18008E110 (RtlRunOnceBeginInitialize.c)
 *     RtlStackDbStackRemove @ 0x18011FEA8 (RtlStackDbStackRemove.c)
 */

int __fastcall RtlpHpPerHeapStackTraceCleanup(_RTL_RUN_ONCE *a1, int a2, int a3)
{
  __int64 v5; // rax
  _QWORD *v6; // rbp
  _QWORD **v7; // rdi
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rsi
  _QWORD *i; // rcx
  _QWORD *v11; // rbx
  unsigned __int64 v12; // rcx
  _OWORD v14[4]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v16; // [rsp+88h] [rbp+20h] BYREF

  v16 = 0LL;
  LODWORD(v5) = RtlRunOnceBeginInitialize(a1, 1u, (PVOID *)&v16);
  if ( (int)v5 >= 0 )
  {
    v6 = v16;
    v7 = (_QWORD **)v16[3];
    v8 = v7;
    while ( v8 )
    {
      v8 = (_QWORD *)*v8;
      if ( ((unsigned __int8)v8 & 1) != 0 )
        break;
LABEL_9:
      LODWORD(v5) = (_DWORD)v8;
      if ( !v8 )
        goto LABEL_17;
      v9 = (unsigned __int64)v8;
      for ( i = v7; (*i & 1) == 0; i = (_QWORD *)*i )
      {
        if ( (_QWORD *)*i == v8 )
        {
          *i = *v8;
          --*((_DWORD *)v6 + 4);
          *v8 |= 0x8000000000000002uLL;
          v8 = i;
          goto LABEL_16;
        }
      }
      v9 = 0LL;
LABEL_16:
      RtlStackDbStackRemove((__int64)&qword_1801D0920, *(_QWORD *)(v9 + 16));
      v14[0] = RtlpHpEnvHandle;
      RtlpHpMetadataFree(v9, v14);
    }
    ++v7;
    v5 = v6[3];
    while ( (unsigned __int64)v7 < v5 + 8 * ((unsigned __int64)*((unsigned int *)v6 + 5) >> 5) )
    {
      v8 = *v7;
      if ( ((unsigned __int8)*v7 & 1) == 0 )
        goto LABEL_9;
      ++v7;
    }
LABEL_17:
    v11 = v16;
    v12 = v16[3];
    if ( v12 )
    {
      v14[0] = RtlpHpEnvHandle;
      LODWORD(v5) = RtlpHpMetadataFree(v12, v14);
    }
    if ( a2 )
    {
      v11[2] = 0LL;
      v11[3] = 0LL;
    }
    else
    {
      v14[0] = RtlpHpEnvHandle;
      LODWORD(v5) = RtlpHpMetadataFree((unsigned __int64)v11, v14);
      if ( a3 )
        a1->Value = 0LL;
    }
  }
  return v5;
}
