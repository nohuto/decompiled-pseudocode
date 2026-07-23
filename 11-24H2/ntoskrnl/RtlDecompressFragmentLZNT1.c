/*
 * XREFs of RtlDecompressFragmentLZNT1 @ 0x140A138F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     LZNT1DecompressChunkNewThread @ 0x1402E24E4 (LZNT1DecompressChunkNewThread.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     LZNT1DecompressChunk @ 0x1406B5310 (LZNT1DecompressChunk.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall RtlDecompressFragmentLZNT1(
        char *a1,
        unsigned int a2,
        __int16 *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        unsigned int *a7,
        _BYTE *a8)
{
  __int16 *v8; // rdi
  char *v9; // rsi
  unsigned __int64 v10; // r13
  int v11; // ebx
  __int16 v12; // ax
  unsigned int v13; // r14d
  __int64 v14; // rcx
  __int16 *v15; // rcx
  int v16; // r12d
  unsigned int v17; // edx
  __int16 *v18; // r15
  __int64 v19; // rcx
  size_t v20; // r8
  _BYTE *v21; // rdx
  bool v22; // zf
  _BYTE *v23; // r8
  _BYTE *v24; // rdi
  unsigned int v26; // eax
  struct _LIST_ENTRY *v27; // [rsp+30h] [rbp-38h]
  struct _KEVENT Event; // [rsp+38h] [rbp-30h] BYREF
  __int64 v29; // [rsp+50h] [rbp-18h] BYREF
  int v30; // [rsp+B0h] [rbp+48h]
  unsigned int Size; // [rsp+B8h] [rbp+50h]
  int v32; // [rsp+C0h] [rbp+58h] BYREF
  unsigned int v33; // [rsp+C8h] [rbp+60h] BYREF

  Size = a2;
  v30 = (int)a1;
  v8 = a3;
  v27 = (struct _LIST_ENTRY *)&a1[a2];
  v9 = a1;
  v33 = 0;
  v10 = (unsigned __int64)a3 + a4;
  memset(&Event, 0, sizeof(Event));
  v11 = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v12 = *v8;
  v29 = 1LL;
  v13 = a5;
  while ( 1 )
  {
    v32 = 4096;
    v14 = (v12 & 0xFFFu) + 3;
    if ( v13 < 0x1000 )
    {
      v16 = a6;
      v17 = Size;
      while ( 1 )
      {
        v18 = (__int16 *)((char *)v8 + (unsigned int)v14);
        if ( (unsigned __int64)v18 > v10 )
          goto LABEL_40;
        v19 = 4096 - v13;
        if ( (unsigned int)v19 >= v17 )
          v19 = v17;
        v33 = v19;
        if ( v12 >= 0 )
          break;
        if ( v13 || (_DWORD)v19 != 4096 )
        {
          v23 = v8 + 1;
          v24 = a8;
          v11 = LZNT1DecompressChunk(a8, a8 + 4096, v23, (__int64)v18, &v32);
          if ( v11 < 0 )
          {
            v26 = v32;
            goto LABEL_35;
          }
          v21 = &v24[v13];
          if ( v32 - v13 < v33 )
          {
            memmove(v9, v21, v32 - v13);
            LODWORD(v9) = v32 - v13 + (_DWORD)v9;
LABEL_27:
            *a7 = (_DWORD)v9 - v30;
            goto LABEL_28;
          }
          v20 = v33;
          goto LABEL_19;
        }
        if ( v16 )
        {
          v11 = LZNT1DecompressChunkNewThread(
                  (__int64)&Event,
                  (unsigned __int64)v9,
                  v27,
                  (unsigned __int64)(v8 + 1),
                  (__int64)v18,
                  v16);
          if ( v11 < 0 )
            goto LABEL_34;
          v33 = v16;
        }
        else
        {
          v11 = LZNT1DecompressChunk(v9, v27, (_BYTE *)v8 + 2, (__int64)v18, &v33);
          if ( v11 < 0 )
          {
LABEL_34:
            v26 = v33;
LABEL_35:
            *a7 = v26;
            goto LABEL_28;
          }
        }
LABEL_20:
        v13 = 0;
        v9 += v33;
        v22 = Size == v33;
        v17 = Size - v33;
        Size -= v33;
        if ( v22 )
          goto LABEL_27;
        v8 = v18;
        if ( (unsigned __int64)v18 > v10 - 2 )
          goto LABEL_27;
        v12 = *v18;
        if ( !*v18 )
          goto LABEL_27;
        v32 = 4096;
        LODWORD(v14) = (v12 & 0xFFF) + 3;
      }
      v20 = (unsigned int)v19;
      if ( (unsigned __int64)v8 + v13 + v19 + 2 > v10 )
        break;
      v21 = (char *)v8 + v13 + 2;
LABEL_19:
      memmove(v9, v21, v20);
      goto LABEL_20;
    }
    v15 = (__int16 *)((char *)v8 + v14);
    if ( (unsigned __int64)v15 > v10 )
      break;
    v13 -= 4096;
    v8 = v15;
    if ( (unsigned __int64)v15 <= v10 - 2 )
    {
      v12 = *v15;
      if ( *v15 )
        continue;
    }
    *a7 = 0;
    goto LABEL_28;
  }
LABEL_40:
  v11 = -1073741246;
  *a7 = (unsigned int)v8;
LABEL_28:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v29, 0xFFFFFFFF) == 1 )
    KeSetEvent(&Event, 0, 0);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( v11 >= 0 && v29 < 0 )
    return (unsigned int)HIDWORD(v29);
  return (unsigned int)v11;
}
