/*
 * XREFs of MiAllocateFastAwePages @ 0x1407E84AC
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x1407E8638 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14021133C (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x14022E560 (MiAcquireNonPagedResources.c)
 *     MiUpdateProtectionMask @ 0x140234CAC (MiUpdateProtectionMask.c)
 *     MiFreeLargeZeroPages @ 0x14038FA8C (MiFreeLargeZeroPages.c)
 *     MiCreateLargePfnList @ 0x140405A3C (MiCreateLargePfnList.c)
 *     MiInitializeLargePfnList @ 0x1404301D0 (MiInitializeLargePfnList.c)
 *     MiPageChainCount @ 0x140464C78 (MiPageChainCount.c)
 *     MiGetAweInfoPartition @ 0x1404B3E8C (MiGetAweInfoPartition.c)
 *     MiFillUserPhysicalMdl @ 0x140676764 (MiFillUserPhysicalMdl.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiAllocateFastAwePages(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  int v9; // esi
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  __int64 v12; // rcx
  __int64 AweInfoPartition; // rdi
  int v15; // edx
  int updated; // eax
  int v17; // r15d
  int v18; // r15d
  int v19; // eax
  char v20; // r10
  int v21; // r8d
  unsigned __int64 v22; // r9
  int LargePfnList; // ebx
  __int64 v24[2]; // [rsp+50h] [rbp-79h] BYREF
  int v25; // [rsp+60h] [rbp-69h]
  int v26; // [rsp+64h] [rbp-65h]
  __int64 v27; // [rsp+68h] [rbp-61h]
  _QWORD v28[12]; // [rsp+70h] [rbp-59h] BYREF

  memset_0(v28, 0, sizeof(v28));
  v9 = 0;
  v25 = 0;
  v10 = MiPageChainCount(a2);
  v11 = v10 * ((unsigned __int64)*(unsigned int *)(a1 + 40) >> 12);
  v27 = v10;
  AweInfoPartition = MiGetAweInfoPartition(v12);
  if ( (int)MiAcquireNonPagedResources((ULONG *)AweInfoPartition, v11, 0LL, 2LL) < 0 )
    return 3221225773LL;
  v15 = *(_DWORD *)(a2 + 52);
  v24[1] = v27;
  v24[0] = 0LL;
  updated = MiUpdateProtectionMask(4u, v15);
  v17 = *(_DWORD *)(a2 + 8);
  v26 = updated;
  v18 = v17 & 4;
  v19 = v25;
  if ( v18 )
    v19 = 1;
  v25 = v19;
  MiInitializeLargePfnList(v28);
  LargePfnList = MiCreateLargePfnList(
                   v24,
                   0LL,
                   v11,
                   v22,
                   v21,
                   v20 & (unsigned __int8)(a4 >> 1),
                   0LL,
                   v18 != 0 ? 4 : 2,
                   (__int64)v28);
  if ( LargePfnList < 0 )
    goto LABEL_6;
  LargePfnList = MiFillUserPhysicalMdl(a1, v28, a5, a6);
  if ( LargePfnList < 0 )
  {
    LOBYTE(v9) = v18 != 0;
    MiFreeLargeZeroPages(AweInfoPartition, (__int64)v28, v9);
LABEL_6:
    MiReleaseNonPagedResources(AweInfoPartition, v11);
    return (unsigned int)LargePfnList;
  }
  _InterlockedAdd64((volatile signed __int64 *)(AweInfoPartition + 19648), v11);
  return 0LL;
}
