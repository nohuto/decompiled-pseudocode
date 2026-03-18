/*
 * XREFs of MiMapLockedPagesInUserSpaceHelper @ 0x1403CFA04
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x1409C3AE8 (MiMapLockedPagesInUserSpace.c)
 *     MiRotateToFrameBuffer @ 0x140A2E9A4 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A2ECC0 (MiRotateToFrameBufferNoCopy.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiLocateLockedVadEvent @ 0x1403CDE38 (MiLocateLockedVadEvent.c)
 *     MiInsertPhysicalPteMapping @ 0x1403CFC94 (MiInsertPhysicalPteMapping.c)
 *     MiPageTableLockIsContended @ 0x1403CFFE0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x1403D01B0 (MiWorkingSetIsContended.c)
 */

char __fastcall MiMapLockedPagesInUserSpaceHelper(
        unsigned __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 v8; // rcx
  _KPROCESS *Process; // r14
  ULONG_PTR v11; // rsi
  unsigned int v12; // ebp
  __int64 p_Blink; // r14
  int v14; // ebx
  unsigned __int64 v15; // rdi
  unsigned __int8 v16; // r13
  int v17; // r15d
  __int64 v19; // rcx
  unsigned __int64 LockedVadEvent; // rax
  int v21; // r8d
  bool v22; // zf
  int v23; // eax
  _QWORD v24[3]; // [rsp+20h] [rbp-48h] BYREF
  int v25; // [rsp+38h] [rbp-30h]
  int v26; // [rsp+3Ch] [rbp-2Ch]
  __int64 v28; // [rsp+78h] [rbp+10h]

  v26 = 0;
  v8 = a6;
  v24[0] = a6;
  if ( (*(_DWORD *)(a6 + 48) & 0x70) == 0x40 )
  {
    LockedVadEvent = MiLocateLockedVadEvent(a6, 8);
    v22 = ((unsigned __int8)*(_DWORD *)(LockedVadEvent + 84) & (unsigned __int8)v21) == 0;
    v23 = v26;
    if ( !v22 )
      v23 = v21;
    v26 = v23;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v11 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = ((a7 >> 31) & 0xFFFFFFFD) + 4;
  if ( a4 )
  {
    if ( a4 == 2 )
      v12 |= 0x18u;
  }
  else
  {
    v12 |= 8u;
  }
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v14 = (*(_DWORD *)(v8 + 48) >> 12) & 0x7F;
  v15 = 0LL;
  v16 = MiLockWorkingSetShared(p_Blink);
  v28 = a2 - ((a1 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  do
  {
    v17 = v12;
    if ( a3 )
    {
      v19 = 48LL * *a3 - 0x220000000000LL;
      v17 = (*(_DWORD *)(v19 + 16) >> 5) & 7;
      if ( (HIWORD(*(_DWORD *)(v19 + 32)) & 0xC0) == 0x80 )
      {
        v17 |= 0x18u;
      }
      else if ( BYTE2(*(_DWORD *)(v19 + 32)) < 0x40u )
      {
        v17 |= 8u;
      }
      ++a3;
    }
    if ( !v15 )
      goto LABEL_18;
    if ( (v11 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal(p_Blink, v15);
LABEL_18:
      v15 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v11, v14, v16, 0);
    }
    v24[1] = v11;
    v25 = v17;
    v24[2] = *(_QWORD *)(v28 + v11);
    MiInsertPhysicalPteMapping(v24);
    v11 += 8LL;
    if ( (v11 & 0x78) == 0
      && ((unsigned int)MiWorkingSetIsContended(p_Blink, 0LL)
       || (unsigned int)MiPageTableLockIsContended(p_Blink, v15)
       || KeShouldYieldProcessor()) )
    {
      MiUnlockPageTableInternal(p_Blink, v15);
      MiUnlockWorkingSetShared(p_Blink, v16);
      v15 = 0LL;
      MiLockWorkingSetShared(p_Blink);
    }
    --a5;
  }
  while ( a5 );
  if ( v15 )
    MiUnlockPageTableInternal(p_Blink, v15);
  return MiUnlockWorkingSetShared(p_Blink, v16);
}
