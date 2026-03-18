/*
 * XREFs of HalpBlkPoBusyWait @ 0x140569AA8
 * Callers:
 *     HalpBlkPoReadPerfIoPort @ 0x140569C60 (HalpBlkPoReadPerfIoPort.c)
 *     HalpBlkPoReadPerfMsr @ 0x140569D70 (HalpBlkPoReadPerfMsr.c)
 *     HalpBlkPoRegisterIdleState @ 0x140569E70 (HalpBlkPoRegisterIdleState.c)
 *     HalpBlkPoWritePerfIoPort @ 0x140569F40 (HalpBlkPoWritePerfIoPort.c)
 *     HalpBlkPoWritePerfMsr @ 0x14056A030 (HalpBlkPoWritePerfMsr.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HalpBlkWdFatalExceptionCheck @ 0x14056A104 (HalpBlkWdFatalExceptionCheck.c)
 */

__int64 __fastcall HalpBlkPoBusyWait(ULONG_PTR BugCheckParameter2, unsigned int a2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v3; // rdi
  ULONG_PTR v5; // rsi
  __int64 v6; // rbp
  __int64 result; // rax

  v3 = a2;
  v5 = (unsigned int)BugCheckParameter2;
  v6 = MEMORY[0xFFFFF78000000008];
  while ( 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter4 + 8), 0, 0);
    if ( !(_DWORD)result )
      break;
    HalpBlkWdFatalExceptionCheck((unsigned int)v3);
    if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v6) >= 0x989680 )
      KeBugCheckEx(0x1DAu, 6uLL, v5, v3, BugCheckParameter4);
  }
  return result;
}
