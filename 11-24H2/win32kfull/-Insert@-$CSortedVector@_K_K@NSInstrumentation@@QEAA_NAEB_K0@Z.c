/*
 * XREFs of ?Insert@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z @ 0x140101178
 * Callers:
 *     UmfdLoadFontFile @ 0x1400FEA50 (UmfdLoadFontFile.c)
 * Callees:
 *     ?W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140094BEC (-W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140095C68 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?LowerBound@?$CSortedVector@_K_K@NSInstrumentation@@QEBA_KAEB_K@Z @ 0x140101290 (-LowerBound@-$CSortedVector@_K_K@NSInstrumentation@@QEBA_KAEB_K@Z.c)
 *     ?ReAllocate@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@AEAA_N_K@Z @ 0x140330384 (-ReAllocate@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@AEAA_N_K@Z.c)
 *     ?Wait@CPlatformSingleWaiterSignal@NSInstrumentation@@QEAAXXZ @ 0x14033EBB0 (-Wait@CPlatformSingleWaiterSignal@NSInstrumentation@@QEAAXXZ.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Insert(
        struct W32_PUSH_LOCK *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  char v6; // di
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx

  W32AcquirePushLockExclusive(a1);
  v6 = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)a1 + 4, 0, 1);
  _InterlockedAdd((volatile signed __int32 *)a1 + 7, 1u);
  if ( *((_DWORD *)a1 + 6) )
    NSInstrumentation::CPlatformSingleWaiterSignal::Wait((struct W32_PUSH_LOCK *)((char *)a1 + 8));
  v7 = NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::LowerBound(a1, a2);
  v8 = *((_QWORD *)a1 + 5);
  v9 = 16 * v7;
  v10 = v7;
  if ( v7 < v8 && (v11 = *((_QWORD *)a1 + 6), *(_QWORD *)(v9 + v11) == *a2) )
  {
    *(_QWORD *)(v9 + v11 + 8) = *a3;
  }
  else
  {
    v12 = *((_QWORD *)a1 + 4);
    if ( v8 != v12
      || (unsigned __int8)NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::ReAllocate(a1, 2 * v12) )
    {
      memmove(
        (void *)(v9 + *((_QWORD *)a1 + 6) + 16),
        (const void *)(v9 + *((_QWORD *)a1 + 6)),
        16 * (*((_QWORD *)a1 + 5) - v10));
      v13 = *((_QWORD *)a1 + 6);
      *(_QWORD *)(v9 + v13) = *a2;
      *(_QWORD *)(v9 + v13 + 8) = *a3;
      ++*((_QWORD *)a1 + 5);
    }
    else
    {
      v6 = 0;
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)a1 + 7);
  W32ReleasePushLockExclusive(a1);
  return v6;
}
