/*
 * XREFs of _lambda_9212365dda97cb37a6803fd149b753fd_::operator() @ 0x1401C1F5C
 * Callers:
 *     _lambda_32314699c3d123d464792da9f7a50c6a_::_lambda_invoker_cdecl_ @ 0x14006D400 (_lambda_32314699c3d123d464792da9f7a50c6a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14002C700 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DxgkCheckAdapterPnPTransitionDoneInSession @ 0x1401FCC38 (DxgkCheckAdapterPnPTransitionDoneInSession.c)
 */

__int64 __fastcall lambda_9212365dda97cb37a6803fd149b753fd_::operator()(unsigned int **a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned int *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  _OWORD *v8; // rax
  _OWORD *v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  _BYTE v28[32]; // [rsp+20h] [rbp-268h] BYREF
  _BYTE v29[584]; // [rsp+40h] [rbp-248h] BYREF

  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)v28,
    (struct DXGADAPTER *)a2,
    1);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
  if ( *(_DWORD *)(a2 + 200) == 1 )
  {
    if ( *(_QWORD *)(a2 + 3128) )
    {
      if ( (unsigned __int8)DxgkCheckAdapterPnPTransitionDoneInSession((struct DXGADAPTER *)a2) )
      {
        v4 = **a1;
        **a1 = v4 + 1;
        v5 = a1[1];
        if ( *(_DWORD *)(*(_QWORD *)v5 + 4LL) >= (unsigned int)(v4 + 1) )
        {
          v6 = *(_QWORD *)(*(_QWORD *)v5 + 8LL) + 568 * v4;
          memset(v29, 0, 0x238uLL);
          v7 = 4LL;
          v8 = v29;
          v9 = (_OWORD *)v6;
          do
          {
            v10 = v8[1];
            *v9 = *v8;
            v11 = v8[2];
            v9[1] = v10;
            v12 = v8[3];
            v9[2] = v11;
            v13 = v8[4];
            v9[3] = v12;
            v14 = v8[5];
            v9[4] = v13;
            v15 = v8[6];
            v9[5] = v14;
            v16 = v8[7];
            v8 += 8;
            v9[6] = v15;
            v9 += 8;
            *(v9 - 1) = v16;
            --v7;
          }
          while ( v7 );
          v17 = v8[1];
          *v9 = *v8;
          v18 = v8[2];
          v19 = *((_QWORD *)v8 + 6);
          v9[1] = v17;
          v9[2] = v18;
          *((_QWORD *)v9 + 6) = v19;
          v20 = *(_QWORD *)(a2 + 412);
          *(_QWORD *)(v6 + 8) = 0LL;
          *(_DWORD *)(v6 + 564) &= 0xFFFFFFF8;
          *(_DWORD *)(v6 + 540) = 0;
          *(_QWORD *)v6 = v20;
          RtlStringCbCopyNW(
            (char *)(v6 + 16),
            0LL,
            *(char **)(*(_QWORD *)(a2 + 1928) + 8LL),
            **(unsigned __int16 **)(a2 + 1928));
          *(_DWORD *)(v6 + 536) = *(_DWORD *)(a2 + 3004);
          *(_DWORD *)(v6 + 544) = *(_DWORD *)(a2 + 420);
          *(_DWORD *)(v6 + 548) = *(_DWORD *)(a2 + 424);
          *(_DWORD *)(v6 + 552) = *(_DWORD *)(a2 + 428);
          *(_DWORD *)(v6 + 556) = *(_DWORD *)(a2 + 432);
          *(_DWORD *)(v6 + 560) = *(_DWORD *)(a2 + 436);
          v21 = *(_DWORD *)(v6 + 564) ^ ((unsigned __int8)*(_DWORD *)(v6 + 564) ^ (unsigned __int8)(8
                                                                                                  * *(_DWORD *)(a2 + 444))) & 8;
          *(_DWORD *)(v6 + 564) = v21;
          v22 = v21 & 0xFFFFFFEF | (8 * (*(_DWORD *)(a2 + 444) & 2));
          *(_DWORD *)(v6 + 564) = v22;
          v23 = v22 & 0xFFFFFFDF | (4 * (*(_DWORD *)(a2 + 444) & 8));
          *(_DWORD *)(v6 + 564) = v23;
          v24 = v23 & 0xFFFFFFBF | (4 * (*(_DWORD *)(a2 + 444) & 0x10));
          *(_DWORD *)(v6 + 564) = v24;
          v25 = v24 & 0xFFFFFF7F | (4 * (*(_DWORD *)(a2 + 444) & 0x20));
          *(_DWORD *)(v6 + 564) = v25;
          v26 = *(_DWORD *)(a2 + 444) & 0x100 | v25 & 0xFFFFFEFF;
          *(_DWORD *)(v6 + 564) = v26;
          *(_DWORD *)(v6 + 564) = v26 & 0xFFFFFDFF | (*(_DWORD *)(a2 + 444) >> 9) & 0x200;
        }
      }
    }
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
  return 0LL;
}
