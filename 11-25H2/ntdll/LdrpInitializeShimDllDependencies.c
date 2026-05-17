/*
 * XREFs of LdrpInitializeShimDllDependencies @ 0x1800D1ABC
 * Callers:
 *     LdrpLoadShimEngine @ 0x1800D1760 (LdrpLoadShimEngine.c)
 * Callees:
 *     LdrpInitializeGraphRecurse @ 0x180008690 (LdrpInitializeGraphRecurse.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     LdrpInitializationFailure @ 0x1800D1C78 (LdrpInitializationFailure.c)
 *     ZwTerminateProcess @ 0x1801637A0 (ZwTerminateProcess.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 *LdrpInitializeShimDllDependencies()
{
  __int64 v0; // rbx
  int v1; // edx
  char v2; // r14
  __int64 v3; // rax
  __int64 *v4; // rsi
  __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 *result; // rax
  _BYTE v8[32]; // [rsp+40h] [rbp-C0h] BYREF
  int v9; // [rsp+60h] [rbp-A0h]
  int *v10; // [rsp+68h] [rbp-98h]
  char v11; // [rsp+140h] [rbp+40h] BYREF
  int v12; // [rsp+148h] [rbp+48h] BYREF

  v12 = 0;
  memset_thunk_772440563353939046(v8, 0, 0xD0uLL);
  v0 = qword_1801D4950;
  v9 = 0x80000;
  v10 = &v12;
  if ( (__int64 *)qword_1801D4950 != &qword_1801D4950 )
  {
    do
    {
      if ( *(_DWORD *)(*(_QWORD *)(v0 + 152) + 56LL) == 7 && !*(_QWORD *)(v0 + 176) )
        *(_QWORD *)(v0 + 176) = v8;
      v0 = *(_QWORD *)v0;
    }
    while ( (__int64 *)v0 != &qword_1801D4950 );
    v0 = qword_1801D4950;
  }
  v1 = 0;
  v12 = 0;
  v2 = 0;
  while ( 1 )
  {
    if ( (__int64 *)v0 == &qword_1801D4950 )
      goto LABEL_14;
    v2 = v0;
    if ( (*(_DWORD *)(v0 + 104) & 0x100) != 0 )
    {
      v3 = *(_QWORD *)(v0 + 152);
      v4 = *(__int64 **)(v3 + 40);
      if ( v4 )
        break;
    }
LABEL_8:
    v0 = *(_QWORD *)v0;
  }
  v5 = *(__int64 **)(v3 + 40);
  while ( 1 )
  {
    v5 = (__int64 *)*v5;
    if ( (v5[3] & 1) == 0 )
    {
      v6 = v5[1];
      if ( *(_DWORD *)(v6 + 56) == 7 )
      {
        v11 = 0;
        v12 = LdrpInitializeGraphRecurse((__int64 *)v6, (__int64)&v12, &v11);
        v1 = v12;
        if ( v12 < 0 )
          goto LABEL_14;
        goto LABEL_24;
      }
      if ( *(_DWORD *)(v6 + 56) == -4 )
        break;
    }
LABEL_24:
    if ( v5 == v4 )
      goto LABEL_8;
  }
  v1 = -1073741502;
  v12 = -1073741502;
LABEL_14:
  result = (__int64 *)qword_1801D4950;
  if ( (__int64 *)qword_1801D4950 != &qword_1801D4950 )
  {
    do
    {
      v2 = (char)result;
      if ( (_BYTE *)result[22] == v8 )
        result[22] = 0LL;
      result = (__int64 *)*result;
    }
    while ( result != &qword_1801D4950 );
    v1 = v12;
  }
  if ( v1 < 0 )
  {
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      3638,
      (__int64)"LdrpInitializeShimDllDependencies",
      0,
      "Initializing a shim dependency \"%wZ\" failed with status 0x%08lx\n",
      v2 + 72);
    LdrpInitializationFailure((unsigned int)v12);
    return (__int64 *)ZwTerminateProcess(-1LL, (unsigned int)v12);
  }
  return result;
}
