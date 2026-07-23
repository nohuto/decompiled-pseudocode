/*
 * XREFs of SepRemoveTokenLogonSession @ 0x140793AF8
 * Callers:
 *     SepLinkLogonSessions @ 0x14049BAB0 (SepLinkLogonSessions.c)
 *     SepOneWayLinkLogonSessions @ 0x140605AE8 (SepOneWayLinkLogonSessions.c)
 *     SepSetServerSiloToken @ 0x14078FBD8 (SepSetServerSiloToken.c)
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 *     SepTokenDeleteMethod @ 0x140AD6F50 (SepTokenDeleteMethod.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall SepRemoveTokenLogonSession(__int64 a1)
{
  unsigned int v2; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rbx
  struct _ERESOURCE *v5; // rsi
  __int64 *i; // rdx
  __int64 *j; // rbx
  __int64 *v8; // rax
  __int64 **v9; // rdx

  if ( (*(_DWORD *)(a1 + 200) & 0x20) == 0 )
  {
    v2 = 1529154084 * *(_DWORD *)(a1 + 24);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v2 >>= 28;
    v4 = v2;
    v5 = (struct _ERESOURCE *)((char *)&SepRmDbLock + 104 * (v2 & 3));
    ExAcquireResourceExclusiveLite(v5, 1u);
    for ( i = *(__int64 **)(SepLogonSessions + 8 * v4); i; i = (__int64 *)*i )
    {
      if ( *(_DWORD *)(a1 + 24) == *((_DWORD *)i + 2)
        && *(_DWORD *)(a1 + 28) == *((_DWORD *)i + 3)
        && *(_QWORD *)(*(_QWORD *)(a1 + 216) + 168LL) == i[21] )
      {
        for ( j = (__int64 *)i[23]; j != i + 23; j = (__int64 *)*j )
        {
          v8 = (__int64 *)*j;
          if ( j[2] == a1 )
          {
            if ( (__int64 *)v8[1] != j || (v9 = (__int64 **)j[1], *v9 != j) )
              __fastfail(3u);
            *v9 = v8;
            v8[1] = (__int64)v9;
            ExReleaseResourceLite(v5);
            KeLeaveCriticalRegion();
            ExFreePoolWithTag(j, 0);
            return;
          }
        }
      }
    }
    ExReleaseResourceLite(v5);
    KeLeaveCriticalRegion();
  }
}
