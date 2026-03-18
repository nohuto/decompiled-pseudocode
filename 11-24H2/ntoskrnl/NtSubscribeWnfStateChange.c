/*
 * XREFs of NtSubscribeWnfStateChange @ 0x140A19380
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExRaiseAccessViolation @ 0x1408C10E0 (ExRaiseAccessViolation.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140A1946C (ExpWnfSubscribeWnfStateChange.c)
 */

__int64 __fastcall NtSubscribeWnfStateChange(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  int v10; // edi
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = 0LL;
  if ( a4 )
  {
    v7 = (unsigned __int64)a4;
    v8 = (unsigned __int64)a4 + 7;
    if ( a4 >= (_QWORD *)((char *)a4 + 7) || v8 >= 0x7FFFFFFF0000LL )
      ExRaiseAccessViolation();
    v9 = (v8 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    do
    {
      *(_BYTE *)v7 = *(_BYTE *)v7;
      v7 = (v7 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    while ( v7 != v9 );
    *a4 = 0LL;
  }
  v10 = ExpWnfSubscribeWnfStateChange((unsigned __int64)&v12 & -(__int64)(a4 != 0LL), 0LL, a1);
  if ( v10 >= 0 && a4 )
    *a4 = v12;
  KeLeaveCriticalRegionThread();
  return (unsigned int)v10;
}
