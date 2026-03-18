/*
 * XREFs of VidSchiSubmitRenderVirtualCommand @ 0x1400AE8E0
 * Callers:
 *     VidSchiRun_PriorityTable @ 0x1400AE500 (VidSchiRun_PriorityTable.c)
 *     VidSchiSubmitQueueCommand @ 0x1400AE770 (VidSchiSubmitQueueCommand.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x14002AB40 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchIsTDRPending @ 0x1400362C0 (VidSchIsTDRPending.c)
 *     ?UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ @ 0x14003819C (-UpdateHistoryBuffer@_VIDSCH_QUEUE_PACKET@@QEAAXXZ.c)
 *     ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x140043478 (-DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 *     ?VidMmRecordVaPagingHistorySetPageDirectory@@YAXPEAVVIDMM_GLOBAL@@PEBVVIDMM_PROCESS@@PEBU_DXGKARG_SETROOTPAGETABLE@@PEBX@Z @ 0x140043F04 (-VidMmRecordVaPagingHistorySetPageDirectory@@YAXPEAVVIDMM_GLOBAL@@PEBVVIDMM_PROCESS@@PEBU_DXGKAR.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     memset @ 0x140056780 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1400AD1D4 (VidSchWaitForCompletionEvent.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1400AEE4C (VidSchiSendToExecutionQueueWithWait.c)
 *     VidSchiDiscardQueuePacket @ 0x1400B0048 (VidSchiDiscardQueuePacket.c)
 */

__int64 __fastcall VidSchiSubmitRenderVirtualCommand(_VIDSCH_QUEUE_PACKET *this)
{
  _QWORD *v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 i; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // r8
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  bool v19; // cf
  unsigned int v20; // ecx
  UINT64 SegmentOffset; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // r15
  UINT v26; // r9d
  UINT v27; // r8d
  __int64 v28; // rax
  const struct VIDMM_PROCESS *v29; // r12
  __int64 v30; // rbx
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rcx
  void (__fastcall *v43)(_QWORD); // rax
  _DWORD v44[40]; // [rsp+70h] [rbp-F8h] BYREF
  _DXGKARG_SETROOTPAGETABLE v45; // [rsp+110h] [rbp-58h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 11);
  v3 = v1[13];
  v4 = v1[12];
  v5 = *(_QWORD *)(v3 + 32);
  if ( (*(_BYTE *)(v5 + 3268) & 1) != 0
    || VidSchIsTDRPending(v5)
    || *(_BYTE *)(v3 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v3 + 200), 0, 0) )
  {
    VidSchiDiscardQueuePacket(this);
    return 3221225473LL;
  }
  else
  {
    v6 = *(unsigned __int16 *)(v4 + 4);
    v7 = *(__int64 **)(v5 + 688);
    if ( (unsigned int)v6 < *(_DWORD *)(v5 + 760) )
      v7 += v6;
    v8 = *v7;
    v9 = ++*(_QWORD *)(v8 + 48);
    *((_QWORD *)this + 15) = v9;
    _VIDSCH_QUEUE_PACKET::UpdateHistoryBuffer(this);
    for ( i = *(_QWORD *)(v4 + 24); ; VidSchWaitForCompletionEvent(i, (__int64)v44, 20) )
    {
      *(_QWORD *)(i + 1712) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(i + 1672));
      v11 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(i + 1992), (_QWORD **)(v4 + 16528), 0LL);
      if ( v11 )
        break;
      memset(v44, 0, sizeof(v44));
      v40 = *(unsigned __int16 *)(v4 + 4);
      v44[8] |= 0x41u;
      v44[12] = v40;
      v44[5] = 1;
    }
    v12 = v11 - 2;
    memset((char *)v11 - 12, 0, 0xCCuLL);
    v12[7] = this;
    *(_DWORD *)v12 = 912353622;
    v12[6] = v1;
    v12[8] = *((_QWORD *)this + 95);
    v13 = v12[7];
    v12[10] = MEMORY[0xFFFFF78000000320];
    v14 = *((_DWORD *)v12 + 23);
    *((_DWORD *)v12 + 18) = 7;
    v15 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(*(_DWORD *)(v13 + 72) >> 3)) & 4;
    *((_DWORD *)v12 + 23) = v15;
    v16 = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(*(_DWORD *)(v13 + 72) >> 4)) & 8;
    *((_DWORD *)v12 + 23) = v16;
    v17 = v16 ^ ((unsigned __int16)v16 ^ (unsigned __int16)(*(_DWORD *)(v13 + 72) >> 8)) & 0x100;
    *((_DWORD *)v12 + 23) = v17;
    v18 = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)(4 * *(_DWORD *)(v13 + 72))) & 0x10 | 0x2000;
    *((_DWORD *)v12 + 23) = v18;
    v19 = *((_DWORD *)this + 32) != 0;
    v12[13] = v9;
    v20 = v18 & 0xFFFFBFFF | (v19 ? 0x4000 : 0);
    *((_DWORD *)v12 + 22) = 0;
    SegmentOffset = v12[8];
    *((_DWORD *)v12 + 23) = v20;
    *((_DWORD *)v12 + 24) = *((_DWORD *)this + 28);
    if ( SegmentOffset )
    {
      v37 = v20 | 2;
      *((_DWORD *)v12 + 23) = v37;
      *((_DWORD *)v12 + 23) = v37 ^ ((unsigned __int8)v37 ^ (unsigned __int8)BYTE1(*((_DWORD *)this + 18))) & 1;
      v12[14] = *(_QWORD *)(SegmentOffset + 152);
    }
    v12[22] = *(_QWORD *)(v13 + 792);
    if ( (*(_DWORD *)(v13 + 752) & 0x8000000) != 0 )
    {
      v22 = *(_QWORD *)(v13 + 768);
      if ( v22 )
      {
        v23 = v22 + 16;
      }
      else
      {
        v39 = *(_QWORD *)(v13 + 760);
        if ( v39 )
          v23 = *(_QWORD *)(v39 + 120);
        else
          v23 = 0LL;
      }
      v12[24] = v23;
      *((_DWORD *)v12 + 46) = *(_DWORD *)(v13 + 832);
    }
    else
    {
      v12[24] = 0LL;
    }
    *((_DWORD *)v12 + 38) = 0;
    *((_DWORD *)v12 + 39) = *(_DWORD *)(v13 + 828);
    *((_DWORD *)v12 + 36) = 0;
    *((_DWORD *)v12 + 37) = *(_DWORD *)(v13 + 804);
    v24 = *((_DWORD *)this + 18);
    if ( (v24 & 1) != 0 )
    {
      v42 = *((unsigned int *)this + 217);
      if ( (_DWORD)v42 != -1 && (v24 & 0x40000) == 0 )
      {
        SegmentOffset = *(unsigned int *)(*(_QWORD *)(v5 + 8 * v42 + 3432) + 44488LL);
        if ( (_DWORD)SegmentOffset != -1 )
        {
          v43 = *(void (__fastcall **)(_QWORD))(v5 + 3288);
          if ( v43 )
            v43(*(_QWORD *)(v5 + 3352));
        }
        *((_DWORD *)v12 + 23) |= 0x800u;
      }
    }
    if ( (*(_DWORD *)(v4 + 12) & 0x10) != 0 )
    {
      v25 = 0LL;
      v26 = 0;
      SegmentOffset = 0LL;
      v27 = 0;
      v28 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12[6] + 104LL) + 40LL) + 8LL) + 64LL);
      if ( v28 )
      {
        v29 = *(const struct VIDMM_PROCESS **)(v28 + 8);
        if ( v29 )
        {
          v30 = *(_QWORD *)(*((_QWORD *)v29 + 2) + 8LL * *(unsigned int *)(*(_QWORD *)(v5 + 16) + 240LL));
          if ( v30 )
          {
            v31 = *(_QWORD *)(v30 + 184);
            if ( v31 )
            {
              v32 = *(_QWORD *)(v31 + 120) + 32LL * *(unsigned __int16 *)(v4 + 6);
              if ( v32
                && *(_QWORD *)v32
                && (v33 = *(__int64 **)(*(_QWORD *)v32 + 16LL)) != 0LL
                && (v34 = *v33, *(_QWORD *)(v34 + 64)) )
              {
                v25 = *(_QWORD *)(v32 + 8);
                v27 = *(_DWORD *)(v32 + 16);
                SegmentOffset = *(_QWORD *)(v34 + 72);
                v26 = *(_DWORD *)(v32 + 24);
              }
              else
              {
                WdLogSingleEntry2(1LL, v31, *(unsigned __int16 *)(v4 + 6));
                WdLogGlobalForLineNumber = 2708;
                DxgkLogInternalTriageEvent(v38, 0x40000LL);
                SegmentOffset = 0LL;
                v27 = 0;
                v26 = 0;
              }
            }
          }
          v35 = v12[6];
          if ( *(_QWORD *)(v35 + 816) != v25 && v27 )
          {
            *(_QWORD *)(v35 + 816) = v25;
            v41 = v12[6];
            *(&v45.Address.SegmentId + 1) = 0;
            *(&v45.NumEntries + 1) = 0;
            v45.hContext = *(HANDLE *)(v41 + 64);
            v45.Address.SegmentId = v26;
            v45.Address.SegmentOffset = SegmentOffset;
            v45.NumEntries = v27;
            if ( (*(_DWORD *)(v41 + 112) & 0x1000) == 0 )
            {
              ADAPTER_RENDER::DdiSetRootPageTable(*(ADAPTER_RENDER **)(v5 + 8), &v45);
              SegmentOffset = v45.Address.SegmentOffset;
            }
            v1[103] = SegmentOffset;
            VidMmRecordVaPagingHistorySetPageDirectory(
              *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v5 + 8) + 768LL),
              v29,
              &v45,
              v1);
          }
        }
      }
    }
    LOBYTE(SegmentOffset) = (*(_DWORD *)(v3 + 48) & 0x19) == 0;
    VidSchiSendToExecutionQueueWithWait(v12, SegmentOffset);
    return 0LL;
  }
}
