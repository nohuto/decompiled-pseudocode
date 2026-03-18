/*
 * XREFs of ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1402C6610
 * Callers:
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1402C5A10 (DxgkSubmitCommandToHwQueueInternal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x140021DDC (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1400338A0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z @ 0x140056FA4 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x14018A51C (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     ?DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z @ 0x1402C7050 (-DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z.c)
 */

__int64 __fastcall DXGHWQUEUE::SubmitCommand(
        DXGHWQUEUE *this,
        const struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a2,
        char a3)
{
  __int64 v6; // rcx
  __int64 PrivateDriverDataSize; // rax
  __int64 v8; // r13
  PVOID *v9; // rdi
  __int64 v10; // rax
  int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // rax
  int v14; // ecx
  int v15; // r8d
  bool v16; // al
  int v17; // eax
  unsigned __int64 NumPrimaries; // r13
  struct _LOOKASIDE_LIST_EX *v19; // r13
  _DWORD *v20; // rax
  _DWORD *v21; // rcx
  UINT v22; // eax
  char *pPrivateDriverData; // rdx
  size_t v24; // r8
  void *v25; // rcx
  UINT v26; // r15d
  ADAPTER_RENDER *v27; // r13
  int v28; // eax
  __int64 v29; // r15
  __int64 v30; // rax
  PVOID *v31; // r13
  volatile signed __int32 *v32; // rax
  int v33; // eax
  PVOID v34; // rax
  char *Pool2; // rcx
  const D3DKMT_HANDLE *v37; // rdx
  ULONG64 v38; // rax
  void *WrittenPrimaries; // rax
  UINT i; // r13d
  struct VIDMM_ALLOC *v41; // r9
  __int64 v42; // rcx
  void *v44; // [rsp+58h] [rbp-2E0h]
  void *v45; // [rsp+58h] [rbp-2E0h]
  struct _LOOKASIDE_LIST_EX *Lookaside; // [rsp+60h] [rbp-2D8h]
  int v47; // [rsp+88h] [rbp-2B0h]
  struct _DXGKARG_VALIDATESUBMITCOMMAND v48; // [rsp+C0h] [rbp-278h] BYREF
  PVOID P; // [rsp+2F0h] [rbp-48h]
  char v50[8]; // [rsp+2F8h] [rbp-40h] BYREF
  int v51; // [rsp+300h] [rbp-38h]

  LODWORD(v44) = 0x8000000;
  v6 = *((_QWORD *)this + 2);
  v47 = *(_DWORD *)(v6 + 392);
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  if ( (unsigned int)PrivateDriverDataSize > *(_DWORD *)(v6 + 208) )
  {
    WdLogSingleEntry2(1LL, PrivateDriverDataSize, *(unsigned int *)(v6 + 208));
    WdLogGlobalForLineNumber = 1168;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"PrivateDriverDataSize > m_ContextInfo.DmaBufferPrivateDataSize 0x%I64x, 0x%I64x",
      a2->PrivateDriverDataSize,
      *(unsigned int *)(*((_QWORD *)this + 2) + 208LL),
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL);
  Lookaside = (struct _LOOKASIDE_LIST_EX *)(v8 + 1424);
  v9 = (PVOID *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(v8 + 1424));
  if ( v9 )
  {
    v10 = *(_QWORD *)(v8 + 16);
    v11 = *(int *)(v10 + 2736) < 0x2000 ? 1 : *(_DWORD *)(v10 + 296);
    v12 = *(int *)(v10 + 2736) >= 0x2000 || *(_BYTE *)(v10 + 3036)
        ? *(_DWORD *)(v10 + 2944) * (72 * v11 + 224) + 8 * v11 + 616
        : 1304;
    memset(v9, 0, v12);
    v13 = *(_QWORD *)(v8 + 16);
    v14 = *(int *)(v13 + 2736) < 0x2000 ? 1 : *(_DWORD *)(v13 + 296);
    v15 = *(_DWORD *)(v13 + 2944);
    v16 = *(int *)(v13 + 2736) >= 0x2000 || *(_BYTE *)(v13 + 3036);
    *((_BYTE *)v9 + 356) = v16;
    if ( v16 )
    {
      *((_DWORD *)v9 + 151) = v15;
      *((_DWORD *)v9 + 152) = v14;
      *((_DWORD *)v9 + 153) = v15 * (72 * v14 + 224) + 16;
      v17 = v15 * (72 * v14 + 224) + 616;
      *((_DWORD *)v9 + 138) = v17;
      *((_DWORD *)v9 + 139) = v17 + 8 * v14;
    }
  }
  if ( !v9 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1175;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate VidSchSubmitData",
      1175LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  HIDWORD(v44) = 4 * (v47 & 0x20);
  *v9 = v44;
  P = 0LL;
  v51 = 0;
  v45 = 0LL;
  NumPrimaries = a2->NumPrimaries;
  if ( (_DWORD)NumPrimaries )
  {
    if ( !a3 )
    {
      WrittenPrimaries = (void *)a2->WrittenPrimaries;
LABEL_52:
      v45 = WrittenPrimaries;
      goto LABEL_15;
    }
    if ( (unsigned int)NumPrimaries > 2 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / NumPrimaries < 4 )
        goto LABEL_46;
      Pool2 = (char *)ExAllocatePool2(256LL, 4 * NumPrimaries, 1265072196LL);
      P = Pool2;
    }
    else
    {
      P = v50;
      memset(v50, 0, 4 * NumPrimaries);
      Pool2 = v50;
    }
    v51 = NumPrimaries;
    if ( Pool2 )
    {
      v37 = a2->WrittenPrimaries;
      v38 = (ULONG64)&v37[NumPrimaries];
      if ( v38 < (unsigned __int64)v37 || v38 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(Pool2, v37, 4 * NumPrimaries);
      WrittenPrimaries = P;
      goto LABEL_52;
    }
LABEL_46:
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1192;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate WrittenPrimariesLocal",
      1192LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v50 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_49;
  }
LABEL_15:
  if ( !a2->PrivateDriverDataSize )
    goto LABEL_22;
  v19 = *(struct _LOOKASIDE_LIST_EX **)(*((_QWORD *)this + 2) + 488LL);
  v20 = ExAllocateFromLookasideListEx(v19);
  v21 = v20;
  if ( !v20 )
  {
    if ( P != v50 && P )
      ExFreePoolWithTag(P, 0);
LABEL_49:
    P = 0LL;
    v51 = 0;
    ExFreeToLookasideListEx(Lookaside, v9);
    return 3221225495LL;
  }
  v9[2] = v20;
  v22 = a2->PrivateDriverDataSize;
  *(_QWORD *)v21 = v19;
  v21[2] = v22;
  v21[3] = 1;
  pPrivateDriverData = (char *)a2->pPrivateDriverData;
  v24 = a2->PrivateDriverDataSize;
  v25 = (char *)v9[2] + 16;
  if ( a3
    && (&pPrivateDriverData[v24] < pPrivateDriverData || (unsigned __int64)&pPrivateDriverData[v24] > MmUserProbeAddress) )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v25, pPrivateDriverData, v24);
LABEL_22:
  if ( (v47 & 0x20) != 0 )
  {
    LODWORD(v29) = CheckNoKmdAccessPrivateData(a2->PrivateDriverDataSize, (_DWORD *)v9[2] + 4, 0xFF000002);
    if ( (int)v29 >= 0 )
      goto LABEL_26;
  }
  else
  {
    v26 = a2->PrivateDriverDataSize;
    if ( !v26 )
      goto LABEL_26;
    v27 = *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
    if ( !*(_QWORD *)(*((_QWORD *)v27 + 2) + 1360LL) )
      goto LABEL_26;
    *(&v48.ContextCount + 1) = 0;
    memset(&v48.Context[1], 0, 0x1F8uLL);
    v48.Flags.Value = 1;
    v48.Commands = a2->CommandBuffer;
    v48.CommandLength = a2->CommandLength;
    v48.ContextCount = 1;
    v48.Context[0] = (HANDLE)*((_QWORD *)this + 4);
    v48.pPrivateDriverData = (char *)v9[2] + 16;
    v48.PrivateDriverDataSize = v26;
    v48.UmdPrivateDataSize = v26;
    v48.HwQueueProgressFenceId = a2->HwQueueProgressFenceId;
    v28 = ADAPTER_RENDER::DdiValidateSubmitCommand(v27, &v48);
    LODWORD(v29) = v28;
    if ( v28 >= 0 )
    {
LABEL_26:
      v9[5] = (PVOID)a2->CommandBuffer;
      *((_DWORD *)v9 + 13) = a2->CommandLength;
      *((_DWORD *)v9 + 20) = a2->PrivateDriverDataSize;
      v9[62] = (PVOID)a2->HwQueueProgressFenceId;
      *((_DWORD *)v9 + 126) = 1;
      v9[65] = (PVOID)*((_QWORD *)this + 7);
      v9[64] = (PVOID)*((_QWORD *)this + 8);
      v30 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
      LODWORD(v29) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, int, PVOID *))(*(_QWORD *)(*(_QWORD *)(v30 + 760) + 8LL)
                                                                                             + 808LL))(
                       *(_QWORD *)(v30 + 768),
                       *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
                       a2->NumPrimaries,
                       v45,
                       1,
                       v9 + 25);
      if ( (int)v29 < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1300;
      }
      else
      {
        v31 = v9 + 2;
        v32 = (volatile signed __int32 *)v9[2];
        if ( v32 )
          _InterlockedIncrement(v32 + 3);
        v9[68] = (PVOID)++*((_QWORD *)this + 10);
        v33 = (*(__int64 (__fastcall **)(_QWORD, PVOID *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 16LL)
                                                                                 + 736LL)
                                                                     + 8LL)
                                                         + 440LL))(
                *((_QWORD *)this + 5),
                v9);
        v29 = v33;
        if ( v33 < 0 )
        {
          if ( *v31 )
            CRefCountedBuffer::RefCountedBufferRelease(*v31);
          for ( i = 0; i < a2->NumPrimaries; ++i )
          {
            v41 = (struct VIDMM_ALLOC *)v9[i + 26];
            if ( v41 )
            {
              v42 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
              VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
                *(VIDMM_EXPORT **)(v42 + 760),
                *(struct VIDMM_GLOBAL **)(v42 + 768),
                0,
                v41);
            }
          }
          WdLogSingleEntry2(3LL, this, v29);
          WdLogGlobalForLineNumber = 1352;
        }
      }
      goto LABEL_30;
    }
    WdLogSingleEntry1(3LL, v28);
    WdLogGlobalForLineNumber = 1276;
  }
LABEL_30:
  v34 = v9[2];
  if ( v34 && _InterlockedExchangeAdd((volatile signed __int32 *)v34 + 3, 0xFFFFFFFF) == 1 )
  {
    if ( *(_QWORD *)v34 )
      ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v34, v34);
    else
      ExFreePoolWithTag(v34, 0);
  }
  if ( P != v50 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  P = 0LL;
  v51 = 0;
  ExFreeToLookasideListEx(Lookaside, v9);
  return (unsigned int)v29;
}
