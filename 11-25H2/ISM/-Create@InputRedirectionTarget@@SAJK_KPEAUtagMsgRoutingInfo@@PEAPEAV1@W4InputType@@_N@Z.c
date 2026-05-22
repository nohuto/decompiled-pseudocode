/*
 * XREFs of ?Create@InputRedirectionTarget@@SAJK_KPEAUtagMsgRoutingInfo@@PEAPEAV1@W4InputType@@_N@Z @ 0x1801A8840
 * Callers:
 *     ?EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x1801A8430 (-EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18001C070 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@InputRedirectionTarget@@IEAAJXZ @ 0x1801A8A94 (-Initialize@InputRedirectionTarget@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputRedirectionTarget::Create(
        int a1,
        __int64 a2,
        __int128 *a3,
        InputRedirectionTarget **a4,
        int a5,
        char a6)
{
  unsigned int v10; // edi
  __int64 v11; // rdx
  char *v12; // rax
  InputRedirectionTarget *v13; // rbx
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int64 v16; // xmm0_8
  unsigned __int64 v17; // r9
  int v18; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  InputRedirectionTarget *v21; // [rsp+68h] [rbp+20h] BYREF

  v21 = 0LL;
  if ( !a4 )
  {
    v10 = -2147024809;
    v11 = 79LL;
LABEL_8:
    v17 = v10;
    goto LABEL_9;
  }
  v12 = (char *)RefCountedObject::operator new(0x78uLL);
  v13 = (InputRedirectionTarget *)v12;
  if ( v12 )
  {
    v14 = *a3;
    v15 = a3[1];
    v16 = *((_QWORD *)a3 + 4);
    *((_QWORD *)v12 + 2) = &RefCountedObject::`vftable';
    *((_DWORD *)v12 + 6) = 1;
    *(_QWORD *)v12 = &InputRedirectionTarget::`vftable'{for `IInputRedirectionTarget'};
    *((_QWORD *)v12 + 1) = &InputRedirectionTarget::`vftable'{for `IDCompInputTarget'};
    *((_QWORD *)v12 + 2) = &InputRedirectionTarget::`vftable'{for `RefCountedObject'};
    *((_QWORD *)v12 + 4) = 0LL;
    *((_DWORD *)v12 + 12) = a5;
    v12[52] = a6;
    *((_QWORD *)v12 + 7) = a2;
    *((_DWORD *)v12 + 16) = a1;
    *(_OWORD *)(v12 + 72) = v14;
    *(_OWORD *)(v12 + 88) = v15;
    *((_QWORD *)v12 + 13) = v16;
    *((_QWORD *)v12 + 14) = 0LL;
    *((_QWORD *)v12 + 5) = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  v21 = v13;
  if ( !v13 )
  {
    v10 = -2147024882;
    v11 = 91LL;
    goto LABEL_8;
  }
  v18 = InputRedirectionTarget::Initialize(v13);
  v10 = v18;
  if ( v18 >= 0 )
  {
    v21 = 0LL;
    *a4 = v13;
    v10 = 0;
    goto LABEL_13;
  }
  v17 = (unsigned int)v18;
  v11 = 94LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib\\"
             "inputredirectiontarget.cpp",
    (const char *)v17);
LABEL_13:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v21);
  return v10;
}
