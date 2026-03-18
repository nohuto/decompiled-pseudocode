/*
 * XREFs of VidSchInsertNativeFenceUmdHandle @ 0x140051760
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x140033860 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     NativeFenceUmdHandleCompareFunction @ 0x140051338 (NativeFenceUmdHandleCompareFunction.c)
 */

__int64 __fastcall VidSchInsertNativeFenceUmdHandle(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, __int64 a5)
{
  char v5; // si
  __int64 Pool2; // rax
  _DWORD *v11; // rdi
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // r8
  _QWORD *v15; // rbx
  _QWORD *v16; // rax
  _BYTE v17[48]; // [rsp+50h] [rbp-48h] BYREF

  v5 = 0;
  *a4 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 40LL, 945908054LL);
  v11 = (_DWORD *)Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry2(1LL, a5, a3);
    WdLogGlobalForLineNumber = 10913;
    DxgkLogInternalTriageEvent(v12, 0x40000LL);
    return 3221225495LL;
  }
  *(_DWORD *)Pool2 = a3;
  *(_QWORD *)(Pool2 + 8) = a5;
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v17, (unsigned __int64 *)(a1 + 1984), 1, 0);
  v15 = *(_QWORD **)(a2 + 1968);
  if ( !v15 )
    goto LABEL_7;
  while ( (int)NativeFenceUmdHandleCompareFunction(v11, (__int64)v15) < 0 )
  {
    v16 = (_QWORD *)*v15;
    if ( !*v15 )
      goto LABEL_7;
LABEL_9:
    v15 = v16;
  }
  v16 = (_QWORD *)v15[1];
  if ( v16 )
    goto LABEL_9;
  v5 = 1;
LABEL_7:
  LOBYTE(v14) = v5;
  RtlAvlInsertNodeEx(a2 + 1968, v15, v14, v11 + 4);
  AcquireSpinLock::Release((AcquireSpinLock *)v17);
  result = 0LL;
  *a4 = v11;
  return result;
}
