/*
 * XREFs of IopGetSetStreamIdentifier @ 0x14041AC4C
 * Callers:
 *     IoAllocateSfioStreamIdentifier @ 0x140593860 (IoAllocateSfioStreamIdentifier.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopGetSetSpecificExtension @ 0x14041AD50 (IopGetSetSpecificExtension.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopGetSetStreamIdentifier(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4, char a5)
{
  unsigned int v5; // ebx
  _QWORD *v6; // r14
  __int64 v7; // r12
  __int64 result; // rax
  _QWORD *v11; // rdi
  KSPIN_LOCK *v12; // rbp
  KIRQL v13; // al
  _QWORD *v14; // rdx
  _QWORD *Pool2; // rsi
  KIRQL v16; // al
  _QWORD *v17; // rcx
  _QWORD *v18; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+38h] [rbp-20h] BYREF

  v5 = 0;
  v6 = a4;
  v7 = a2;
  v18 = 0LL;
  LOBYTE(a4) = a5;
  result = IopGetSetSpecificExtension(a1, 4, 16, (_DWORD)a4, (__int64)&v18, (__int64)&v19);
  if ( (int)result < 0 )
    goto LABEL_8;
  v11 = v18;
  if ( !v18 )
  {
LABEL_7:
    result = 0LL;
LABEL_8:
    *v6 = 0LL;
    return result;
  }
  v12 = (KSPIN_LOCK *)(a1 + 184);
  v13 = KeAcquireSpinLockRaiseToDpc(v12);
  v14 = (_QWORD *)*v11;
  if ( !*v11 )
  {
    v11[1] = v11;
    v14 = v11;
    *v11 = v11;
  }
  while ( v14 != v11 )
  {
    if ( v14[3] == a3 )
    {
      if ( a5 )
      {
        *v6 = 0LL;
        v5 = -1073741791;
      }
      else
      {
        *v6 = v14[2];
      }
      KeReleaseSpinLock(v12, v13);
      return v5;
    }
    v14 = (_QWORD *)*v14;
  }
  KeReleaseSpinLock(v12, v13);
  if ( !a5 )
    goto LABEL_7;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, v7 + 32, 0x74536F49u);
  if ( !Pool2 )
  {
    result = 3221225626LL;
    goto LABEL_8;
  }
  v16 = KeAcquireSpinLockRaiseToDpc(v12);
  v17 = (_QWORD *)v11[1];
  if ( (_QWORD *)*v17 != v11 )
    __fastfail(3u);
  Pool2[1] = v17;
  *Pool2 = v11;
  *v17 = Pool2;
  v11[1] = Pool2;
  Pool2[2] = Pool2 + 4;
  Pool2[3] = a3;
  *v6 = Pool2 + 4;
  KeReleaseSpinLock(v12, v16);
  return 0LL;
}
