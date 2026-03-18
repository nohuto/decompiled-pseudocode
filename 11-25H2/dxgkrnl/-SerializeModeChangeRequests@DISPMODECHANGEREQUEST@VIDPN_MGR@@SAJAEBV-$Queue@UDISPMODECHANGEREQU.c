/*
 * XREFs of ?SerializeModeChangeRequests@DISPMODECHANGEREQUEST@VIDPN_MGR@@SAJAEBV?$Queue@UDISPMODECHANGEREQUEST@VIDPN_MGR@@@@PEAV?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@@Z @ 0x1402550DC
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x14024F2D8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x14024FE94 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x140059CD8 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 */

__int64 __fastcall VIDPN_MGR::DISPMODECHANGEREQUEST::SerializeModeChangeRequests(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // ebx
  char v11; // r14
  char v12; // al
  _QWORD *v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rcx
  _QWORD *v16; // rax

  if ( a2 )
  {
    if ( a2[4] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6499;
    }
    v7 = 1LL;
    if ( *(_QWORD *)(a1 + 40) > 1uLL )
      v7 = *(_QWORD *)(a1 + 40);
    v8 = 96 * v7 + 8;
    v9 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, v8, a3, a4);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = 0;
      v12 = *(_BYTE *)(a1 + 40);
      v13 = (_QWORD *)(a1 + 24);
      *(_BYTE *)a2[4] = v12;
      v14 = a2[4] + 8LL;
      if ( (_QWORD *)*v13 != v13 )
      {
        v15 = *v13 - 8LL;
        if ( *v13 != 8LL )
        {
          do
          {
            *(_DWORD *)v14 = *(_DWORD *)(v15 + 48);
            *(_OWORD *)(v14 + 4) = *(_OWORD *)(v15 + 52);
            *(_OWORD *)(v14 + 20) = *(_OWORD *)(v15 + 68);
            *(_QWORD *)(v14 + 36) = *(_QWORD *)(v15 + 84);
            *(_DWORD *)(v14 + 44) = *(_DWORD *)(v15 + 92);
            *(_DWORD *)(v14 + 48) = *(_DWORD *)(v15 + 96);
            *(_DWORD *)(v14 + 52) = *(_DWORD *)(v15 + 100);
            *(_DWORD *)(v14 + 56) = *(_DWORD *)(v15 + 104);
            *(_QWORD *)(v14 + 64) = *(_QWORD *)(v15 + 112);
            *(_DWORD *)(v14 + 92) = *(_DWORD *)(v15 + 140);
            *(_OWORD *)(v14 + 72) = *(_OWORD *)(v15 + 120);
            *(_DWORD *)(v14 + 88) = *(_DWORD *)(v15 + 136);
            v14 += 96LL;
            v16 = *(_QWORD **)(v15 + 8);
            v15 = (__int64)(v16 - 1);
            if ( v16 == v13 )
              v15 = 0LL;
            ++v11;
          }
          while ( v15 );
        }
      }
      if ( v11 != *(_BYTE *)a2[4] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 6543;
      }
      if ( v11 )
      {
        if ( v8 != v14 - a2[4] )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 6549;
        }
      }
      return 0LL;
    }
    else
    {
      WdLogSingleEntry3(2LL, v8, a1, v9);
      result = v10;
      WdLogGlobalForLineNumber = 6513;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 6493;
  }
  return result;
}
