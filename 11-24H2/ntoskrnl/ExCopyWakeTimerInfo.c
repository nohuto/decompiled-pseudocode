/*
 * XREFs of ExCopyWakeTimerInfo @ 0x140655950
 * Callers:
 *     PopHandleWakeSources @ 0x140B5DE94 (PopHandleWakeSources.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExCopyWakeTimerInfo(ULONG_PTR *Src, _QWORD *a2)
{
  void *Pool2; // rax
  void *v5; // rdi
  __int64 result; // rax

  Pool2 = (void *)ExAllocatePool2(0x100uLL, *Src, 0x53577254u);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, Src, *Src);
  result = 0LL;
  *a2 = v5;
  return result;
}
