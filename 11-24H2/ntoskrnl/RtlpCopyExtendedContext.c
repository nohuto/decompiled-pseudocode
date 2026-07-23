/*
 * XREFs of RtlpCopyExtendedContext @ 0x1403D4F10
 * Callers:
 *     KiDispatchException @ 0x1403D5EB0 (KiDispatchException.c)
 *     RtlCopyExtendedContext @ 0x1405E78C0 (RtlCopyExtendedContext.c)
 *     RtlpWriteExtendedContext @ 0x14092013C (RtlpWriteExtendedContext.c)
 *     RtlpReadExtendedContext @ 0x1409219A0 (RtlpReadExtendedContext.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1403D5250 (RtlpValidateContextFlags.c)
 *     RtlpCopyXStateChunk @ 0x1403D5270 (RtlpCopyXStateChunk.c)
 *     RtlpCopyLegacyContextX86 @ 0x1403D5770 (RtlpCopyLegacyContextX86.c)
 *     RtlpCopyKernelCetChunk @ 0x1405E78EC (RtlpCopyKernelCetChunk.c)
 *     RtlpCopyLegacyContextArm @ 0x1405E7934 (RtlpCopyLegacyContextArm.c)
 *     RtlpCopyLegacyContextArm64 @ 0x1405E7A98 (RtlpCopyLegacyContextArm64.c)
 */

__int64 __fastcall RtlpCopyExtendedContext(
        unsigned __int8 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v8; // esi
  __int64 result; // rax
  char v12; // r12
  __int64 v13; // r14
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r9
  __int128 *v19; // rcx
  __int64 v20; // r8
  __int128 *v21; // rax
  __int128 v22; // xmm0
  int v23; // eax
  _DWORD v24[14]; // [rsp+30h] [rbp-38h] BYREF

  v8 = 0;
  v24[0] = 0;
  result = RtlpValidateContextFlags(a4, v24);
  if ( (int)result >= 0 )
  {
    v12 = v24[0];
    v13 = a2;
    if ( a3 )
      v13 = a3;
    v14 = a5;
    if ( a6 )
      v14 = a6;
    if ( (v24[0] & 1) != 0 )
    {
      v15 = *(int *)(v13 + 8);
      v16 = *(int *)(v14 + 8);
      if ( (_DWORD)v15 != (_DWORD)v16 || *(_DWORD *)(v13 + 12) < *(_DWORD *)(v14 + 12) )
        return 3221225485LL;
      v17 = v15 + a2;
      v18 = v16 + a5;
      if ( (a4 & 0x10000) != 0 )
      {
        RtlpCopyLegacyContextX86(a1, v17, a4, v18);
      }
      else if ( (a4 & 0x100000) != 0 )
      {
        *(_DWORD *)(v17 + 48) = a4 & 0x67FFFFFF;
        if ( a1 )
        {
          if ( (a4 & 0x40000000) != 0 )
            *(_DWORD *)(v17 + 48) = *(_DWORD *)(v18 + 48) ^ (a4 ^ *(_DWORD *)(v18 + 48)) & 0x67FFFFFF;
          if ( (a4 & 0x100001) == 0x100001 )
          {
            *(_QWORD *)(v17 + 248) = *(_QWORD *)(v18 + 248);
            *(_WORD *)(v17 + 56) = *(_WORD *)(v18 + 56);
            *(_WORD *)(v17 + 66) = *(_WORD *)(v18 + 66);
            *(_QWORD *)(v17 + 152) = *(_QWORD *)(v18 + 152);
            *(_DWORD *)(v17 + 68) = *(_DWORD *)(v18 + 68);
          }
          if ( (a4 & 0x100002) == 0x100002 )
          {
            *(_OWORD *)(v17 + 120) = *(_OWORD *)(v18 + 120);
            *(_OWORD *)(v17 + 136) = *(_OWORD *)(v18 + 136);
            *(_OWORD *)(v17 + 160) = *(_OWORD *)(v18 + 160);
            *(_OWORD *)(v17 + 176) = *(_OWORD *)(v18 + 176);
            *(_OWORD *)(v17 + 192) = *(_OWORD *)(v18 + 192);
            *(_OWORD *)(v17 + 208) = *(_OWORD *)(v18 + 208);
            *(_OWORD *)(v17 + 224) = *(_OWORD *)(v18 + 224);
            *(_QWORD *)(v17 + 240) = *(_QWORD *)(v18 + 240);
          }
          if ( (a4 & 0x100004) == 0x100004 )
          {
            *(_WORD *)(v17 + 64) = *(_WORD *)(v18 + 64);
            *(_WORD *)(v17 + 62) = *(_WORD *)(v18 + 62);
            *(_WORD *)(v17 + 60) = *(_WORD *)(v18 + 60);
            *(_WORD *)(v17 + 58) = *(_WORD *)(v18 + 58);
          }
          if ( (a4 & 0x100008) == 0x100008 )
          {
            v19 = (__int128 *)(v18 + 256);
            *(_DWORD *)(v17 + 52) = *(_DWORD *)(v18 + 52);
            v20 = 3LL;
            v21 = (__int128 *)(v17 + 256);
            do
            {
              v21 += 8;
              v22 = *v19;
              v19 += 8;
              *(v21 - 8) = v22;
              *(v21 - 7) = *(v19 - 7);
              *(v21 - 6) = *(v19 - 6);
              *(v21 - 5) = *(v19 - 5);
              *(v21 - 4) = *(v19 - 4);
              *(v21 - 3) = *(v19 - 3);
              *(v21 - 2) = *(v19 - 2);
              *(v21 - 1) = *(v19 - 1);
              --v20;
            }
            while ( v20 );
            *v21 = *v19;
            v21[1] = v19[1];
          }
          if ( (a4 & 0x100010) == 0x100010 )
          {
            *(_OWORD *)(v17 + 72) = *(_OWORD *)(v18 + 72);
            *(_OWORD *)(v17 + 88) = *(_OWORD *)(v18 + 88);
            *(_OWORD *)(v17 + 104) = *(_OWORD *)(v18 + 104);
            *(_OWORD *)(v17 + 1200) = *(_OWORD *)(v18 + 1200);
            *(_OWORD *)(v17 + 1216) = *(_OWORD *)(v18 + 1216);
          }
        }
      }
      else if ( (a4 & 0x200000) != 0 )
      {
        RtlpCopyLegacyContextArm(a1, v17, a4, v18);
      }
      else if ( (a4 & 0x400000) != 0 )
      {
        RtlpCopyLegacyContextArm64(a1, v17, a4, v18);
      }
    }
    if ( (v12 & 2) == 0 || (result = RtlpCopyXStateChunk(a1, a2, v13, a5, v14), (int)result >= 0) )
    {
      if ( (v12 & 4) != 0 )
      {
        v23 = RtlpCopyKernelCetChunk(a1, a2, v13, a5, v14);
        if ( v23 < 0 )
          return (unsigned int)v23;
        return v8;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}
