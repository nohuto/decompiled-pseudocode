/*
 * XREFs of HalpCollectSamplingProfileCorruptionStatus @ 0x14054323C
 * Callers:
 *     HalpCollectProfileCorruptionStatus @ 0x140542D74 (HalpCollectProfileCorruptionStatus.c)
 * Callees:
 *     HalpCollectSamplingProfileCorruptionStatusInternal @ 0x1405432EC (HalpCollectSamplingProfileCorruptionStatusInternal.c)
 */

__int64 __fastcall HalpCollectSamplingProfileCorruptionStatus(__int64 a1, unsigned int a2, unsigned int *a3)
{
  int v7; // esi
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 >= 0x10 )
  {
    v7 = *(_DWORD *)(a1 + 8);
    v11 = 0;
    v8 = (a2 - 16) >> 4;
    HalpCollectSamplingProfileCorruptionStatusInternal(a1 + 24, 0, v7, (unsigned int)&v11, v8);
    HalpCollectSamplingProfileCorruptionStatusInternal(a1 + 24, 1, v7, (unsigned int)&v11, v8);
    v9 = v11;
    v10 = 16 * v11 + 24;
    *a3 = v10;
    *(_DWORD *)(a1 + 16) = v9;
    return a2 < v10 ? 0xC0000004 : 0;
  }
  else
  {
    *a3 = 16;
    return 3221225476LL;
  }
}
