/*
 * XREFs of KiUpdateProcessorClasses @ 0x14042C4B8
 * Callers:
 *     KeConfigureHeteroProcessors @ 0x14042B440 (KeConfigureHeteroProcessors.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 KiUpdateProcessorClasses()
{
  unsigned __int64 result; // rax
  __int64 v1; // r12
  unsigned int v2; // r14d
  __int64 v3; // rdi
  __int64 v4; // rsi
  unsigned int v5; // r15d
  unsigned __int16 v6; // r9
  unsigned __int64 v7; // r11
  unsigned __int8 v8; // cl
  int v9; // r10d
  unsigned __int8 v10; // r13
  unsigned int v11; // ecx
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rdx
  unsigned __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rdi
  unsigned __int8 v21; // [rsp+28h] [rbp-99h]
  unsigned __int8 v22; // [rsp+29h] [rbp-98h]
  unsigned __int8 v23; // [rsp+2Ch] [rbp-95h]
  unsigned int v24; // [rsp+30h] [rbp-91h]
  __int64 i; // [rsp+38h] [rbp-89h]
  __int64 v26; // [rsp+58h] [rbp-69h]
  __int64 v27; // [rsp+60h] [rbp-61h]
  _BYTE Src[64]; // [rsp+68h] [rbp-59h] BYREF
  _BYTE v29[64]; // [rsp+A8h] [rbp-19h] BYREF
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+5Fh] BYREF

  result = (unsigned __int64)&retaddr;
  v1 = KiHeteroConfig;
  v2 = 0;
  v24 = 0;
  v3 = *(_QWORD *)KiHeteroConfig;
  for ( i = *(_QWORD *)KiHeteroConfig; v2 < (unsigned __int16)KiSubNodeCount; v24 = ++v2 )
  {
    v4 = *(_QWORD *)(KiSubNodes + 8LL * v2);
    if ( v4 )
    {
      v5 = 0;
      v27 = KeNodeBlock[*(unsigned __int16 *)(v4 + 138)];
      if ( *(_DWORD *)(v1 + 24) )
      {
        v26 = *(unsigned __int16 *)(v4 + 136);
        do
        {
          memset_0(Src, 0, sizeof(Src));
          memset_0(v29, 0, sizeof(v29));
          v6 = *(_WORD *)(v4 + 136);
          v7 = *(_QWORD *)(v4 + 128);
          v8 = 0;
          v23 = 0;
          v9 = v6;
          v10 = 0;
LABEL_7:
          v22 = v8;
          v11 = v9 + 1;
          v21 = v10;
          while ( 1 )
          {
            if ( v7 )
            {
              _BitScanForward64(&v12, v7);
              v7 &= ~(1LL << v12);
              v13 = *((unsigned int *)qword_140F22998 + 64 * v9 + (unsigned int)(unsigned __int8)v12);
              v14 = KiProcessorBlock[v13];
              v15 = v5 + *(_DWORD *)(v3 + 4) * (_DWORD)v13;
              v16 = (unsigned int)v15;
              Src[*(unsigned __int8 *)(v14 + 209)] = *(_BYTE *)(v3 + 4 * v15 + 24);
              v10 = *(_BYTE *)(v3 + 4 * v15 + 24);
              if ( v10 <= v21 )
                v10 = v21;
              v29[*(unsigned __int8 *)(v14 + 209)] = *(_BYTE *)(v3 + 4 * v15 + 25);
              v8 = *(_BYTE *)(v3 + 4 * v15 + 25);
              *(_BYTE *)(v14 + 35338) = *(_BYTE *)(v3 + 4LL * (unsigned int)v15 + 24);
              if ( v8 <= v22 )
                v8 = v22;
              *(_BYTE *)(v14 + 35337) = *(_BYTE *)(v3 + 4LL * (unsigned int)v15 + 25);
              v17 = (_QWORD *)((char *)&unk_140FC8868 + 32 * *(unsigned __int8 *)(v14 + 208));
              v23 = v8;
              if ( *(_BYTE *)(v3 + 4 * v16 + 25) )
                *v17 &= ~*(_QWORD *)(v14 + 200);
              else
                *v17 |= *(_QWORD *)(v14 + 200);
              goto LABEL_7;
            }
            v9 = ++v6;
            if ( v6 >= v11 )
              break;
            v7 = *(_QWORD *)(8LL * v6 + 8);
          }
          v18 = (unsigned __int64)v5 << 6;
          v19 = v5;
          RtlCopyVolatileMemory((void *)(v18 + *(_QWORD *)(v4 + 208)), Src, 0x40uLL);
          RtlCopyVolatileMemory((void *)(v18 + *(_QWORD *)(v4 + 200)), v29, 0x40uLL);
          ++v5;
          v20 = v26 + 32 * v19;
          *(_BYTE *)(v20 + v27 + 568) = v10;
          *(_BYTE *)(v20 + v27 + 312) = v23;
          v3 = i;
        }
        while ( v5 < *(_DWORD *)(v1 + 24) );
        v2 = v24;
      }
    }
    result = (unsigned __int16)KiSubNodeCount;
  }
  return result;
}
