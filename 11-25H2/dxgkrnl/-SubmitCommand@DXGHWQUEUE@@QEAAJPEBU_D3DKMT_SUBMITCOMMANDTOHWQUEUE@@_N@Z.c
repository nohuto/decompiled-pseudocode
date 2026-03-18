/*
 * XREFs of ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1402B8DC0
 * Callers:
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1402B81C0 (DxgkSubmitCommandToHwQueueInternal.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x14001294C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1400339D0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z @ 0x140057794 (-VidMmUnreferencePrimaryAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@KPEAUVIDMM_ALLOC@@_N@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x14018820C (-CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z.c)
 *     ?DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z @ 0x1402B9800 (-DdiValidateSubmitCommand@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_VALIDATESUBMITCOMMAND@@@Z.c)
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
  __int64 v10; // r9
  __int64 v11; // rax
  int v12; // ecx
  unsigned int v13; // eax
  __int64 v14; // rax
  int v15; // ecx
  int v16; // r8d
  bool v17; // al
  int v18; // eax
  unsigned __int64 NumPrimaries; // r13
  struct _LOOKASIDE_LIST_EX *v20; // r13
  _DWORD *v21; // rax
  _DWORD *v22; // rcx
  UINT v23; // eax
  char *pPrivateDriverData; // rdx
  size_t v25; // r8
  void *v26; // rcx
  UINT v27; // r15d
  ADAPTER_RENDER *v28; // r13
  int v29; // eax
  __int64 v30; // r15
  __int64 v31; // rax
  PVOID *v32; // r13
  volatile signed __int32 *v33; // rax
  int v34; // eax
  PVOID v35; // rax
  char *Pool2; // rcx
  const D3DKMT_HANDLE *v38; // rdx
  ULONG64 v39; // rax
  void *WrittenPrimaries; // rax
  UINT i; // r13d
  struct VIDMM_ALLOC *v42; // r9
  __int64 v43; // rcx
  void *v45; // [rsp+58h] [rbp-2E0h]
  void *v46; // [rsp+58h] [rbp-2E0h]
  struct _LOOKASIDE_LIST_EX *Lookaside; // [rsp+60h] [rbp-2D8h]
  int v48; // [rsp+88h] [rbp-2B0h]
  struct _DXGKARG_VALIDATESUBMITCOMMAND v49; // [rsp+C0h] [rbp-278h] BYREF
  PVOID P; // [rsp+2F0h] [rbp-48h]
  char v51[8]; // [rsp+2F8h] [rbp-40h] BYREF
  int v52; // [rsp+300h] [rbp-38h]

  LODWORD(v45) = 0x8000000;
  v6 = *((_QWORD *)this + 2);
  v48 = *(_DWORD *)(v6 + 392);
  PrivateDriverDataSize = a2->PrivateDriverDataSize;
  if ( (unsigned int)PrivateDriverDataSize > *(_DWORD *)(v6 + 208) )
  {
    WdLogSingleEntry2(1LL, PrivateDriverDataSize, *(unsigned int *)(v6 + 208));
    WdLogGlobalForLineNumber = 1168;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
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
    v11 = *(_QWORD *)(v8 + 16);
    v12 = *(int *)(v11 + 2736) < 0x2000 ? 1 : *(_DWORD *)(v11 + 296);
    v13 = *(int *)(v11 + 2736) >= 0x2000 || *(_BYTE *)(v11 + 3036)
        ? *(_DWORD *)(v11 + 2944) * (72 * v12 + 224) + 8 * v12 + 616
        : 1304;
    memset(v9, 0, v13);
    v14 = *(_QWORD *)(v8 + 16);
    v15 = *(int *)(v14 + 2736) < 0x2000 ? 1 : *(_DWORD *)(v14 + 296);
    v16 = *(_DWORD *)(v14 + 2944);
    v17 = *(int *)(v14 + 2736) >= 0x2000 || *(_BYTE *)(v14 + 3036);
    *((_BYTE *)v9 + 356) = v17;
    if ( v17 )
    {
      *((_DWORD *)v9 + 151) = v16;
      *((_DWORD *)v9 + 152) = v15;
      *((_DWORD *)v9 + 153) = v16 * (72 * v15 + 224) + 16;
      v18 = v16 * (72 * v15 + 224) + 616;
      *((_DWORD *)v9 + 138) = v18;
      *((_DWORD *)v9 + 139) = v18 + 8 * v15;
    }
  }
  if ( !v9 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1175;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate VidSchSubmitData",
      1175LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  HIDWORD(v45) = 4 * (v48 & 0x20);
  *v9 = v45;
  P = 0LL;
  v52 = 0;
  v46 = 0LL;
  NumPrimaries = a2->NumPrimaries;
  if ( (_DWORD)NumPrimaries )
  {
    if ( !a3 )
    {
      WrittenPrimaries = (void *)a2->WrittenPrimaries;
LABEL_52:
      v46 = WrittenPrimaries;
      goto LABEL_15;
    }
    if ( (unsigned int)NumPrimaries > 2 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / NumPrimaries < 4 )
        goto LABEL_46;
      Pool2 = (char *)ExAllocatePool2(256LL, 4 * NumPrimaries, 1265072196LL, v10);
      P = Pool2;
    }
    else
    {
      P = v51;
      memset(v51, 0, 4 * NumPrimaries);
      Pool2 = v51;
    }
    v52 = NumPrimaries;
    if ( Pool2 )
    {
      v38 = a2->WrittenPrimaries;
      v39 = (ULONG64)&v38[NumPrimaries];
      if ( v39 < (unsigned __int64)v38 || v39 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(Pool2, v38, 4 * NumPrimaries);
      WrittenPrimaries = P;
      goto LABEL_52;
    }
LABEL_46:
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1192;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate WrittenPrimariesLocal",
      1192LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( P != v51 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_49;
  }
LABEL_15:
  if ( !a2->PrivateDriverDataSize )
    goto LABEL_22;
  v20 = *(struct _LOOKASIDE_LIST_EX **)(*((_QWORD *)this + 2) + 488LL);
  v21 = ExAllocateFromLookasideListEx(v20);
  v22 = v21;
  if ( !v21 )
  {
    if ( P != v51 && P )
      ExFreePoolWithTag(P, 0);
LABEL_49:
    P = 0LL;
    v52 = 0;
    ExFreeToLookasideListEx(Lookaside, v9);
    return 3221225495LL;
  }
  v9[2] = v21;
  v23 = a2->PrivateDriverDataSize;
  *(_QWORD *)v22 = v20;
  v22[2] = v23;
  v22[3] = 1;
  pPrivateDriverData = (char *)a2->pPrivateDriverData;
  v25 = a2->PrivateDriverDataSize;
  v26 = (char *)v9[2] + 16;
  if ( a3
    && (&pPrivateDriverData[v25] < pPrivateDriverData || (unsigned __int64)&pPrivateDriverData[v25] > MmUserProbeAddress) )
  {
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v26, pPrivateDriverData, v25);
LABEL_22:
  if ( (v48 & 0x20) != 0 )
  {
    LODWORD(v30) = CheckNoKmdAccessPrivateData(a2->PrivateDriverDataSize, (_DWORD *)v9[2] + 4, 0xFF000002);
    if ( (int)v30 >= 0 )
      goto LABEL_26;
  }
  else
  {
    v27 = a2->PrivateDriverDataSize;
    if ( !v27 )
      goto LABEL_26;
    v28 = *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
    if ( !*(_QWORD *)(*((_QWORD *)v28 + 2) + 1360LL) )
      goto LABEL_26;
    *(&v49.ContextCount + 1) = 0;
    memset(&v49.Context[1], 0, 0x1F8uLL);
    v49.Flags.Value = 1;
    v49.Commands = a2->CommandBuffer;
    v49.CommandLength = a2->CommandLength;
    v49.ContextCount = 1;
    v49.Context[0] = (HANDLE)*((_QWORD *)this + 4);
    v49.pPrivateDriverData = (char *)v9[2] + 16;
    v49.PrivateDriverDataSize = v27;
    v49.UmdPrivateDataSize = v27;
    v49.HwQueueProgressFenceId = a2->HwQueueProgressFenceId;
    v29 = ADAPTER_RENDER::DdiValidateSubmitCommand(v28, &v49);
    LODWORD(v30) = v29;
    if ( v29 >= 0 )
    {
LABEL_26:
      v9[5] = (PVOID)a2->CommandBuffer;
      *((_DWORD *)v9 + 13) = a2->CommandLength;
      *((_DWORD *)v9 + 20) = a2->PrivateDriverDataSize;
      v9[62] = (PVOID)a2->HwQueueProgressFenceId;
      *((_DWORD *)v9 + 126) = 1;
      v9[65] = (PVOID)*((_QWORD *)this + 7);
      v9[64] = (PVOID)*((_QWORD *)this + 8);
      v31 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
      LODWORD(v30) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, void *, int, PVOID *))(*(_QWORD *)(*(_QWORD *)(v31 + 760) + 8LL)
                                                                                             + 808LL))(
                       *(_QWORD *)(v31 + 768),
                       *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
                       a2->NumPrimaries,
                       v46,
                       1,
                       v9 + 25);
      if ( (int)v30 < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1300;
      }
      else
      {
        v32 = v9 + 2;
        v33 = (volatile signed __int32 *)v9[2];
        if ( v33 )
          _InterlockedIncrement(v33 + 3);
        v9[68] = (PVOID)++*((_QWORD *)this + 10);
        v34 = (*(__int64 (__fastcall **)(_QWORD, PVOID *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 16LL)
                                                                                 + 736LL)
                                                                     + 8LL)
                                                         + 440LL))(
                *((_QWORD *)this + 5),
                v9);
        v30 = v34;
        if ( v34 < 0 )
        {
          if ( *v32 )
            CRefCountedBuffer::RefCountedBufferRelease(*v32);
          for ( i = 0; i < a2->NumPrimaries; ++i )
          {
            v42 = (struct VIDMM_ALLOC *)v9[i + 26];
            if ( v42 )
            {
              v43 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
              VIDMM_EXPORT::VidMmUnreferencePrimaryAllocation(
                *(VIDMM_EXPORT **)(v43 + 760),
                *(struct VIDMM_GLOBAL **)(v43 + 768),
                0,
                v42);
            }
          }
          WdLogSingleEntry2(3LL, this, v30);
          WdLogGlobalForLineNumber = 1352;
        }
      }
      goto LABEL_30;
    }
    WdLogSingleEntry1(3LL, v29);
    WdLogGlobalForLineNumber = 1276;
  }
LABEL_30:
  v35 = v9[2];
  if ( v35 && _InterlockedExchangeAdd((volatile signed __int32 *)v35 + 3, 0xFFFFFFFF) == 1 )
  {
    if ( *(_QWORD *)v35 )
      ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v35, v35);
    else
      ExFreePoolWithTag(v35, 0);
  }
  if ( P != v51 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  P = 0LL;
  v52 = 0;
  ExFreeToLookasideListEx(Lookaside, v9);
  return (unsigned int)v30;
}
