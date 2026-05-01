/*
 * XREFs of ?Release@?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@UEAAKXZ @ 0x1804225E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1PendingActivationData@WindowEventDispatcher@@QEAA@XZ @ 0x180418B58 (--1PendingActivationData@WindowEventDispatcher@@QEAA@XZ.c)
 */

__int64 __fastcall CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(a1 + 10);
  if ( !v2 && a1 )
  {
    WindowEventDispatcher::PendingActivationData::~PendingActivationData((WindowEventDispatcher::PendingActivationData *)(a1 + 2));
    operator delete((void *)a1, (const struct std::nothrow_t *)0x30);
  }
  return v2;
}
