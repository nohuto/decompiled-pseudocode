/*
 * XREFs of ??1CBitmap@@UEAA@XZ @ 0x1800222CC
 * Callers:
 *     ??1CCompressedSourceBitmap@@MEAA@XZ @ 0x18002218C (--1CCompressedSourceBitmap@@MEAA@XZ.c)
 *     ??1CWICBitmapWrapper@@UEAA@XZ @ 0x18005A0D8 (--1CWICBitmapWrapper@@UEAA@XZ.c)
 *     ??_ECBitmap@@UEAAPEAXI@Z @ 0x18010EFD0 (--_ECBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CMILResourceCache@@IEAA@XZ @ 0x180022290 (--1CMILResourceCache@@IEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CBitmap::~CBitmap(struct _RTL_CRITICAL_SECTION *this)
{
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CBitmap::`vftable'{for `CMILCOMBase'};
  this->OwningThread = &CWICBitmapWrapper::`vftable'{for `IBitmapSource'};
  this->LockSemaphore = &CBitmap::`vftable'{for `IBitmapDest'};
  this->SpinCount = (ULONG_PTR)&CWICBitmapWrapper::`vftable'{for `IBitmapUnlock'};
  this[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CWICBitmapWrapper::`vftable'{for `IWICBitmap'};
  *(_QWORD *)&this[1].LockCount = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  this[2].SpinCount = (ULONG_PTR)&CBitmap::`vftable'{for `CMTALock'};
  (*(void (__fastcall **)(WPF::HeapBase *, HANDLE))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this[5].OwningThread);
  this[2].SpinCount = (ULONG_PTR)&CMTALock::`vftable';
  if ( LOBYTE(this[4].DebugInfo) )
  {
    DeleteCriticalSection(this + 3);
    LOBYTE(this[4].DebugInfo) = 0;
  }
  CMILResourceCache::~CMILResourceCache((CMILResourceCache *)&this[1].LockCount);
  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CMILCOMBase::`vftable';
}
