/*
 * XREFs of ??4CAPONode@@QEAAXAEAV0@@Z @ 0x14000B5AC
 * Callers:
 *     ?CopyAPOList@CProcessingData@@AEAAXAEAV?$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z @ 0x14000B2DC (-CopyAPOList@CProcessingData@@AEAAXAEAV-$CAtlList@PEAVCAPONode@@VCAPONodeTraits@@@ATL@@AEBV23@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089C8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Copy@?$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAXAEBV12@@Z @ 0x14000C080 (-Copy@-$CAtlArray@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATL@@QEAAXAEBV12@@Z.c)
 *     ?Copy@?$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V?$CElementTraits@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@@ATL@@@ATL@@QEAAXAEBV12@@Z @ 0x14000C2E0 (-Copy@-$CAtlArray@PEAUAPO_CONNECTION_PROPERTY_V_INTERNAL@@V-$CElementTraits@PEAUAPO_CONNECTION_P.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAPONode::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rsi
  char *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int16 v19; // ax
  char *v20; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *a2;
  v5 = *a1;
  *a1 = *a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = a2[1];
  v7 = a1[1];
  a1[1] = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = a2[2];
  v9 = a1[2];
  a1[2] = v8;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = a2[4];
  v11 = a1[4];
  a1[4] = v10;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = a2[3];
  v13 = a1[3];
  a1[3] = v12;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = a2[5];
  v15 = a1[5];
  a1[5] = v14;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::Copy(a1 + 7, a2 + 7);
  ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::Copy(a1 + 11, a2 + 11);
  ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::Copy(a1 + 15, a2 + 15);
  ATL::CAtlArray<CConnectionNode *,CConnectionNodeTraits>::Copy(a1 + 19, a2 + 19);
  ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::Copy(
    a1 + 23,
    a2 + 23);
  ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::Copy(
    a1 + 27,
    a2 + 27);
  ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::Copy(
    a1 + 31,
    a2 + 31);
  ATL::CAtlArray<APO_CONNECTION_PROPERTY_V_INTERNAL *,ATL::CElementTraits<APO_CONNECTION_PROPERTY_V_INTERNAL *>>::Copy(
    a1 + 35,
    a2 + 35);
  *(_OWORD *)(a1 + 39) = *(_OWORD *)(a2 + 39);
  *((_DWORD *)a1 + 110) = *((_DWORD *)a2 + 110);
  *((_BYTE *)a1 + 48) = *((_BYTE *)a2 + 48);
  v16 = (char *)(a2 + 41);
  v17 = 56LL;
  v18 = (char *)a1 - v16;
  do
  {
    if ( v17 == -2147483590 )
      break;
    v19 = *(_WORD *)&v16[v18 + 328];
    if ( !v19 )
      break;
    *(_WORD *)v16 = v19;
    v16 += 2;
    --v17;
  }
  while ( v17 );
  v20 = v16 - 2;
  if ( v17 )
    v20 = v16;
  *(_WORD *)v20 = 0;
  if ( !v17 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x170,
      (int)"avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h",
      (const char *)0x8007007ALL);
}
