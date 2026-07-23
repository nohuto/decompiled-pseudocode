/*
 * XREFs of MiPrepareImagePagesForHotPatch @ 0x14067E494
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1407F5C30 (MiPrepareToHotPatchImage.c)
 *     MmPrepareImagePagesForHotPatch @ 0x1407F68F8 (MmPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiCountSharedPages @ 0x1402100F4 (MiCountSharedPages.c)
 *     MmProbeAndLockPages @ 0x1402378C0 (MmProbeAndLockPages.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403C927C (MiCopyOnWriteCheckConditions.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiLogHotPatchPagesLocked @ 0x1407F4A10 (MiLogHotPatchPagesLocked.c)
 *     MiChargeFullProcessCommitment @ 0x140919BC0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1409D8398 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiPrepareImagePagesForHotPatch(__int64 *a1, ULONG_PTR a2, __int64 a3)
{
  _KPROCESS *Process; // rbx
  __int64 p_Blink; // r15
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  unsigned __int64 v13; // r12
  int v14; // ebx
  volatile unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rdi
  unsigned int v21; // ebx
  _KPROCESS *v22; // r9
  int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // ebx
  struct _MDL *v28; // rax
  struct _MDL *v29; // rsi
  __int64 v30; // r14
  struct _MDL *v31; // rdi
  unsigned __int64 v32; // r12
  unsigned __int8 CurrentIrql; // r15
  __int64 v34; // rbx
  unsigned __int16 v35; // cx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  int v40; // [rsp+30h] [rbp-A8h]
  __int64 v41; // [rsp+38h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-98h]
  __int64 v43; // [rsp+48h] [rbp-90h]
  unsigned int v44; // [rsp+50h] [rbp-88h] BYREF
  _KPROCESS *v45; // [rsp+58h] [rbp-80h]
  __int64 v46; // [rsp+60h] [rbp-78h]
  PMDL Mdl; // [rsp+68h] [rbp-70h]
  __int64 v48[3]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v49; // [rsp+88h] [rbp-50h]
  __int64 v50[9]; // [rsp+90h] [rbp-48h] BYREF
  unsigned __int8 v54; // [rsp+F8h] [rbp+20h]

  v50[0] = 0LL;
  v48[0] = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v45 = Process;
  v48[1] = (__int64)Process;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v6 = *a1;
  v41 = v6;
  v48[2] = *a1;
  Mdl = 0LL;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v49 = v7 + 8 * (a3 - 1);
  v8 = 0LL;
  v46 = 0LL;
  v43 = MiCountSharedPages(v6, v7, v49);
  if ( v43 )
  {
    result = MiChargeFullProcessCommitment(Process);
    if ( (int)result < 0 )
      return result;
  }
  BugCheckParameter2 = a2;
  v13 = 0LL;
  v14 = 1;
  v40 = 1;
  v54 = MiLockWorkingSetShared(p_Blink, v9, v10, v11);
  while ( v7 <= v49 )
  {
    if ( v14 || (v7 & 0xFFF) == 0 )
    {
      if ( v13 )
        MiUnlockPageTableInternal(p_Blink, v13);
      v13 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v7, (*(_DWORD *)(v6 + 48) >> 12) & 0x7F, v54, 0);
      v40 = 0;
    }
    v15 = *(_QWORD *)v7;
    if ( (*(_QWORD *)v7 & 1) != 0 )
    {
      v19 = 48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( *(__int64 *)(v19 + 40) >= 0 || (*(_QWORD *)(v19 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v19 + 8) > 0 )
        goto LABEL_23;
      v20 = *(_QWORD *)(v19 + 8);
      if ( (v20 | 0x8000000000000000uLL) != MiGetProtoPteAddress(v41, BugCheckParameter2 >> 12, 0, v50) )
        goto LABEL_23;
      if ( (v15 & 0x800) != 0 )
      {
        MiUnlockPageTableInternal(p_Blink, v13);
        MiUnlockWorkingSetShared(p_Blink, v54);
        v21 = -1073741755;
        v6 = v41;
        goto LABEL_18;
      }
      v23 = MiCopyOnWrite(BugCheckParameter2, (volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL, 0, v48);
      if ( v23 >= 0 )
      {
        if ( (v15 & 0x200) == 0 )
          v46 = ++v8;
LABEL_23:
        v7 += 8LL;
        BugCheckParameter2 += 4096LL;
        v6 = v41;
        v14 = v40;
      }
      else
      {
        MiUnlockPageTableInternal(p_Blink, v13);
        MiUnlockWorkingSetShared(p_Blink, v54);
        v13 = 0LL;
        MiCopyOnWriteCheckConditions(p_Blink, v23, v48[0]);
        v14 = 1;
        v40 = 1;
        MiLockWorkingSetShared(p_Blink, v24, v25, v26);
        v6 = v41;
      }
    }
    else
    {
      MiUnlockPageTableInternal(p_Blink, v13);
      MiUnlockWorkingSetShared(p_Blink, v54);
      v13 = 0LL;
      v14 = 1;
      v40 = 1;
      MiLockWorkingSetShared(p_Blink, v16, v17, v18);
    }
  }
  MiUnlockPageTableInternal(p_Blink, v13);
  MiUnlockWorkingSetShared(p_Blink, v54);
  v27 = a3;
  v28 = IoAllocateMdl((PVOID)a2, (_DWORD)a3 << 12, 0, 0, 0LL);
  v29 = v28;
  Mdl = v28;
  if ( v28 )
  {
    MmProbeAndLockPages(v28, 0, IoReadAccess);
    v29->MdlFlags |= 0x80u;
    v30 = 0LL;
    v31 = v29 + 1;
    v32 = (unsigned __int64)&v29[1] + 8 * a3;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    if ( (unsigned __int64)v31 < v32 )
    {
      do
      {
        v34 = 48 * (__int64)v31->Next - 0x220000000000LL;
        v44 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v44);
          while ( *(__int64 *)(v34 + 24) < 0 );
        }
        v35 = ((*(_QWORD *)(v34 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0) + 2;
        if ( (*(_BYTE *)(v34 + 34) & 8) == 0 )
          v35 = ((*(_QWORD *)(v34 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0) + 1;
        if ( (unsigned __int16)*(_DWORD *)(v34 + 32) > v35 )
          ++v30;
        _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v31 = (struct _MDL *)((char *)v31 + 8);
      }
      while ( (unsigned __int64)v31 < v32 );
      v27 = a3;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    v6 = v41;
    if ( v30 )
    {
      v36 = *(_QWORD *)(***(_QWORD ***)(v41 + 72) + 56LL);
      MiLogHotPatchPagesLocked(a2, (v27 << 12) + a2 - 1, *(_DWORD *)(v36 + 60), *(_DWORD *)(v36 + 72), v30);
    }
    v37 = a1[7];
    if ( v37 )
      v29->Next = (struct _MDL *)v37;
    a1[7] = (__int64)v29;
    v21 = 0;
  }
  else
  {
    v21 = -1073741670;
  }
LABEL_18:
  v22 = v45;
  if ( v8 )
  {
    v38 = *(unsigned int *)(v6 + 52);
    v39 = v8 + (v38 | ((unsigned __int64)*(unsigned __int8 *)(v6 + 34) << 32));
    *(_DWORD *)(v6 + 52) = v8 + v38;
    *(_BYTE *)(v6 + 34) = BYTE4(v39);
  }
  if ( v43 != v8 )
    MiReturnFullProcessCommitment(v22);
  return v21;
}
