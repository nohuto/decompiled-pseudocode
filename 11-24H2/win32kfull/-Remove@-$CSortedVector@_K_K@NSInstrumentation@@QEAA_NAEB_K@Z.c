/*
 * XREFs of ?Remove@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z @ 0x1401010C0
 * Callers:
 *     UmfdUnloadFontFileInternal @ 0x140100FD8 (UmfdUnloadFontFileInternal.c)
 * Callees:
 *     ?W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140094BEC (-W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140095C68 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?LowerBound@?$CSortedVector@_K_K@NSInstrumentation@@QEBA_KAEB_K@Z @ 0x140101290 (-LowerBound@-$CSortedVector@_K_K@NSInstrumentation@@QEBA_KAEB_K@Z.c)
 *     ?Wait@CPlatformSingleWaiterSignal@NSInstrumentation@@QEAAXXZ @ 0x14033EBB0 (-Wait@CPlatformSingleWaiterSignal@NSInstrumentation@@QEAAXXZ.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::Remove(
        struct W32_PUSH_LOCK *a1,
        _QWORD *a2)
{
  char v4; // di
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r8
  _QWORD *v7; // rcx

  W32AcquirePushLockExclusive(a1);
  v4 = 1;
  _InterlockedCompareExchange((volatile signed __int32 *)a1 + 4, 0, 1);
  _InterlockedAdd((volatile signed __int32 *)a1 + 7, 1u);
  if ( *((_DWORD *)a1 + 6) )
    NSInstrumentation::CPlatformSingleWaiterSignal::Wait((struct W32_PUSH_LOCK *)((char *)a1 + 8));
  v5 = NSInstrumentation::CSortedVector<unsigned __int64,unsigned __int64>::LowerBound(a1, a2);
  v6 = *((_QWORD *)a1 + 5);
  if ( v6 && v5 < v6 && (v7 = (_QWORD *)(*((_QWORD *)a1 + 6) + 16 * v5), *v7 == *a2) )
  {
    memmove(v7, v7 + 2, 16 * (v6 - v5) - 16);
    --*((_QWORD *)a1 + 5);
  }
  else
  {
    v4 = 0;
  }
  _InterlockedDecrement((volatile signed __int32 *)a1 + 7);
  W32ReleasePushLockExclusive(a1);
  return v4;
}
