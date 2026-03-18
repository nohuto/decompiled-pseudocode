/*
 * XREFs of ?Serialize@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTTARGETSET_SERIALIZATION@@@DMM@@@Z @ 0x1402588B8
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x14024F2D8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x14024FE94 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x14003EB9C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x140059CD8 (-Initialize@-$AutoBuffer@U_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION@@@DMM@@QEAAJ_KQEBXW4DXGK_P.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::Serialize(
        DMMVIDEOPRESENTTARGETSET *this,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rbp
  int v9; // eax
  unsigned int v10; // esi
  unsigned __int8 v11; // si
  DMMVIDEOPRESENTTARGETSET *v12; // rdx
  const struct DMMVIDEOPRESENTTARGET *i; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8

  if ( a2 )
  {
    if ( a2[4] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 870;
    }
    v7 = 1LL;
    if ( *((_QWORD *)this + 5) > 1uLL )
      v7 = *((_QWORD *)this + 5);
    v8 = 28 * v7;
    v9 = DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::Initialize(a2, 28 * v7 + 4, a3, a4);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v11 = 0;
      *(_BYTE *)a2[4] = *((_BYTE *)this + 40);
      v12 = (DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)this + 3);
      if ( v12 != (DMMVIDEOPRESENTTARGETSET *)((char *)this + 24) )
      {
        for ( i = (DMMVIDEOPRESENTTARGETSET *)((char *)v12 - 8); i; i = DMMVIDEOPRESENTTARGETSET::GetNextTarget(this, i) )
        {
          v14 = a2[4];
          v15 = 28LL * v11;
          *(_DWORD *)(v15 + v14 + 4) = *((_DWORD *)i + 6);
          *(_DWORD *)(v15 + v14 + 8) = *((_DWORD *)i + 20);
          *(_DWORD *)(v15 + v14 + 12) = *((_DWORD *)i + 25);
          *(_DWORD *)(v15 + v14 + 16) = *((_DWORD *)i + 26);
          *(_BYTE *)(v15 + v14 + 20) = *((_BYTE *)i + 108);
          *(_DWORD *)(v15 + v14 + 24) = *((_DWORD *)i + 30);
          *(_DWORD *)(v15 + v14 + 28) = *((_DWORD *)i + 21);
          ++v11;
        }
      }
      if ( v11 != *(_BYTE *)a2[4] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 908;
      }
      return 0LL;
    }
    else
    {
      WdLogSingleEntry3(2LL, v8 + 4, this, v9);
      result = v10;
      WdLogGlobalForLineNumber = 888;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 864;
  }
  return result;
}
