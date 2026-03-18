/*
 * XREFs of imp_WdfDmaTransactionInitialize @ 0x14005E9B0
 * Callers:
 *     imp_WdfDmaTransactionInitializeUsingOffset @ 0x14005E970 (imp_WdfDmaTransactionInitializeUsingOffset.c)
 * Callees:
 *     WPP_IFR_SF_qDd @ 0x14000562C (WPP_IFR_SF_qDd.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x140066AA0 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qiqd @ 0x14008654C (WPP_IFR_SF_qiqd.c)
 *     WPP_IFR_SF_ql @ 0x140086664 (WPP_IFR_SF_ql.c)
 *     WPP_IFR_SF_qqdd @ 0x140086788 (WPP_IFR_SF_qqdd.c)
 *     ?PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ @ 0x140088B14 (-PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfDmaTransactionInitialize(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaTransaction,
        unsigned __int8 (__fastcall *EvtProgramDmaFunction)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *),
        _WDF_DMA_DIRECTION DmaDirection,
        _MDL *Mdl,
        char *VirtualAddress,
        unsigned __int64 Length)
{
  _WDF_DMA_DIRECTION v7; // r10d
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rdx
  FxDmaTransactionBase *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  _MDL *v15; // r13
  unsigned __int64 v16; // r9
  char *v17; // rcx
  char *v18; // rbx
  __int64 ByteCount; // r8
  char *v20; // r12
  __int64 v21; // rcx
  __int64 v22; // rax
  _FX_DRIVER_GLOBALS *v23; // r12
  signed __int64 v24; // rbx
  int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // ebx
  FxDmaTransactionBase_vtbl *v33; // rax
  unsigned __int8 v34; // dl
  unsigned int v35; // r8d
  unsigned __int16 v36; // r9
  __int64 v37; // rax
  unsigned __int16 v38; // r9
  const void *v39; // rcx
  _WORD *v40; // rbx
  unsigned __int64 v41; // rdi
  const void *v42; // rax
  unsigned __int64 v43; // rcx
  const void *v44; // rdi
  const _GUID *traceGuid; // [rsp+20h] [rbp-50h]
  unsigned int id; // [rsp+40h] [rbp-30h]
  unsigned __int64 v47; // [rsp+50h] [rbp-20h]
  int *v48; // [rsp+50h] [rbp-20h]
  FxDmaTransactionBase **p_pDmaTrans; // [rsp+58h] [rbp-18h] BYREF
  __int16 v50; // [rsp+60h] [rbp-10h]
  __int16 v51; // [rsp+62h] [rbp-Eh]
  int v52; // [rsp+64h] [rbp-Ch]
  void *retaddr; // [rsp+A8h] [rbp+38h]
  FxDmaTransactionBase *pDmaTrans; // [rsp+B8h] [rbp+48h] BYREF
  unsigned __int8 (__fastcall *v55)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *); // [rsp+C0h] [rbp+50h]
  _WDF_DMA_DIRECTION v56; // [rsp+C8h] [rbp+58h]

  v56 = DmaDirection;
  v55 = EvtProgramDmaFunction;
  v7 = DmaDirection;
  if ( !DmaTransaction )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1401uLL);
  LOWORD(v10) = 0;
  v11 = ~DmaTransaction & 0xFFFFFFFFFFFFFFF8uLL;
  v12 = DmaTransaction & 1;
  flags = (FxDmaTransactionBase *)v11;
  v47 = (unsigned int)v12;
  if ( (_DWORD)v12 )
  {
    v10 = *(unsigned __int16 *)v11;
    flags = (FxDmaTransactionBase *)(v11 - v10);
  }
  if ( flags->m_Type == 5121 )
  {
    pDmaTrans = flags;
  }
  else
  {
    pDmaTrans = 0LL;
    p_pDmaTrans = &pDmaTrans;
    v51 = v10;
    v52 = 0;
    v33 = flags->__vftable;
    v50 = 5121;
    if ( v33->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pDmaTrans) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        v34,
        v35,
        v36,
        traceGuid,
        (const void *)DmaTransaction,
        0x1401u,
        flags,
        flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, DmaTransaction, 0x1401uLL);
    }
    flags = pDmaTrans;
    v12 = v47;
    v7 = v56;
  }
  m_Globals = flags->m_Globals;
  if ( !EvtProgramDmaFunction )
    FxVerifierNullBugCheck(flags->m_Globals, retaddr);
  v15 = Mdl;
  if ( !Mdl )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v16 = Length;
  if ( !Length )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xFu, 0x14u, WPP_FxDmaTransactionAPI_cpp_Traceguids, (const void *)DmaTransaction);
    return 3221225485LL;
  }
  if ( (unsigned int)v7 > WdfDmaDirectionWriteToDevice )
  {
    WPP_IFR_SF_qDd(
      m_Globals,
      v12,
      0xFu,
      0x15u,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      (const void *)DmaTransaction,
      v7,
      0xC000000D);
    return 3221225485LL;
  }
  v17 = (char *)Mdl->StartVa + Mdl->ByteOffset;
  v18 = VirtualAddress;
  ByteCount = Mdl->ByteCount;
  if ( VirtualAddress < v17 || (v20 = &v17[ByteCount], VirtualAddress >= &v17[ByteCount]) )
  {
    WPP_IFR_SF_qqdd(
      m_Globals,
      2u,
      0xFu,
      0x16u,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      VirtualAddress,
      v17,
      ByteCount,
      -1073741811);
    return 3221225485LL;
  }
  LOWORD(v21) = 0;
  if ( v12 )
  {
    v21 = *(unsigned __int16 *)v11;
    v11 -= v21;
  }
  if ( *(_WORD *)(v11 + 8) == 5121 )
  {
    pDmaTrans = (FxDmaTransactionBase *)v11;
  }
  else
  {
    pDmaTrans = 0LL;
    p_pDmaTrans = &pDmaTrans;
    v51 = v21;
    v52 = 0;
    v37 = *(_QWORD *)v11;
    v50 = 5121;
    if ( (*(int (__fastcall **)(unsigned __int64, FxDmaTransactionBase ***))(v37 + 40))(v11, &p_pDmaTrans) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *(_FX_DRIVER_GLOBALS **)(v11 + 16),
        v12,
        ByteCount,
        v38,
        traceGuid,
        (const void *)DmaTransaction,
        0x1401u,
        (const void *)v11,
        *(unsigned __int16 *)(v11 + 8));
      FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(v11 + 16), WDF_INVALID_HANDLE, DmaTransaction, 0x1401uLL);
    }
    v11 = (unsigned __int64)pDmaTrans;
    v16 = Length;
  }
  v22 = *(_QWORD *)(v11 + 128);
  if ( *(_DWORD *)(v22 + 184) != 3 && (*(_BYTE *)(v22 + 380) & 0xC) == 4 && &v18[v16] > v20 )
  {
    WPP_IFR_SF_qiqd(m_Globals, v12, ByteCount, v16, traceGuid, v18, v16, v20, id);
    return 3221225485LL;
  }
  v23 = *(_FX_DRIVER_GLOBALS **)(v11 + 16);
  v24 = v18 - (char *)v15->StartVa - v15->ByteOffset;
  if ( v23->FxVerboseOn )
  {
    v39 = (const void *)(v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(v11 + 10) )
      v39 = 0LL;
    WPP_IFR_SF_q(v23, 5u, 0xFu, 0xBu, WPP_FxDmaTransactionBase_cpp_Traceguids, v39);
  }
  v25 = *(_DWORD *)(v11 + 120);
  v48 = (int *)(v11 + 120);
  if ( (unsigned int)(v25 - 1) > 1 && v25 != 7 )
  {
    v40 = (_WORD *)(v11 + 10);
    v41 = v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
    v42 = (const void *)v41;
    if ( !*v40 )
      v42 = 0LL;
    WPP_IFR_SF_ql(v23, 2u, 0xFu, 0xCu, WPP_FxDmaTransactionBase_cpp_Traceguids, v42, v25);
    if ( !*v40 )
      v41 = 0LL;
    FxVerifierBugCheckWorker(v23, WDF_DMA_FATAL_ERROR, v41, *v48);
  }
  v26 = v56;
  v27 = *(_QWORD *)(v11 + 128);
  if ( v56 )
    v28 = v27 + ((*(_BYTE *)(v27 + 380) & 0x10) != 0 ? 280LL : 184LL);
  else
    v28 = v27 + 184;
  *(_QWORD *)(v11 + 136) = v28;
  *(_QWORD *)(v11 + 208) = *(_QWORD *)(v28 + 80);
  v29 = (unsigned int)Length;
  *(_QWORD *)(v11 + 224) = (unsigned int)Length;
  *(_QWORD *)(v11 + 216) = v29;
  *(_QWORD *)(v11 + 152) = v55;
  v30 = v27 + 184;
  *(_DWORD *)(v11 + 124) = v26;
  *(_QWORD *)(v11 + 176) = v15;
  *(_QWORD *)(v11 + 192) = v24;
  *(_QWORD *)(v11 + 184) = v15;
  *(_QWORD *)(v11 + 200) = v24;
  LOBYTE(v16) = *(_BYTE *)(v27 + 380);
  if ( *(_DWORD *)(v27 + 184) == 3 )
  {
    if ( (v16 & 0x10) != 0 )
      v30 = v27 + 96 * v26 + 184;
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v30 + 64) + 8LL) + 144LL))(
      *(_QWORD *)(v30 + 64),
      *(_QWORD *)(v11 + 168));
  }
  if ( *(_BYTE *)(v11 + 248) )
  {
    v43 = *(unsigned int *)(*(_QWORD *)(v11 + 128) + 388LL);
    if ( *(_QWORD *)(v11 + 208) < v43 )
      *(_QWORD *)(v11 + 208) = v43;
    v31 = FxDmaTransactionBase::PrepareForSingleTransfer((FxDmaTransactionBase *)v11);
    if ( v31 < 0 )
      goto LABEL_60;
  }
  v31 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64, unsigned __int64))(*(_QWORD *)v11 + 64LL))(
          v11,
          v27,
          ByteCount,
          v16);
  if ( v31 < 0 )
LABEL_60:
    FxDmaTransactionBase::ReleaseForReuse((FxDmaTransactionBase *)v11, 0);
  else
    *(_DWORD *)(v11 + 120) = 3;
  if ( v23->FxVerboseOn )
  {
    if ( *(_WORD *)(v11 + 10) )
      v44 = (const void *)(v11 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v44 = 0LL;
    WPP_IFR_SF_qd(v23, 5u, 0xFu, 0xDu, WPP_FxDmaTransactionBase_cpp_Traceguids, v44, v31);
  }
  if ( v31 < 0 )
    WPP_IFR_SF_qd(m_Globals, 2u, 0xFu, 0x18u, WPP_FxDmaTransactionAPI_cpp_Traceguids, (const void *)DmaTransaction, v31);
  return (unsigned int)v31;
}
