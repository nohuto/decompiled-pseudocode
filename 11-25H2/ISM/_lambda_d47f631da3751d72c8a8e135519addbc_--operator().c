/*
 * XREFs of _lambda_d47f631da3751d72c8a8e135519addbc_::operator() @ 0x1800DB068
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___::Invoke @ 0x1800DB570 (winrt--impl--delegate_winrt--Windows--System--Threading--WorkItemHandler__lambda_d47f631da3751d7.c)
 * Callees:
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030470 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E57C (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_d47f631da3751d72c8a8e135519addbc_::operator()(__int64 *a1, __int64 a2)
{
  char *v3; // rdi
  void **v4; // rsi
  __int64 v5; // rcx
  unsigned int v6; // ebx
  void *v7; // rbp
  const struct std::nothrow_t *v8; // rdx
  void *v9; // rcx
  void *v11[2]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+88h] [rbp+10h] BYREF

  v12 = a2;
  v3 = (char *)operator new(0x20uLL);
  *((_QWORD *)v3 + 1) = 0LL;
  *((_QWORD *)v3 + 3) = 0LL;
  v4 = (void **)(v3 + 16);
  *((_QWORD *)v3 + 2) = 0LL;
  v5 = *a1;
  *(_QWORD *)v3 = *a1;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  *((_DWORD *)v3 + 2) = *((_DWORD *)a1 + 2);
  v6 = *((_DWORD *)a1 + 3);
  *((_DWORD *)v3 + 6) = v6;
  v7 = operator new[](v6);
  memset_0(v7, 0, v6);
  v11[0] = v7;
  if ( v4 != v11 )
  {
    v11[0] = 0LL;
    v9 = *v4;
    *v4 = v7;
    if ( v9 )
      operator delete(v9, v8);
  }
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(v11, v8);
  *(_BYTE *)*v4 = *((_BYTE *)a1 + 18);
  LODWORD(v12) = 0;
  *((_DWORD *)v3 + 3) = NtRIMDeviceIoControl(
                          *(_QWORD *)(*a1 + 80),
                          a1[11],
                          721298LL,
                          0LL,
                          0,
                          *v4,
                          *((_DWORD *)v3 + 6),
                          &v12,
                          0);
  return (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(struct DockableDeviceCollection::GetFeatureReportResult *), char *, __int64))(**(_QWORD **)(*a1 + 2760) + 152LL))(
           *(_QWORD *)(*a1 + 2760),
           DockableDeviceCollection::OnFeatureReportStatic,
           v3,
           3LL);
}
