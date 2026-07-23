/*
 * XREFs of IopAdjustFileObjectKeepAliveCount @ 0x14041AAB8
 * Callers:
 *     IoIncrementKeepAliveCount @ 0x14041A9A0 (IoIncrementKeepAliveCount.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopGetSetSpecificExtension @ 0x14041AD50 (IopGetSetSpecificExtension.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAdjustFileObjectKeepAliveCount(__int64 a1, __int64 a2, int a3, _DWORD *a4, __int64 *a5)
{
  _QWORD *Pool2; // rbx
  __int64 v6; // rsi
  __int64 result; // rax
  unsigned int v11; // edi
  __int64 v12; // r14
  KIRQL v13; // al
  __int64 v14; // rcx
  KIRQL v15; // r9
  __int64 *i; // r8
  int v17; // eax
  int v18; // edx
  __int64 v19; // r14
  _DWORD *v20; // rax
  bool v21; // al
  __int64 v22; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v23; // [rsp+88h] [rbp+20h]

  v23 = a4;
  v22 = 0LL;
  Pool2 = 0LL;
  v6 = 0LL;
  if ( a3 )
  {
    LOBYTE(a4) = 1;
    result = IopGetSetSpecificExtension(a1, 1, 32, (_DWORD)a4, (__int64)&v22, 0LL);
    v11 = result;
    if ( (int)result < 0 )
      return result;
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x614B6F49u);
    if ( Pool2 )
    {
      v6 = ExAllocatePool2(0x40uLL, 0x38uLL, 0x614B6F49u);
      if ( !v6 )
      {
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = 0LL;
      }
    }
    v12 = v22;
  }
  else
  {
    v19 = *(_QWORD *)(a1 + 208);
    v11 = 0;
    if ( !v19 )
      return 3221225485LL;
    v12 = *(_QWORD *)(v19 + 16);
    if ( !v12 )
      return 3221225485LL;
  }
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v14 = *(_QWORD *)(v12 + 24);
  v15 = v13;
  if ( v14 )
  {
    for ( i = *(__int64 **)(v12 + 24); i; i = (__int64 *)*i )
    {
      if ( i[1] == a2 )
      {
        v17 = *((_DWORD *)i + 4);
        v18 = v17 + 1;
        if ( !a3 )
          v18 = v17 - 1;
        *((_DWORD *)i + 4) = v18;
        *a5 = i[3];
        *v23 = v18;
        goto LABEL_12;
      }
    }
  }
  if ( a3 )
  {
    if ( Pool2 )
    {
      *Pool2 = v14;
      *(_QWORD *)(v12 + 24) = Pool2;
      *((_DWORD *)Pool2 + 4) = 1;
      Pool2[1] = a2;
      Pool2[3] = v6;
      *(_QWORD *)(v6 + 24) = a2;
      *(_QWORD *)(v6 + 40) = a1;
      v21 = 0;
      if ( (*(_DWORD *)(a1 + 80) & 0x20000000) != 0 )
      {
        v20 = *(_DWORD **)(a1 + 208);
        if ( !v20 || (*v20 & 8) == 0 )
          v21 = 1;
      }
      *(_BYTE *)(v6 + 18) = v21;
      Pool2 = 0LL;
      *a5 = v6;
      v6 = 0LL;
      *v23 = 1;
    }
    else
    {
      v11 = -1073741670;
    }
  }
  else
  {
    v11 = -1073741811;
  }
LABEL_12:
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 184), v15);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v6 )
    ExFreePoolWithTag((PVOID)v6, 0);
  return v11;
}
