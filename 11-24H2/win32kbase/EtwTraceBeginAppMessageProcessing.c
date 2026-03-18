/*
 * XREFs of EtwTraceBeginAppMessageProcessing @ 0x140033390
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cdqq_EtwWriteTransfer @ 0x1400333FC (McTemplateK0cdqq_EtwWriteTransfer.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall EtwTraceBeginAppMessageProcessing(__int64 a1, char a2, __int64 a3)
{
  char v4; // di
  int v5; // esi
  __int64 *CurrentThreadNonPaged; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rax

  v4 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    v5 = *(_DWORD *)(a3 + 8);
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1);
    if ( CurrentThreadNonPaged && (v11 = *CurrentThreadNonPaged) != 0 )
      v10 = *(unsigned __int8 *)(v11 + 1456);
    else
      LOBYTE(v10) = -1;
    McTemplateK0cdqq_EtwWriteTransfer(v8, v7, v9, v10, v4, a2, v5);
  }
}
