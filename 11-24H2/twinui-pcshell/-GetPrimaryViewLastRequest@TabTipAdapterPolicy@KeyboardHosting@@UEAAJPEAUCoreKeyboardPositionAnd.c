/*
 * XREFs of ?GetPrimaryViewLastRequest@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x18014E530
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@1@AEBI@Z @ 0x18014E648 (--$find@X@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetPrimaryViewLastRequest(
        RTL_SRWLOCK *this,
        struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *a2)
{
  RTL_SRWLOCK *v2; // rdi
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  __int64 v9; // xmm4_8
  _BYTE v11[76]; // [rsp+28h] [rbp-49h]
  _OWORD v12[4]; // [rsp+78h] [rbp+7h] BYREF
  __int64 v13; // [rsp+B8h] [rbp+47h]
  __int64 v14; // [rsp+D8h] [rbp+67h] BYREF

  v2 = this + 98;
  AcquireSRWLockExclusive(this + 98);
  memset_0(v12, 0, 0x48uLL);
  std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::find<void>(
    &this[90],
    &v14,
    &this[113]);
  if ( (PVOID)v14 == this[91].Ptr
    || (*(_DWORD *)&v11[72] = *(_DWORD *)(v14 + 92),
        *(_OWORD *)&v11[16] = *(_OWORD *)(v14 + 36),
        *(_OWORD *)&v11[32] = *(_OWORD *)(v14 + 52),
        *(_OWORD *)v11 = *(_OWORD *)(v14 + 20),
        *(_OWORD *)&v11[48] = *(_OWORD *)(v14 + 68),
        *(_QWORD *)&v11[64] = *(_QWORD *)(v14 + 84),
        !(unsigned __int8)_mm_cvtsi128_si32(*(__m128i *)v11)) )
  {
    v9 = v13;
    v8 = v12[3];
    v7 = v12[2];
    v6 = v12[1];
    v5 = v12[0];
  }
  else
  {
    v5 = *(_OWORD *)&v11[4];
    v6 = *(_OWORD *)&v11[20];
    v7 = *(_OWORD *)&v11[36];
    v8 = *(_OWORD *)&v11[52];
    v9 = *(_QWORD *)&v11[68];
  }
  *(_OWORD *)a2 = v5;
  *((_OWORD *)a2 + 1) = v6;
  *((_OWORD *)a2 + 2) = v7;
  *((_OWORD *)a2 + 3) = v8;
  *((_QWORD *)a2 + 8) = v9;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return 0LL;
}
