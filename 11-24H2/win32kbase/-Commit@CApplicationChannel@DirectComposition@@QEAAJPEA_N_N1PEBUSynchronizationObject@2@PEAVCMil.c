/*
 * XREFs of ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x140074BF0
 * Callers:
 *     ?BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x14006CD70 (-BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     ?Synchronize@CSystemChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x14006E744 (-Synchronize@CSystemChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x14006FA48 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x140070F20 (-CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x140074B84 (-ReleaseSystemResource@CSystemChannel@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?BeginDuplicateResource@CSystemChannel@DirectComposition@@QEAAJVResourceHandle@@I@Z @ 0x140075264 (-BeginDuplicateResource@CSystemChannel@DirectComposition@@QEAAJVResourceHandle@@I@Z.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1400755E4 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     NtDCompositionCommitChannel @ 0x1400A5430 (NtDCompositionCommitChannel.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJXZ @ 0x1400E8D3C (-ForceRender@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?ReevaluateMPOCapabilities@CConnection@DirectComposition@@QEAAJXZ @ 0x140130F7C (-ReevaluateMPOCapabilities@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?ReevaluateDDA@CConnection@DirectComposition@@QEAAJXZ @ 0x14014AD80 (-ReevaluateDDA@CConnection@DirectComposition@@QEAAJXZ.c)
 *     DCompositionEnableHwProtectionTeardown @ 0x1402229F4 (DCompositionEnableHwProtectionTeardown.c)
 *     ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1402256AC (-DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 * Callees:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x14007E0B8 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x14007F1D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?ValidateAndTranslateHandles@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAAJXZ @ 0x140081BFC (-ValidateAndTranslateHandles@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAAJ.c)
 *     ?BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z @ 0x1400B85F4 (-BuildNinjaBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K@Z.c)
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1400C9C18 (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObje.c)
 *     ?CollectEffectHashes@CApplicationChannel@DirectComposition@@IEAAPEA_KPEAI@Z @ 0x140224CD8 (-CollectEffectHashes@CApplicationChannel@DirectComposition@@IEAAPEA_KPEAI@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::Commit(
        DirectComposition::CApplicationChannel *this,
        bool *a2,
        bool a3,
        char a4,
        const struct DirectComposition::SynchronizationObject *a5,
        struct CMilProtocolBlock *a6,
        unsigned int *a7,
        unsigned int a8)
{
  int v8; // eax
  char v9; // r15
  unsigned int v12; // r12d
  int v13; // eax
  struct CMilProtocolBlock *v14; // rcx
  int v16; // r13d
  char v17; // si
  __int64 v18; // rax
  struct _ERESOURCE *v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // rbx
  char v23; // al
  _QWORD *v24; // rbx
  char v25; // al
  unsigned __int64 *v26; // rax
  __int64 v27; // r15
  unsigned __int64 *v28; // r14
  unsigned int v29; // r13d
  bool v30; // bl
  struct _ERESOURCE *v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rcx
  unsigned int v34; // edx
  struct DirectComposition::CBatch *BatchFragment; // rax
  unsigned int v36; // r14d
  const struct DirectComposition::SynchronizationObject *v37; // rsi
  unsigned int *v38; // r13
  bool v39; // bl
  int v40; // [rsp+40h] [rbp-59h]
  struct DirectComposition::CBatch *v41; // [rsp+48h] [rbp-51h] BYREF
  struct DirectComposition::CBatch *v42[2]; // [rsp+50h] [rbp-49h] BYREF
  DirectComposition::CApplicationChannel *v43; // [rsp+60h] [rbp-39h] BYREF
  struct CMilProtocolBlock *v44; // [rsp+68h] [rbp-31h]
  struct CMilProtocolBlock *v45; // [rsp+70h] [rbp-29h]
  int v46; // [rsp+78h] [rbp-21h]
  char *v47; // [rsp+80h] [rbp-19h]
  int v48; // [rsp+88h] [rbp-11h]
  __int64 v49; // [rsp+90h] [rbp-9h]
  int v50; // [rsp+98h] [rbp-1h]
  struct DirectComposition::CBatch *v51; // [rsp+E0h] [rbp+47h] BYREF
  bool *v52; // [rsp+E8h] [rbp+4Fh]
  bool v53; // [rsp+F0h] [rbp+57h]

  v53 = a3;
  v52 = a2;
  v8 = *((_DWORD *)this + 102);
  v9 = 0;
  v43 = this;
  LODWORD(v41) = v8;
  LOBYTE(v51) = 0;
  v12 = v8 + 1;
  v45 = 0LL;
  *((_DWORD *)this + 102) = v8 + 1;
  v13 = 0;
  v14 = a6;
  v44 = a6;
  v46 = 0;
  v47 = 0LL;
  v48 = 0;
  v49 = 0LL;
  v50 = 0;
  if ( __PAIR128__((unsigned __int64)a7, (unsigned __int64)a6) != 0 )
  {
    if ( (*((_BYTE *)this + 265) & 4) == 0 )
      return 3221225506LL;
    v13 = DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateHandles((DirectComposition::CApplicationChannel::CMilCommandBatchParser *)&v43);
    v14 = v44;
  }
  v16 = 0;
  if ( v13 < 0 )
    v16 = v13;
  v40 = v16;
  if ( v16 >= 0 )
  {
    v17 = 0;
    LODWORD(a6) = 0;
    if ( a4 )
    {
      v18 = *((_QWORD *)this + 5);
      *((_BYTE *)this + 264) |= 0x30u;
      v19 = *(struct _ERESOURCE **)(v18 + 16);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v19, 1u);
      v20 = *((_QWORD *)this + 5);
      if ( *(_DWORD *)(v20 + 148) )
      {
        v21 = *(_QWORD *)(v20 + 296);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 216LL))(v21);
      }
      ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 16LL));
      KeLeaveCriticalRegion();
      v14 = v44;
    }
    if ( v14 )
    {
      v45 = v14;
      v46 = *((_DWORD *)v14 + 5);
      v47 = (char *)v14 + 24;
      v48 = *((_DWORD *)v14 + 6);
    }
    v22 = (_QWORD *)*((_QWORD *)this + 58);
    if ( v22 )
    {
      do
      {
        if ( v17 )
          break;
        v23 = (*(__int64 (__fastcall **)(_QWORD *))(*v22 + 40LL))(v22);
        v22 = (_QWORD *)v22[1];
        v17 = v23;
      }
      while ( v22 );
    }
    else if ( !*((_QWORD *)this + 59) )
    {
      goto LABEL_39;
    }
    v24 = (_QWORD *)*((_QWORD *)this + 59);
    if ( v24 )
    {
      while ( !v17 )
      {
        v25 = (*(__int64 (__fastcall **)(_QWORD *))(*v24 + 40LL))(v24);
        v24 = (_QWORD *)v24[1];
        v17 = v25;
        if ( !v24 )
          goto LABEL_23;
      }
      goto LABEL_24;
    }
LABEL_23:
    if ( v17 )
    {
LABEL_24:
      v26 = DirectComposition::CApplicationChannel::CollectEffectHashes(this, (unsigned int *)&a6);
      v27 = *((_QWORD *)this + 22);
      v28 = v26;
      v29 = (unsigned int)v41;
      *((_QWORD *)this + 22) = 0LL;
      do
      {
        v41 = 0LL;
        v42[0] = 0LL;
        v30 = DirectComposition::CApplicationChannel::BuildNinjaBatch(this, &v41, v42, v29);
        if ( v41 )
        {
          DirectComposition::CApplicationChannel::SubmitBatch(this, v41, v42[0], *((_BYTE *)this + 48) & 1, 0LL);
          LOBYTE(v51) = 1;
        }
      }
      while ( !v30 );
      *((_QWORD *)this + 22) = v27;
      v31 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 16LL);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v31, 1u);
      v32 = *((_QWORD *)this + 5);
      if ( *(_DWORD *)(v32 + 148) )
      {
        v33 = *(_QWORD *)(v32 + 296);
        if ( v33 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 216LL))(v33);
      }
      ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 16LL));
      KeLeaveCriticalRegion();
      if ( v28 )
      {
        if ( v12 )
          v34 = v12;
        else
          v34 = *((_DWORD *)this + 102) + 1;
        BatchFragment = (struct DirectComposition::CBatch *)*((_QWORD *)this + 22);
        if ( !BatchFragment )
        {
          BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(this, v34, 0, 0, 1);
          *((_QWORD *)this + 22) = BatchFragment;
        }
        *((_DWORD *)BatchFragment + 28) = (_DWORD)a6;
        *((_QWORD *)BatchFragment + 13) = v28;
      }
      v9 = (char)v51;
    }
LABEL_39:
    v36 = a8;
    v37 = a5;
    v38 = a7;
    do
    {
      a6 = 0LL;
      v51 = 0LL;
      v39 = DirectComposition::CApplicationChannel::BuildBatch(
              this,
              &a6,
              &v51,
              v12,
              v53,
              (struct DirectComposition::CApplicationChannel::CMilCommandBatchParser *)&v43,
              v38,
              v36);
      if ( a6 )
      {
        DirectComposition::CApplicationChannel::SubmitBatch(this, a6, v51, *((_BYTE *)this + 48) & 1, v37);
        v9 = 1;
      }
    }
    while ( !v39 );
    if ( v9 )
    {
      *((_DWORD *)this + 103) = v12;
    }
    else
    {
      v42[0] = (struct DirectComposition::CBatch *)v12;
      v42[1] = 0LL;
      *(_OWORD *)((char *)this + 16 * (v12 & 0x7F) + 584) = v12;
    }
    v16 = v40;
    if ( v52 )
      *v52 = *((_DWORD *)this + 143) != 0;
  }
  return (unsigned int)v16;
}
