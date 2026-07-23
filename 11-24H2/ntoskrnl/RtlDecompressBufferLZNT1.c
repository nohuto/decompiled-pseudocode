/*
 * XREFs of RtlDecompressBufferLZNT1 @ 0x1409E59D0
 * Callers:
 *     RtlDecompressBuffer @ 0x14044FDC0 (RtlDecompressBuffer.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     LZNT1DecompressChunkNewThread @ 0x1402E24E4 (LZNT1DecompressChunkNewThread.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     LZNT1DecompressChunk @ 0x1406B5310 (LZNT1DecompressChunk.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall RtlDecompressBufferLZNT1(
        struct _LIST_ENTRY *a1,
        unsigned int a2,
        __int16 *a3,
        unsigned int a4,
        int a5,
        int *a6)
{
  __int16 *v6; // r14
  struct _LIST_ENTRY *v7; // rsi
  struct _LIST_ENTRY *v8; // r15
  unsigned __int64 v9; // r13
  int v10; // edi
  __int16 v11; // bx
  unsigned __int64 v12; // rax
  __int16 *v13; // r12
  int v14; // ebx
  unsigned int v15; // ecx
  size_t v16; // r8
  char *v17; // r12
  __int64 v19; // rcx
  unsigned int v20; // edx
  struct _KEVENT Event; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h] BYREF
  int v23; // [rsp+90h] [rbp+40h]
  int v24; // [rsp+98h] [rbp+48h] BYREF

  v23 = (int)a1;
  v6 = a3;
  v7 = a1;
  memset(&Event, 0, sizeof(Event));
  v8 = (struct _LIST_ENTRY *)((char *)a1 + a2);
  v9 = (unsigned __int64)a3 + a4;
  v10 = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v22 = 1LL;
  v11 = *v6;
  v24 = 0;
  while ( 1 )
  {
    v12 = (v11 & 0xFFF) + 3LL;
    v13 = (__int16 *)((char *)v6 + v12);
    if ( (unsigned __int64)v6 + v12 > v9 )
      break;
    if ( v11 >= 0 )
    {
      if ( v12 < 2 )
        break;
      v19 = (v11 & 0xFFFu) + 1;
      v20 = v19;
      v24 = (v11 & 0xFFF) + 1;
      if ( (struct _LIST_ENTRY *)((char *)v7 + (unsigned int)v19) > v8 )
      {
        v19 = (unsigned int)((_DWORD)v8 - (_DWORD)v7);
        v24 = (_DWORD)v8 - (_DWORD)v7;
        v20 = (_DWORD)v8 - (_DWORD)v7;
      }
      if ( (unsigned __int64)v6 + v19 + 2 > v9 )
        break;
      memmove(v7, v6 + 1, v20);
      goto LABEL_6;
    }
    v14 = a5;
    if ( !a5 )
    {
      v10 = LZNT1DecompressChunk(v7, v8, (_BYTE *)v6 + 2, (__int64)v13, &v24);
      if ( v10 < 0 )
      {
        *a6 = v24;
        goto LABEL_16;
      }
LABEL_6:
      v15 = v24;
      goto LABEL_7;
    }
    v10 = LZNT1DecompressChunkNewThread(
            (__int64)&Event,
            (unsigned __int64)v7,
            v8,
            (unsigned __int64)(v6 + 1),
            (__int64)v6 + v12,
            a5);
    if ( v10 < 0 )
    {
      *a6 = v24;
      goto LABEL_16;
    }
    v15 = v14;
    v24 = v14;
LABEL_7:
    v6 = v13;
    v7 = (struct _LIST_ENTRY *)((char *)v7 + v15);
    if ( v7 == v8 || (unsigned __int64)v13 > v9 - 2 || (v11 = *v13) == 0 )
    {
LABEL_15:
      *a6 = (_DWORD)v7 - v23;
      goto LABEL_16;
    }
    if ( v15 < 0x1000 )
    {
      v16 = (int)(4096 - v15);
      v17 = (char *)v7 + v16;
      if ( (struct _LIST_ENTRY *)((char *)v7 + v16) >= v8 )
        goto LABEL_15;
      memset_0(v7, 0, v16);
      v7 = (struct _LIST_ENTRY *)v17;
    }
  }
  v10 = -1073741246;
  *a6 = (int)v6;
LABEL_16:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v22, 0xFFFFFFFF) == 1 )
    KeSetEvent(&Event, 0, 0);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( v10 >= 0 && v22 < 0 )
    return (unsigned int)HIDWORD(v22);
  return (unsigned int)v10;
}
