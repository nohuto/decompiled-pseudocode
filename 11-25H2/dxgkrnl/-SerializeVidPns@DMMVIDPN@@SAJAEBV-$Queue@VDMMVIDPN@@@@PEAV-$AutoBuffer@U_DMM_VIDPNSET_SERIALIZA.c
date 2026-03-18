/*
 * XREFs of ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x14025F2FC
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x14024F2D8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x14024FE94 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14004A948 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?Enqueue@?$Queue@V?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV?$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@Z @ 0x140056FA0 (-Enqueue@-$Queue@V-$AutoBuffer@U_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION@@@DMM@@@@QEAAEQEAV-.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x140059CD8 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 *     ?Clear@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U?$DoubleLinkedListElementDeleter@V?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@@@@QEAAXXZ @ 0x14005F8A4 (-Clear@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@U-$DoubleL.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1403AAD74 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 */

__int64 __fastcall DMMVIDPN::SerializeVidPns(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rsi
  _QWORD *v10; // rax
  __int64 (__fastcall ***v11)(_QWORD, __int64); // rbx
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  int v19; // eax
  unsigned __int8 v20; // dl
  unsigned __int8 v21; // di
  unsigned __int8 *v22; // r8
  unsigned __int8 *v23; // rsi
  __int64 v24; // rbx
  _QWORD *v25; // rax
  void **v26; // [rsp+20h] [rbp-40h] BYREF
  void **v27; // [rsp+28h] [rbp-38h] BYREF
  int v28; // [rsp+30h] [rbp-30h]
  _QWORD v29[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v30; // [rsp+48h] [rbp-18h]
  int v31; // [rsp+50h] [rbp-10h]
  __int64 v32; // [rsp+58h] [rbp-8h]
  __int64 (__fastcall ***v33)(_QWORD, __int64); // [rsp+98h] [rbp+38h] BYREF

  if ( a2 )
  {
    if ( a2[4] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 896;
    }
    v28 = 0;
    v26 = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v7 = a1 + 24;
    v8 = *(_QWORD *)(a1 + 24);
    v27 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    v29[1] = v29;
    v29[0] = v29;
    v30 = 0LL;
    v31 = 2;
    v32 = 0LL;
    if ( v8 == a1 + 24 )
      v9 = 0LL;
    else
      v9 = v8 - 8;
    while ( v9 )
    {
      v10 = (_QWORD *)operator new(0x38uLL, 0x4E506456u, 256LL, a4);
      v11 = (__int64 (__fastcall ***)(_QWORD, __int64))v10;
      if ( v10 )
      {
        v10[1] = 0LL;
        v10[2] = 0LL;
        *v10 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
        v10[3] = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
        v10[4] = 0LL;
        v10[5] = 0LL;
        v10[6] = 256LL;
      }
      else
      {
        v11 = 0LL;
      }
      v33 = v11;
      if ( !v11 )
      {
        WdLogSingleEntry2(6LL, 56LL, v9);
        WdLogGlobalForLineNumber = 912;
        v13 = -1073741801;
        goto LABEL_19;
      }
      v12 = DMMVIDPN::Serialize(v9, v11);
      v13 = v12;
      if ( v12 < 0 )
      {
        WdLogSingleEntry2(2LL, v9, v12);
        WdLogGlobalForLineNumber = 925;
LABEL_19:
        auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v33);
        goto LABEL_39;
      }
      v33 = 0LL;
      Queue<DMM::AutoBuffer<_DMM_VIDPNPATHANDTARGETMODESET_SERIALIZATION>>::Enqueue(&v26, (__int64)v11);
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v33);
      v14 = *(_QWORD *)(v9 + 8);
      v9 = v14 - 8;
      if ( v14 == v7 )
        v9 = 0LL;
    }
    v15 = 1LL;
    if ( v30 > 1 )
      v15 = v30;
    v16 = 4 * v15 + 4;
    if ( (_QWORD *)v29[0] != v29 )
    {
      v17 = v29[0] - 8LL;
      if ( v29[0] != 8LL )
      {
        do
        {
          v16 += *(_QWORD *)(v17 + 40);
          a3 = v29;
          v18 = *(_QWORD **)(v17 + 8);
          v17 = (__int64)(v18 - 1);
          if ( v18 == v29 )
            v17 = 0LL;
        }
        while ( v17 );
      }
    }
    v19 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, v16, (__int64)a3, a4);
    v13 = v19;
    if ( v19 >= 0 )
    {
      v20 = 1;
      v21 = 0;
      *(_BYTE *)a2[4] = v30;
      v22 = (unsigned __int8 *)a2[4];
      if ( *v22 > 1u )
        v20 = *v22;
      v23 = &v22[4 * v20 + 4];
      if ( (_QWORD *)v29[0] != v29 )
      {
        v24 = v29[0] - 8LL;
        if ( v29[0] != 8LL )
        {
          do
          {
            *(_DWORD *)(a2[4] + 4LL * v21 + 4) = (_DWORD)v23 - *((_DWORD *)a2 + 8);
            memmove(v23, *(const void **)(v24 + 32), *(_QWORD *)(v24 + 40));
            v23 += *(_QWORD *)(v24 + 40);
            v25 = *(_QWORD **)(v24 + 8);
            v24 = (__int64)(v25 - 1);
            if ( v25 == v29 )
              v24 = 0LL;
            ++v21;
          }
          while ( v24 );
        }
      }
      if ( v21 != *(_BYTE *)a2[4] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 997;
      }
      v13 = 0;
    }
    else
    {
      WdLogSingleEntry1(2LL, v19);
      WdLogGlobalForLineNumber = 961;
    }
LABEL_39:
    v26 = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
    v27 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
    DoublyLinkedList<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>>::Clear((__int64)&v27);
    return v13;
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 890;
  }
  return result;
}
