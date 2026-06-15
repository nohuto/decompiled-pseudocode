/*
 * XREFs of ?Release@CVirtualProtectedOutput@@UEAAKXZ @ 0x14006D340
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCVirtualProtectedOutput@@QEAAPEAXI@Z @ 0x14006CDA4 (--_GCVirtualProtectedOutput@@QEAAPEAXI@Z.c)
 *     ?AdviseVpoDeletion@CProtectedOutputController@@QEAAXPEAVCVirtualProtectedOutput@@@Z @ 0x14006CE14 (-AdviseVpoDeletion@CProtectedOutputController@@QEAAXPEAVCVirtualProtectedOutput@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualProtectedOutput::Release(CVirtualProtectedOutput *this)
{
  __int64 v1; // rsi
  unsigned __int32 v3; // edi

  v1 = *((_QWORD *)this + 1);
  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v3 )
  {
    CProtectedOutputController::AdviseVpoDeletion(*((__int64 ***)this + 1), this);
    CVirtualProtectedOutput::`scalar deleting destructor'(this);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v3;
}
