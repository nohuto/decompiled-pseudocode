/*
 * XREFs of MiAllocateFastAwePages @ 0x1407F8AAC
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x1407F8C38 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     MiUpdateProtectionMask @ 0x140248CFC (MiUpdateProtectionMask.c)
 *     MiGetAweInfoPartition @ 0x140266FBC (MiGetAweInfoPartition.c)
 *     MiCreateLargePfnList @ 0x14026A8C0 (MiCreateLargePfnList.c)
 *     MiFreeLargeZeroPages @ 0x14026DAE0 (MiFreeLargeZeroPages.c)
 *     MiReleaseNonPagedResources @ 0x1403358DC (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiInitializeLargePfnList @ 0x14041CC70 (MiInitializeLargePfnList.c)
 *     MiPageChainCount @ 0x14045AA00 (MiPageChainCount.c)
 *     MiFillUserPhysicalMdl @ 0x140683174 (MiFillUserPhysicalMdl.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
