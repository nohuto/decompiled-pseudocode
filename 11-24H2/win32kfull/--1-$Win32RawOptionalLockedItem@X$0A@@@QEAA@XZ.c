/*
 * XREFs of ??1?$Win32RawOptionalLockedItem@X$0A@@@QEAA@XZ @ 0x1401C34B0
 * Callers:
 *     xxxValidateClassAndSize @ 0x14023A978 (xxxValidateClassAndSize.c)
 *     EditionCreateWindowStationEntryPointEx @ 0x140291DE0 (EditionCreateWindowStationEntryPointEx.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall Win32RawOptionalLockedItem<void,0>::~Win32RawOptionalLockedItem<void,0>(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    result = PopAndFreeW32ThreadLock(a1, a2);
    *(_QWORD *)(a1 + 16) = -1LL;
  }
  return result;
}
