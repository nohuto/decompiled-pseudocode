/*
 * XREFs of ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x14007E0B8
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x140074BF0 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 * Callees:
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x14006D790 (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x14006E0EC (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x14006E4EC (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x140070688 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400755B0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14007D65C (-EmitUpdateCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitUpdateCommands@CChannelMarshaler@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z @ 0x14007D6F8 (-EmitUpdateCommands@CChannelMarshaler@DirectComposition@@QEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCommands@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAA_NPEAPEAVCBatch@3@@Z @ 0x14007DCE8 (-EmitCommands@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAA_NPEAPEAVCBatch@.c)
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x14007DF6C (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x14007F1D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x14007F480 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x14007F850 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x14007F914 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x14007FA14 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1400802CC (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400807E8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B918C (-EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?GetAnimationResource@CAnimationBinding@DirectComposition@@QEAAPEAVCResourceMarshaler@2@XZ @ 0x1400B9264 (-GetAnimationResource@CAnimationBinding@DirectComposition@@QEAAPEAVCResourceMarshaler@2@XZ.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1400B9284 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?EmitReleaseCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400B939C (-EmitReleaseCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     McTemplateK0qpqt_EtwWriteTransfer @ 0x1400B948C (McTemplateK0qpqt_EtwWriteTransfer.c)
 *     strnlen @ 0x1401A0A0C (strnlen.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

char __fastcall DirectComposition::CApplicationChannel::BuildBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2,
        struct DirectComposition::CBatch **a3,
        unsigned int a4,
        bool a5,
        struct DirectComposition::CApplicationChannel::CMilCommandBatchParser *a6,
        unsigned int *a7,
        unsigned int a8)
{
  struct DirectComposition::CBatch **v9; // r12
  char v11; // r14
  PSLIST_ENTRY v12; // rax
  struct DirectComposition::CBatch *v13; // r15
  DirectComposition::CBatch *v14; // rbx
  char v15; // cl
  struct DirectComposition::CBatch *v16; // rbx
  struct _ERESOURCE *v17; // rcx
  struct DirectComposition::CBatch **v18; // rax
  int v20; // edx
  struct _ERESOURCE *v21; // rcx
  int v22; // r8d
  struct DirectComposition::CBatchSharedMemoryPool *v23; // rdi
  struct DirectComposition::CBatchSharedMemoryPool *v24; // rbx
  struct _ERESOURCE *v25; // r12
  struct _ERESOURCE **v26; // rax
  struct DirectComposition::CBatchSharedMemoryPool *v27; // rax
  __int64 v28; // rax
  __int64 i; // rbx
  char v30; // al
  _BYTE *v31; // rbx
  _BYTE *v32; // rdi
  _QWORD *v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 j; // rax
  __int64 v37; // rax
  struct _SLIST_ENTRY *Next; // rax
  char v39; // cl
  char v40; // al
  __int64 k; // rax
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 m; // rax
  __int64 n; // rax
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 ii; // rax
  __int64 jj; // rax
  __int64 v52; // rcx
  __int64 v53; // rbx
  __int64 v54; // rbx
  unsigned int *v55; // rdi
  char v56; // di
  bool v57; // bl
  bool v58; // di
  __int64 v59; // rax
  DirectComposition::CApplicationChannel *v60; // rbx
  __int64 *v61; // rax
  __int64 v62; // rcx
  struct DirectComposition::CBatch *BatchFragment; // rax
  int v64; // edx
  int v65; // r8d
  _WORD *v66; // rax
  unsigned int v67; // ebx
  __int64 v68; // rcx
  const char *v69; // r12
  unsigned int v70; // eax
  unsigned int v71; // r13d
  unsigned int v72; // ebx
  DirectComposition::CApplicationChannel *v73; // rcx
  char *v74; // rdi
  DirectComposition::CApplicationChannel *v75; // rdx
  DirectComposition::CEvent *v76; // rcx
  _QWORD *v77; // rax
  _QWORD *v78; // rax
  DirectComposition::CApplicationChannel *v79; // rcx
  DirectComposition::CApplicationChannel *v80; // rbx
  __int64 *v81; // rax
  __int64 v82; // rbx
  DirectComposition::CApplicationChannel *v83; // rcx
  DirectComposition::CApplicationChannel *v84; // rbx
  __int64 *v85; // rax
  __int64 v86; // rbx
  DirectComposition::CApplicationChannel *v87; // rcx
  int v88; // eax
  __int64 v89; // rcx
  signed __int32 v90; // eax
  _DWORD *v91; // rcx
  unsigned int *v92; // rbx
  DirectComposition::CApplicationChannel *v93; // rax
  struct DirectComposition::CBatch *v94; // [rsp+40h] [rbp-20h] BYREF
  struct DirectComposition::CBatchSharedMemoryPool *v95; // [rsp+48h] [rbp-18h] BYREF
  void *v96; // [rsp+50h] [rbp-10h] BYREF
  DirectComposition::CApplicationChannel *v97; // [rsp+58h] [rbp-8h] BYREF
  struct DirectComposition::CBatch *v98; // [rsp+A0h] [rbp+40h] BYREF
  struct DirectComposition::CBatch **v99; // [rsp+A8h] [rbp+48h]
  struct DirectComposition::CBatch **v100; // [rsp+B0h] [rbp+50h]

  v100 = a3;
  v99 = a2;
  v9 = a3;
  v11 = 1;
  if ( *((int *)this + 6) > 2 )
    DirectComposition::CApplicationChannel::ClearAnimationTimeList(this);
  KeResetEvent(*(PRKEVENT *)(*((_QWORD *)this + 30) + 8LL));
  v12 = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 13);
  v13 = 0LL;
  while ( 1 )
  {
    v14 = (DirectComposition::CBatch *)v12;
    if ( !v12 )
      break;
    --*((_DWORD *)this + 63);
    Next = v12[4].Next;
    if ( (unsigned __int64)Next > *((_QWORD *)this + 32) )
    {
      *((_BYTE *)this + 264) |= 2u;
      *((_QWORD *)this + 32) = Next;
    }
    DirectComposition::CBatch::Clear(v14);
    *(_QWORD *)v14 = *((_QWORD *)this + 24);
    *((_QWORD *)this + 24) = v14;
    v12 = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 13);
  }
  v15 = *((_BYTE *)this + 264);
  if ( (v15 & 2) != 0 )
  {
    DirectComposition::CApplicationChannel::RemoveExpiredAnimations(this);
    *((_BYTE *)this + 264) &= ~2u;
    v15 = *((_BYTE *)this + 264);
  }
  v16 = 0LL;
  if ( *((_QWORD *)this + 22)
    || *((_BYTE *)this + 56)
    || (v15 & 0x40) != 0
    || (*((_BYTE *)this + 265) & 3) != 0
    || *((_QWORD *)this + 60)
    || *((_QWORD *)this + 63)
    || *((_QWORD *)this + 56)
    || *((_QWORD *)this + 58)
    || *((_QWORD *)this + 54)
    || *((_QWORD *)this + 62)
    || *((_QWORD *)this + 57)
    || *((_QWORD *)this + 59)
    || *((_QWORD *)this + 55)
    || *((_QWORD *)this + 349)
    || *((_QWORD *)a6 + 4)
    || a7 )
  {
    v94 = 0LL;
    DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
    v13 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 22);
    if ( v13 )
    {
      v94 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 22);
      *((_QWORD *)this + 22) = 0LL;
    }
    else
    {
      v23 = (DirectComposition::CApplicationChannel *)((char *)this + 2632);
      while ( 2 )
      {
        v24 = *(struct DirectComposition::CBatchSharedMemoryPool **)v23;
        v25 = 0LL;
        v95 = 0LL;
        while ( v24 != v23 )
        {
          if ( !*((_BYTE *)v24 + 64) )
          {
            v21 = (struct _ERESOURCE *)*((_QWORD *)v24 + 5);
            if ( (unsigned __int64)(4096LL - (_QWORD)v21) >= 0x228 )
            {
              *((_BYTE *)v24 + 64) = 1;
              v25 = v21;
              v26 = (struct _ERESOURCE **)*((_QWORD *)v24 + 1);
              v95 = v24;
              if ( v26 != (struct _ERESOURCE **)v23 )
              {
                v21 = *(struct _ERESOURCE **)v24;
                if ( *(struct DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v24 + 8LL) == v24
                  && *v26 == (struct _ERESOURCE *)v24 )
                {
                  *v26 = v21;
                  v21->SystemResourcesList.Blink = (struct _LIST_ENTRY *)v26;
                  goto LABEL_40;
                }
                goto LABEL_161;
              }
              goto LABEL_42;
            }
          }
          v24 = *(struct DirectComposition::CBatchSharedMemoryPool **)v24;
        }
        v88 = DirectComposition::CBatchSharedMemoryPool::Create(
                (DirectComposition::CApplicationChannel *)((char *)this + 2632),
                *((_BYTE *)this + 2656),
                &v95);
        LODWORD(v21) = 0;
        if ( v88 < 0 )
        {
          DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0);
          continue;
        }
        break;
      }
      v24 = v95;
      if ( !*((_BYTE *)v95 + 64) )
      {
        v21 = (struct _ERESOURCE *)*((_QWORD *)v95 + 5);
        if ( (unsigned __int64)(4096LL - (_QWORD)v21) >= 0x228 )
        {
          v25 = (struct _ERESOURCE *)*((_QWORD *)v95 + 5);
          *((_BYTE *)v95 + 64) = 1;
        }
      }
LABEL_40:
      v27 = *(struct DirectComposition::CBatchSharedMemoryPool **)v23;
      if ( *(struct DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v23 + 8LL) != v23 )
LABEL_161:
        __fastfail(3u);
      *(_QWORD *)v24 = v27;
      *((_QWORD *)v24 + 1) = v23;
      *((_QWORD *)v27 + 1) = v24;
      *(_QWORD *)v23 = v24;
LABEL_42:
      v28 = *((_QWORD *)v24 + 5);
      if ( (unsigned __int64)(4096 - v28) >= 0x28 )
        *((_QWORD *)v24 + 5) = v28 + 40;
      v13 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 24);
      if ( !v13 )
      {
        do
        {
          if ( (int)DirectComposition::CApplicationChannel::CreateBatch(this, &v94) >= 0 )
          {
            v13 = v94;
            goto LABEL_46;
          }
        }
        while ( *((int *)this + 63) <= 0
             || !DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0) );
        v13 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 24);
      }
      *((_QWORD *)this + 24) = *(_QWORD *)v13;
      v94 = v13;
LABEL_46:
      if ( v13 )
      {
        *((_QWORD *)v13 + 17) = v24;
        *((_QWORD *)v13 + 18) = v25;
      }
      else
      {
        *((_BYTE *)v24 + 64) = 0;
      }
    }
    if ( v13 )
    {
      *((_DWORD *)v13 + 4) = a4;
      *((_BYTE *)v13 + 32) &= ~1u;
      *(_QWORD *)v13 = 0LL;
      ++*((_DWORD *)this + 63);
      *((_BYTE *)this + 264) |= 8u;
      v21 = (struct _ERESOURCE *)*((_QWORD *)this + 49);
      if ( v21 )
      {
        DirectComposition::CCriticalSection::AcquireExclusive(v21);
        if ( ++*((_DWORD *)this + 62) == 1 )
          KeResetEvent(*(PRKEVENT *)(*((_QWORD *)this + 48) + 8LL));
        ExReleaseResourceLite(*((PERESOURCE *)this + 49));
        KeLeaveCriticalRegion();
      }
    }
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100000) != 0 )
      McTemplateK0qpqt_EtwWriteTransfer(
        (_DWORD)v21,
        v20,
        v22,
        *((_DWORD *)this + 7),
        (char)v13,
        *((_DWORD *)v13 + 4),
        0);
    for ( i = *((_QWORD *)this + 61); i; i = *(_QWORD *)(i + 8) )
    {
      DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)(*(_QWORD *)i + 16LL));
      *(_DWORD *)(i + 24) |= 2u;
    }
    *((_QWORD *)v13 + 9) = *((_QWORD *)this + 61);
    *((_QWORD *)this + 61) = 0LL;
    v98 = v13;
    if ( *((_DWORD *)this + 673) && (*((_BYTE *)this + 48) & 1) != 0 )
    {
      v96 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(&v98, 0xCuLL, &v96) )
        goto LABEL_143;
      v89 = *(_QWORD *)(W32GetDCompSessionState() + 24);
      do
        v90 = _InterlockedIncrement((volatile signed __int32 *)(v89 + 16));
      while ( !v90 );
      v91 = v96;
      *((_DWORD *)this + 673) = v90;
      *v91 = 12;
      v91[1] = 259;
      v91[2] = *((_DWORD *)this + 673);
    }
    if ( (*((_BYTE *)this + 264) & 0x40) != 0 )
    {
      v69 = *((_QWORD *)this + 2) ? (const char *)PsGetProcessImageFileName() : "System";
      v70 = strnlen(v69, 0x80uLL);
      v97 = 0LL;
      v71 = v70;
      v72 = (v70 + 16) & 0xFFFFFFFC;
      if ( DirectComposition::CBatch::EnsureBatchBuffer(&v98, v72, (void **)&v97) )
      {
        v73 = v97;
        *(_DWORD *)v97 = v72;
        v74 = (char *)v73 + 12;
        *((_DWORD *)v73 + 1) = 45;
        *((_DWORD *)v73 + 2) = v71;
        memmove((char *)v73 + 12, v69, v71);
        v74[v71] = 0;
        *((_BYTE *)this + 264) &= ~0x40u;
      }
    }
    v30 = *((_BYTE *)this + 264);
    if ( (v30 & 0x40) == 0 )
    {
      if ( v30 < 0 )
      {
        v66 = (_WORD *)*((_QWORD *)this + 340);
        v67 = 0;
        if ( v66 )
        {
          v68 = 151LL;
          do
          {
            if ( !*v66 )
              break;
            ++v66;
            --v68;
          }
          while ( v68 );
          if ( v68 )
            v67 = 2 * (v68 != 0 ? 151 - v68 : 0) + 2;
        }
        v97 = 0LL;
        if ( DirectComposition::CBatch::EnsureBatchBuffer(&v98, (v67 + 15) & 0xFFFFFFFC, (void **)&v97) )
        {
          v79 = v97;
          *(_DWORD *)v97 = (v67 + 15) & 0xFFFFFFFC;
          *((_DWORD *)v79 + 1) = 43;
          *((_DWORD *)v79 + 2) = v67;
          if ( v67 )
            memmove((char *)v79 + 12, *((const void **)this + 340), v67);
          *((_BYTE *)this + 264) &= ~0x80u;
        }
      }
      if ( *((char *)this + 264) >= 0 )
      {
        v31 = (char *)this + 265;
        v32 = (char *)this + 265;
        if ( (*((_BYTE *)this + 265) & 1) != 0 )
        {
          v97 = 0LL;
          if ( DirectComposition::CBatch::EnsureBatchBuffer(&v98, 0x1CuLL, (void **)&v97) )
          {
            v83 = v97;
            v32 = (char *)this + 265;
            *(_DWORD *)v97 = 28;
            *(_OWORD *)((char *)v83 + 4) = 0LL;
            *(_QWORD *)((char *)v83 + 20) = 0LL;
            *((_DWORD *)v83 + 1) = 44;
            *(_QWORD *)((char *)v83 + 12) = *((_QWORD *)this + 337);
            *((_BYTE *)v83 + 20) = 0;
            *((_DWORD *)v83 + 6) = *((_DWORD *)this + 684);
            *v31 &= ~1u;
          }
        }
        if ( (*v31 & 2) != 0 )
        {
          v97 = 0LL;
          if ( DirectComposition::CBatch::EnsureBatchBuffer(&v98, 0x1CuLL, (void **)&v97) )
          {
            v87 = v97;
            *(_DWORD *)v97 = 28;
            *(_OWORD *)((char *)v87 + 4) = 0LL;
            *(_QWORD *)((char *)v87 + 20) = 0LL;
            *((_DWORD *)v87 + 1) = 44;
            *(_QWORD *)((char *)v87 + 12) = *((_QWORD *)this + 338);
            *((_BYTE *)v87 + 20) = 1;
            *((_DWORD *)v87 + 6) = *((_DWORD *)this + 684);
            *v32 &= ~2u;
          }
        }
        if ( (*v32 & 3) == 0 )
        {
          v97 = 0LL;
          if ( !*((_QWORD *)this + 63) )
            goto LABEL_64;
          do
          {
            if ( !DirectComposition::CBatch::EnsureBatchBuffer(&v98, 0x14uLL, (void **)&v97) )
              break;
            v80 = v97;
            *(_DWORD *)v97 = 20;
            *(_OWORD *)((char *)v80 + 4) = 0LL;
            *((_DWORD *)v80 + 1) = 13;
            *((_DWORD *)v80 + 2) = *((_DWORD *)DirectComposition::CAnimationBinding::GetAnimationResource(*((DirectComposition::CAnimationBinding **)this + 63))
                                   + 8);
            *((_DWORD *)v80 + 3) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 63) + 16LL) + 32LL);
            *((_DWORD *)v80 + 4) = *(_DWORD *)(*((_QWORD *)this + 63) + 12LL);
            v81 = (__int64 *)*((_QWORD *)this + 63);
            v82 = *v81;
            *v81 = 0LL;
            DirectComposition::CAnimationBinding::DetachAndDelete(*((PVOID *)this + 63), this);
            *((_QWORD *)this + 63) = v82;
          }
          while ( v82 );
          if ( !*((_QWORD *)this + 63) )
          {
LABEL_64:
            while ( 1 )
            {
              v33 = (_QWORD *)*((_QWORD *)this + 60);
              if ( !v33 )
                break;
              *((_QWORD *)this + 60) = v33[1];
              v37 = *v33;
              v33[1] = 0LL;
              if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, struct DirectComposition::CBatch **))(v37 + 56))(
                      v33,
                      &v98) )
              {
LABEL_142:
                v33[1] = *((_QWORD *)this + 60);
                *((_QWORD *)this + 60) = v33;
                goto LABEL_143;
              }
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v33 + 32LL))(v33) )
                ++*((_DWORD *)v98 + 29);
              (*(void (__fastcall **)(_QWORD *, __int64))(*v33 + 96LL))(v33, 1LL);
            }
            v34 = *((_QWORD *)this + 56);
            if ( v34 )
            {
              do
              {
                if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct DirectComposition::CBatch **))(*(_QWORD *)v34 + 48LL))(
                        v34,
                        &v98) )
                  break;
                *(_DWORD *)(v34 + 16) |= 1u;
                v35 = *(_QWORD *)(v34 + 8);
                if ( (*(_DWORD *)(v34 + 16) & 2) != 0 )
                {
                  for ( j = *(unsigned int *)(v34 + 36); (unsigned int)j < 0xC2; LODWORD(j) = dword_140270F80[j] )
                  {
                    if ( (_DWORD)j == 158 )
                    {
                      v42 = 456LL;
                      goto LABEL_89;
                    }
                  }
                  for ( k = *(unsigned int *)(v34 + 36); ; LODWORD(k) = dword_140270F80[k] )
                  {
                    if ( (unsigned int)k >= 0xC2 )
                    {
                      v42 = 440LL;
                      goto LABEL_89;
                    }
                    if ( (_DWORD)k == 28 )
                      break;
                  }
                  v42 = 472LL;
LABEL_89:
                  *(_QWORD *)(v34 + 8) = *(_QWORD *)((char *)this + v42);
                  *(_QWORD *)((char *)this + v42) = v34;
                }
                else
                {
                  *(_QWORD *)(v34 + 8) = 0LL;
                }
                v34 = v35;
              }
              while ( v35 );
            }
            *((_QWORD *)this + 56) = v34;
            if ( !v34 )
            {
              v43 = *((_QWORD *)this + 58);
              if ( v43 )
              {
                do
                {
                  if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct DirectComposition::CBatch **))(*(_QWORD *)v43 + 48LL))(
                          v43,
                          &v98) )
                    break;
                  *(_DWORD *)(v43 + 16) |= 1u;
                  v44 = *(_QWORD *)(v43 + 8);
                  if ( (*(_DWORD *)(v43 + 16) & 2) != 0 )
                  {
                    for ( m = *(unsigned int *)(v43 + 36); (unsigned int)m < 0xC2; LODWORD(m) = dword_140270F80[m] )
                    {
                      if ( (_DWORD)m == 158 )
                      {
                        v47 = 456LL;
                        goto LABEL_104;
                      }
                    }
                    for ( n = *(unsigned int *)(v43 + 36); ; LODWORD(n) = dword_140270F80[n] )
                    {
                      if ( (unsigned int)n >= 0xC2 )
                      {
                        v47 = 440LL;
                        goto LABEL_104;
                      }
                      if ( (_DWORD)n == 28 )
                        break;
                    }
                    v47 = 472LL;
LABEL_104:
                    *(_QWORD *)(v43 + 8) = *(_QWORD *)((char *)this + v47);
                    *(_QWORD *)((char *)this + v47) = v43;
                  }
                  else
                  {
                    *(_QWORD *)(v43 + 8) = 0LL;
                  }
                  v43 = v44;
                }
                while ( v44 );
              }
              *((_QWORD *)this + 58) = v43;
              if ( !v43 )
              {
                v48 = *((_QWORD *)this + 54);
                if ( v48 )
                {
                  do
                  {
                    if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct DirectComposition::CBatch **))(*(_QWORD *)v48 + 48LL))(
                            v48,
                            &v98) )
                      break;
                    *(_DWORD *)(v48 + 16) |= 1u;
                    v49 = *(_QWORD *)(v48 + 8);
                    if ( (*(_DWORD *)(v48 + 16) & 2) != 0 )
                    {
                      for ( ii = *(unsigned int *)(v48 + 36); (unsigned int)ii < 0xC2; LODWORD(ii) = dword_140270F80[ii] )
                      {
                        if ( (_DWORD)ii == 158 )
                        {
                          v52 = 456LL;
                          goto LABEL_119;
                        }
                      }
                      for ( jj = *(unsigned int *)(v48 + 36); ; LODWORD(jj) = dword_140270F80[jj] )
                      {
                        if ( (unsigned int)jj >= 0xC2 )
                        {
                          v52 = 440LL;
                          goto LABEL_119;
                        }
                        if ( (_DWORD)jj == 28 )
                          break;
                      }
                      v52 = 472LL;
LABEL_119:
                      *(_QWORD *)(v48 + 8) = *(_QWORD *)((char *)this + v52);
                      *(_QWORD *)((char *)this + v52) = v48;
                    }
                    else
                    {
                      *(_QWORD *)(v48 + 8) = 0LL;
                    }
                    v48 = v49;
                  }
                  while ( v49 );
                }
                *((_QWORD *)this + 54) = v48;
                if ( !v48
                  && DirectComposition::CChannelMarshaler::EmitUpdateCommands(
                       (DirectComposition::CApplicationChannel *)((char *)this + 56),
                       &v98) )
                {
                  v53 = *((_QWORD *)this + 57);
                  while ( v53
                       && (*(unsigned __int8 (__fastcall **)(__int64, struct DirectComposition::CBatch **))(*(_QWORD *)v53 + 64LL))(
                            v53,
                            &v98) )
                  {
                    *(_DWORD *)(v53 + 16) &= ~2u;
                    v77 = (_QWORD *)(v53 + 8);
                    v53 = *(_QWORD *)(v53 + 8);
                    *v77 = 0LL;
                  }
                  *((_QWORD *)this + 57) = v53;
                  if ( !v53 )
                  {
                    v54 = *((_QWORD *)this + 59);
                    while ( v54
                         && (*(unsigned __int8 (__fastcall **)(__int64, struct DirectComposition::CBatch **))(*(_QWORD *)v54 + 64LL))(
                              v54,
                              &v98) )
                    {
                      *(_DWORD *)(v54 + 16) &= ~2u;
                      v78 = (_QWORD *)(v54 + 8);
                      v54 = *(_QWORD *)(v54 + 8);
                      *v78 = 0LL;
                    }
                    *((_QWORD *)this + 59) = v54;
                    if ( !v54 )
                    {
                      if ( DirectComposition::CApplicationChannel::EmitUpdateCommands(this, &v98) )
                      {
                        if ( !*((_QWORD *)this + 349) )
                          goto LABEL_238;
                        v97 = 0LL;
                        if ( DirectComposition::CBatch::EnsureBatchBuffer(&v98, 0x34uLL, (void **)&v97) )
                        {
                          v75 = v97;
                          *(_DWORD *)v97 = 52;
                          *((_DWORD *)v75 + 1) = 48;
                          *((_DWORD *)v75 + 11) = *(_DWORD *)(*((_QWORD *)this + 349) + 32LL);
                          *((_DWORD *)v75 + 2) = *((_DWORD *)this + 700);
                          *((_DWORD *)v75 + 3) = *((_DWORD *)this + 701);
                          *((_DWORD *)v75 + 4) = *((_DWORD *)this + 702);
                          *((_DWORD *)v75 + 5) = *((_DWORD *)this + 703);
                          *((_DWORD *)v75 + 6) = *((_DWORD *)this + 704);
                          *(_QWORD *)((char *)v75 + 28) = *((_QWORD *)this + 353);
                          *(_QWORD *)((char *)v75 + 36) = *((_QWORD *)this + 354);
                          DirectComposition::CApplicationChannel::ReleaseResource(
                            this,
                            *((struct DirectComposition::CResourceMarshaler **)this + 349));
                          v76 = (DirectComposition::CEvent *)*((_QWORD *)this + 348);
                          *((_QWORD *)this + 349) = 0LL;
                          if ( v76 )
                            DirectComposition::CEvent::`scalar deleting destructor'(v76);
                          *((_QWORD *)this + 348) = 0LL;
                        }
                        if ( !*((_QWORD *)this + 349) )
                        {
LABEL_238:
                          if ( DirectComposition::CApplicationChannel::CMilCommandBatchParser::EmitCommands(a6, &v98) )
                          {
                            v97 = 0LL;
                            if ( !*((_QWORD *)this + 63) )
                              goto LABEL_133;
                            do
                            {
                              if ( !DirectComposition::CBatch::EnsureBatchBuffer(&v98, 0x14uLL, (void **)&v97) )
                                break;
                              v84 = v97;
                              *(_DWORD *)v97 = 20;
                              *(_OWORD *)((char *)v84 + 4) = 0LL;
                              *((_DWORD *)v84 + 1) = 13;
                              *((_DWORD *)v84 + 2) = *((_DWORD *)DirectComposition::CAnimationBinding::GetAnimationResource(*((DirectComposition::CAnimationBinding **)this + 63))
                                                     + 8);
                              *((_DWORD *)v84 + 3) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 63) + 16LL) + 32LL);
                              *((_DWORD *)v84 + 4) = *(_DWORD *)(*((_QWORD *)this + 63) + 12LL);
                              v85 = (__int64 *)*((_QWORD *)this + 63);
                              v86 = *v85;
                              *v85 = 0LL;
                              DirectComposition::CAnimationBinding::DetachAndDelete(*((PVOID *)this + 63), this);
                              *((_QWORD *)this + 63) = v86;
                            }
                            while ( v86 );
                            if ( !*((_QWORD *)this + 63) )
                            {
LABEL_133:
                              v97 = 0LL;
                              if ( !*((_QWORD *)this + 62) )
                                goto LABEL_134;
                              do
                              {
                                if ( !DirectComposition::CBatch::EnsureBatchBuffer(&v98, 0x14uLL, (void **)&v97) )
                                  break;
                                v60 = v97;
                                *(_DWORD *)v97 = 20;
                                *(_OWORD *)((char *)v60 + 4) = 0LL;
                                *((_DWORD *)v60 + 1) = 12;
                                *((_DWORD *)v60 + 2) = *((_DWORD *)DirectComposition::CAnimationBinding::GetAnimationResource(*((DirectComposition::CAnimationBinding **)this + 62))
                                                       + 8);
                                *((_DWORD *)v60 + 3) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 62) + 16LL) + 32LL);
                                *((_DWORD *)v60 + 4) = *(_DWORD *)(*((_QWORD *)this + 62) + 12LL);
                                *(_DWORD *)(*((_QWORD *)this + 62) + 8LL) = *(_DWORD *)(*((_QWORD *)this + 62) + 8LL) & 0xFFFFFFFC | 1;
                                v61 = (__int64 *)*((_QWORD *)this + 62);
                                v62 = *v61;
                                *v61 = 0LL;
                                *((_QWORD *)this + 62) = v62;
                              }
                              while ( v62 );
                              if ( !*((_QWORD *)this + 62) )
                              {
LABEL_134:
                                while ( 1 )
                                {
                                  v33 = (_QWORD *)*((_QWORD *)this + 60);
                                  if ( !v33 )
                                    break;
                                  *((_QWORD *)this + 60) = v33[1];
                                  v59 = *v33;
                                  v33[1] = 0LL;
                                  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, struct DirectComposition::CBatch **))(v59 + 56))(
                                          v33,
                                          &v98) )
                                    goto LABEL_142;
                                  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v33 + 32LL))(v33) )
                                    ++*((_DWORD *)v98 + 29);
                                  (*(void (__fastcall **)(_QWORD *, __int64))(*v33 + 96LL))(v33, 1LL);
                                }
                                v55 = a7;
                                if ( !a7 )
                                  goto LABEL_136;
                                v92 = &a7[a8];
                                while ( v55 < v92 )
                                  DirectComposition::CApplicationChannel::ReleaseResource(this, *v55++);
                                if ( DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(this, &v98)
                                  && DirectComposition::CApplicationChannel::EmitReleaseCommands(this, &v98) )
                                {
LABEL_136:
                                  v56 = *((_BYTE *)this + 264);
                                  v57 = (v56 & 0x10) != 0;
                                  v58 = (v56 & 0x20) != 0;
                                  if ( !*((_DWORD *)this + 673) || (*((_BYTE *)this + 48) & 1) == 0 || !v57 )
                                    goto LABEL_137;
                                  v97 = 0LL;
                                  if ( DirectComposition::CBatch::EnsureBatchBuffer(&v98, 0xCuLL, (void **)&v97) )
                                  {
                                    v93 = v97;
                                    *(_DWORD *)v97 = 12;
                                    *((_DWORD *)v93 + 1) = 270;
                                    *((_BYTE *)v93 + 9) = v58;
                                    *((_BYTE *)v93 + 10) = 0;
                                    *((_BYTE *)v93 + 8) = v57;
                                    goto LABEL_137;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_143:
    v11 = 0;
LABEL_137:
    v16 = v98;
    v9 = v100;
    goto LABEL_138;
  }
  if ( !a5 )
  {
    v17 = (struct _ERESOURCE *)*((_QWORD *)this + 49);
    if ( v17 )
    {
      DirectComposition::CCriticalSection::AcquireExclusive(v17);
      if ( !*((_DWORD *)this + 62) )
        KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 48) + 8LL), 1, 0);
      ExReleaseResourceLite(*((PERESOURCE *)this + 49));
      KeLeaveCriticalRegion();
    }
    goto LABEL_25;
  }
  BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(this, a4, 0, 1, 1);
  v13 = BatchFragment;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x100000) != 0 )
    McTemplateK0qpqt_EtwWriteTransfer(
      *((_DWORD *)BatchFragment + 4),
      v64,
      v65,
      *((_DWORD *)this + 7),
      (char)BatchFragment,
      *((_DWORD *)BatchFragment + 4),
      0);
  v16 = v13;
LABEL_138:
  if ( v13 )
  {
    *((_QWORD *)v13 + 11) = *((_QWORD *)this + 28);
    *((_QWORD *)this + 28) = 0LL;
  }
  if ( v16 )
    *(_BYTE *)(*((_QWORD *)v16 + 17) + 64LL) = 0;
LABEL_25:
  v18 = v99;
  *v9 = v16;
  *v18 = v13;
  if ( v11 )
  {
    if ( v16 )
    {
      v39 = *((_BYTE *)this + 264);
      if ( (v39 & 0x10) != 0 )
      {
        v40 = *((_BYTE *)v16 + 32) | 8;
        *((_BYTE *)v16 + 32) = v40;
        if ( (v39 & 0x20) != 0 )
          *((_BYTE *)v16 + 32) = v40 | 0x10;
        *((_BYTE *)this + 264) &= 0xCFu;
      }
    }
    *((_BYTE *)this + 264) &= ~1u;
  }
  return v11;
}
