/*
 * XREFs of HvpGrowDirtyVectors @ 0x1404612E4
 * Callers:
 *     HvpAddBin @ 0x1409F795C (HvpAddBin.c)
 *     HvpPerformLogFileRecovery @ 0x1409FA6B8 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     RtlClearBits @ 0x140337F60 (RtlClearBits.c)
 *     RtlCopyBitMap @ 0x1404614D0 (RtlCopyBitMap.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall HvpGrowDirtyVectors(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  _RTL_BITMAP *v4; // rcx
  unsigned int v5; // r14d
  ULONG SizeOfBitMap; // r12d
  unsigned int v7; // ebx
  unsigned int *v8; // r15
  unsigned int *v9; // rax
  ULONG v10; // r13d
  unsigned int *v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int *v15; // rax
  __int64 v16; // rax
  _RTL_BITMAP Destination; // [rsp+20h] [rbp-20h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+30h] [rbp-10h] BYREF
  unsigned int *v19; // [rsp+70h] [rbp+30h]

  v2 = 0;
  v4 = (_RTL_BITMAP *)(a1 + 88);
  *(&Destination.SizeOfBitMap + 1) = 0;
  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  v5 = a2 >> 9;
  SizeOfBitMap = v4->SizeOfBitMap;
  v7 = ((a2 >> 12) + 3) & 0xFFFFFFFC;
  if ( *(_DWORD *)(a1 + 108) >= v7 )
  {
    v15 = *(unsigned int **)(a1 + 96);
    v4->SizeOfBitMap = v5;
    v4->Buffer = v15;
    RtlClearBits(v4, SizeOfBitMap, v5 - SizeOfBitMap);
    v16 = *(_QWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 112) = v5;
    *(_QWORD *)(a1 + 120) = v16;
    RtlClearBits((PRTL_BITMAP)(a1 + 112), SizeOfBitMap, v5 - SizeOfBitMap);
  }
  else
  {
    v8 = (unsigned int *)guard_dispatch_icall_no_overrides(v7, 0LL);
    if ( v8 )
    {
      v9 = (unsigned int *)guard_dispatch_icall_no_overrides(v7, 0LL);
      v19 = v9;
      if ( v9 )
      {
        BitMapHeader.Buffer = v9;
        v10 = v5 - SizeOfBitMap;
        Destination.SizeOfBitMap = v5;
        Destination.Buffer = v8;
        BitMapHeader.SizeOfBitMap = v5;
        if ( *(_QWORD *)(a1 + 96) )
        {
          RtlCopyBitMap((PRTL_BITMAP)(a1 + 88), &Destination, 0);
          RtlClearBits(&Destination, SizeOfBitMap, v10);
        }
        else
        {
          memset_0(v8, 0, v7);
        }
        if ( *(_QWORD *)(a1 + 120) )
        {
          RtlCopyBitMap((PRTL_BITMAP)(a1 + 112), &BitMapHeader, 0);
          RtlClearBits(&BitMapHeader, SizeOfBitMap, v10);
          v11 = v19;
        }
        else
        {
          v11 = v19;
          memset_0(v19, 0, v7);
        }
        v12 = *(_QWORD *)(a1 + 96);
        if ( v12 )
          guard_dispatch_icall_no_overrides(v12, *(unsigned int *)(a1 + 108));
        v13 = *(_QWORD *)(a1 + 120);
        if ( v13 )
          guard_dispatch_icall_no_overrides(v13, *(unsigned int *)(a1 + 108));
        *(_DWORD *)(a1 + 88) = v5;
        *(_QWORD *)(a1 + 96) = v8;
        *(_DWORD *)(a1 + 112) = v5;
        *(_QWORD *)(a1 + 120) = v11;
        *(_DWORD *)(a1 + 108) = v7;
      }
      else
      {
        v2 = -1073741670;
        guard_dispatch_icall_no_overrides(v8, v7);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v2;
}
