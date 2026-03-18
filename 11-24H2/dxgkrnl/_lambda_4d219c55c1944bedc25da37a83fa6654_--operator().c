/*
 * XREFs of _lambda_4d219c55c1944bedc25da37a83fa6654_::operator() @ 0x1401C1D00
 * Callers:
 *     _lambda_1a6c10c8c8641df7e741d522bb5c41ae_::_lambda_invoker_cdecl_ @ 0x14006D3C0 (_lambda_1a6c10c8c8641df7e741d522bb5c41ae_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x14000EEA0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z @ 0x14002C700 (-RtlStringCbCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DxgkCheckAdapterPnPTransitionDoneInSession @ 0x1401FCC38 (DxgkCheckAdapterPnPTransitionDoneInSession.c)
 */

__int64 __fastcall lambda_4d219c55c1944bedc25da37a83fa6654_::operator()(unsigned int **a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned int *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  _BYTE *v8; // rdx
  __int64 v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
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
        if ( *(_DWORD *)(*(_QWORD *)v5 + 8LL) >= (unsigned int)(v4 + 1) )
        {
          v6 = *(_QWORD *)(*(_QWORD *)v5 + 16LL) + 572 * v4;
          memset(v29, 0, 0x23CuLL);
          v7 = 4LL;
          v8 = v29;
          v9 = v6;
          do
          {
            v10 = *((_OWORD *)v8 + 1);
            *(_OWORD *)v9 = *(_OWORD *)v8;
            v11 = *((_OWORD *)v8 + 2);
            *(_OWORD *)(v9 + 16) = v10;
            v12 = *((_OWORD *)v8 + 3);
            *(_OWORD *)(v9 + 32) = v11;
            v13 = *((_OWORD *)v8 + 4);
            *(_OWORD *)(v9 + 48) = v12;
            v14 = *((_OWORD *)v8 + 5);
            *(_OWORD *)(v9 + 64) = v13;
            v15 = *((_OWORD *)v8 + 6);
            *(_OWORD *)(v9 + 80) = v14;
            v16 = *((_OWORD *)v8 + 7);
            v8 += 128;
            *(_OWORD *)(v9 + 96) = v15;
            v9 += 128LL;
            *(_OWORD *)(v9 - 16) = v16;
            --v7;
          }
          while ( v7 );
          v17 = *((_QWORD *)v8 + 6);
          v18 = *((_OWORD *)v8 + 1);
          *(_OWORD *)v9 = *(_OWORD *)v8;
          v19 = *((_OWORD *)v8 + 2);
          *(_OWORD *)(v9 + 16) = v18;
          *(_OWORD *)(v9 + 32) = v19;
          *(_QWORD *)(v9 + 48) = v17;
          *(_DWORD *)(v9 + 56) = *((_DWORD *)v8 + 14);
          v20 = *(_QWORD *)(a2 + 412);
          *(_QWORD *)(v6 + 12) = 0LL;
          *(_DWORD *)(v6 + 568) &= 0xFFFFFFF8;
          *(_DWORD *)(v6 + 544) = 0;
          *(_QWORD *)(v6 + 4) = v20;
          RtlStringCbCopyNW(
            (char *)(v6 + 20),
            (__int64)v8,
            *(char **)(*(_QWORD *)(a2 + 1928) + 8LL),
            **(unsigned __int16 **)(a2 + 1928));
          *(_DWORD *)(v6 + 540) = *(_DWORD *)(a2 + 3004);
          *(_DWORD *)(v6 + 548) = *(_DWORD *)(a2 + 420);
          *(_DWORD *)(v6 + 552) = *(_DWORD *)(a2 + 424);
          *(_DWORD *)(v6 + 556) = *(_DWORD *)(a2 + 428);
          *(_DWORD *)(v6 + 560) = *(_DWORD *)(a2 + 432);
          *(_DWORD *)(v6 + 564) = *(_DWORD *)(a2 + 436);
          v21 = *(_DWORD *)(v6 + 568) ^ ((unsigned __int8)*(_DWORD *)(v6 + 568) ^ (unsigned __int8)(8
                                                                                                  * *(_DWORD *)(a2 + 444))) & 8;
          *(_DWORD *)(v6 + 568) = v21;
          v22 = v21 & 0xFFFFFFEF | (8 * (*(_DWORD *)(a2 + 444) & 2));
          *(_DWORD *)(v6 + 568) = v22;
          v23 = v22 & 0xFFFFFFDF | (4 * (*(_DWORD *)(a2 + 444) & 8));
          *(_DWORD *)(v6 + 568) = v23;
          v24 = v23 & 0xFFFFFFBF | (4 * (*(_DWORD *)(a2 + 444) & 0x10));
          *(_DWORD *)(v6 + 568) = v24;
          v25 = v24 & 0xFFFFFF7F | (4 * (*(_DWORD *)(a2 + 444) & 0x20));
          *(_DWORD *)(v6 + 568) = v25;
          v26 = *(_DWORD *)(a2 + 444) & 0x100 | v25 & 0xFFFFFEFF;
          *(_DWORD *)(v6 + 568) = v26;
          *(_DWORD *)(v6 + 568) = v26 & 0xFFFFFDFF | (*(_DWORD *)(a2 + 444) >> 9) & 0x200;
        }
      }
    }
  }
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
  return 0LL;
}
