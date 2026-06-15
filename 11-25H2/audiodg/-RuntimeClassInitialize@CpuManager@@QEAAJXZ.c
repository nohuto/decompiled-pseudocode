/*
 * XREFs of ?RuntimeClassInitialize@CpuManager@@QEAAJXZ @ 0x140012914
 * Callers:
 *     ??$MakeAndInitialize@VCpuManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z @ 0x140012868 (--$MakeAndInitialize@VCpuManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z.c)
 * Callees:
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 */

__int64 __fastcall CpuManager::RuntimeClassInitialize(CpuManager *this)
{
  __int64 v2; // rcx
  _OWORD *v3; // rdx
  _OWORD *v4; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 result; // rax
  _BYTE v13[280]; // [rsp+20h] [rbp-118h] BYREF

  *((_DWORD *)this + 68) = 0;
  memset_0(v13, 0, 0x108uLL);
  v2 = 2LL;
  v3 = (_OWORD *)((char *)this + 280);
  v4 = v13;
  do
  {
    v5 = v4[1];
    *v3 = *v4;
    v6 = v4[2];
    v3[1] = v5;
    v7 = v4[3];
    v3[2] = v6;
    v8 = v4[4];
    v3[3] = v7;
    v9 = v4[5];
    v3[4] = v8;
    v10 = v4[6];
    v3[5] = v9;
    v11 = v4[7];
    v4 += 8;
    v3[6] = v10;
    v3 += 8;
    *(v3 - 1) = v11;
    --v2;
  }
  while ( v2 );
  *(_QWORD *)v3 = *(_QWORD *)v4;
  result = 0LL;
  *((_OWORD *)this + 34) = 0LL;
  return result;
}
