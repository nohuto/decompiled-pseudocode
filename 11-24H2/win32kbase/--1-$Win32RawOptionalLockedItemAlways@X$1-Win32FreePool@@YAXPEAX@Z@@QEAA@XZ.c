/*
 * XREFs of ??1?$Win32RawOptionalLockedItemAlways@X$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x1400D1188
 * Callers:
 *     NtUserSetSysColors @ 0x140171750 (NtUserSetSysColors.c)
 *     NtUserSystemParametersInfo @ 0x140171AA0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400D11B0 (PopAndFreeAlwaysW32ThreadLock.c)
 */

__int64 __fastcall Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<void,&void Win32FreePool(void *)>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    result = PopAndFreeAlwaysW32ThreadLock();
    *(_QWORD *)(a1 + 16) = -1LL;
  }
  return result;
}
