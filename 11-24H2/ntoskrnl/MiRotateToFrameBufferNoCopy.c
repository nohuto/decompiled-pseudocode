/*
 * XREFs of MiRotateToFrameBufferNoCopy @ 0x140A23700
 * Callers:
 *     MmRotatePhysicalView @ 0x140A231B0 (MmRotatePhysicalView.c)
 * Callees:
 *     MiReferenceIoPages @ 0x140238698 (MiReferenceIoPages.c)
 *     MiDeleteRotateAndStopFaults @ 0x14026622C (MiDeleteRotateAndStopFaults.c)
 *     MiDereferenceIoPages @ 0x14038E760 (MiDereferenceIoPages.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140390E28 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiLegitimatePageForDriversToMap @ 0x14041DB10 (MiLegitimatePageForDriversToMap.c)
 *     MiIsPfn @ 0x14044F7D0 (MiIsPfn.c)
 *     MiSanitizePage @ 0x14045F4E4 (MiSanitizePage.c)
 *     MiObtainRotateProtectionRanges @ 0x140494200 (MiObtainRotateProtectionRanges.c)
 *     MiGetVadCacheAttribute @ 0x1404A0228 (MiGetVadCacheAttribute.c)
 *     MiRotateComplete @ 0x1404A0FB4 (MiRotateComplete.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiRotateToFrameBufferNoCopy(ULONG_PTR a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // r8
  __int64 *v9; // rsi
  unsigned int v10; // r15d
  unsigned __int64 *v11; // r14
  int v12; // edi
  __int64 v13; // rax
  int v14; // edi
  _QWORD *v15; // rdi
  __int64 result; // rax
  __int64 v17; // rax
  int v18; // edx
  unsigned __int64 v19; // rcx
  __int64 v20; // rbx
  unsigned int VadCacheAttribute; // [rsp+40h] [rbp-40h]
  __int64 v22; // [rsp+48h] [rbp-38h]
  PVOID P[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v24; // [rsp+60h] [rbp-20h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-10h]

  CurrentThread = 0LL;
  v24 = 0LL;
  if ( a4 << 12 > 0xFFFFFFFF )
    return 3221225990LL;
  P[1] = P;
  P[0] = P;
  v22 = (a4 << 12) + a2 - 1;
  v6 = 0;
  VadCacheAttribute = MiGetVadCacheAttribute(a1);
  v9 = (__int64 *)(v8 + 48);
  v10 = 0;
  v11 = (unsigned __int64 *)(v8 + 48);
  v12 = VadCacheAttribute;
  while ( v10 < v7 )
  {
    if ( (unsigned int)MiIsPfn(*v11) )
    {
      result = MiLegitimatePageForDriversToMap(48 * *v11 - 0x220000000000LL);
      if ( (int)result < 0 )
        return result;
    }
    else
    {
      v13 = MiSanitizePage(*v11);
      v14 = MiReferenceIoPages(1u, v13, 1uLL, v12, 0LL, 0LL);
      if ( v14 < 0 )
        goto LABEL_17;
      v12 = VadCacheAttribute;
      ++v6;
    }
    v7 = a4;
    ++v10;
    ++v11;
  }
  v14 = MiObtainRotateProtectionRanges(a1, a2, v22, P);
  if ( v14 < 0 )
  {
LABEL_17:
    while ( v6 )
    {
      if ( !(unsigned int)MiIsPfn(*v9) )
      {
        MiDereferenceIoPages(1, *v9, 1uLL);
        --v6;
      }
      ++v9;
    }
    return (unsigned int)v14;
  }
  *((_QWORD *)&v24 + 1) = a1;
  CurrentThread = KeGetCurrentThread();
  MiDeleteRotateAndStopFaults(a2, v22, &v24);
  while ( 1 )
  {
    v15 = P[0];
    if ( P[0] == P )
      break;
    if ( *((PVOID **)P[0] + 1) != P || (v17 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
      __fastfail(3u);
    P[0] = *(PVOID *)P[0];
    *(_QWORD *)(v17 + 8) = P;
    v18 = -2147483632;
    v19 = v15[2];
    v20 = (v15[3] - v19) >> 12;
    if ( (v15[4] & 7) != 1 )
      v18 = 16;
    MiMapLockedPagesInUserSpaceHelper(v19, (__int64)v9, 0LL, VadCacheAttribute, v20, a1, v18);
    ExFreePoolWithTag(v15, 0);
    v9 += v20;
  }
  MiRotateComplete((unsigned __int64 *)&v24);
  return 0LL;
}
