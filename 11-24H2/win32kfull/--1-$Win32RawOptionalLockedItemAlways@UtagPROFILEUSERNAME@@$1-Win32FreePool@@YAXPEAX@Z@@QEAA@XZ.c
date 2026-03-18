/*
 * XREFs of ??1?$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140113474
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x14018F9C8 (xxxSystemParametersInfoWorker.c)
 *     ?SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x14028FC5C (-SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x14011349C (PopAndFreeAlwaysW32ThreadLock.c)
 */

__int64 __fastcall Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>::~Win32RawOptionalLockedItemAlways<tagPROFILEUSERNAME,&void Win32FreePool(void *)>(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 16) != -1LL )
  {
    result = PopAndFreeAlwaysW32ThreadLock(a1);
    *(_QWORD *)(a1 + 16) = -1LL;
  }
  return result;
}
