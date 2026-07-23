/*
 * XREFs of SepAddTokenLogonSession @ 0x140793610
 * Callers:
 *     SepCreateTokenEx @ 0x1403E9CAC (SepCreateTokenEx.c)
 *     SepSetServerSiloToken @ 0x14078FBD8 (SepSetServerSiloToken.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void __fastcall SepAddTokenLogonSession(__int64 a1)
{
  unsigned int v1; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rbx
  struct _ERESOURCE *v5; // rsi
  __int64 *i; // rbx
  __int64 **Pool2; // rax
  __int64 *v8; // rbx
  __int64 **v9; // rdx

  v1 = 1529154084 * *(_DWORD *)(a1 + 24);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 >>= 28;
  v4 = v1;
  v5 = (struct _ERESOURCE *)((char *)&SepRmDbLock + 104 * (v1 & 3));
  ExAcquireResourceExclusiveLite(v5, 1u);
  for ( i = *(__int64 **)(SepLogonSessions + 8 * v4); i; i = (__int64 *)*i )
  {
    if ( *(_DWORD *)(a1 + 24) == *((_DWORD *)i + 2)
      && *(_DWORD *)(a1 + 28) == *((_DWORD *)i + 3)
      && *(_QWORD *)(*(_QWORD *)(a1 + 216) + 168LL) == i[21] )
    {
      Pool2 = (__int64 **)ExAllocatePool2(0x100uLL, 0x18uLL, 0x734C6553u);
      if ( Pool2 )
      {
        *Pool2 = 0LL;
        v8 = i + 23;
        Pool2[1] = 0LL;
        Pool2[2] = (__int64 *)a1;
        v9 = (__int64 **)v8[1];
        if ( *v9 != v8 )
          __fastfail(3u);
        *Pool2 = v8;
        Pool2[1] = (__int64 *)v9;
        *v9 = (__int64 *)Pool2;
        v8[1] = (__int64)Pool2;
      }
      break;
    }
  }
  ExReleaseResourceLite(v5);
  KeLeaveCriticalRegion();
}
