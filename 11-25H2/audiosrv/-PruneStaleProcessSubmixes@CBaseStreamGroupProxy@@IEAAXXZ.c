/*
 * XREFs of ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x1800254A4
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x180024E40 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 *     ?EnumerateProcessSubmixes@CBaseStreamGroupProxy@@UEAAJAEAV?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F1150 (-EnumerateProcessSubmixes@CBaseStreamGroupProxy@@UEAAJAEAV-$vector@V-$ComPtr@UIProcessSubmixProx.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator() @ 0x180022FA0 (_lambda_92c40f897d3a9c7e927f302002ea2ff3_--operator().c)
 *     std::find_if_Microsoft::WRL::WeakRef____lambda_6721409c6d8d6be39a12e154768b61d2___ @ 0x180024D8C (std--find_if_Microsoft--WRL--WeakRef____lambda_6721409c6d8d6be39a12e154768b61d2___.c)
 *     ??$_Move_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123@00@Z @ 0x180025888 (--$_Move_unchecked@PEAVWeakRef@WRL@Microsoft@@PEAV123@@std@@YAPEAVWeakRef@WRL@Microsoft@@PEAV123.c)
 */

void __fastcall CBaseStreamGroupProxy::PruneStaleProcessSubmixes(CBaseStreamGroupProxy *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // r14
  __int64 *v3; // rbp
  __int64 v4; // rcx
  __int64 *v5; // rbx
  __int64 *v6; // rdi
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // rbp
  __int64 v10; // rdi
  __int64 *i; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v3 = (__int64 *)*((_QWORD *)this + 28);
  v5 = std::find_if_Microsoft::WRL::WeakRef____lambda_6721409c6d8d6be39a12e154768b61d2___(*((_QWORD **)this + 27), v3);
  v6 = v5;
  if ( v5 != v3 )
  {
    while ( ++v5 != v3 )
    {
      if ( !lambda_92c40f897d3a9c7e927f302002ea2ff3_::operator()(v4, (__int64)v5) )
      {
        v12 = 0LL;
        if ( v14 != v5 )
        {
          v12 = *v5;
          *v5 = 0LL;
        }
        v13 = *v6;
        *v6 = v12;
        v14[0] = v13;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v14);
        ++v6;
      }
    }
  }
  v7 = (__int64 *)*((_QWORD *)this + 28);
  if ( v6 != v7 )
  {
    v8 = std::_Move_unchecked<Microsoft::WRL::WeakRef *,Microsoft::WRL::WeakRef *>(v7, *((_QWORD *)this + 28));
    v9 = (__int64 *)*((_QWORD *)this + 28);
    v10 = v8;
    for ( i = (__int64 *)v8; i != v9; ++i )
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(i);
    *((_QWORD *)this + 28) = v10;
  }
  if ( v1 )
    LeaveCriticalSection(v1);
}
