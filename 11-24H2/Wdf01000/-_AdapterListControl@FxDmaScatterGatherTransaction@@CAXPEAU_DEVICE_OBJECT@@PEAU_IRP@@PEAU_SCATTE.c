/*
 * XREFs of ?_AdapterListControl@FxDmaScatterGatherTransaction@@CAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1400635C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxDmaScatterGatherTransaction::_AdapterListControl(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        _SCATTER_GATHER_LIST *SgList,
        unsigned __int64 Context)
{
  _FX_DRIVER_GLOBALS *v4; // rbx
  const void *_a1; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  void (__fastcall *v10)(const void *, unsigned __int64, _QWORD, _QWORD, _SCATTER_GATHER_LIST *); // rax
  __int16 v11; // cx
  unsigned __int64 v12; // rdx

  v4 = *(_FX_DRIVER_GLOBALS **)(Context + 16);
  _a1 = (const void *)(Context ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !*(_WORD *)(Context + 10) )
    _a1 = 0LL;
  if ( v4->FxVerifierOn && v4->FxVerboseOn )
    WPP_IFR_SF_q(v4, 5u, 0xFu, 0x12u, WPP_FxDmaTransactionScatterGather_cpp_Traceguids, _a1);
  v8 = *(_QWORD *)(Context + 128);
  *(_QWORD *)(Context + 256) = SgList;
  v9 = *(_QWORD *)(v8 + 96);
  v10 = *(void (__fastcall **)(const void *, unsigned __int64, _QWORD, _QWORD, _SCATTER_GATHER_LIST *))(Context + 152);
  v11 = *(_WORD *)(v9 + 10);
  if ( v10 )
  {
    v12 = v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v11 )
      v12 = 0LL;
    v10(_a1, v12, *(_QWORD *)(Context + 160), *(unsigned int *)(Context + 124), SgList);
  }
  if ( v4->FxVerifierOn )
  {
    if ( v4->FxVerboseOn )
      WPP_IFR_SF_q(v4, 5u, 0xFu, 0x13u, WPP_FxDmaTransactionScatterGather_cpp_Traceguids, _a1);
  }
}
