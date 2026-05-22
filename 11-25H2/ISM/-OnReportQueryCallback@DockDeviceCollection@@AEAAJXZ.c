/*
 * XREFs of ?OnReportQueryCallback@DockDeviceCollection@@AEAAJXZ @ 0x1800DA818
 * Callers:
 *     ?OnReportQueryCallbackStatic@DockDeviceCollection@@SAJPEAXK0@Z @ 0x1800DA960 (-OnReportQueryCallbackStatic@DockDeviceCollection@@SAJPEAXK0@Z.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x1800158C4 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030470 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??$?4U?$default_delete@$$BY0A@E@std@@$0A@@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180076A2C (--$-4U-$default_delete@$$BY0A@E@std@@$0A@@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@std@@@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DockDeviceCollection::OnReportQueryCallback(DockDeviceCollection *this)
{
  std::_Mutex_base *v2; // rbx
  unsigned int *v3; // rdi
  unsigned int v4; // edi
  const struct std::nothrow_t *v5; // rdx
  int v7; // eax
  const struct std::nothrow_t *v8; // rdx
  const struct std::nothrow_t *v9; // rdx
  unsigned int v11; // [rsp+30h] [rbp-28h]
  void *v12; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v13; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v12 = 0LL;
  v2 = (DockDeviceCollection *)((char *)this + 2816);
  while ( 1 )
  {
    std::_Mutex_base::lock(v2);
    if ( !*((_QWORD *)this + 351) )
      break;
    v3 = *(unsigned int **)(*((_QWORD *)this + 348) + 8 * (*((_QWORD *)this + 350) & (*((_QWORD *)this + 349) - 1LL)));
    v11 = *v3;
    std::unique_ptr<unsigned char [0]>::operator=<std::default_delete<unsigned char [0]>,0>(
      &v12,
      (const struct std::nothrow_t *)(v3 + 2));
    v4 = v3[4];
    v13 = v4;
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(
      (void **)(*(_QWORD *)(*((_QWORD *)this + 348) + 8 * (*((_QWORD *)this + 350) & (*((_QWORD *)this + 349) - 1LL)))
              + 8LL),
      v5);
    if ( (*((_QWORD *)this + 351))-- == 1LL )
      *((_QWORD *)this + 350) = 0LL;
    else
      ++*((_QWORD *)this + 350);
    _Mtx_unlock(v2);
    v7 = (*(__int64 (__fastcall **)(DockDeviceCollection *, _QWORD, void *, _QWORD))(*(_QWORD *)this + 80LL))(
           this,
           v11,
           v12,
           v4);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockdevicecollection.cpp",
        (const char *)(unsigned int)v7);
    VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v12, v8);
    v12 = 0LL;
  }
  _Mtx_unlock(v2);
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v12, v9);
  return 0LL;
}
