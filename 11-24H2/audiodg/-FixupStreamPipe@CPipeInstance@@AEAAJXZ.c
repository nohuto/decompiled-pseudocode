/*
 * XREFs of ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x14000FFF8
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000FF08 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 * Callees:
 *     ?GetHead@?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ @ 0x14000474C (-GetHead@-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@QEAAAEAPEAVCAPONode@@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x140022FF0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x140025DE0 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?InsertBefore@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@PEAU3@AEBQEAVCProcessNode@@@Z @ 0x1400457C8 (-InsertBefore@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAP.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140065CDC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CPipeInstance::FixupStreamPipe(__int64 **this)
{
  CPipeInstance *v1; // r14
  int v2; // edi
  _DWORD *v3; // r15
  __int64 *v5; // rax
  __int64 v6; // r13
  unsigned int *v7; // r12
  __int64 v8; // rcx
  void (__fastcall **v9)(_QWORD, __int64); // rax
  void (__fastcall ***v10)(_QWORD, __int64); // rcx
  __int64 v11; // rsi
  unsigned int *v12; // r15
  ATL::CAtlException *v13; // rbx
  ATL::CAtlException *v14; // rbx
  __int64 v15; // [rsp+40h] [rbp-68h] BYREF
  char *v16; // [rsp+48h] [rbp-60h]
  ATL::CAtlException *v17; // [rsp+50h] [rbp-58h] BYREF
  ATL::CAtlException *v18; // [rsp+58h] [rbp-50h] BYREF
  _OWORD v19[4]; // [rsp+60h] [rbp-48h] BYREF
  CPipeInstance *v20; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v22; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v23; // [rsp+C8h] [rbp+20h] BYREF

  v20 = (CPipeInstance *)this;
  v1 = (CPipeInstance *)this;
  v2 = 0;
  v3 = this + 14;
  v16 = (char *)(this + 14);
  if ( *((_DWORD *)this + 28) == 2 && (unsigned __int64)this[4] > 1 )
  {
    v5 = this[2];
    if ( !v5 )
      ATL::AtlThrowImpl(-2147467259);
    v6 = *v5;
    v7 = (unsigned int *)v5[2];
    if ( !*v5 )
      ATL::AtlThrowImpl(-2147467259);
    v8 = *(_QWORD *)(v6 + 16);
    if ( v7[10] == 3
      && *(_DWORD *)(v8 + 40) == 2
      && *(_DWORD *)(*(_QWORD *)(v8 + 32) + 4LL)
      && (*(_BYTE *)(v8 + 48) & 1) != 0 )
    {
      v23 = 0LL;
      v22 = 0LL;
      v19[0] = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v2 = CAPOProcessNode::CreateAPOProcessNode(
             &GUID_e916b6b2_22bd_4afc_b337_d3d9fb27670e,
             0LL,
             v7[6],
             1LL,
             0,
             v19,
             &v23);
      if ( v2 < 0 )
      {
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v22);
        if ( v23 )
          (**(void (__fastcall ***)(__int64, __int64))v23)(v23, 1LL);
        goto LABEL_20;
      }
      v11 = v23;
      v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)v1 + 30) + 24LL))(
             *((_QWORD *)v1 + 30),
             *(_QWORD *)(v23 + 32) + 8LL,
             *(unsigned int *)(*(_QWORD *)(v23 + 32) + 4LL),
             *((_QWORD *)v1 + 24),
             *(_QWORD *)(*(_QWORD *)(v23 + 32) + 56LL),
             *(_QWORD *)(v23 + 32) + 40LL);
      if ( v2 < 0
        || (v2 = (*(__int64 (__fastcall **)(unsigned int *, __int64 *))(*(_QWORD *)v7 + 16LL))(v7, &v22), v2 < 0) )
      {
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v22);
LABEL_18:
        v9 = *(void (__fastcall ***)(_QWORD, __int64))v11;
        v10 = (void (__fastcall ***)(_QWORD, __int64))v11;
LABEL_19:
        (*v9)(v10, 1LL);
        goto LABEL_20;
      }
      v15 = 0LL;
      if ( (*(unsigned int (__fastcall **)(__int64, __int64, __int64 *, __int64))(*(_QWORD *)v11 + 40LL))(
             v11,
             v22,
             &v15,
             v22) )
      {
        v2 = -2005139404;
      }
      else
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, v22);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 32LL))(v11, v22);
        v2 = 0;
        try
        {
          v21 = v11;
          ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::InsertBefore((char *)v1 + 16, v6, &v21);
        }
        catch ( ATL::CAtlException *v17 )
        {
          v13 = v17;
          if ( *(_DWORD *)v17 == -1073741571 )
            _o__resetstkoflw();
          LODWORD(v21) = *(_DWORD *)v13;
          v2 = v21;
          if ( (int)v21 < 0 )
          {
            ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v15);
            ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v22);
            v10 = (void (__fastcall ***)(_QWORD, __int64))v23;
LABEL_27:
            v9 = *v10;
            goto LABEL_19;
          }
          v1 = v20;
          v3 = v16;
        }
        v11 = 0LL;
      }
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v15);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v22);
      if ( v11 )
        (**(void (__fastcall ***)(__int64, __int64))v11)(v11, 1LL);
    }
  }
  if ( *v3 != 5 || *((_QWORD *)v1 + 4) != 1LL )
    goto LABEL_3;
  v22 = 0LL;
  v20 = 0LL;
  v12 = *(unsigned int **)ATL::CAtlList<CAPONode *,CAPONodeTraits>::GetHead((_QWORD *)v1 + 2);
  v19[0] = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  v2 = CAPOProcessNode::CreateAPOProcessNode(&GUID_e916b6b2_22bd_4afc_b337_d3d9fb27670e, 0LL, v12[6], 1LL, 0, v19, &v22);
  if ( v2 < 0 )
  {
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v20);
    v10 = (void (__fastcall ***)(_QWORD, __int64))v22;
    if ( !v22 )
      goto LABEL_20;
    goto LABEL_27;
  }
  v11 = v22;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)v1 + 30) + 24LL))(
         *((_QWORD *)v1 + 30),
         *(_QWORD *)(v22 + 32) + 8LL,
         *(unsigned int *)(*(_QWORD *)(v22 + 32) + 4LL),
         *((_QWORD *)v1 + 24),
         *(_QWORD *)(*(_QWORD *)(v22 + 32) + 56LL),
         *(_QWORD *)(v22 + 32) + 40LL);
  if ( v2 < 0
    || (v2 = (*(__int64 (__fastcall **)(unsigned int *, CPipeInstance **))(*(_QWORD *)v12 + 16LL))(v12, &v20), v2 < 0) )
  {
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v20);
    goto LABEL_18;
  }
  v23 = 0LL;
  if ( (*(unsigned int (__fastcall **)(__int64, CPipeInstance *, __int64 *, CPipeInstance *))(*(_QWORD *)v11 + 40LL))(
         v11,
         v20,
         &v23,
         v20) )
  {
    v2 = -2005139404;
  }
  else
  {
    (*(void (__fastcall **)(__int64, CPipeInstance *))(*(_QWORD *)v11 + 24LL))(v11, v20);
    (*(void (__fastcall **)(__int64, CPipeInstance *))(*(_QWORD *)v11 + 32LL))(v11, v20);
    v2 = 0;
    try
    {
      v21 = v11;
      ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail((char *)v1 + 16, &v21);
    }
    catch ( ATL::CAtlException *v18 )
    {
      v14 = v18;
      if ( *(_DWORD *)v18 == -1073741571 )
        _o__resetstkoflw();
      LODWORD(v21) = *(_DWORD *)v14;
      v2 = v21;
      if ( (int)v21 < 0 )
      {
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v23);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v20);
        v10 = (void (__fastcall ***)(_QWORD, __int64))v22;
        goto LABEL_27;
      }
    }
    v11 = 0LL;
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v23);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v20);
  if ( v11 )
    (**(void (__fastcall ***)(__int64, __int64))v11)(v11, 1LL);
LABEL_3:
  if ( v2 < 0 )
LABEL_20:
    AudDGTraceLoggingErrorHelper("CPipeInstance::FixupStreamPipe", 0x9AAu, v2);
  return (unsigned int)v2;
}
