/*
 * XREFs of EtwTraceEndRetrieveSendMessage @ 0x1400CF140
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cp_EtwWriteTransfer @ 0x1400CF190 (McTemplateK0cp_EtwWriteTransfer.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall EtwTraceEndRetrieveSendMessage(__int64 a1)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1);
    if ( CurrentThreadNonPaged && (v5 = *CurrentThreadNonPaged) != 0 )
      LOBYTE(v5) = *(_BYTE *)(v5 + 1456);
    else
      LOBYTE(v5) = -1;
    McTemplateK0cp_EtwWriteTransfer(v3, &EndRetrieveSendMessage, v4, v5, a1);
  }
}
