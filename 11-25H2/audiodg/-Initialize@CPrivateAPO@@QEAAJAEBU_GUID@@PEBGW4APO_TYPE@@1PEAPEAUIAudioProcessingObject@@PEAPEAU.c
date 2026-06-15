/*
 * XREFs of ?Initialize@CPrivateAPO@@QEAAJAEBU_GUID@@PEBGW4APO_TYPE@@1PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioProcessingObjectRT@@PEAPEAUIAudioProcessingObjectConfiguration@@@Z @ 0x14000E3A0
 * Callers:
 *     _lambda_4f5bca04da2ba347195d47ea7d1a4d66_::operator() @ 0x14000D94C (_lambda_4f5bca04da2ba347195d47ea7d1a4d66_--operator().c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x14000DE58 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CPrivateAPO::Initialize(
        __int64 a1,
        const IID *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8)
{
  LPVOID *ppv; // rbx
  LPVOID v13; // rcx
  int Instance; // edi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  LPVOID v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  __int64 v24[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  ppv = (LPVOID *)(a1 + 40);
  if ( !a4 )
  {
    v13 = *ppv;
    *ppv = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v13 + 16LL))(v13);
    Instance = CoCreateInstance(a2, (LPUNKNOWN)a1, 1u, &GUID_00000000_0000_0000_c000_000000000046, ppv);
    if ( Instance >= 0 )
      goto LABEL_5;
    v21 = 57LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  v20 = *ppv;
  *ppv = 0LL;
  if ( v20 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v20 + 16LL))(v20);
  Instance = CSystemEffectWrapper::Create((__int64)a2, (__int64)a2, a3, a4, a1, a5, (__int64)ppv);
  if ( Instance < 0 )
  {
    v21 = 64LL;
    goto LABEL_16;
  }
LABEL_5:
  v22 = 0LL;
  v15 = (**(__int64 (__fastcall ***)(LPVOID, GUID *, __int64 *))*ppv)(
          *ppv,
          &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10,
          &v22);
  Instance = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x44,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
      (const char *)(unsigned int)v15);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    return (unsigned int)Instance;
  }
  v23 = 0LL;
  v16 = (**(__int64 (__fastcall ***)(LPVOID, GUID *, __int64 *))*ppv)(
          *ppv,
          &GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c,
          &v23);
  Instance = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x47,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
      (const char *)(unsigned int)v16);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    return (unsigned int)Instance;
  }
  v24[0] = 0LL;
  v17 = (**(__int64 (__fastcall ***)(LPVOID, GUID *, __int64 *))*ppv)(
          *ppv,
          &GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8,
          v24);
  v18 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjects.cpp",
      (const char *)(unsigned int)v17);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v24);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v23);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v22);
    return v18;
  }
  else
  {
    *(_BYTE *)(a1 + 32) = 1;
    *a6 = v22;
    *a7 = v23;
    *a8 = v24[0];
    return 0LL;
  }
}
