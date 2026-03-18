/*
 * XREFs of ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x140254DC8
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x14024F2D8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x14024FE94 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A948 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x140056FA0 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x140059CD8 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?Clear@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@@@QEAAXXZ @ 0x14005F8A4 (-Clear@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U-$DoubleL.c)
 *     ?Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@Z @ 0x14008DC20 (-Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZ.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

__int64 __fastcall VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rsi
  _QWORD *v9; // rax
  __int64 (__fastcall ***v10)(_QWORD, __int64); // rbx
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  int v18; // eax
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // di
  unsigned __int8 *v21; // r8
  unsigned __int8 *v22; // rsi
  __int64 v23; // rbx
  _QWORD *v24; // rax
  void **v25; // [rsp+20h] [rbp-40h] BYREF
  void **v26; // [rsp+28h] [rbp-38h] BYREF
  int v27; // [rsp+30h] [rbp-30h]
  _QWORD v28[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v29; // [rsp+48h] [rbp-18h]
  int v30; // [rsp+50h] [rbp-10h]
  __int64 v31; // [rsp+58h] [rbp-8h]
  __int64 (__fastcall ***v32)(_QWORD, __int64); // [rsp+98h] [rbp+38h] BYREF

  if ( a2 )
  {
    if ( a2[4] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6608;
    }
    v27 = 0;
    v25 = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v7 = *(_QWORD *)(a1 + 24);
    v26 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    v28[1] = v28;
    v28[0] = v28;
    v29 = 0LL;
    v30 = 2;
    v31 = 0LL;
    if ( v7 == a1 + 24 )
      v8 = 0LL;
    else
      v8 = v7 - 8;
    while ( v8 )
    {
      v9 = (_QWORD *)operator new(0x38uLL, 0x4E506456u, 256LL, a4);
      v10 = (__int64 (__fastcall ***)(_QWORD, __int64))v9;
      if ( v9 )
      {
        v9[1] = 0LL;
        v9[2] = 0LL;
        *v9 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
        v9[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
        v9[4] = 0LL;
        v9[5] = 0LL;
        v9[6] = 256LL;
      }
      else
      {
        v10 = 0LL;
      }
      v32 = v10;
      if ( !v10 )
      {
        WdLogSingleEntry2(6LL, 56LL, v8);
        WdLogGlobalForLineNumber = 6624;
        v12 = -1073741801;
        goto LABEL_19;
      }
      v11 = VIDPN_MGR::COMMITVIDPNREQUEST::Serialize(v8, v10);
      v12 = v11;
      if ( v11 < 0 )
      {
        WdLogSingleEntry2(2LL, v8, v11);
        WdLogGlobalForLineNumber = 6637;
LABEL_19:
        auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v32);
        goto LABEL_39;
      }
      v32 = 0LL;
      Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(&v25, (__int64)v10);
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v32);
      v13 = *(_QWORD *)(v8 + 8);
      v8 = v13 - 8;
      if ( v13 == a1 + 24 )
        v8 = 0LL;
    }
    v14 = 1LL;
    if ( *(_QWORD *)(a1 + 40) > 1uLL )
      v14 = *(_QWORD *)(a1 + 40);
    v15 = 28 * v14 - 20;
    if ( (_QWORD *)v28[0] != v28 )
    {
      v16 = v28[0] - 8LL;
      if ( v28[0] != 8LL )
      {
        do
        {
          v15 += *(_QWORD *)(v16 + 40);
          a3 = v28;
          v17 = *(_QWORD **)(v16 + 8);
          v16 = (__int64)(v17 - 1);
          if ( v17 == v28 )
            v16 = 0LL;
        }
        while ( v16 );
      }
    }
    v18 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, v15, (__int64)a3, a4);
    v12 = v18;
    if ( v18 >= 0 )
    {
      v19 = 1;
      v20 = 0;
      *(_BYTE *)a2[4] = v29;
      v21 = (unsigned __int8 *)a2[4];
      if ( *v21 > 1u )
        v19 = *v21;
      v22 = &v21[4 * v19 + 4];
      if ( (_QWORD *)v28[0] != v28 )
      {
        v23 = v28[0] - 8LL;
        if ( v28[0] != 8LL )
        {
          do
          {
            *(_DWORD *)(a2[4] + 4LL * v20 + 4) = (_DWORD)v22 - *((_DWORD *)a2 + 8);
            memmove(v22, *(const void **)(v23 + 32), *(_QWORD *)(v23 + 40));
            v22 += *(_QWORD *)(v23 + 40);
            v24 = *(_QWORD **)(v23 + 8);
            v23 = (__int64)(v24 - 1);
            if ( v24 == v28 )
              v23 = 0LL;
            ++v20;
          }
          while ( v23 );
        }
      }
      if ( v20 != *(_BYTE *)a2[4] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6714;
      }
      v12 = 0;
    }
    else
    {
      WdLogSingleEntry1(2LL, v18);
      WdLogGlobalForLineNumber = 6673;
    }
LABEL_39:
    v25 = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v26 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>>::Clear((__int64)&v26);
    return v12;
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 6602;
  }
  return result;
}
