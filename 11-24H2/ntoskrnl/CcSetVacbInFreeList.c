/*
 * XREFs of CcSetVacbInFreeList @ 0x1403EF028
 * Callers:
 *     CcUnmapVacbArray @ 0x1402073E0 (CcUnmapVacbArray.c)
 *     CcGetVirtualAddress @ 0x140229480 (CcGetVirtualAddress.c)
 *     CcGetVacbMiss @ 0x140356790 (CcGetVacbMiss.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403EE88C (CcUnmapInactiveViewsInternal.c)
 *     CcSetFileSizesEx @ 0x1404A10D0 (CcSetFileSizesEx.c)
 *     CcInitializePartitionVacbs @ 0x14057A840 (CcInitializePartitionVacbs.c)
 *     CcUninitializePartitionVacbs @ 0x14057A950 (CcUninitializePartitionVacbs.c)
 * Callees:
 *     CcSetVacbIntoList @ 0x1403EF238 (CcSetVacbIntoList.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall CcSetVacbInFreeList(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // r9
  __int64 v9; // r11
  __int64 v10; // r10

  --CcNumberOfMappedVacbs;
  if ( a3 )
  {
    result = CcSetVacbIntoList(a2, a1 + 1232);
    *(_QWORD *)(v8 + 8) = v9;
    ++*(_DWORD *)(v10 + 1248);
  }
  else
  {
    v3 = CcVacbFreeList;
    v4 = a2 + 2;
    if ( *(__int64 **)(CcVacbFreeList + 8) != &CcVacbFreeList )
      __fastfail(3u);
    *v4 = CcVacbFreeList;
    a2[3] = &CcVacbFreeList;
    *(_QWORD *)(v3 + 8) = v4;
    CcVacbFreeList = (__int64)(a2 + 2);
    v5 = a2[4];
    a2[1] = 0LL;
    v6 = *(_DWORD *)(v5 + 4);
    if ( !v6 )
      KeBugCheckEx(0x34u, 0x1A5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    result = (unsigned int)(v6 - 1);
    *(_DWORD *)(v5 + 4) = result;
    ++CcNumberOfFreeVacbs;
  }
  return result;
}
