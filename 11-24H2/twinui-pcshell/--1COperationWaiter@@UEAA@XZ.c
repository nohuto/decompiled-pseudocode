/*
 * XREFs of ??1COperationWaiter@@UEAA@XZ @ 0x1801B58BC
 * Callers:
 *     ??_GCOperationWaiter@@UEAAPEAXI@Z @ 0x1801B5880 (--_GCOperationWaiter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1801B59F8 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 */

void __fastcall COperationWaiter::~COperationWaiter(COperationWaiter *this)
{
  CAutoHandle<void *>::~CAutoHandle<void *>((char *)this + 40);
  *((_DWORD *)this + 9) = -1073741823;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
}
