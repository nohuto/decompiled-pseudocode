/*
 * XREFs of RtlpHpLfhSubsegmentDelayFreeListBatch @ 0x180032AD0
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x180030120 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhOwnerGetSubsegment @ 0x1800316D0 (RtlpHpLfhOwnerGetSubsegment.c)
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x180031BF0 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x180032300 (RtlpHpLfhOwnerRunMaintenance.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentDelayFreeListBatch(
        _QWORD *a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        int a5)
{
  int v6; // edi
  unsigned int v10; // esi
  unsigned __int16 v11; // r14
  unsigned int v12; // ebp
  __int64 v13; // r8
  char v14; // bl
  unsigned __int64 v15; // rdi
  unsigned __int16 *v16; // r8
  __int64 result; // rax
  __int64 v18; // rax
  unsigned __int64 *v19; // r14
  unsigned __int64 *v20; // rdi
  volatile signed __int64 *v21; // rbx
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // rcx
  unsigned __int64 v27; // [rsp+48h] [rbp-260h]
  _QWORD v28[64]; // [rsp+50h] [rbp-258h] BYREF

  v6 = a5;
  v27 = 8 * (unsigned int)*(unsigned __int8 *)(a2 + 24) - 64;
  memset_thunk_772440563353939046(v28, 255, (unsigned int)v27);
  v10 = -1;
  if ( !a3 )
    return 0xFFFFFFFFLL;
  v11 = a3;
  do
  {
    v12 = v10;
    v10 = v11 - 1;
    v13 = v10 * v6;
    v14 = v10;
    v15 = v10;
    v16 = (unsigned __int16 *)(a4 + v13);
    v11 = *v16;
    if ( *((_DWORD *)v16 + 2) != ((unsigned int)v16 ^ HIDWORD(a1[10]) ^ __ROL4__(*(_DWORD *)v16 ^ a1[10], *v16)) )
    {
      RtlpLogHeapFailure(23, (_DWORD)a1, (_DWORD)v16, a2, v10, 0LL);
      NT_ASSERT("0");
    }
    if ( v12 < v10 )
      v10 = v12;
    v28[v15 >> 5] &= __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v14 & 0x1F);
    v6 = a5;
  }
  while ( v11 );
  result = v10;
  if ( v10 != -1 )
  {
    v18 = v10 >> 5;
    v19 = &v28[v27 >> 3];
    v20 = &v28[v18];
    if ( v20 >= v19 )
    {
      return v10;
    }
    else
    {
      v21 = (volatile signed __int64 *)(a2 + 64 + 8 * v18);
      do
      {
        v22 = *v20;
        if ( *v20 != -1LL )
        {
          v23 = (unsigned int)v22 | (unsigned __int64)*(unsigned int *)v21;
          if ( v23 != 0xFFFFFFFF )
          {
            _RCX = ~v23;
            __asm { tzcnt   rcx, rcx }
            LODWORD(_RCX) = 32 * (((__int64)v21 - 64 - a2) >> 3) + _RCX;
            RtlpLogHeapFailure(17, *a1, a4 + _RCX * a5, a2, (unsigned int)_RCX, 0LL);
            NT_ASSERT("0");
          }
          _InterlockedAnd64(v21, v22);
        }
        ++v20;
        ++v21;
      }
      while ( v20 < v19 );
      return v10;
    }
  }
  return result;
}
