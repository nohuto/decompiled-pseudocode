/*
 * XREFs of NtWaitForMultipleObjects @ 0x14098D150
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObWaitForMultipleObjects @ 0x14084AF80 (ObWaitForMultipleObjects.c)
 */

__int64 __fastcall NtWaitForMultipleObjects(unsigned int a1, char *a2, WAIT_TYPE a3, BOOLEAN a4, unsigned __int64 a5)
{
  __int64 v8; // r14
  char PreviousMode; // bl
  LARGE_INTEGER *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  LARGE_INTEGER *v14; // [rsp+40h] [rbp-248h]
  __int64 v15; // [rsp+48h] [rbp-240h] BYREF
  _BYTE v16[512]; // [rsp+50h] [rbp-238h] BYREF

  v8 = a1;
  v14 = (LARGE_INTEGER *)a5;
  memset_0(v16, 0, sizeof(v16));
  v15 = 0LL;
  if ( (unsigned int)(v8 - 1) > 0x3F )
    return 3221225711LL;
  if ( (unsigned int)a3 > WaitAny )
    return 3221225713LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = (LARGE_INTEGER *)a5;
  if ( PreviousMode )
  {
    if ( a5 )
    {
      v11 = 0x7FFFFFFF0000LL;
      if ( a5 < 0x7FFFFFFF0000LL )
        v11 = a5;
      v15 = *(_QWORD *)v11;
      v10 = (LARGE_INTEGER *)&v15;
      v14 = (LARGE_INTEGER *)&v15;
    }
    v12 = 8 * v8;
    if ( 8 * v8 && (&a2[v12] < a2 || (unsigned __int64)&a2[v12] > 0x7FFFFFFF0000LL) )
      v10 = v14;
  }
  memmove(v16, a2, 8 * v8);
  return ObWaitForMultipleObjects(v8, (__int64)v16, PreviousMode, a3, PreviousMode, a4, v10);
}
