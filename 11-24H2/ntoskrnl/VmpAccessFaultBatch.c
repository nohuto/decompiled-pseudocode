/*
 * XREFs of VmpAccessFaultBatch @ 0x140399920
 * Callers:
 *     VmAccessFault @ 0x140A042B0 (VmAccessFault.c)
 * Callees:
 *     VmpFaultEntryInsert @ 0x140399AE0 (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x140399C30 (VmpFaultEntryRemove.c)
 *     VmpProcessContextLockShared @ 0x14039A340 (VmpProcessContextLockShared.c)
 *     VmpProcessContextUnlockShared @ 0x14039A38C (VmpProcessContextUnlockShared.c)
 *     VmpProcessUpdateSlat @ 0x14039A3E4 (VmpProcessUpdateSlat.c)
 *     VmpAccessFaultBatchResolve @ 0x1409F0524 (VmpAccessFaultBatchResolve.c)
 */

__int64 __fastcall VmpAccessFaultBatch(
        PEX_SPIN_LOCK SpinLock,
        unsigned __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  int v8; // ebx
  const signed __int64 *v9; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  PEX_SPIN_LOCK v12; // rbp
  int updated; // ebx
  __int64 v14; // r12
  int v15; // r15d
  __int64 v16; // rcx
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rdx
  _QWORD *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx

  v8 = a4;
  v9 = (const signed __int64 *)(a2 + 32);
  LODWORD(v10) = a3;
  v11 = a2;
  v12 = SpinLock;
  while ( 1 )
  {
    VmpFaultEntryInsert(v12, v11, (unsigned int)v10);
    updated = VmpAccessFaultBatchResolve((_DWORD)v12, v11, v10, v8, a5, a6, a7);
    if ( updated < 0 )
      break;
    v14 = VmpProcessContextLockShared(v12);
    if ( *((_QWORD *)v12 + 13) != a8 )
    {
      updated = -1073741558;
LABEL_14:
      if ( v14 != -1 )
        VmpProcessContextUnlockShared(v12, v14);
      break;
    }
    v15 = 0;
    v16 = 48LL * (unsigned int)v10;
    v17 = v16 + v11;
    if ( v11 < v16 + v11 )
    {
      v18 = (v16 - 1) / 0x30uLL + 1;
      do
      {
        if ( _bittest64(v9 - 1, 0x34u) || _bittest64(v9, 0x39u) )
        {
          *v9 |= 0x100000000000000uLL;
          ++v15;
        }
        v9 += 6;
        --v18;
      }
      while ( v18 );
      v11 = a2;
      v12 = SpinLock;
      v9 = (const signed __int64 *)(a2 + 32);
    }
    if ( v15 != (_DWORD)v10 )
    {
      updated = VmpProcessUpdateSlat((_DWORD)v12, v11, v10, a4, a5);
      if ( updated < 0 )
        goto LABEL_14;
    }
    VmpProcessContextUnlockShared(v12, v14);
    VmpFaultEntryRemove(v12, v11, (unsigned int)v10);
    if ( !v15 )
      return 0;
    v10 = 0LL;
    if ( v11 >= v17 )
      return 0;
    v20 = v9;
    do
    {
      v21 = *v20;
      if ( (*v20 & 0x100000000000000LL) != 0 )
      {
        if ( (v21 & 0x200000000000000LL) == 0 )
        {
          *(v20 - 1) &= ~0x10000000000000uLL;
          *v20 = v21 & 0xFFFFFFFFFFFFFLL;
          v22 = 6 * v10;
          v10 = (unsigned int)(v10 + 1);
          *(_OWORD *)(v11 + 8 * v22) = *((_OWORD *)v20 - 2);
          *(_OWORD *)(v11 + 8 * v22 + 16) = *((_OWORD *)v20 - 1);
          *(_OWORD *)(v11 + 8 * v22 + 32) = *(_OWORD *)v20;
        }
        if ( !--v15 )
          break;
      }
      v20 += 6;
    }
    while ( (unsigned __int64)(v20 - 4) < v17 );
    v12 = SpinLock;
    if ( !(_DWORD)v10 )
      return 0;
    v8 = a4;
  }
  VmpFaultEntryRemove(v12, v11, (unsigned int)v10);
  return (unsigned int)updated;
}
