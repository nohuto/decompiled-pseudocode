/*
 * XREFs of ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140016530
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000A5A0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisFOidRequestCompleteInternal@@YAXPEAX@Z @ 0x140016090 (-ndisFOidRequestCompleteInternal@@YAXPEAX@Z.c)
 *     ?ndisPreProcessOid@@YAEPEAXPEAU_NDIS_OID_REQUEST@@IPEAH@Z @ 0x140016320 (-ndisPreProcessOid@@YAEPEAXPEAU_NDIS_OID_REQUEST@@IPEAH@Z.c)
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1400173A0 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 *     ?ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z @ 0x14004C620 (-ndisMOidRequestCompleteInternal@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H1@Z.c)
 *     ?ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14006A4C0 (-ndisMAbortRequests@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z @ 0x1400714A0 (-ndisCancelOidRequestOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAXE@Z.c)
 *     ?ndisPMAddRemoveAsync@@YAXPEAX@Z @ 0x140073250 (-ndisPMAddRemoveAsync@@YAXPEAX@Z.c)
 *     ?ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z @ 0x1400B9A5C (-ndisCancelOidRequestOnFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAXE@Z.c)
 *     ?ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z @ 0x1400C76E0 (-ndisFDirectOidRequestCompleteInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x140006B10 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qDd @ 0x140008220 (WPP_RECORDER_SF_qDd_ea_140008220.c)
 *     ?ShouldEnableOidTracing@@YA_NPEBU_NDIS_OID_REQUEST@@@Z @ 0x14000B880 (-ShouldEnableOidTracing@@YA_NPEBU_NDIS_OID_REQUEST@@@Z.c)
 *     WPP_RECORDER_SF_qDqD @ 0x14000B920 (WPP_RECORDER_SF_qDqD.c)
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1400132F0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     WPP_RECORDER_SF_qDqd @ 0x140015CC0 (WPP_RECORDER_SF_qDqd_ea_140015CC0.c)
 *     WPP_RECORDER_SF_qDq @ 0x140015E00 (WPP_RECORDER_SF_qDq.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400388D0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     McTemplateK0jqxqdq_EtwWriteTransfer @ 0x140038A40 (McTemplateK0jqxqdq_EtwWriteTransfer.c)
 *     ndisFInvokeOidRequestComplete @ 0x140047D40 (ndisFInvokeOidRequestComplete.c)
 *     WPP_RECORDER_SF_Dqqqqd @ 0x140047EF0 (WPP_RECORDER_SF_Dqqqqd.c)
 *     ndisCheckOidBufferIntegrity @ 0x14004A1E0 (ndisCheckOidBufferIntegrity.c)
 *     ??$TraceLoggingWriteOidRequestCompletedActivity@$01@@YAXPEBU_NDIS_REQ_TRACKER@@@Z @ 0x14004AC50 (--$TraceLoggingWriteOidRequestCompletedActivity@$01@@YAXPEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ??$TraceLoggingWriteOidRequestCompletedActivity@$0A@@@YAXPEBU_NDIS_REQ_TRACKER@@@Z @ 0x14004ADB0 (--$TraceLoggingWriteOidRequestCompletedActivity@$0A@@@YAXPEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14007EA60 (-ndisMResetCompleteStage2@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008ADC0 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ??$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_OPEN_BLOCK@@@@YAXPEBU_NDIS_OPEN_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008D080 (--$TraceLoggingWriteOidRequestReturnedActivity@$0A@U_NDIS_OPEN_BLOCK@@@@YAXPEBU_NDIS_OPEN_BLOCK@.c)
 *     ??$TraceLoggingWriteOidRequestReturnedActivity@$01U_NDIS_OPEN_BLOCK@@@@YAXPEBU_NDIS_OPEN_BLOCK@@PEBU_NDIS_OID_REQUEST@@@Z @ 0x14008D210 (--$TraceLoggingWriteOidRequestReturnedActivity@$01U_NDIS_OPEN_BLOCK@@@@YAXPEBU_NDIS_OPEN_BLOCK@@.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

void __fastcall ndisOidRequestComplete(struct _NDIS_REQ_TRACKER *a1, int a2, int a3, int a4)
{
  __int64 v4; // r14
  __int64 v6; // r15
  _BYTE *v7; // r13
  _BYTE *v8; // rsi
  __int64 v9; // r8
  int v10; // ecx
  _DWORD *v11; // rbp
  ULONG_PTR v12; // rdx
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rsi
  __int64 v23; // rcx
  KIRQL v24; // al
  int v25; // eax
  int v26; // esi
  int v27; // r12d
  __int64 v28; // rax
  struct _NDIS_MINIPORT_BLOCK **v29; // rbx
  struct _NDIS_MINIPORT_BLOCK *v30; // rbx
  int v31; // r8d
  KIRQL v32; // r14
  int v33; // ecx
  ULONG_PTR v34; // rbx
  KIRQL v35; // si
  int v36; // r14d
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rbx
  KIRQL v40; // dl
  KSPIN_LOCK *v41; // rcx
  __int64 v42; // rbx
  unsigned int v43; // esi
  __int64 v44; // rbp
  int v45; // edx
  unsigned int v46; // esi
  __int64 v47; // rbx
  __int64 v48; // r14
  int v49; // ebp
  int v50; // r8d
  char v51[8]; // [rsp+38h] [rbp-60h]
  char v52[8]; // [rsp+40h] [rbp-58h]
  int v53; // [rsp+A0h] [rbp+8h]
  bool v54; // [rsp+A8h] [rbp+10h]

  v4 = *((_QWORD *)a1 + 4);
  v6 = 0LL;
  v54 = 0;
  v7 = 0LL;
  v8 = *(_BYTE **)(v4 + 104);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_QWORD *)v52 = *((_QWORD *)a1 + 2);
    *(_QWORD *)v51 = *(_QWORD *)a1;
    WPP_RECORDER_SF_Dqqqqd(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, a4);
  }
  if ( ShouldEnableOidTracing(*((const struct _NDIS_OID_REQUEST **)a1 + 4)) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 4) + 88LL) & 8) != 0 )
      TraceLoggingWriteOidRequestCompletedActivity<2>(a1);
    else
      TraceLoggingWriteOidRequestCompletedActivity<0>(a1);
  }
  v10 = *(_DWORD *)(v4 + 88);
  *(_DWORD *)(v4 + 88) = v10 | 1;
  v11 = (_DWORD *)*((_QWORD *)a1 + 4);
  v53 = v10 & 0x200000;
  if ( (v10 & 0x220) != 0 )
  {
    *((_QWORD *)a1 + 3) = v8;
    v6 = (__int64)v8;
    v54 = (*(_DWORD *)(v4 + 88) & 0x200) != 0;
  }
  else
  {
    *((_QWORD *)a1 + 3) = 0LL;
    if ( *v8 == 5 )
    {
      v7 = v8;
      *((_QWORD *)a1 + 1) = v8;
    }
    else
    {
      v54 = 1;
    }
  }
  v12 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    if ( (*(_BYTE *)(v12 + 32) > 6u || *(_BYTE *)(v12 + 32) == 6 && *(_BYTE *)(v12 + 33) >= 0x28u)
      && !*((_DWORD *)a1 + 10) )
    {
      v13 = v11[1];
      if ( (v13 & 0xFFFFFFFD) != 0 )
      {
        if ( v13 != 12 )
          goto LABEL_32;
        v14 = v11[13];
        v15 = v11[15];
      }
      else
      {
        v14 = v11[12];
        v15 = v11[13];
      }
      if ( v15 > v14 )
        ndisBugCheckEx(0x1DuLL, v12, (ULONG_PTR)v11, 0LL);
    }
  }
  else
  {
    v16 = *((_QWORD *)a1 + 2);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 16);
      if ( *(_BYTE *)(v17 + 100) > 6u || *(_BYTE *)(v17 + 100) == 6 && *(_BYTE *)(v17 + 101) >= 0x28u )
      {
        v18 = *(_QWORD *)(v16 + 32);
        if ( (*(_BYTE *)(v18 + 32) > 6u || *(_BYTE *)(v18 + 32) == 6 && *(_BYTE *)(v18 + 33) >= 0x28u)
          && !*((_DWORD *)a1 + 10) )
        {
          ndisCheckOidBufferIntegrity((ULONG_PTR)v11);
        }
      }
    }
  }
LABEL_32:
  v19 = *((_QWORD *)a1 + 4);
  v20 = v19;
  v21 = *(_DWORD *)(v19 + 88);
  if ( (v21 & 0x40000) == 0 && (v21 & 4) != 0 && (v21 & 0x200000) == 0 && (v21 & 0x1000000) == 0 )
  {
    v20 = *((_QWORD *)a1 + 4);
    v9 = *((_QWORD *)&unk_1400F2010 + 3 * *(unsigned int *)(v19 + 92));
    if ( v9 )
    {
      (*((void (__fastcall **)(struct _NDIS_REQ_TRACKER *))&unk_1400F2010 + 3 * *(unsigned int *)(v19 + 92)))(a1);
      v20 = *((_QWORD *)a1 + 4);
    }
  }
  v22 = *(_QWORD *)a1;
  v23 = v20;
  if ( *(_QWORD *)a1 && *(_DWORD *)(v20 + 32) == -50265855 && *((_DWORD *)a1 + 10) )
  {
    v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v22 + 3872));
    *(_DWORD *)(v22 + 3880) = *(_DWORD *)(v22 + 3884);
    *(_DWORD *)(v22 + 3884) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 3872), v24);
    v23 = *((_QWORD *)a1 + 4);
  }
  v25 = *(_DWORD *)(v4 + 88);
  v26 = *(_DWORD *)(v23 + 4);
  v27 = v25 & 0x2000000;
  if ( (v25 & 8) != 0 )
  {
    *(_DWORD *)(v4 + 80) = *((_DWORD *)a1 + 10);
    KeSetEvent((PRKEVENT)(v4 + 112), 0, 0);
  }
  else
  {
    if ( (v25 & 2) == 0 )
      goto LABEL_58;
    if ( (v25 & 0x100) != 0 )
    {
      v28 = *((_QWORD *)a1 + 2);
      v29 = (struct _NDIS_MINIPORT_BLOCK **)(v28 + 32);
      if ( !v28 )
        v29 = (struct _NDIS_MINIPORT_BLOCK **)a1;
      v30 = *v29;
      v32 = KeAcquireSpinLockRaiseToDpc(&v30->Lock);
      v30->MiniportThread = KeGetCurrentThread();
      if ( v26 == 1 && (v30->Flags & 0x200000) != 0 )
      {
        v33 = *((_DWORD *)a1 + 10);
        if ( v33 && v33 != -1073676276 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v51 = *((_DWORD *)a1 + 10);
          WPP_RECORDER_SF_qDd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            v31,
            0x11u,
            (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
            (char)v30,
            *(_DWORD *)(*((_QWORD *)a1 + 4) + 32LL),
            *(_QWORD *)v51);
        }
        ndisMResetCompleteStage2(v30);
      }
      _InterlockedAnd((volatile signed __int32 *)&v30->Flags, 0xFEFFFFFF);
      v30->MiniportThread = 0LL;
      KeReleaseSpinLock(&v30->Lock, v32);
    }
    ExFreePoolWithTag(*((PVOID *)a1 + 4), 0);
  }
  *((_QWORD *)a1 + 4) = 0LL;
LABEL_58:
  v34 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v34 + 96));
    v36 = v53;
    *(_QWORD *)(v34 + 520) = KeGetCurrentThread();
    if ( !v53 )
    {
      *(_DWORD *)(v34 + 4420) &= ~2u;
      v37 = *((unsigned int *)a1 + 11);
      if ( (v37 & 1) == 0 )
      {
        if ( (byte_14011B101 & 0x40) != 0 )
          McTemplateK0jqxd_EtwWriteTransfer(
            v37,
            &ClearingOidRequest,
            v34 + 4008,
            v34 + 4008,
            *(_DWORD *)(v34 + 4056),
            *(_QWORD *)(v34 + 4024),
            65537);
        *(_DWORD *)(v34 + 4420) &= ~1u;
        *(_QWORD *)(v34 + 2216) = 0LL;
      }
      v38 = *((_DWORD *)a1 + 11);
      if ( (v38 & 1) == 0 )
      {
        if ( (v38 & 2) != 0 && *(_DWORD **)(v34 + 2208) != v11 )
          ndisBugCheckEx(0x26uLL, v34, (ULONG_PTR)v11, 0LL);
        if ( *(_QWORD *)(v34 + 2208) )
          *(_QWORD *)(v34 + 2208) = 0LL;
      }
    }
    *(_QWORD *)(v34 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v34 + 96), v35);
    *(_WORD *)(v34 + 1822) = 0;
  }
  else
  {
    v39 = *((_QWORD *)a1 + 2);
    if ( v39 )
    {
      if ( (*((_DWORD *)a1 + 11) & 1) != 0 )
      {
        v36 = v53;
      }
      else
      {
        v40 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v39 + 144));
        v36 = v53;
        *(_QWORD *)(v39 + 152) = KeGetCurrentThread();
        if ( v53 )
        {
          --*(_DWORD *)(v39 + 704);
        }
        else
        {
          *(_DWORD *)(v39 + 56) &= ~0x800u;
          *(_QWORD *)(v39 + 176) = 0LL;
        }
        *(_QWORD *)(v39 + 152) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v39 + 144), v40);
      }
      v41 = (KSPIN_LOCK *)(v39 + 312);
      if ( v36 )
        ndisDereferenceRef(v41, 0x10u);
      else
        ndisDereferenceRef(v41, 0xFu);
    }
    else
    {
      v36 = v53;
    }
  }
  if ( v6 && !v27 )
  {
    if ( !v54 )
    {
      v42 = *((_QWORD *)a1 + 4);
      if ( v36 )
      {
        v43 = *((_DWORD *)a1 + 10);
        v44 = *(_QWORD *)(v6 + 24);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          *(_DWORD *)v52 = *((_DWORD *)a1 + 10);
          WPP_RECORDER_SF_qDqd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v19,
            v9,
            0xCu,
            (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
            v6,
            *(_DWORD *)(v42 + 32),
            v42,
            *(_QWORD *)v52);
        }
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v44 + 776))(*(_QWORD *)(v6 + 32), v42, v43);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v45) = 4;
          WPP_RECORDER_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v45,
            11,
            13,
            (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
            v6,
            v42);
        }
      }
      else
      {
        if ( ShouldEnableOidTracing(*((const struct _NDIS_OID_REQUEST **)a1 + 4)) )
        {
          if ( *(_QWORD *)(v42 + 96) )
            TraceLoggingWriteOidRequestReturnedActivity<0,_NDIS_OPEN_BLOCK>(v6, v42);
          else
            TraceLoggingWriteOidRequestReturnedActivity<2,_NDIS_OPEN_BLOCK>(v6, v42);
        }
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v6 + 688))(
          v6,
          *((_QWORD *)a1 + 4),
          *((unsigned int *)a1 + 10));
      }
    }
    ndisMDereferenceOpenUnlocked(v6, 6u);
  }
  if ( v7 && !v27 )
  {
    if ( (byte_14011B101 & 0x40) != 0 )
      McTemplateK0jqxqdq_EtwWriteTransfer(
        *((_QWORD *)a1 + 4),
        (unsigned int)&CompletingOidRequestFilterEx,
        (_DWORD)v7 + 664,
        (_DWORD)v7 + 664,
        *((_DWORD *)v7 + 170),
        *(_QWORD *)(*((_QWORD *)v7 + 86) + 1312LL),
        *(_DWORD *)(*((_QWORD *)a1 + 4) + 32LL),
        *((_DWORD *)a1 + 10));
    v46 = *((_DWORD *)a1 + 10);
    v47 = *((_QWORD *)a1 + 4);
    if ( v36 )
    {
      v48 = *((_QWORD *)v7 + 2);
      v49 = *(_DWORD *)(v47 + 32);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v52 = *((_DWORD *)a1 + 10);
        WPP_RECORDER_SF_qDqD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v19,
          v9,
          0xEu,
          (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
          (char)v7,
          v49,
          v47,
          *(_QWORD *)v52);
      }
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v48 + 304))(*((_QWORD *)v7 + 3), v47, v46);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qDq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          v50,
          0xFu,
          (struct _GUID *)&WPP_405c908af2143fed945d9a560d683c7b_Traceguids,
          (char)v7,
          v49,
          v47);
    }
    else
    {
      ndisFInvokeOidRequestComplete((char)v7, *((_QWORD *)a1 + 4), v46);
    }
  }
  *((_QWORD *)a1 + 4) = 0LL;
}
