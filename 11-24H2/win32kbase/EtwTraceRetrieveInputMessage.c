/*
 * XREFs of EtwTraceRetrieveInputMessage @ 0x1400CF590
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cpppqqq_EtwWriteTransfer @ 0x1400CF624 (McTemplateK0cpppqqq_EtwWriteTransfer.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall EtwTraceRetrieveInputMessage(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdi
  __int64 *CurrentThreadNonPaged; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // r9

  result = MEMORY[0xFFFFF78000000320];
  if ( (Microsoft_Windows_Win32kEnableBits & 0x1000) != 0 )
  {
    v2 = *a1;
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1);
    if ( CurrentThreadNonPaged && (v7 = *CurrentThreadNonPaged) != 0 )
      LOBYTE(v7) = *(_BYTE *)(v7 + 1456);
    else
      LOBYTE(v7) = -1;
    return McTemplateK0cpppqqq_EtwWriteTransfer(v5, v4, v6, v7, v2);
  }
  return result;
}
