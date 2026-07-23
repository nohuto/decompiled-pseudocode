/*
 * XREFs of DbgkpLkmdSnapThreadInContext @ 0x140705FFC
 * Callers:
 *     DbgkpLkmdSnapThreadApc @ 0x140705F80 (DbgkpLkmdSnapThreadApc.c)
 * Callees:
 *     RtlCaptureContext @ 0x1404FA160 (RtlCaptureContext.c)
 *     DbgkpLkmdSnapDataEx @ 0x14057BAB4 (DbgkpLkmdSnapDataEx.c)
 *     DbgkpLkmdSnapKernelStack @ 0x14057BBB8 (DbgkpLkmdSnapKernelStack.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall DbgkpLkmdSnapThreadInContext(__int64 *a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  char v7; // di
  __int64 v8; // rcx
  __int64 v9; // r9
  _CONTEXT ContextRecord; // [rsp+40h] [rbp-4F8h] BYREF

  result = DbgkpLkmdSnapDataEx((__int64)a1, a2);
  if ( (int)result >= 0 )
  {
    *a3 = 0;
    v7 = 1;
    a3[1] |= 1u;
    v8 = *a1;
    if ( *a1 )
    {
      if ( !*(_QWORD *)(v8 + 8) )
      {
        *(_QWORD *)(v8 + 8) = a2;
        v7 = 0;
        MEMORY[0x218] = 0;
      }
      *(_QWORD *)(v8 + 36800) = 0LL;
    }
    RtlCaptureContext(&ContextRecord);
    DbgkpLkmdSnapDataEx((__int64)a1, (__int64)&ContextRecord);
    LOBYTE(v9) = v7;
    DbgkpLkmdSnapKernelStack((__int64)a1, a2, 0LL, v9, (__int64)&ContextRecord, (__int64)a3);
    return 0LL;
  }
  else
  {
    *a3 = result;
  }
  return result;
}
