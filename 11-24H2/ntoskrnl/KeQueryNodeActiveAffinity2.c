/*
 * XREFs of KeQueryNodeActiveAffinity2 @ 0x140407C40
 * Callers:
 *     MiComputeIdealDpcGang @ 0x14026F84C (MiComputeIdealDpcGang.c)
 *     MiCombineAllPhysicalMemory @ 0x1409E6848 (MiCombineAllPhysicalMemory.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140C5A630 (MiComputeMemoryNodeProcessorAssignments.c)
 * Callees:
 *     KeFindFirstSetRightGroupMask @ 0x140330524 (KeFindFirstSetRightGroupMask.c)
 *     RtlNumberOfSetBitsEx @ 0x140407FA0 (RtlNumberOfSetBitsEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall KeQueryNodeActiveAffinity2(
        unsigned __int16 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned __int16 *a4)
{
  unsigned int v7; // ebx
  __int64 v8; // r15
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // di
  __int64 v11; // rbp
  unsigned __int16 FirstSetRightGroupMask; // ax
  __int64 v13; // rcx
  _QWORD v15[2]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+30h] [rbp-48h] BYREF

  v16 = 0LL;
  if ( a1 < (unsigned __int16)KeNumberNodes )
  {
    _mm_lfence();
    v8 = KeNodeBlock[a1];
    RtlCopyVolatileMemory(&v16, (const void *)(v8 + 16), 0x10uLL);
    v15[0] = 32LL;
    v15[1] = &v16;
    v9 = RtlNumberOfSetBitsEx(v15);
    v10 = v9;
    if ( a3 >= v9 )
    {
      v7 = 0;
      if ( v9 )
      {
        v11 = v9;
        do
        {
          FirstSetRightGroupMask = KeFindFirstSetRightGroupMask((__int64 *)&v16);
          _bittestandreset64((signed __int64 *)&v16, FirstSetRightGroupMask);
          v13 = *(_QWORD *)(v8 + 8LL * FirstSetRightGroupMask + 32);
          if ( a2 )
          {
            *(_OWORD *)a2 = 0LL;
            *(_QWORD *)a2 = *(_QWORD *)(v13 + 128);
            *(_WORD *)(a2 + 8) = *(_WORD *)(v13 + 136);
          }
          a2 += 16LL;
          --v11;
        }
        while ( v11 );
      }
    }
    else
    {
      v7 = -1073741789;
    }
    *a4 = v10;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v7;
}
