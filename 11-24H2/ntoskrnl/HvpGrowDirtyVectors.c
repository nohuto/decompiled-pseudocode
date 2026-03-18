/*
 * XREFs of HvpGrowDirtyVectors @ 0x14037D62C
 * Callers:
 *     HvpAddBin @ 0x140980584 (HvpAddBin.c)
 *     HvpPerformLogFileRecovery @ 0x140AB060C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     RtlClearBits @ 0x14037CD40 (RtlClearBits.c)
 *     RtlCopyBitMap @ 0x14037D810 (RtlCopyBitMap.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall HvpGrowDirtyVectors(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  RTL_BITMAP *v6; // rcx
  unsigned int v7; // r14d
  ULONG SizeOfBitMap; // r12d
  unsigned int v9; // ebx
  __int64 v10; // r9
  unsigned int *v11; // r15
  unsigned int *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG v15; // r13d
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int *v18; // r12
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int *v22; // rax
  __int64 v23; // rax
  RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-20h] BYREF
  RTL_BITMAP v25; // [rsp+30h] [rbp-10h] BYREF
  unsigned int *v26; // [rsp+70h] [rbp+30h]

  v4 = 0;
  v6 = (RTL_BITMAP *)(a1 + 88);
  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  *(&v25.SizeOfBitMap + 1) = 0;
  v7 = a2 >> 9;
  SizeOfBitMap = v6->SizeOfBitMap;
  v9 = ((a2 >> 12) + 3) & 0xFFFFFFFC;
  if ( *(_DWORD *)(a1 + 108) >= v9 )
  {
    v22 = *(unsigned int **)(a1 + 96);
    v6->SizeOfBitMap = v7;
    v6->Buffer = v22;
    RtlClearBits(v6, SizeOfBitMap, v7 - SizeOfBitMap);
    v23 = *(_QWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 112) = v7;
    *(_QWORD *)(a1 + 120) = v23;
    RtlClearBits((PRTL_BITMAP)(a1 + 112), SizeOfBitMap, v7 - SizeOfBitMap);
  }
  else
  {
    v11 = (unsigned int *)guard_dispatch_icall_no_overrides(v9, 0LL, 959532355LL, a4);
    if ( v11 )
    {
      v12 = (unsigned int *)guard_dispatch_icall_no_overrides(v9, 0LL, 959532355LL, v10);
      v26 = v12;
      if ( v12 )
      {
        v25.Buffer = v12;
        v15 = v7 - SizeOfBitMap;
        BitMapHeader.SizeOfBitMap = v7;
        BitMapHeader.Buffer = v11;
        v25.SizeOfBitMap = v7;
        if ( *(_QWORD *)(a1 + 96) )
        {
          RtlCopyBitMap(a1 + 88, &BitMapHeader, 0LL);
          RtlClearBits(&BitMapHeader, SizeOfBitMap, v15);
        }
        else
        {
          memset_0(v11, 0, v9);
        }
        if ( *(_QWORD *)(a1 + 120) )
        {
          RtlCopyBitMap(a1 + 112, &v25, 0LL);
          RtlClearBits(&v25, SizeOfBitMap, v15);
          v18 = v26;
        }
        else
        {
          v18 = v26;
          memset_0(v26, 0, v9);
        }
        v19 = *(_QWORD *)(a1 + 96);
        if ( v19 )
          guard_dispatch_icall_no_overrides(v19, *(unsigned int *)(a1 + 108), v16, v17);
        v20 = *(_QWORD *)(a1 + 120);
        if ( v20 )
          guard_dispatch_icall_no_overrides(v20, *(unsigned int *)(a1 + 108), v16, v17);
        *(_DWORD *)(a1 + 88) = v7;
        *(_QWORD *)(a1 + 96) = v11;
        *(_DWORD *)(a1 + 112) = v7;
        *(_QWORD *)(a1 + 120) = v18;
        *(_DWORD *)(a1 + 108) = v9;
      }
      else
      {
        v4 = -1073741670;
        guard_dispatch_icall_no_overrides(v11, v9, v13, v14);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v4;
}
