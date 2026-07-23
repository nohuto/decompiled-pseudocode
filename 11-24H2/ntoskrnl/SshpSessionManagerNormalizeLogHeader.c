/*
 * XREFs of SshpSessionManagerNormalizeLogHeader @ 0x140AA09E4
 * Callers:
 *     SshpSessionManagerFlushControlEventBufferWorker @ 0x140A579F0 (SshpSessionManagerFlushControlEventBufferWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SshpSessionManagerNormalizeLogHeader(_DWORD *a1)
{
  int v1; // r9d
  int *v2; // r8
  unsigned int v3; // edx
  int v4; // eax
  __int64 result; // rax

  v1 = a1[5];
  v2 = a1 + 3;
  v3 = a1[4];
  if ( v3 >= 2 * v1 )
  {
    v4 = *v2;
    do
    {
      v3 -= v1;
      v4 -= v1;
    }
    while ( v3 >= 2 * v1 );
    a1[4] = v3;
    *v2 = v4;
  }
  result = ~(v3 + *a1 + *v2 + v1 + a1[1]);
  a1[2] = result;
  return result;
}
