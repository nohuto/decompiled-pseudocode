/*
 * XREFs of ?SendTaskSynchronously@FxCompanionTarget@@QEAAJGKPEAU_WDF_MEMORY_DESCRIPTOR@@0PEA_JPEA_K@Z @ 0x14006FB54
 * Callers:
 *     imp_WdfCompanionTargetSendTaskSynchronously @ 0x14006F9D0 (imp_WdfCompanionTargetSendTaskSynchronously.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?DecrementPendingTaskCount@FxCompanionTarget@@AEAAXXZ @ 0x14006FC70 (-DecrementPendingTaskCount@FxCompanionTarget@@AEAAXXZ.c)
 *     ?IncrementPendingTaskCountWithFloor@FxCompanionTarget@@AEAAJXZ @ 0x14006FCAC (-IncrementPendingTaskCountWithFloor@FxCompanionTarget@@AEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxCompanionTarget::SendTaskSynchronously(
        FxCompanionTarget *this,
        unsigned __int16 TaskType,
        unsigned int TaskOpCode,
        _WDF_MEMORY_DESCRIPTOR *InputBuffer,
        _WDF_MEMORY_DESCRIPTOR *OutputBuffer,
        __int64 *Timeout,
        unsigned __int64 *BytesReturned)
{
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // r10
  unsigned int Length; // ecx
  void *Buffer; // r8
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v19; // rcx
  const void *_a1; // rdx
  bool v21; // zf
  _FX_DRIVER_GLOBALS *v22; // rcx

  v12 = 0LL;
  if ( FxCompanionTarget::IncrementPendingTaskCountWithFloor(this) < 0 )
  {
    v19 = *(_QWORD *)(v10 + 152);
    _a1 = (const void *)(v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v21 = *(_WORD *)(v19 + 10) == 0;
    v22 = *(_FX_DRIVER_GLOBALS **)(v19 + 16);
    if ( v21 )
      _a1 = 0LL;
    WPP_IFR_SF_q(v22, 2u, 0xCu, 0xBu, WPP_FxCompanionTarget_cpp_Traceguids, _a1);
    if ( BytesReturned )
      *BytesReturned = 0LL;
    return 3221225860LL;
  }
  else
  {
    v13 = *(_QWORD *)(v10 + 144);
    if ( OutputBuffer )
    {
      Length = OutputBuffer->u.BufferType.Length;
      Buffer = OutputBuffer->u.BufferType.Buffer;
    }
    else
    {
      Length = 0;
      Buffer = 0LL;
    }
    if ( v11 )
    {
      v16 = *(_DWORD *)(v11 + 16);
      v12 = *(_QWORD *)(v11 + 8);
    }
    else
    {
      v16 = 0;
    }
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int, void *, unsigned int, __int64 *, unsigned __int64 *))(*(_QWORD *)v13 + 8LL))(
            v13,
            TaskType,
            TaskOpCode,
            v12,
            v16,
            Buffer,
            Length,
            Timeout,
            BytesReturned);
    FxCompanionTarget::DecrementPendingTaskCount(this);
    return v17;
  }
}
