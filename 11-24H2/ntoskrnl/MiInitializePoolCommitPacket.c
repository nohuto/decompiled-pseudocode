/*
 * XREFs of MiInitializePoolCommitPacket @ 0x14034BEA4
 * Callers:
 *     MmAllocateSecurePoolMemory @ 0x14067DD58 (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiMakeProtectionMask @ 0x14034C5B0 (MiMakeProtectionMask.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiInitializePoolCommitPacket(
        unsigned __int64 *a1,
        ULONG_PTR *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  ULONG_PTR v9; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned int ProtectionMask; // eax
  int v16; // r8d
  unsigned int v17; // r9d
  __int64 v18; // r10
  ULONG_PTR v19; // r11
  int v20; // ecx
  __int16 v21; // ax
  __int64 result; // rax

  v9 = *a2;
  *(_WORD *)(a8 + 100) = 0;
  CurrentIrql = KeGetCurrentIrql();
  *(_BYTE *)(a8 + 102) = CurrentIrql;
  v11 = *a1;
  v12 = *a1 + v9 - 1;
  *(_QWORD *)a8 = *a1;
  *(_QWORD *)(a8 + 48) = 0LL;
  v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a8 + 80) = v13;
  *(_QWORD *)(a8 + 88) = 0LL;
  v14 = ((__int64)(v13 - ((v11 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL) >> 3) + 1;
  *(_DWORD *)(a8 + 96) = a6;
  *(_QWORD *)(a8 + 8) = v14;
  *(_QWORD *)(a8 + 56) = 0LL;
  *(_QWORD *)(a8 + 40) = 0LL;
  ProtectionMask = MiMakeProtectionMask(a4, v14, a3);
  if ( ProtectionMask > 0x18 || (v20 = 16777298, !_bittest(&v20, ProtectionMask)) )
    KeBugCheckEx(0x1Au, 0x5300uLL, v19, v9, v17);
  v21 = 8 * (ProtectionMask & 0x1F);
  *(_WORD *)(v18 + 100) = v21;
  if ( (v16 & 0x40000000) != 0 )
    *(_WORD *)(v18 + 100) = v21 | 0x200;
  *(_OWORD *)(v18 + 16) = 0LL;
  *(_QWORD *)(v18 + 32) = 0LL;
  *(_QWORD *)(v18 + 72) = &unk_140E384C0;
  result = 4LL;
  *(_QWORD *)(v18 + 64) = 4LL;
  if ( (a5 & 0x100) != 0 )
  {
    *(_WORD *)(v18 + 100) |= 2u;
    result = (__int64)&unk_140E38100;
    *(_QWORD *)(v18 + 72) = &unk_140E38100;
    *(_DWORD *)(v18 + 64) = 5;
  }
  else if ( (v16 & 0x20000000) != 0 )
  {
    *(_WORD *)(v18 + 100) |= 4u;
  }
  else
  {
    result = a7;
    if ( a7 )
    {
      *(_WORD *)(v18 + 100) |= 0x100u;
      *(_QWORD *)(v18 + 40) = a7;
      *(_DWORD *)(v18 + 64) = 14;
    }
  }
  return result;
}
