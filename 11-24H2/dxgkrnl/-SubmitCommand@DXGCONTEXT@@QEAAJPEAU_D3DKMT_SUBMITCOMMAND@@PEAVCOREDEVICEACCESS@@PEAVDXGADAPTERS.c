/*
 * XREFs of ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAUVIDMM_MULTI_ALLOC@@IE@Z @ 0x1402A6890
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1402A4B90 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140011084 (McTemplateK0p_EtwWriteTransfer.c)
 *     McTemplateK0ppxppttqddddddddq_EtwWriteTransfer @ 0x140012FF8 (McTemplateK0ppxppttqddddddddq_EtwWriteTransfer.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140021DDC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1400338A0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z @ 0x140056FA4 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?VidSchFlushPendingCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@H@Z @ 0x140077984 (-VidSchFlushPendingCommand@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_CONTEXT@@H@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1402C3898 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z @ 0x1402C7050 (-DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEBD@Z @ 0x140301EA0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitCommand(
        DXGCONTEXT *this,
        struct _D3DKMT_SUBMITCOMMAND *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct DXGCONTEXT **a5,
        struct VIDMM_MULTI_ALLOC **a6,
        unsigned int a7,
        unsigned __int8 a8)
{
  __int64 Flags; // rdx
  int v11; // ebx
  __int64 BroadcastContextCount; // r12
  UINT PrivateDriverDataSize; // eax
  __int64 v14; // rcx
  int v16; // eax
  unsigned int v17; // edi
  __int64 v18; // r14
  __int64 *v19; // rdi
  __int64 v20; // rax
  int v21; // ecx
  unsigned int v22; // eax
  __int64 v23; // rax
  int v24; // ecx
  int v25; // r8d
  bool v26; // al
  int v27; // eax
  int v28; // eax
  _DWORD *v29; // rdx
  _DWORD *v30; // rax
  int v31; // ecx
  size_t v32; // r8
  char *pPrivateDriverData; // rdx
  void *v34; // rcx
  __int64 v35; // r14
  __int64 v36; // rax
  UINT v37; // ecx
  __int64 v38; // rbx
  __int64 i; // rdx
  int v40; // eax
  __int64 v41; // rbx
  __int64 *v42; // rax
  __int64 v43; // rax
  int v44; // eax
  int v45; // eax
  __int64 v46; // rcx
  void *v47; // rcx
  __int64 v48; // r14
  __int64 j; // rbx
  __int64 v50; // rax
  __int64 v51; // rbx
  struct VIDMM_ALLOC *v52; // r9
  int v53; // [rsp+A0h] [rbp-718h]
  __int64 v54; // [rsp+A8h] [rbp-710h]
  __int64 v55; // [rsp+B0h] [rbp-708h]
  __int64 v56; // [rsp+B0h] [rbp-708h]
  PVOID Entry[2]; // [rsp+B8h] [rbp-700h] BYREF
  __int64 *v58; // [rsp+C8h] [rbp-6F0h]
  DXGCONTEXT *v59; // [rsp+D0h] [rbp-6E8h]
  struct DXGADAPTERSTOPRESETLOCKSHARED *v60; // [rsp+D8h] [rbp-6E0h]
  struct COREDEVICEACCESS *v61; // [rsp+E0h] [rbp-6D8h]
  size_t v62; // [rsp+E8h] [rbp-6D0h]
  char *v63; // [rsp+F0h] [rbp-6C8h]
  void *v64; // [rsp+F8h] [rbp-6C0h]
  _DXGKARG_VALIDATESUBMITCOMMAND v65; // [rsp+100h] [rbp-6B8h] BYREF
  struct _D3DKMT_PRESENTHISTORYTOKEN v66; // [rsp+330h] [rbp-488h] BYREF

  v60 = a4;
  v61 = a3;
  v59 = this;
  Flags = (unsigned int)a2->Flags;
  v11 = (Flags & 1 | 0x1000) << 15;
  LODWORD(v55) = v11;
  HIDWORD(v55) = 32 * (Flags & 4);
  BroadcastContextCount = (int)a2->BroadcastContextCount;
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  v14 = *((unsigned int *)this + 52);
  if ( PrivateDriverDataSize > (unsigned int)v14 )
  {
    WdLogSingleEntry2(3LL, PrivateDriverDataSize, (unsigned int)v14);
    WdLogGlobalForLineNumber = 2104;
    return 3221225485LL;
  }
  if ( (Flags & 2) != 0 )
  {
    v11 |= 0xA0u;
    LODWORD(v55) = v11;
    v16 = DXGCONTEXT::WaitForQueuedPresentLimit(this, 0, 1u, a3);
    v17 = v16;
    if ( v16 < 0 )
    {
      WdLogSingleEntry2(4LL, this, v16);
      WdLogGlobalForLineNumber = 2123;
      return v17;
    }
  }
  if ( bTracingEnabled )
  {
    if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
        McTemplateK0ppxppttqddddddddq_EtwWriteTransfer(v14, Flags, (__int64)a3, 0LL, 0LL);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventRender, (__int64)a3, 0LL);
    }
  }
  v18 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v54 = v18;
  v58 = (__int64 *)v18;
  Entry[1] = (PVOID)v18;
  v19 = (__int64 *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(v18 + 1424));
  Entry[0] = v19;
  if ( v19 )
  {
    v20 = *(_QWORD *)(v18 + 16);
    v21 = *(int *)(v20 + 2736) < 0x2000 ? 1 : *(_DWORD *)(v20 + 296);
    v22 = *(int *)(v20 + 2736) >= 0x2000 || *(_BYTE *)(v20 + 3036)
        ? *(_DWORD *)(v20 + 2944) * (72 * v21 + 224) + 8 * v21 + 616
        : 1304;
    memset(v19, 0, v22);
    v23 = *(_QWORD *)(v18 + 16);
    v24 = *(int *)(v23 + 2736) < 0x2000 ? 1 : *(_DWORD *)(v23 + 296);
    v25 = *(_DWORD *)(v23 + 2944);
    v26 = *(int *)(v23 + 2736) >= 0x2000 || *(_BYTE *)(v23 + 3036);
    *((_BYTE *)v19 + 356) = v26;
    if ( v26 )
    {
      *((_DWORD *)v19 + 151) = v25;
      *((_DWORD *)v19 + 152) = v24;
      *((_DWORD *)v19 + 153) = v25 * (72 * v24 + 224) + 16;
      v27 = v25 * (72 * v24 + 224) + 616;
      *((_DWORD *)v19 + 138) = v27;
      *((_DWORD *)v19 + 139) = v27 + 8 * v24;
    }
  }
  if ( !v19 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2166;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate VidSchSubmitData",
      2166LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  *v19 = v55;
  if ( (v11 & 0x20) != 0 )
  {
    v28 = 2048;
    if ( (int)BroadcastContextCount > 1 )
      v28 = 3072;
    *(_DWORD *)v19 = v11 & 0xFFFFFBFF | v28;
    if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1896LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
      *((_DWORD *)v19 + 29) = 0;
  }
  if ( *((_DWORD *)this + 52) )
  {
    v29 = *(_DWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
    if ( !a2->PrivateDriverDataSize && v29[570] < 0x8000u && (v29[105] == 4318 || (v29[111] & 0x10) != 0) )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2200;
      CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)Entry);
      return 3221225485LL;
    }
    v30 = ExAllocateFromLookasideListEx(*((PLOOKASIDE_LIST_EX *)this + 61));
    if ( !v30 )
    {
      CVidSchSubmitData::~CVidSchSubmitData((CVidSchSubmitData *)Entry);
      return 3221225495LL;
    }
    v19[2] = (__int64)v30;
    v31 = *((_DWORD *)this + 52);
    *(_QWORD *)v30 = *((_QWORD *)this + 61);
    v30[2] = v31;
    v30[3] = 1;
    if ( a8 )
    {
      v32 = a2->PrivateDriverDataSize;
      v62 = v32;
      pPrivateDriverData = (char *)a2->pPrivateDriverData;
      v63 = pPrivateDriverData;
      v34 = (void *)(v19[2] + 16);
      v64 = v34;
      if ( &pPrivateDriverData[v32] < pPrivateDriverData
        || (unsigned __int64)&pPrivateDriverData[v32] > MmUserProbeAddress )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(v34, pPrivateDriverData, v32);
    }
    else
    {
      memmove((void *)(v19[2] + 16), a2->pPrivateDriverData, a2->PrivateDriverDataSize);
    }
  }
  v19[5] = a2->Commands;
  *((_DWORD *)v19 + 13) = a2->CommandLength;
  *((_DWORD *)v19 + 19) = *((_DWORD *)this + 52);
  *((_DWORD *)v19 + 20) = a2->PrivateDriverDataSize;
  v35 = BroadcastContextCount;
  v56 = BroadcastContextCount;
  if ( (*(_DWORD *)&a2->Flags & 4) == 0 )
  {
    if ( *((_DWORD *)this + 52) && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 1360LL) )
    {
      v65.Flags.Value = 0;
      memset(&v65.ContextCount + 1, 0, 0x21CuLL);
      v65.Commands = a2->Commands;
      v65.CommandLength = a2->CommandLength;
      v65.ContextCount = BroadcastContextCount;
      if ( (int)BroadcastContextCount > 0 )
      {
        for ( i = 0LL; i < BroadcastContextCount; ++i )
          v65.Context[i] = (HANDLE)*((_QWORD *)a5[i] + 23);
      }
      v65.pPrivateDriverData = (void *)(v19[2] + 16);
      v65.PrivateDriverDataSize = *((_DWORD *)this + 52);
      v65.UmdPrivateDataSize = a2->PrivateDriverDataSize;
      v40 = ADAPTER_RENDER::DdiValidateSubmitCommand(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), &v65);
      LODWORD(BroadcastContextCount) = v40;
      if ( v40 < 0 )
      {
        WdLogSingleEntry1(3LL, v40);
        WdLogGlobalForLineNumber = 2271;
        goto LABEL_79;
      }
      LODWORD(BroadcastContextCount) = v35;
    }
    goto LABEL_65;
  }
  v36 = v19[2];
  v37 = a2->PrivateDriverDataSize;
  if ( !v37 )
    goto LABEL_65;
  if ( v37 >= 0x108 )
  {
    if ( *(_DWORD *)(v36 + 16) != -16777214 || *(_DWORD *)(v36 + 276) != -16777213 )
    {
      WdLogSingleEntry1(2LL, 4278190082LL);
      WdLogGlobalForLineNumber = 396;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid private driver data tag for NoKmdAccess: %I64d",
        4278190082LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_53;
    }
LABEL_65:
    LODWORD(BroadcastContextCount) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, D3DKMT_HANDLE *, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 808LL))(
                                       *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
                                       *((_QWORD *)this + 2),
                                       a2->NumPrimaries,
                                       a2->WrittenPrimaries,
                                       BroadcastContextCount,
                                       v19 + 25);
    if ( (int)BroadcastContextCount >= 0 )
    {
      v19[43] = (__int64)a6;
      *((_DWORD *)v19 + 88) = a7;
      v53 = 0;
      if ( v35 <= 0 )
      {
LABEL_75:
        if ( (*(_DWORD *)&a2->Flags & 2) != 0 )
        {
          memset(&v66, 0, sizeof(v66));
          v66.Model = D3DKMT_PM_REDIRECTED_VISTABLT;
          v66.Token.Flip.FenceValue = a2->PresentHistoryToken;
          v45 = SubmitPresentHistoryToken(&v66, v61, v60, 0LL, 0, 0LL, 0LL, 0LL, this, 0LL, 0LL);
          LODWORD(BroadcastContextCount) = v45;
          if ( (int)(v45 + 0x80000000) >= 0 && v45 != -1073741130 )
          {
            WdLogSingleEntry2(3LL, this, v45);
            WdLogGlobalForLineNumber = 2402;
            LODWORD(BroadcastContextCount) = 0;
          }
        }
      }
      else
      {
        v41 = 0LL;
        v42 = v19 + 2;
        v58 = v19 + 2;
        while ( 1 )
        {
          v43 = *v42;
          if ( v43 )
            _InterlockedIncrement((volatile signed __int32 *)(v43 + 12));
          if ( *((struct _KTHREAD **)a5[v41] + 56) != KeGetCurrentThread() )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 2310;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"pBroadcastContext[i]->GetContextLock()->IsExclusiveOwner()",
              2310LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          v19 = (__int64 *)Entry[0];
          v44 = (*(__int64 (__fastcall **)(_QWORD, PVOID))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                             + 16LL)
                                                                                 + 736LL)
                                                                     + 8LL)
                                                         + 432LL))(
                  *((_QWORD *)a5[v41] + 32),
                  Entry[0]);
          BroadcastContextCount = v44;
          if ( v44 < 0 )
            break;
          *(_DWORD *)Entry[0] &= ~0x800u;
          ++v53;
          ++v41;
          v42 = v58;
          if ( v41 >= v35 )
            goto LABEL_75;
        }
        v47 = (void *)*((_QWORD *)Entry[0] + 2);
        if ( v47 )
          CRefCountedBuffer::RefCountedBufferRelease(v47);
        v48 = v53;
        for ( j = v53;
              j >= 0;
              VIDSCH_EXPORT::VidSchFlushPendingCommand(
                *(VIDSCH_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL),
                *((struct _VIDSCH_CONTEXT **)a5[j--] + 32)) )
        {
          ;
        }
        v50 = v56;
        if ( v53 < v56 )
        {
          do
          {
            v51 = 0LL;
            if ( a2->NumPrimaries )
            {
              do
              {
                v52 = (struct VIDMM_ALLOC *)*((_QWORD *)Entry[0] + v51 + 26);
                if ( v52 )
                  VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
                    *(VIDMM_EXPORT **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL),
                    *(struct VIDMM_GLOBAL **)(*(_QWORD *)(*((_QWORD *)a5[v48] + 2) + 16LL) + 768LL),
                    0,
                    v52);
                v51 = (unsigned int)(v51 + 1);
              }
              while ( (unsigned int)v51 < a2->NumPrimaries );
              v50 = v56;
            }
            ++v48;
          }
          while ( v48 < v50 );
        }
        WdLogSingleEntry2(3LL, this, BroadcastContextCount);
        WdLogGlobalForLineNumber = 2363;
      }
    }
    else
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 2286;
    }
    goto LABEL_79;
  }
  v38 = v37;
  WdLogSingleEntry1(2LL, v37);
  WdLogGlobalForLineNumber = 390;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Invalid private driver data size for NoKmdAccess: %I64d",
    v38,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_53:
  LODWORD(BroadcastContextCount) = -1073741811;
LABEL_79:
  v46 = v19[2];
  if ( v46 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v46 + 12), 0xFFFFFFFF) == 1 )
    {
      if ( *(_QWORD *)v46 )
        ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v46, (PVOID)v46);
      else
        ExFreePoolWithTag((PVOID)v46, 0);
    }
    v19 = (__int64 *)Entry[0];
  }
  ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)(v54 + 1424), v19);
  return (unsigned int)BroadcastContextCount;
}
