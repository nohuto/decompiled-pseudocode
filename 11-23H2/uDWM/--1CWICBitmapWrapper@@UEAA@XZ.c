/*
 * XREFs of ??1CWICBitmapWrapper@@UEAA@XZ @ 0x18005A0D8
 * Callers:
 *     ??_GCWICBitmapWrapper@@UEAAPEAXI@Z @ 0x180059D00 (--_GCWICBitmapWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CWICBitmapWrapper::~CWICBitmapWrapper(struct _RTL_CRITICAL_SECTION *this)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CWICBitmapWrapper::`vftable'{for `CMILCOMBase'};
  this->OwningThread = &CWICBitmapWrapper::`vftable'{for `IBitmapSource'};
  this->LockSemaphore = &CWICBitmapWrapper::`vftable'{for `IBitmapDest'};
  this->SpinCount = (ULONG_PTR)&CWICBitmapWrapper::`vftable'{for `IBitmapUnlock'};
  this[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CWICBitmapWrapper::`vftable'{for `IWICBitmap'};
  *(_QWORD *)&this[1].LockCount = &CWICBitmapWrapper::`vftable'{for `CMILResourceCache'};
  this[2].SpinCount = (ULONG_PTR)&CWICBitmapWrapper::`vftable'{for `CMTALock'};
  DebugInfo = this[6].DebugInfo;
  if ( DebugInfo )
    (*(void (__fastcall **)(PRTL_CRITICAL_SECTION_DEBUG))(*(_QWORD *)&DebugInfo->Type + 16LL))(DebugInfo);
  CBitmap::~CBitmap(this);
}
