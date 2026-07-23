/*
 * XREFs of HvpBuildMapForMemoryBackedHive @ 0x1407E3D2C
 * Callers:
 *     HvHiveStartMemoryBacked @ 0x14093363C (HvHiveStartMemoryBacked.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140377880 (RtlNumberOfSetBits.c)
 *     SetFailureLocation @ 0x14045B110 (SetFailureLocation.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmpClaimGlobalQuota @ 0x140882FDC (CmpClaimGlobalQuota.c)
 *     HvpPointMapEntriesToBuffer @ 0x140969A8C (HvpPointMapEntriesToBuffer.c)
 *     HvpInitMap @ 0x14096A47C (HvpInitMap.c)
 *     HvpEnlistFreeCells @ 0x14096C4B0 (HvpEnlistFreeCells.c)
 *     HvpValidateLoadedBin @ 0x14096C848 (HvpValidateLoadedBin.c)
 */

__int64 __fastcall HvpBuildMapForMemoryBackedHive(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rdi
  char v9; // r15
  int inited; // ebx
  unsigned int v11; // r14d
  unsigned int v12; // r12d
  _DWORD *v13; // rsi
  int v14; // eax

  v5 = *(_QWORD *)(BugCheckParameter2 + 56);
  v9 = 0;
  inited = HvpInitMap();
  if ( inited >= 0 )
  {
    if ( a4 )
    {
      memmove(
        *(void **)(BugCheckParameter2 + 96),
        *(const void **)(a4 + 8),
        (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 88) >> 3);
      *(_DWORD *)(BugCheckParameter2 + 104) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
    }
    if ( a5 )
    {
      memmove(
        *(void **)(BugCheckParameter2 + 120),
        *(const void **)(a5 + 8),
        (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 112) >> 3);
      *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
    }
    v11 = 0;
    v12 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL);
    while ( v11 < v12 )
    {
      v13 = (_DWORD *)(a2 + v11);
      if ( !(unsigned __int8)HvpValidateLoadedBin(v13, v11, v12) )
      {
        if ( (a3 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
        {
          inited = -1073741492;
          SetFailureLocation(v5, 0, 4, -1073741492, 0);
          goto LABEL_20;
        }
        *v13 = 1852400232;
        v13[1] = v11;
        v13[2] = 4096;
        v9 = 1;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
        SetFailureLocation(v5, 1, 4, 1073741833, 0);
      }
      if ( !(unsigned __int8)CmpClaimGlobalQuota((unsigned int)v13[2]) )
      {
        inited = -1073741670;
        SetFailureLocation(v5, 0, 4, -1073741670, 16);
LABEL_20:
        *(_DWORD *)(v5 + 296) = v12;
        *(_DWORD *)(v5 + 300) = v11;
LABEL_21:
        *(_QWORD *)(v5 + 304) = v13;
        return (unsigned int)inited;
      }
      HvpPointMapEntriesToBuffer(BugCheckParameter2, 0, 0LL);
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 2) == 0 )
      {
        v14 = HvpEnlistFreeCells(BugCheckParameter2);
        if ( v14 == 1073741833 )
        {
          v9 = 1;
        }
        else if ( v14 < 0 )
        {
          inited = -1073741492;
          SetFailureLocation(v5, 0, 4, -1073741492, 32);
          *(_DWORD *)(v5 + 296) = v13[2];
          *(_DWORD *)(v5 + 300) = v13[1];
          goto LABEL_21;
        }
      }
      v11 += v13[2];
    }
    return v9 != 0 ? 0x40000009u : 0;
  }
  return (unsigned int)inited;
}
