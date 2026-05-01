/*
 * XREFs of ?MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z @ 0x180036AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180036BC4 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ??$FindEx@VCTaskWindowFinder@@@?$CTSimpleFixedArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCTaskWindowFinder@@AEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800DFC90 (--$FindEx@VCTaskWindowFinder@@@-$CTSimpleFixedArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@V-$C.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CImmersiveApp::MatchByWindow(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bp
  bool result; // al
  unsigned __int64 i; // rbx
  __int64 *v8; // rcx
  __int64 v9; // rax
  char v10; // al
  int v11; // ebx
  _BYTE v12[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  if ( (a3 & 4) != 0 )
    return CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176)) == *(HWND *)a2;
  v13 = 0LL;
  for ( i = 0LL; ; ++i )
  {
    if ( i >= *(_QWORD *)(a1 + 344) )
    {
      v10 = 0;
      goto LABEL_13;
    }
    if ( *(_BYTE *)(a2 + 16) )
      break;
    v8 = *(__int64 **)(*(_QWORD *)(a1 + 336) + 8 * i);
    v9 = *v8;
    if ( *(_QWORD *)a2 )
    {
      if ( (*(__int64 (**)(void))(v9 + 32))() == *(_QWORD *)a2 )
        break;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD))(v9 + 48))(v8, *(_QWORD *)(a2 + 8)) )
    {
      break;
    }
  }
  v10 = 1;
LABEL_13:
  result = v10
        || (v3 & 1) != 0
        && (v13 = 0LL,
            v11 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<ITaskWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::FindEx<CTaskWindowFinder>(
                    a1 + 424,
                    a2,
                    a3,
                    v12),
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13),
            v11 >= 0)
        || (v3 & 2) != 0
        && *(_QWORD *)a2
        && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 320) + 192LL))(*(_QWORD *)(a1 + 320));
  return result;
}
