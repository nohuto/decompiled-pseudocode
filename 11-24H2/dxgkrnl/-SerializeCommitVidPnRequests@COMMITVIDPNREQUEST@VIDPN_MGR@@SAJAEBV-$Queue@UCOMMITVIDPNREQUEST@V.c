/*
 * XREFs of ?SerializeCommitVidPnRequests@COMMITVIDPNREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x14025BC64
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x140256108 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x140256CC4 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x140023444 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A0CC (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x140056850 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Clear@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@@@QEAAXXZ @ 0x14006015C (-Clear@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U-$DoubleL.c)
 *     ?Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@Z @ 0x14008EEF0 (-Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZ.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall VIDPN_MGR::COMMITVIDPNREQUEST::SerializeCommitVidPnRequests(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // rsi
  _QWORD *v7; // rax
  __int64 (__fastcall ***v8)(_QWORD, __int64); // rbx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  int v16; // eax
  unsigned __int8 v17; // dl
  unsigned __int8 v18; // di
  unsigned __int8 *v19; // r8
  unsigned __int8 *v20; // rsi
  __int64 v21; // rbx
  _QWORD *v22; // rax
  void **v23; // [rsp+20h] [rbp-40h] BYREF
  void **v24; // [rsp+28h] [rbp-38h] BYREF
  int v25; // [rsp+30h] [rbp-30h]
  _QWORD v26[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v27; // [rsp+48h] [rbp-18h]
  int v28; // [rsp+50h] [rbp-10h]
  __int64 v29; // [rsp+58h] [rbp-8h]
  __int64 (__fastcall ***v30)(_QWORD, __int64); // [rsp+98h] [rbp+38h] BYREF

  if ( a2 )
  {
    if ( a2[4] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6620;
    }
    v25 = 0;
    v23 = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v5 = *(_QWORD *)(a1 + 24);
    v24 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    v26[1] = v26;
    v26[0] = v26;
    v27 = 0LL;
    v28 = 2;
    v29 = 0LL;
    if ( v5 == a1 + 24 )
      v6 = 0LL;
    else
      v6 = v5 - 8;
    while ( v6 )
    {
      v7 = (_QWORD *)operator new(0x38uLL, 0x4E506456u, 256LL);
      v8 = (__int64 (__fastcall ***)(_QWORD, __int64))v7;
      if ( v7 )
      {
        v7[1] = 0LL;
        v7[2] = 0LL;
        *v7 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
        v7[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
        v7[4] = 0LL;
        v7[5] = 0LL;
        v7[6] = 256LL;
      }
      else
      {
        v8 = 0LL;
      }
      v30 = v8;
      if ( !v8 )
      {
        WdLogSingleEntry2(6LL, 56LL, v6);
        WdLogGlobalForLineNumber = 6636;
        v10 = -1073741801;
        goto LABEL_19;
      }
      v9 = VIDPN_MGR::COMMITVIDPNREQUEST::Serialize(v6, v8);
      v10 = v9;
      if ( v9 < 0 )
      {
        WdLogSingleEntry2(2LL, v6, v9);
        WdLogGlobalForLineNumber = 6649;
LABEL_19:
        auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v30);
        goto LABEL_39;
      }
      v30 = 0LL;
      Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(&v23, (__int64)v8);
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v30);
      v11 = *(_QWORD *)(v6 + 8);
      v6 = v11 - 8;
      if ( v11 == a1 + 24 )
        v6 = 0LL;
    }
    v12 = 1LL;
    if ( *(_QWORD *)(a1 + 40) > 1uLL )
      v12 = *(_QWORD *)(a1 + 40);
    v13 = 28 * v12 - 20;
    if ( (_QWORD *)v26[0] != v26 )
    {
      v14 = v26[0] - 8LL;
      if ( v26[0] != 8LL )
      {
        do
        {
          v13 += *(_QWORD *)(v14 + 40);
          v15 = *(_QWORD **)(v14 + 8);
          v14 = (__int64)(v15 - 1);
          if ( v15 == v26 )
            v14 = 0LL;
        }
        while ( v14 );
      }
    }
    v16 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, v13);
    v10 = v16;
    if ( v16 >= 0 )
    {
      v17 = 1;
      v18 = 0;
      *(_BYTE *)a2[4] = v27;
      v19 = (unsigned __int8 *)a2[4];
      if ( *v19 > 1u )
        v17 = *v19;
      v20 = &v19[4 * v17 + 4];
      if ( (_QWORD *)v26[0] != v26 )
      {
        v21 = v26[0] - 8LL;
        if ( v26[0] != 8LL )
        {
          do
          {
            *(_DWORD *)(a2[4] + 4LL * v18 + 4) = (_DWORD)v20 - *((_DWORD *)a2 + 8);
            memmove(v20, *(const void **)(v21 + 32), *(_QWORD *)(v21 + 40));
            v20 += *(_QWORD *)(v21 + 40);
            v22 = *(_QWORD **)(v21 + 8);
            v21 = (__int64)(v22 - 1);
            if ( v22 == v26 )
              v21 = 0LL;
            ++v18;
          }
          while ( v21 );
        }
      }
      if ( v18 != *(_BYTE *)a2[4] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6726;
      }
      v10 = 0;
    }
    else
    {
      WdLogSingleEntry1(2LL, v16);
      WdLogGlobalForLineNumber = 6685;
    }
LABEL_39:
    v23 = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v24 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>>::Clear((__int64)&v24);
    return v10;
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 6614;
  }
  return result;
}
