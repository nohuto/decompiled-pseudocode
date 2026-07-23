/*
 * XREFs of MiMapLockedPagesInUserSpaceHelper @ 0x140390E28
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x1408DC1EC (MiMapLockedPagesInUserSpace.c)
 *     MiRotateToFrameBuffer @ 0x140A233E4 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A23700 (MiRotateToFrameBufferNoCopy.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiInsertPhysicalPteMapping @ 0x1403910B8 (MiInsertPhysicalPteMapping.c)
 *     MiPageTableLockIsContended @ 0x140391410 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1403915E0 (MiWorkingSetIsContended.c)
 */

char __fastcall MiMapLockedPagesInUserSpaceHelper(
        unsigned __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 v8; // rcx
  __int64 v10; // r8
  _KPROCESS *Process; // r14
  ULONG_PTR v12; // rsi
  unsigned int v13; // ebp
  __int64 p_Blink; // r14
  int v15; // ebx
  unsigned __int64 v16; // rdi
  unsigned __int8 v17; // r13
  int v18; // r15d
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  unsigned __int64 LockedVadEvent; // rax
  bool v25; // zf
  int v26; // eax
  _QWORD v27[3]; // [rsp+20h] [rbp-48h] BYREF
  int v28; // [rsp+38h] [rbp-30h]
  int v29; // [rsp+3Ch] [rbp-2Ch]
  __int64 v31; // [rsp+78h] [rbp+10h]

  v29 = 0;
  v8 = a6;
  v27[0] = a6;
  v10 = 1LL;
  if ( (*(_DWORD *)(a6 + 48) & 0x70) == 0x40 )
  {
    LockedVadEvent = MiLocateLockedVadEvent(a6, 8);
    v25 = ((unsigned __int8)*(_DWORD *)(LockedVadEvent + 84) & (unsigned __int8)v10) == 0;
    v26 = v29;
    if ( !v25 )
      v26 = v10;
    v29 = v26;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = ((a7 >> 31) & 0xFFFFFFFD) + 4;
  if ( (_DWORD)a4 )
  {
    if ( (_DWORD)a4 == 2 )
      v13 |= 0x18u;
  }
  else
  {
    v13 |= 8u;
  }
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v15 = (*(_DWORD *)(v8 + 48) >> 12) & 0x7F;
  v16 = 0LL;
  v17 = MiLockWorkingSetShared(p_Blink, a2, v10, a4);
  v31 = a2 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  do
  {
    v18 = v13;
    if ( a3 )
    {
      v23 = 48LL * *a3 - 0x220000000000LL;
      v18 = (*(_DWORD *)(v23 + 16) >> 5) & 7;
      if ( (HIWORD(*(_DWORD *)(v23 + 32)) & 0xC0) == 0x80 )
      {
        v18 |= 0x18u;
      }
      else if ( BYTE2(*(_DWORD *)(v23 + 32)) < 0x40u )
      {
        v18 |= 8u;
      }
      ++a3;
    }
    if ( !v16 )
      goto LABEL_18;
    if ( (v12 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal(p_Blink, v16);
LABEL_18:
      v16 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v12, v15, v17, 0);
    }
    v27[1] = v12;
    v28 = v18;
    v27[2] = *(_QWORD *)(v31 + v12);
    MiInsertPhysicalPteMapping(v27);
    v12 += 8LL;
    if ( (v12 & 0x78) == 0
      && ((unsigned int)MiWorkingSetIsContended(p_Blink, 0LL)
       || (unsigned int)MiPageTableLockIsContended(p_Blink, v16)
       || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(p_Blink, v16);
      MiUnlockWorkingSetShared(p_Blink, v17);
      v16 = 0LL;
      MiLockWorkingSetShared(p_Blink, v20, v21, v22);
    }
    --a5;
  }
  while ( a5 );
  if ( v16 )
    MiUnlockPageTableInternal(p_Blink, v16);
  return MiUnlockWorkingSetShared(p_Blink, v17);
}
