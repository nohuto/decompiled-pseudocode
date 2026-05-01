/*
 * XREFs of ?LayoutRow@GridRow@@QEAAXAEBUCRect@Geometry@@@Z @ 0x1804D6E14
 * Callers:
 *     ?LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z @ 0x1804D6FA8 (-LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     Mirror_IsThreadRTL @ 0x180097AB4 (Mirror_IsThreadRTL.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall GridRow::LayoutRow(GridRow *this, const struct Geometry::CRect *a2)
{
  int v4; // r15d
  int v5; // ebx
  _QWORD *v6; // rdi
  _QWORD *v7; // r14
  int v8; // eax
  int v9; // ebx
  int v10; // ecx
  int v11; // r8d
  int v12; // r15d
  int v13; // eax
  int IsThreadRTL; // r13d
  _QWORD *v15; // r14
  _QWORD *v16; // r12
  unsigned int v17; // r15d
  void (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v19)(_QWORD, GUID *, __int64 *); // rbx
  int v20; // eax
  int v21; // eax
  __int64 v22[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v23; // [rsp+30h] [rbp-30h]
  __int128 v24; // [rsp+40h] [rbp-20h] BYREF

  v4 = *((_DWORD *)this + 1);
  v5 = 0;
  v6 = (_QWORD *)*((_QWORD *)this + 3);
  v7 = &v6[*((_QWORD *)this + 4)];
  v8 = 0;
  while ( v6 != v7 )
  {
    if ( v5 )
      v5 += *(_DWORD *)this;
    v5 += (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v6 + 72LL))(*v6, *((unsigned int *)this + 1));
    v8 = v5;
    ++v6;
  }
  v9 = *((_DWORD *)a2 + 1);
  v10 = *(_DWORD *)a2;
  DWORD1(v23) = v9;
  v11 = v10 + v8;
  v12 = v9 + v4;
  HIDWORD(v23) = v12;
  v13 = (*((_DWORD *)a2 + 2) - (v10 + v8)) / 2;
  LODWORD(v23) = v13 + v10;
  DWORD2(v23) = v13 + v11;
  *((_DWORD *)this + 2) = v13 + v10;
  *((_DWORD *)this + 3) = v9;
  *((_DWORD *)this + 4) = v13 + v11;
  *((_DWORD *)this + 5) = v12;
  IsThreadRTL = Mirror_IsThreadRTL();
  v15 = (_QWORD *)*((_QWORD *)this + 3);
  v16 = &v15[*((_QWORD *)this + 4)];
  if ( v15 != v16 )
  {
    v17 = v12 - v9;
    do
    {
      v22[0] = 0LL;
      v18 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v15;
      v19 = **(void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v15;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v22);
      v19(v18, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, v22);
      v24 = v23;
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v15 + 72LL))(*v15, v17);
      DWORD2(v24) = v20 + v24;
      LODWORD(v23) = v20 + v24 + *(_DWORD *)this;
      if ( IsThreadRTL )
      {
        v21 = *((_DWORD *)this + 4) + *((_DWORD *)this + 2) - (v20 + v24);
        DWORD2(v24) = *((_DWORD *)this + 4) + *((_DWORD *)this + 2) - v24;
        LODWORD(v24) = v21;
      }
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v22[0] + 104LL))(v22[0], &v24);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v22);
      ++v15;
    }
    while ( v15 != v16 );
  }
}
