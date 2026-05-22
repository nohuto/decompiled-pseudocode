/*
 * XREFs of ?PopulatePointerInputInfo@InjectionRawInputProvider@@AEAAJPEAUDeviceInfo@@AEAV?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@PEAVInputInjectionClientProxy@@PEAUPointerInputInfo@@@Z @ 0x1800DF718
 * Callers:
 *     ?OnInputReport@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@AEAV?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@@Z @ 0x1800DF454 (-OnInputReport@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@AEAV-$vector@UTouc.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?GetWorkspaceRelativeCoordinates@InjectionRawInputProvider@@AEAA?AUtagPOINT@@U2@PEAVInputInjectionClientProxy@@@Z @ 0x1800DEFD8 (-GetWorkspaceRelativeCoordinates@InjectionRawInputProvider@@AEAA-AUtagPOINT@@U2@PEAVInputInjecti.c)
 *     ?HitTest@InjectionRawInputProvider@@AEAAJUtagPOINT@@KPEAVInputInjectionClientProxy@@@Z @ 0x1800DF10C (-HitTest@InjectionRawInputProvider@@AEAAJUtagPOINT@@KPEAVInputInjectionClientProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InjectionRawInputProvider::PopulatePointerInputInfo(
        InjectionRawInputProvider *a1,
        LONG *a2,
        InjectionRawInputProvider **a3,
        struct InputInjectionClientProxy *a4,
        LARGE_INTEGER *a5)
{
  __int64 v8; // rax
  int v9; // r14d
  __int64 v10; // rsi
  InjectionRawInputProvider *v11; // rcx
  __m128i v12; // xmm6
  __int64 v13; // rbp
  struct tagPOINT v14; // rbx
  int v15; // eax
  unsigned int v16; // r14d
  __int64 v17; // rcx
  int v18; // eax
  LARGE_INTEGER v20; // [rsp+20h] [rbp-68h] BYREF
  struct InputInjectionClientProxy *v21; // [rsp+28h] [rbp-60h]
  struct tagPOINT v22; // [rsp+30h] [rbp-58h] BYREF
  InjectionRawInputProvider *v23; // [rsp+38h] [rbp-50h]
  __int64 v24; // [rsp+40h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v20.QuadPart = 0LL;
  v23 = a1;
  QueryPerformanceCounter(&v20);
  a5[2] = v20;
  a5->LowPart = a2[1];
  a5->HighPart = *a2;
  a5[1].LowPart = GetTickCount();
  v8 = (*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)a4 + 1) + 24LL))((_QWORD *)a4 + 1);
  a5[5].LowPart = v8;
  v9 = v8;
  a5[39].HighPart = (a3[1] - *a3) >> 4;
  v10 = 0LL;
  v24 = v8;
  while ( (unsigned int)v10 < a5[39].HighPart )
  {
    v11 = *a3;
    if ( (a3[1] - *a3) >> 4 <= (unsigned __int64)(unsigned int)v10 )
    {
      std::_Xout_of_range("invalid vector subscript");
      __debugbreak();
      return 0LL;
    }
    v12 = *((__m128i *)v11 + (unsigned int)v10);
    v13 = *((_QWORD *)v11 + 2 * (unsigned int)v10);
    v21 = (struct InputInjectionClientProxy *)__PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v12, 8)), HIDWORD(v13));
    InjectionRawInputProvider::GetWorkspaceRelativeCoordinates(v11, (struct tagPOINT)&v22, v21, (__int64)a4);
    v14 = v22;
    if ( (_DWORD)v13 == 65542 || (_DWORD)v13 == 131074 )
    {
      v15 = InjectionRawInputProvider::HitTest(v23, v22, v9, a4);
      v16 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE9,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\injection\\lib\\injectionrawinputprovider.cpp",
          (const char *)(unsigned int)v15);
        return v16;
      }
      v9 = v24;
    }
    v17 = 18 * v10;
    a5[v17 + 40].HighPart = _mm_cvtsi128_si32(_mm_srli_si128(v12, 12));
    a5[v17 + 40].LowPart = 2;
    a5[v17 + 44] = (LARGE_INTEGER)v14;
    a5[v17 + 46] = (LARGE_INTEGER)v14;
    a5[v17 + 48].LowPart = a5[1].LowPart;
    a5[v17 + 50] = a5[2];
    v18 = 0x4000;
    if ( !(_DWORD)v10 )
    {
      v18 = 24576;
      if ( (v13 & 4) != 0 )
        v18 = 24592;
    }
    a5[18 * v10 + 41].HighPart = v13 | v18;
    v10 = (unsigned int)(v10 + 1);
  }
  return 0LL;
}
