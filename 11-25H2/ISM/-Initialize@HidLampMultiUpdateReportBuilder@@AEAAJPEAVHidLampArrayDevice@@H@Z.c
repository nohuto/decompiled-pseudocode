/*
 * XREFs of ?Initialize@HidLampMultiUpdateReportBuilder@@AEAAJPEAVHidLampArrayDevice@@H@Z @ 0x180038E0C
 * Callers:
 *     ?CreateAndInitialize@HidLampMultiUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@IPEAPEAV1@@Z @ 0x180039300 (-CreateAndInitialize@HidLampMultiUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@IPEAPEAV1@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x180038D48 (--4-$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z.c)
 *     ?Reset@HidLampMultiUpdateReportBuilder@@QEAAXXZ @ 0x180039D58 (-Reset@HidLampMultiUpdateReportBuilder@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E588 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall HidLampMultiUpdateReportBuilder::Initialize(
        InputContext **this,
        struct HidLampArrayDevice *a2,
        int a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  InputContext *v6; // rax
  const struct std::nothrow_t *v7; // rdx
  InputContext *v8; // rcx
  InputContext *v9; // rax
  const struct std::nothrow_t *v10; // rdx
  InputContext *v11; // rcx
  InputContext *v12; // rax
  const struct std::nothrow_t *v13; // rdx
  InputContext *v14; // rcx
  InputContext *v15; // rax
  const struct std::nothrow_t *v16; // rdx
  InputContext *v17; // rcx
  __int64 v18; // rdx
  InputContext *v20; // rax
  const struct std::nothrow_t *v21; // rdx
  InputContext *v22; // rcx
  int v23; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a3;
  Microsoft::WRL::ComPtr<HidLampArrayDevice>::operator=(this + 9, (volatile signed __int32 *)a2);
  *((_DWORD *)this + 4) = v4;
  v5 = 4 * v4;
  if ( !is_mul_ok(v4, 4uLL) )
    v5 = -1LL;
  v6 = (InputContext *)operator new[](v5, (const struct std::nothrow_t *)&std::nothrow);
  v8 = this[4];
  this[4] = v6;
  if ( v8 )
    operator delete(v8, v7);
  if ( !this[4] )
  {
    v18 = 44LL;
    goto LABEL_16;
  }
  v9 = (InputContext *)operator new[](*((int *)this + 4), (const struct std::nothrow_t *)&std::nothrow);
  v11 = this[5];
  this[5] = v9;
  if ( v11 )
    operator delete(v11, v10);
  if ( !this[5] )
  {
    v18 = 47LL;
    goto LABEL_16;
  }
  v12 = (InputContext *)operator new[](*((int *)this + 4), (const struct std::nothrow_t *)&std::nothrow);
  v14 = this[6];
  this[6] = v12;
  if ( v14 )
    operator delete(v14, v13);
  if ( !this[6] )
  {
    v18 = 50LL;
    goto LABEL_16;
  }
  v15 = (InputContext *)operator new[](*((int *)this + 4), (const struct std::nothrow_t *)&std::nothrow);
  v17 = this[7];
  this[7] = v15;
  if ( v17 )
    operator delete(v17, v16);
  if ( !this[7] )
  {
    v18 = 53LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlampmultiupdatereportbuilder.cpp",
      (const char *)0x8007000ELL,
      v23);
    return 2147942414LL;
  }
  v20 = (InputContext *)operator new[](*((int *)this + 4), (const struct std::nothrow_t *)&std::nothrow);
  v22 = this[8];
  this[8] = v20;
  if ( v22 )
    operator delete(v22, v21);
  if ( !this[8] )
  {
    v18 = 56LL;
    goto LABEL_16;
  }
  HidLampMultiUpdateReportBuilder::Reset((HidLampMultiUpdateReportBuilder *)this);
  return 0LL;
}
