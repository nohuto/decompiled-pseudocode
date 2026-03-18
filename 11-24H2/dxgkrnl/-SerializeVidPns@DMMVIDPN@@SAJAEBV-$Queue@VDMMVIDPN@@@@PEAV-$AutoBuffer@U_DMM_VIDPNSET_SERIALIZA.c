/*
 * XREFs of ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1402661FC
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x140256108 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x140256CC4 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x140023444 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A0CC (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x140056850 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Clear@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@@@QEAAXXZ @ 0x14006015C (-Clear@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U-$DoubleL.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x140311AA4 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 */

__int64 __fastcall DMMVIDPN::SerializeVidPns(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 (__fastcall ***v9)(_QWORD, __int64); // rbx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  int v17; // eax
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // di
  unsigned __int8 *v20; // r8
  unsigned __int8 *v21; // rsi
  __int64 v22; // rbx
  _QWORD *v23; // rax
  void **v24; // [rsp+20h] [rbp-40h] BYREF
  void **v25; // [rsp+28h] [rbp-38h] BYREF
  int v26; // [rsp+30h] [rbp-30h]
  _QWORD v27[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-18h]
  int v29; // [rsp+50h] [rbp-10h]
  __int64 v30; // [rsp+58h] [rbp-8h]
  __int64 (__fastcall ***v31)(_QWORD, __int64); // [rsp+98h] [rbp+38h] BYREF

  if ( a2 )
  {
    if ( a2[4] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 896;
    }
    v26 = 0;
    v24 = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v5 = a1 + 24;
    v6 = *(_QWORD *)(a1 + 24);
    v25 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    v27[1] = v27;
    v27[0] = v27;
    v28 = 0LL;
    v29 = 2;
    v30 = 0LL;
    if ( v6 == a1 + 24 )
      v7 = 0LL;
    else
      v7 = v6 - 8;
    while ( v7 )
    {
      v8 = (_QWORD *)operator new(0x38uLL, 0x4E506456u, 256LL);
      v9 = (__int64 (__fastcall ***)(_QWORD, __int64))v8;
      if ( v8 )
      {
        v8[1] = 0LL;
        v8[2] = 0LL;
        *v8 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
        v8[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
        v8[4] = 0LL;
        v8[5] = 0LL;
        v8[6] = 256LL;
      }
      else
      {
        v9 = 0LL;
      }
      v31 = v9;
      if ( !v9 )
      {
        WdLogSingleEntry2(6LL, 56LL, v7);
        WdLogGlobalForLineNumber = 912;
        v11 = -1073741801;
        goto LABEL_19;
      }
      v10 = DMMVIDPN::Serialize(v7, v9);
      v11 = v10;
      if ( v10 < 0 )
      {
        WdLogSingleEntry2(2LL, v7, v10);
        WdLogGlobalForLineNumber = 925;
LABEL_19:
        auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v31);
        goto LABEL_39;
      }
      v31 = 0LL;
      Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(&v24, (__int64)v9);
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v31);
      v12 = *(_QWORD *)(v7 + 8);
      v7 = v12 - 8;
      if ( v12 == v5 )
        v7 = 0LL;
    }
    v13 = 1LL;
    if ( v28 > 1 )
      v13 = v28;
    v14 = 4 * v13 + 4;
    if ( (_QWORD *)v27[0] != v27 )
    {
      v15 = v27[0] - 8LL;
      if ( v27[0] != 8LL )
      {
        do
        {
          v14 += *(_QWORD *)(v15 + 40);
          v16 = *(_QWORD **)(v15 + 8);
          v15 = (__int64)(v16 - 1);
          if ( v16 == v27 )
            v15 = 0LL;
        }
        while ( v15 );
      }
    }
    v17 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, v14);
    v11 = v17;
    if ( v17 >= 0 )
    {
      v18 = 1;
      v19 = 0;
      *(_BYTE *)a2[4] = v28;
      v20 = (unsigned __int8 *)a2[4];
      if ( *v20 > 1u )
        v18 = *v20;
      v21 = &v20[4 * v18 + 4];
      if ( (_QWORD *)v27[0] != v27 )
      {
        v22 = v27[0] - 8LL;
        if ( v27[0] != 8LL )
        {
          do
          {
            *(_DWORD *)(a2[4] + 4LL * v19 + 4) = (_DWORD)v21 - *((_DWORD *)a2 + 8);
            memmove(v21, *(const void **)(v22 + 32), *(_QWORD *)(v22 + 40));
            v21 += *(_QWORD *)(v22 + 40);
            v23 = *(_QWORD **)(v22 + 8);
            v22 = (__int64)(v23 - 1);
            if ( v23 == v27 )
              v22 = 0LL;
            ++v19;
          }
          while ( v22 );
        }
      }
      if ( v19 != *(_BYTE *)a2[4] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 997;
      }
      v11 = 0;
    }
    else
    {
      WdLogSingleEntry1(2LL, v17);
      WdLogGlobalForLineNumber = 961;
    }
LABEL_39:
    v24 = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v25 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>>::Clear((__int64)&v25);
    return v11;
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 890;
  }
  return result;
}
