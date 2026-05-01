/*
 * XREFs of ?HandleOwnerSwitch@CClassicWindowManager@@UEAA?AW4OWNER_SWITCH_RESULT@@PEAUOWNERSHIP_CHANGE_INFO@@@Z @ 0x180040C10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180041470 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?RecomputeOwnerForDirectOwnees@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@0@Z @ 0x180041974 (-RecomputeOwnerForDirectOwnees@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@0@Z.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x1800422E4 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x18013E3E0 (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     CClassicWindowManager::ForEachWindow__lambda_b1712e7e691d8bb114c04e91018acc0d___ @ 0x1802F1FF8 (CClassicWindowManager--ForEachWindow__lambda_b1712e7e691d8bb114c04e91018acc0d___.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CClassicWindowManager::HandleOwnerSwitch(__int64 a1, __int64 *a2)
{
  CClassicWindowManager *v4; // rdi
  unsigned int v5; // r15d
  _QWORD *v6; // r12
  unsigned __int64 i; // rsi
  __int64 v8; // rbx
  int v9; // r13d
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  int v12; // eax
  unsigned __int64 v13; // r13
  __int64 v14; // rsi
  __int64 v16; // rbx
  __int64 v17; // rcx
  void (__fastcall *v18)(__int64, __int64); // rdi
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // rcx
  unsigned __int64 v20; // [rsp+20h] [rbp-48h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+28h] [rbp-40h]
  int v22; // [rsp+50h] [rbp-18h]
  __int64 v23; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v25; // [rsp+C0h] [rbp+58h]
  unsigned __int64 v26; // [rsp+C8h] [rbp+60h]

  v4 = (CClassicWindowManager *)(a1 - 72);
  lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)((a1 + 64) & -(__int64)(a1 != 72));
  v22 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(lpCriticalSection, 1LL);
  v5 = 0;
  v23 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
  v25 = *a2;
  v23 = 0LL;
  v20 = *(_QWORD *)(a1 + 128);
  v6 = (_QWORD *)(a1 + 112);
  v26 = 0LL;
  for ( i = 0LL; i < v6[2]; ++i )
  {
    v8 = *(_QWORD *)(v6[1] + 8 * i);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v24 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v8)(v8, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v24) >= 0
      && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 192LL))(v24, v25) )
    {
      v9 = 0;
    }
    else
    {
      v9 = -1;
    }
    v10 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( !v9 )
    {
      v11 = i;
      v12 = 0;
      goto LABEL_14;
    }
  }
  v12 = -2147319765;
  v11 = v26;
LABEL_14:
  if ( v12 >= 0 )
  {
    v19 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v6[1] + 8 * v11);
    v12 = (**v19)(v19, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v23);
    v13 = v11;
  }
  else
  {
    v13 = v20;
  }
  if ( v12 >= 0 )
  {
    CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(v4, v23, *((unsigned int *)a2 + 2));
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v23 + 152LL))(v23) )
    {
      (*(void (__fastcall **)(_QWORD *, unsigned __int64))(*v6 + 16LL))(v6, v13);
      v5 = 2;
    }
  }
  else if ( v12 == -2147319765 )
  {
    if ( (a2[1] & 1) != 0 )
    {
      if ( IsWindowVisible((HWND)*a2) )
      {
        v5 = 1;
      }
      else
      {
        v16 = *(_QWORD *)CClassicWindowManager::GetClassicWindowOwner(v4, &v24, *a2);
        v17 = v24;
        if ( v24 )
        {
          v24 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
        if ( v16 )
          CClassicWindowManager::RecomputeOwnerForDirectOwnees(v4, 0LL, 0LL);
      }
    }
    else if ( (a2[1] & 0x12) != 0 )
    {
      CClassicWindowManager::ForEachWindow__lambda_b1712e7e691d8bb114c04e91018acc0d___(v4, v4);
    }
  }
  v14 = v23;
  if ( v23 && !v5 )
  {
    v18 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 80LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a2 + 2);
    v18(v14, (__int64)(a2 + 2));
    v14 = v23;
  }
  if ( v14 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( v22 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
