/*
 * XREFs of RtlpCopyExtendedContext @ 0x14025F9E0
 * Callers:
 *     RtlCopyExtendedContext @ 0x1405DE220 (RtlCopyExtendedContext.c)
 *     RtlpReadExtendedContext @ 0x140859000 (RtlpReadExtendedContext.c)
 *     RtlpWriteExtendedContext @ 0x140909C2C (RtlpWriteExtendedContext.c)
 * Callees:
 *     RtlpCopyXStateChunk @ 0x14025FDF8 (RtlpCopyXStateChunk.c)
 *     RtlpCopyLegacyContextX86 @ 0x140260310 (RtlpCopyLegacyContextX86.c)
 *     RtlpCopyKernelCetChunk @ 0x1405DE24C (RtlpCopyKernelCetChunk.c)
 *     RtlpCopyLegacyContextArm @ 0x1405DE294 (RtlpCopyLegacyContextArm.c)
 *     RtlpCopyLegacyContextArm64 @ 0x1405DE3F8 (RtlpCopyLegacyContextArm64.c)
 */

__int64 __fastcall RtlpCopyExtendedContext(
        unsigned __int8 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  int v7; // r14d
  char v9; // bl
  __int64 v10; // rbp
  unsigned int v11; // r13d
  bool v12; // cl
  __int64 result; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r9
  __int128 *v20; // rcx
  __int128 *v21; // rax
  __int128 v22; // xmm0
  int v23; // eax

  v7 = a2;
  if ( (a4 & 0x27FFFF80) != 0x10000
    && (a4 & 0x7FFFF20) != 0x100000
    && ((a4 & 0x200000) == 0 || (a4 & 0x7DFFFF0) != 0)
    && (a4 & 0x7FFFFC0) != 0x400000 )
  {
    return 3221225485LL;
  }
  v9 = 1;
  v10 = 3LL;
  v11 = 0;
  v12 = 0;
  if ( (a4 & 0x400020) != 0x400020 )
    v12 = (a4 & 0x10040) != 65600 && (a4 & 0x100040) != 1048640;
  if ( !v12 )
  {
    if ( !MEMORY[0xFFFFF780000003D8] )
      return 3221225659LL;
    v9 = 3;
  }
  if ( (a4 & 0x100080) == 0x100080 )
  {
    if ( !(_BYTE)KiKernelCetEnabled )
      return 3221225659LL;
    v9 |= 4u;
  }
  v14 = a2;
  if ( a3 )
    v14 = a3;
  v15 = a5;
  if ( a6 )
    v15 = a6;
  v16 = *(int *)(v14 + 8);
  v17 = *(int *)(v15 + 8);
  if ( (_DWORD)v16 != (_DWORD)v17 || *(_DWORD *)(v14 + 12) < *(_DWORD *)(v15 + 12) )
    return 3221225485LL;
  v18 = a2 + v16;
  v19 = a5 + v17;
  if ( (a4 & 0x10000) != 0 )
  {
    RtlpCopyLegacyContextX86(a1, v18, a4, v19);
  }
  else if ( (a4 & 0x100000) != 0 )
  {
    *(_DWORD *)(v18 + 48) = a4 & 0x67FFFFFF;
    if ( a1 )
    {
      if ( (a4 & 0x40000000) != 0 )
        *(_DWORD *)(v18 + 48) = *(_DWORD *)(v19 + 48) ^ (a4 ^ *(_DWORD *)(v19 + 48)) & 0x67FFFFFF;
      if ( (a4 & 0x100001) == 0x100001 )
      {
        *(_QWORD *)(v18 + 248) = *(_QWORD *)(v19 + 248);
        *(_WORD *)(v18 + 56) = *(_WORD *)(v19 + 56);
        *(_WORD *)(v18 + 66) = *(_WORD *)(v19 + 66);
        *(_QWORD *)(v18 + 152) = *(_QWORD *)(v19 + 152);
        *(_DWORD *)(v18 + 68) = *(_DWORD *)(v19 + 68);
      }
      if ( (a4 & 0x100002) == 0x100002 )
      {
        *(_OWORD *)(v18 + 120) = *(_OWORD *)(v19 + 120);
        *(_OWORD *)(v18 + 136) = *(_OWORD *)(v19 + 136);
        *(_OWORD *)(v18 + 160) = *(_OWORD *)(v19 + 160);
        *(_OWORD *)(v18 + 176) = *(_OWORD *)(v19 + 176);
        *(_OWORD *)(v18 + 192) = *(_OWORD *)(v19 + 192);
        *(_OWORD *)(v18 + 208) = *(_OWORD *)(v19 + 208);
        *(_OWORD *)(v18 + 224) = *(_OWORD *)(v19 + 224);
        *(_QWORD *)(v18 + 240) = *(_QWORD *)(v19 + 240);
      }
      if ( (a4 & 0x100004) == 0x100004 )
      {
        *(_WORD *)(v18 + 64) = *(_WORD *)(v19 + 64);
        *(_WORD *)(v18 + 62) = *(_WORD *)(v19 + 62);
        *(_WORD *)(v18 + 60) = *(_WORD *)(v19 + 60);
        *(_WORD *)(v18 + 58) = *(_WORD *)(v19 + 58);
      }
      if ( (a4 & 0x100008) == 0x100008 )
      {
        v20 = (__int128 *)(v19 + 256);
        *(_DWORD *)(v18 + 52) = *(_DWORD *)(v19 + 52);
        v21 = (__int128 *)(v18 + 256);
        do
        {
          v21 += 8;
          v22 = *v20;
          v20 += 8;
          *(v21 - 8) = v22;
          *(v21 - 7) = *(v20 - 7);
          *(v21 - 6) = *(v20 - 6);
          *(v21 - 5) = *(v20 - 5);
          *(v21 - 4) = *(v20 - 4);
          *(v21 - 3) = *(v20 - 3);
          *(v21 - 2) = *(v20 - 2);
          *(v21 - 1) = *(v20 - 1);
          --v10;
        }
        while ( v10 );
        *v21 = *v20;
        v21[1] = v20[1];
      }
      if ( (a4 & 0x100010) == 0x100010 )
      {
        *(_OWORD *)(v18 + 72) = *(_OWORD *)(v19 + 72);
        *(_OWORD *)(v18 + 88) = *(_OWORD *)(v19 + 88);
        *(_OWORD *)(v18 + 104) = *(_OWORD *)(v19 + 104);
        *(_OWORD *)(v18 + 1200) = *(_OWORD *)(v19 + 1200);
        *(_OWORD *)(v18 + 1216) = *(_OWORD *)(v19 + 1216);
      }
    }
  }
  else if ( (a4 & 0x200000) != 0 )
  {
    RtlpCopyLegacyContextArm(a1, v18, a4, v19);
  }
  else if ( (a4 & 0x400000) != 0 )
  {
    RtlpCopyLegacyContextArm64(a1, v18, a4, v19);
  }
  if ( (v9 & 2) == 0 || (result = RtlpCopyXStateChunk(a1, v7, v14, a5, v15), (int)result >= 0) )
  {
    if ( (v9 & 4) != 0 )
    {
      v23 = RtlpCopyKernelCetChunk(a1, v7, v14, a5, v15);
      if ( v23 < 0 )
        return (unsigned int)v23;
      return v11;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
