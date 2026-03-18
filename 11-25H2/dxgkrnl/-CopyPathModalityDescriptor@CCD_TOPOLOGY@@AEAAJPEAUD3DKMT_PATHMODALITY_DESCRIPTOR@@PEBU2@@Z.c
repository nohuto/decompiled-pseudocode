/*
 * XREFs of ?CopyPathModalityDescriptor@CCD_TOPOLOGY@@AEAAJPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBU2@@Z @ 0x140260D5C
 * Callers:
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x140260EDC (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CopyPathModalityDescriptor(
        CCD_TOPOLOGY *this,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        const struct D3DKMT_PATHMODALITY_DESCRIPTOR *a3,
        __int64 a4)
{
  __int64 *v4; // rbx
  _OWORD *v5; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v7; // rax
  __int64 v8; // r8
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int64 result; // rax
  _OWORD *v12; // rax
  _OWORD *v13; // rcx
  __int128 v14; // xmm1

  v4 = (__int64 *)((char *)a2 + 248);
  v5 = (_OWORD *)*((_QWORD *)a2 + 31);
  v7 = a3;
  v8 = 2LL;
  do
  {
    *(_OWORD *)a2 = *(_OWORD *)v7;
    *((_OWORD *)a2 + 1) = *((_OWORD *)v7 + 1);
    *((_OWORD *)a2 + 2) = *((_OWORD *)v7 + 2);
    *((_OWORD *)a2 + 3) = *((_OWORD *)v7 + 3);
    *((_OWORD *)a2 + 4) = *((_OWORD *)v7 + 4);
    *((_OWORD *)a2 + 5) = *((_OWORD *)v7 + 5);
    *((_OWORD *)a2 + 6) = *((_OWORD *)v7 + 6);
    a2 = (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)a2 + 128);
    v9 = *((_OWORD *)v7 + 7);
    v7 = (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)((char *)v7 + 128);
    *((_OWORD *)a2 - 1) = v9;
    --v8;
  }
  while ( v8 );
  *(_OWORD *)a2 = *(_OWORD *)v7;
  *((_OWORD *)a2 + 1) = *((_OWORD *)v7 + 1);
  *((_QWORD *)a2 + 4) = *((_QWORD *)v7 + 4);
  if ( *((_QWORD *)a3 + 31) )
  {
    if ( v5 )
    {
      *v4 = (__int64)v5;
    }
    else
    {
      v10 = operator new(0xF4uLL, 0x63644356u, 256LL, a4);
      *v4 = v10;
      v5 = (_OWORD *)v10;
      if ( !v10 )
      {
        WdLogSingleEntry0(6LL);
        result = 3221225626LL;
        WdLogGlobalForLineNumber = 322;
        return result;
      }
    }
    v12 = (_OWORD *)*((_QWORD *)a3 + 31);
    *v5 = *v12;
    v5[1] = v12[1];
    v5[2] = v12[2];
    v5[3] = v12[3];
    v5[4] = v12[4];
    v5[5] = v12[5];
    v5[6] = v12[6];
    v13 = v5 + 8;
    v14 = v12[7];
    v12 += 8;
    *(v13 - 1) = v14;
    *v13 = *v12;
    v13[1] = v12[1];
    v13[2] = v12[2];
    v13[3] = v12[3];
    v13[4] = v12[4];
    v13[5] = v12[5];
    v13[6] = v12[6];
    *((_DWORD *)v13 + 28) = *((_DWORD *)v12 + 28);
  }
  return 0LL;
}
