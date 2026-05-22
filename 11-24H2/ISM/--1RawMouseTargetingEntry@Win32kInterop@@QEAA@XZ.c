/*
 * XREFs of ??1RawMouseTargetingEntry@Win32kInterop@@QEAA@XZ @ 0x1800EF890
 * Callers:
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$6 @ 0x1801D63E4 (_Win32kInterop--Win32kInterop_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall Win32kInterop::RawMouseTargetingEntry::~RawMouseTargetingEntry(
        Win32kInterop::RawMouseTargetingEntry *this)
{
  Win32kInterop::TargetingInfo::~TargetingInfo((Win32kInterop::RawMouseTargetingEntry *)((char *)this + 8));
}
