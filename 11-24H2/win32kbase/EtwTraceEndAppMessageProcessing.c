/*
 * XREFs of EtwTraceEndAppMessageProcessing @ 0x1400345F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cd_EtwWriteTransfer @ 0x140034640 (McTemplateK0cd_EtwWriteTransfer.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall EtwTraceEndAppMessageProcessing(__int64 a1)
{
  int v1; // ebx
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  v1 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1);
    if ( CurrentThreadNonPaged && (v3 = *CurrentThreadNonPaged) != 0 )
      v5 = *(unsigned __int8 *)(v3 + 1456);
    else
      LOBYTE(v5) = -1;
    McTemplateK0cd_EtwWriteTransfer(v3, &EndAppMessageProcessing, v4, v5, v1);
  }
}
