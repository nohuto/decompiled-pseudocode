/*
 * XREFs of ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x14006FA48
 * Callers:
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x14006FC08 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z @ 0x140223EAC (-Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z.c)
 * Callees:
 *     ?UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z @ 0x14006E920 (-UseSpace@CBatchSharedMemoryPool@DirectComposition@@QEAAPEAX_K@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x140074BF0 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z @ 0x140224F2C (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXK@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::EnableMMCSS(DirectComposition::CSystemChannel *this, char a2)
{
  _DWORD *v4; // rax
  __int64 v5; // r10
  __int64 v6; // r11
  _DWORD *v7; // rbx
  __int64 v8; // rdx
  _WORD *v9; // rcx
  __int16 v10; // ax
  _WORD *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  _OWORD v20[8]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v21; // [rsp+C0h] [rbp-48h]
  __int128 v22; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-28h]
  int v24; // [rsp+E8h] [rbp-20h]
  wchar_t v25; // [rsp+ECh] [rbp-1Ch]

  DirectComposition::CApplicationChannel::PreallocateNextBatch(this, 0);
  v4 = (_DWORD *)DirectComposition::CBatchSharedMemoryPool::UseSpace(
                   *(DirectComposition::CBatchSharedMemoryPool **)(*((_QWORD *)this + 22) + 136LL),
                   0x9CuLL);
  v7 = v4;
  if ( !v4 )
    return 3221225473LL;
  *(_QWORD *)(v5 + 152) += v6;
  *v4 = v6;
  memset(v20, 0, (unsigned int)(v6 - 12));
  if ( a2 )
  {
    v24 = *(_DWORD *)L"er";
    v8 = 64LL;
    v9 = v20;
    v22 = *(_OWORD *)L"Window Manager";
    v25 = aWindowManager[14];
    v23 = *(_QWORD *)L"anager";
    do
    {
      if ( v8 == 49 )
        break;
      v10 = *(_WORD *)((char *)v9 + (char *)&v22 - (char *)v20);
      if ( !v10 )
        break;
      *v9++ = v10;
      --v8;
    }
    while ( v8 );
    v11 = v9 - 1;
    if ( v8 )
      v11 = v9;
    *v11 = 0;
    DWORD1(v21) = 0;
  }
  v12 = v20[1];
  *(_OWORD *)(v7 + 3) = v20[0];
  v13 = v20[2];
  v7[1] = 271;
  *(_OWORD *)(v7 + 7) = v12;
  v14 = v20[3];
  *(_OWORD *)(v7 + 11) = v13;
  v15 = v20[4];
  *(_OWORD *)(v7 + 15) = v14;
  v16 = v20[5];
  *(_OWORD *)(v7 + 19) = v15;
  v17 = v20[6];
  *(_OWORD *)(v7 + 23) = v16;
  v18 = v21;
  *(_OWORD *)(v7 + 27) = v17;
  *(_OWORD *)(v7 + 31) = v20[7];
  *(_OWORD *)(v7 + 35) = v18;
  return DirectComposition::CApplicationChannel::Commit(this, 0LL, 1, 0, 0LL, 0LL, 0LL, 0);
}
