/*
 * XREFs of RtlpHpLfhSubsegmentDelayFreeListBatch @ 0x180063C20
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhOwnerGetSubsegment @ 0x180062820 (RtlpHpLfhOwnerGetSubsegment.c)
 *     RtlpHpLfhSubsegmentDelayFreeProcess @ 0x180062D40 (RtlpHpLfhSubsegmentDelayFreeProcess.c)
 *     RtlpHpLfhOwnerRunMaintenance @ 0x180063450 (RtlpHpLfhOwnerRunMaintenance.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentDelayFreeListBatch(
        __int64 *a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        int a5)
{
  __int64 v8; // rsi
  unsigned int v9; // ebp
  unsigned __int16 v10; // r12
  unsigned int v11; // r13d
  char v12; // di
  unsigned __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 result; // rax
  __int64 v18; // rax
  unsigned __int64 *v19; // r12
  unsigned __int64 *v20; // rdi
  volatile signed __int64 *v21; // rbx
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rcx
  unsigned __int64 v27; // [rsp+48h] [rbp-260h]
  _QWORD v28[64]; // [rsp+50h] [rbp-258h] BYREF

  v8 = a4;
  v27 = 8 * (unsigned int)*(unsigned __int8 *)(a2 + 24) - 64;
  memset_thunk_772440563353939046(v28, 255, (unsigned int)v27);
  v9 = -1;
  if ( !a3 )
    return 0xFFFFFFFFLL;
  v10 = a3;
  do
  {
    v11 = v9;
    v9 = v10 - 1;
    v12 = v9;
    v13 = v9;
    v14 = v9 * a5 + v8;
    v10 = *(_WORD *)v14;
    if ( *(_DWORD *)(v14 + 8) != ((unsigned int)v14 ^ HIDWORD(a1[10]) ^ __ROL4__(*(_DWORD *)v14 ^ a1[10], *(_WORD *)v14)) )
    {
      RtlpLogHeapFailure(23, (__int64)a1, v14, a2, v9, 0LL);
      NT_ASSERT("0");
    }
    if ( v11 < v9 )
      v9 = v11;
    v15 = __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v12 & 0x1F);
    v16 = v28[v13 >> 5];
    v28[v13 >> 5] = v15 & v16;
    if ( ((unsigned int)v16 & ~(_DWORD)v15) == 0 )
    {
      RtlpLogHeapFailure(17, *a1, v14, a2, v13, 0LL);
      NT_ASSERT("0");
    }
    v8 = a4;
  }
  while ( v10 );
  result = v9;
  if ( v9 != -1 )
  {
    v18 = v9 >> 5;
    v19 = &v28[v27 >> 3];
    v20 = &v28[v18];
    if ( v20 >= v19 )
    {
      return v9;
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
            RtlpLogHeapFailure(17, *a1, a4 + (unsigned int)(_RCX * a5), a2, (unsigned int)_RCX, 0LL);
            NT_ASSERT("0");
          }
          _InterlockedAnd64(v21, v22);
        }
        ++v20;
        ++v21;
      }
      while ( v20 < v19 );
      return v9;
    }
  }
  return result;
}
