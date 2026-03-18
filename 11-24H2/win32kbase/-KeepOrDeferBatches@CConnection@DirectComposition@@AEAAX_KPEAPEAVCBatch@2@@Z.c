/*
 * XREFs of ?KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z @ 0x1400746F0
 * Callers:
 *     ?GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z @ 0x140074160 (-GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z.c)
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x14007424C (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 * Callees:
 *     EtwTraceDCompDeferBatchEvent @ 0x1400CF700 (EtwTraceDCompDeferBatchEvent.c)
 *     ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_KPEA_NPEAW4DeferReason@12@@Z @ 0x1400DCB0C (-ShouldDefer@CBatch@DirectComposition@@QEAA_N_KPEA_NPEAW4DeferReason@12@@Z.c)
 *     ?StartNextFrameNow@CConnection@DirectComposition@@QEAAXXZ @ 0x14010EFCC (-StartNextFrameNow@CConnection@DirectComposition@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CConnection::KeepOrDeferBatches(
        DirectComposition::CConnection *this,
        __int64 a2,
        struct DirectComposition::CBatch **a3)
{
  struct DirectComposition::CBatch *v3; // rdi
  bool v4; // r14
  struct DirectComposition::CBatch **v5; // r12
  struct DirectComposition::CBatch *v8; // rbx
  __int64 v9; // rsi
  bool v10; // zf
  __int64 *v11; // rbx
  bool ShouldDefer; // al
  __int64 v13; // rax
  struct DirectComposition::CBatch **v14; // rax
  int v15; // [rsp+30h] [rbp-10h] BYREF
  struct DirectComposition::CBatch *v16; // [rsp+38h] [rbp-8h]
  bool v17; // [rsp+80h] [rbp+40h] BYREF
  bool v18; // [rsp+90h] [rbp+50h] BYREF
  int v19; // [rsp+98h] [rbp+58h] BYREF

  v3 = *a3;
  v4 = 0;
  v16 = (DirectComposition::CConnection *)((char *)this + 136);
  v17 = 0;
  v5 = a3;
  v8 = v3;
  if ( v3 )
  {
    do
    {
      v9 = *((_QWORD *)v8 + 10);
      if ( v9 )
      {
        if ( *(_BYTE *)(v9 + 33) )
        {
          v15 = 0;
          v10 = (*((_BYTE *)v8 + 32) & 0x20) == 0;
          v18 = 0;
          if ( !v10
            && (!DirectComposition::CBatch::ShouldDefer(
                   v8,
                   *((_QWORD *)this + 20),
                   &v18,
                   (enum DirectComposition::CBatch::DeferReason *)&v15)
             || v15 == 6) )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v9 + 36));
            *((_BYTE *)v8 + 32) &= ~0x20u;
          }
        }
      }
      v8 = *(struct DirectComposition::CBatch **)v8;
    }
    while ( v8 );
    while ( 1 )
    {
      v19 = 0;
      *((_QWORD *)v3 + 6) = a2;
      if ( !v4
        || (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)v3 + 1) + 8LL))(*((_QWORD *)v3 + 1)) == 2
        || *((_DWORD *)v3 + 5) == 5 )
      {
        v11 = (__int64 *)((char *)this + 160);
        ShouldDefer = DirectComposition::CBatch::ShouldDefer(
                        v3,
                        *((_QWORD *)this + 20),
                        &v17,
                        (enum DirectComposition::CBatch::DeferReason *)&v19);
        if ( v4 || (v4 = (*((_BYTE *)v3 + 32) & 0x10) != 0, (*((_BYTE *)v3 + 32) & 0x10) == 0) )
        {
          if ( !ShouldDefer )
          {
LABEL_19:
            if ( (*((_BYTE *)v3 + 32) & 8) != 0 )
              *(_BYTE *)(*((_QWORD *)v3 + 1) + 266LL) = 1;
            if ( *((char *)v3 + 32) < 0 )
              *(_QWORD *)(*((_QWORD *)v3 + 1) + 2776LL) = a2;
            if ( (*((_BYTE *)v3 + 32) & 0x40) != 0 )
              *(_BYTE *)(*((_QWORD *)v3 + 1) + 267LL) = (*(_BYTE *)(*((_QWORD *)v3 + 1) + 265LL) & 0x10) != 0;
            v5 = (struct DirectComposition::CBatch **)v3;
            goto LABEL_26;
          }
        }
        else
        {
          if ( !ShouldDefer )
            goto LABEL_19;
          DirectComposition::CConnection::StartNextFrameNow(this);
        }
      }
      else
      {
        v19 = 7;
        v11 = (__int64 *)((char *)this + 160);
        v17 = 1;
      }
      EtwTraceDCompDeferBatchEvent(
        *(_DWORD *)(*((_QWORD *)v3 + 1) + 28LL),
        (_DWORD)v3,
        *((_DWORD *)v3 + 4),
        *((_QWORD *)v3 + 7),
        *v11,
        v19);
      v13 = *((_QWORD *)v3 + 1);
      *((_QWORD *)v3 + 6) = 0LL;
      *(_BYTE *)(v13 + 49) = 1;
      *v5 = *(struct DirectComposition::CBatch **)v3;
      v14 = (struct DirectComposition::CBatch **)v16;
      v16 = v3;
      *v14 = v3;
      *(_QWORD *)v3 = 0LL;
LABEL_26:
      v3 = *v5;
      if ( !*v5 )
      {
        if ( v17 )
          KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 11) + 8LL), 1, 0);
        return;
      }
    }
  }
}
