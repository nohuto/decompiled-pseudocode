/*
 * XREFs of KiPerformAutomaticGroupConfiguration @ 0x140C2AAAC
 * Callers:
 *     KiPerformGroupConfiguration @ 0x140C2AE80 (KiPerformGroupConfiguration.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     KiAssignAdjustableSubNodes @ 0x140C2CDA0 (KiAssignAdjustableSubNodes.c)
 *     KiAssignFixedSubNodes @ 0x140C2CE38 (KiAssignFixedSubNodes.c)
 *     KiShuffleAssignedSubNodes @ 0x140C2D018 (KiShuffleAssignedSubNodes.c)
 */

void KiPerformAutomaticGroupConfiguration()
{
  unsigned __int16 v0; // bx
  __int64 v1; // r8
  _BYTE *v2; // rdx
  _QWORD *Pool2; // rax
  void *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // r9d
  unsigned int v9; // ebx
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int16 v13; // ax
  _BYTE v14[128]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v15[64]; // [rsp+B0h] [rbp-58h] BYREF

  v0 = 0;
  if ( KiSubNodeCount )
  {
    v1 = (unsigned __int16)KiSubNodeCount;
    v2 = (_BYTE *)(KiSubNodeConfigBlock + 5);
    do
    {
      if ( (*(_BYTE *)(KeNodeBlock[*(unsigned __int16 *)(v2 - 3)] + 10) & 4) != 0 )
      {
        *v2 |= 4u;
        v0 += (unsigned __int8)*(v2 - 1);
      }
      v2 += 24;
      --v1;
    }
    while ( v1 );
  }
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, 8LL * (unsigned __int16)KiSubNodeCount, 0x4347504BuLL);
  v4 = Pool2;
  if ( !Pool2 )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC000009AuLL, 0LL, 0LL, 0LL);
  if ( KiSubNodeCount )
  {
    v5 = KiSubNodeConfigBlock;
    v6 = (unsigned __int16)KiSubNodeCount;
    do
    {
      *Pool2 = v5;
      v5 += 24LL;
      ++Pool2;
      --v6;
    }
    while ( v6 );
  }
  qsort(
    v4,
    (unsigned __int16)KiSubNodeCount,
    8uLL,
    (int (__cdecl *)(const void *, const void *))KiCompareSubNodeConfigurationCapacity);
  if ( v0 )
  {
    if ( KiMaximizeGroupsCreated )
    {
      LOWORD(v9) = KiSubNodeCount;
    }
    else
    {
      LODWORD(v7) = (KiMaximumGroupSize + (unsigned int)v0 - 1) % KiMaximumGroupSize;
      v9 = (KiMaximumGroupSize + (unsigned int)v0 - 1) / KiMaximumGroupSize;
    }
    v10 = (_WORD)v9 == 32;
    if ( (unsigned __int16)v9 <= 0x20u )
      goto LABEL_19;
    LOWORD(v9) = 32;
  }
  else
  {
    LOWORD(v9) = 1;
  }
  v10 = (_WORD)v9 == 32;
  do
  {
LABEL_19:
    LOBYTE(v8) = v10;
    if ( (unsigned __int8)KiAssignFixedSubNodes((_DWORD)v4, v7, (unsigned __int16)v9, v8, (__int64)v14, (__int64)v15) )
      break;
    LOWORD(v9) = v9 + 1;
    v10 = (_WORD)v9 == 32;
  }
  while ( (unsigned __int16)v9 <= 0x20u );
  KiShuffleAssignedSubNodes(v4, v7, v14, v15);
  v13 = KiAssignAdjustableSubNodes(v4, v11, v12, v14);
  if ( (unsigned __int16)v9 > v13 )
    v13 = v9;
  KiMaximumGroups = v13;
  ExFreePoolWithTag(v4, 0);
}
