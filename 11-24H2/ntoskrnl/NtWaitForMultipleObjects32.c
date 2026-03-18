/*
 * XREFs of NtWaitForMultipleObjects32 @ 0x1409B0EA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObWaitForMultipleObjects @ 0x14084AF80 (ObWaitForMultipleObjects.c)
 */

__int64 __fastcall NtWaitForMultipleObjects32(
        unsigned int a1,
        unsigned __int64 a2,
        WAIT_TYPE a3,
        BOOLEAN a4,
        unsigned __int64 a5)
{
  __int64 v8; // rbx
  unsigned int v9; // ecx
  char PreviousMode; // r10
  LARGE_INTEGER *v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  LARGE_INTEGER *v15; // [rsp+40h] [rbp-248h]
  _QWORD v16[2]; // [rsp+50h] [rbp-238h] BYREF
  _QWORD v17[64]; // [rsp+60h] [rbp-228h] BYREF

  v8 = a1;
  v15 = (LARGE_INTEGER *)a5;
  memset_0(v17, 0, sizeof(v17));
  v9 = 0;
  v16[0] = 0LL;
  if ( (unsigned int)(v8 - 1) > 0x3F )
    return 3221225711LL;
  if ( (unsigned int)a3 > WaitAny )
    return 3221225713LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v11 = (LARGE_INTEGER *)a5;
  if ( PreviousMode )
  {
    if ( a5 )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( a5 < 0x7FFFFFFF0000LL )
        v12 = a5;
      v16[0] = *(_QWORD *)v12;
      v11 = (LARGE_INTEGER *)v16;
      v15 = (LARGE_INTEGER *)v16;
    }
    v13 = 4 * v8;
    if ( 4 * v8 && (v13 + a2 > 0x7FFFFFFF0000LL || v13 + a2 < a2) )
      v11 = v15;
  }
  while ( v9 < (unsigned int)v8 )
  {
    v17[v9] = *(int *)(a2 + 4LL * v9);
    ++v9;
  }
  return ObWaitForMultipleObjects(v8, (__int64)v17, PreviousMode, a3, PreviousMode, a4, v11);
}
