/*
 * XREFs of ?InitializeVSyncPhaseState@DXGADAPTER@@AEAAJXZ @ 0x140190A08
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018D7A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033640 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

__int64 __fastcall DXGADAPTER::InitializeVSyncPhaseState(DXGADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r13d
  unsigned __int64 v6; // rax
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  char *v23; // rax
  __int64 v24; // r12
  char *v25; // rbx
  unsigned int v26; // ebp
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // r14
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v35; // [rsp+60h] [rbp+8h]
  __int64 v36; // [rsp+68h] [rbp+10h]

  if ( (*((_DWORD *)this + 744) & 0x10) != 0 )
    v5 = *((_DWORD *)this + 464);
  else
    v5 = 1;
  v6 = 4LL * v5;
  if ( !is_mul_ok(v5, 4uLL) )
    v6 = -1LL;
  *((_QWORD *)this + 538) = operator new[](v6, 0x4B677844u, 64LL, a4);
  v8 = (unsigned __int64)v5 << 6;
  if ( !is_mul_ok(v5, 0x40uLL) )
    v8 = -1LL;
  *((_QWORD *)this + 539) = operator new[](v8, 0x4B677844u, 64LL, v7);
  v10 = (unsigned __int64)v5 << 6;
  if ( !is_mul_ok(v5, 0x40uLL) )
    v10 = -1LL;
  *((_QWORD *)this + 540) = operator new[](v10, 0x4B677844u, 64LL, v9);
  v12 = 32LL * v5;
  if ( !is_mul_ok(v5, 0x20uLL) )
    v12 = -1LL;
  *((_QWORD *)this + 541) = operator new[](v12, 0x4B677844u, 64LL, v11);
  v14 = 16LL * v5;
  if ( !is_mul_ok(v5, 0x10uLL) )
    v14 = -1LL;
  *((_QWORD *)this + 542) = operator new[](v14, 0x4B677844u, 64LL, v13);
  v16 = 4LL * v5;
  if ( !is_mul_ok(v5, 4uLL) )
    v16 = -1LL;
  *((_QWORD *)this + 543) = operator new[](v16, 0x4B677844u, 64LL, v15);
  v18 = 8LL * v5;
  if ( !is_mul_ok(v5, 8uLL) )
    v18 = -1LL;
  *((_QWORD *)this + 550) = operator new[](v18, 0x4B677844u, 64LL, v17);
  v20 = 8LL * v5;
  if ( !is_mul_ok(v5, 8uLL) )
    v20 = -1LL;
  *((_QWORD *)this + 549) = operator new[](v20, 0x4B677844u, 64LL, v19);
  v22 = 112LL * v5;
  if ( !is_mul_ok(v5, 0x70uLL) )
    v22 = -1LL;
  v23 = (char *)operator new[](v22, 0x4B677844u, 64LL, v21);
  v24 = 0LL;
  v25 = v23;
  if ( v23 )
    `vector constructor iterator'(v23, 112LL, v5, (void (__fastcall *)(char *))VSYNC_TIME_STATS::VSYNC_TIME_STATS);
  else
    v25 = 0LL;
  *((_QWORD *)this + 551) = v25;
  if ( !*((_QWORD *)this + 538)
    || !*((_QWORD *)this + 539)
    || !*((_QWORD *)this + 540)
    || !*((_QWORD *)this + 541)
    || !*((_QWORD *)this + 542)
    || !*((_QWORD *)this + 543)
    || !*((_QWORD *)this + 550)
    || !*((_QWORD *)this + 549)
    || !v25 )
  {
    return 3221225495LL;
  }
  v26 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( v5 )
  {
    v28 = 0LL;
    v36 = 0LL;
    v35 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    do
    {
      *(_DWORD *)(v28 + *((_QWORD *)this + 538)) = 0;
      KeInitializeTimer((PKTIMER)(v24 + *((_QWORD *)this + 539)));
      *(_QWORD *)(v30 + *((_QWORD *)this + 542)) = this;
      *(_DWORD *)(*((_QWORD *)this + 542) + v30 + 8) = v26;
      KeInitializeDpc(
        (PRKDPC)(v24 + *((_QWORD *)this + 540)),
        (PKDEFERRED_ROUTINE)DxgkpVSyncPhaseTimerDpc,
        (PVOID)(v31 + *((_QWORD *)this + 542)));
      v32 = *((_QWORD *)this + 541);
      v30 += 16LL;
      v33 = v31 + *((_QWORD *)this + 542);
      ++v26;
      v24 += 64LL;
      v31 += 16LL;
      *(_QWORD *)(v29 + v32) = 0LL;
      *(_QWORD *)(v29 + v32 + 16) = DxgkpProcessVSyncPhaseThread;
      *(_QWORD *)(v29 + v32 + 24) = v33;
      v29 += 32LL;
      v28 = v35 + 4;
      v35 += 4LL;
      *(LARGE_INTEGER *)(v36 + *((_QWORD *)this + 551)) = PerformanceCounter;
      v36 += 112LL;
    }
    while ( v26 < v5 );
  }
  return 0LL;
}
