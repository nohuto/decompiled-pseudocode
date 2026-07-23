/*
 * XREFs of MiExpandVadBitMap @ 0x140918A94
 * Callers:
 *     MiFindEmptyAddressRange @ 0x140918570 (MiFindEmptyAddressRange.c)
 *     MiInitializeVadCellBitMap @ 0x14091A2FC (MiInitializeVadCellBitMap.c)
 *     MiInitializeVadBitMap @ 0x14091A74C (MiInitializeVadBitMap.c)
 * Callees:
 *     MiMakeHyperRangeAccessible @ 0x140241470 (MiMakeHyperRangeAccessible.c)
 *     MiLocateLowestConflictingVad @ 0x14043D644 (MiLocateLowestConflictingVad.c)
 *     MiUpdateVadBits @ 0x140A705BC (MiUpdateVadBits.c)
 *     MiExpandVadBitMapDown @ 0x140A78C90 (MiExpandVadBitMapDown.c)
 */

__int64 __fastcall MiExpandVadBitMap(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v6; // r13
  _KPROCESS *Process; // r10
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbp
  unsigned __int64 LowestConflictingVad; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rcx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rcx
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp+10h]
  __int64 v23; // [rsp+80h] [rbp+18h]
  volatile _KAFFINITY_EX *ActiveProcessors; // [rsp+88h] [rbp+20h]

  v23 = a3;
  v21 = 0LL;
  v6 = a1[1];
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = *a1;
  ActiveProcessors = Process[2].ActiveProcessors;
  v9 = v8 + ((-524288 * qword_140E2F3C8 + (v6 << 19)) >> 16);
  v22 = a1[5] - v9 + 1;
  v10 = v22;
  if ( a4 )
  {
    v19 = a1[6] - 1;
    v20 = (v8 + 8 * (v6 - qword_140E2F3C8)) << 16;
    if ( v19 > a4 )
      v19 = a4;
    if ( v19 + 0x10000 <= v20 )
      v10 = 0LL;
    else
      v10 = ((v19 - v20) >> 16) + 1;
  }
  v11 = a2;
  if ( a2 > v10 )
    return MiExpandVadBitMapDown(a1, a2);
  v12 = (v8 + 8 * (v6 - qword_140E2F3C8)) << 16;
  LowestConflictingVad = MiLocateLowestConflictingVad((__int64)Process, v12);
  if ( LowestConflictingVad )
  {
    v11 = a2
        + (((unsigned __int64)*(unsigned int *)(LowestConflictingVad + 28) >> 4) | ((unsigned __int64)*(unsigned __int8 *)(LowestConflictingVad + 33) << 28))
        - (v12 >> 16);
    if ( v11 > v22 )
      v11 = -1LL;
    if ( v11 > v10 )
      return MiExpandVadBitMapDown(a1, a2);
  }
  if ( (int)MiMakeHyperRangeAccessible(v6 + (v8 >> 3), v6 + ((v11 + v8 - 1) >> 3), &v21) < 0 )
    return 0LL;
  ActiveProcessors[3].StaticBitmap[24] += v21;
  v14 = ((8 * ((v11 >> 6) + ((v11 & 0x3F) != 0))) >> 12) + (((8 * ((v11 >> 6) + ((v11 & 0x3F) != 0))) & 0xFFF) != 0);
  v15 = (v14 << 15) + *a1;
  v16 = (v14 << 15) + v9;
  *a1 = v15;
  v17 = a1[5];
  if ( v16 > v17 + 1 )
    *a1 = v15 + v17 - v16 + 1;
  if ( v6 + (v8 >> 3) == qword_140E2F3C8 )
  {
    *(_QWORD *)a1[1] |= 1uLL;
    if ( v8 )
      a1[2] = 1LL;
  }
  MiUpdateVadBits(v12, v12 + (v14 << 31));
  return 1LL;
}
