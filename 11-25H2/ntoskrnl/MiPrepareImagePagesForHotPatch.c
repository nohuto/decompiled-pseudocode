/*
 * XREFs of MiPrepareImagePagesForHotPatch @ 0x140671A88
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1407E56B0 (MiPrepareToHotPatchImage.c)
 *     MmPrepareImagePagesForHotPatch @ 0x1407E62F4 (MmPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     IoAllocateMdl @ 0x1402D5350 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     MiCountSharedPages @ 0x14037DA64 (MiCountSharedPages.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403DE840 (MiCopyOnWriteCheckConditions.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiLogHotPatchPagesLocked @ 0x1407E4494 (MiLogHotPatchPagesLocked.c)
 *     MiChargeFullProcessCommitment @ 0x1409020A0 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1409E454C (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiPrepareImagePagesForHotPatch(__int64 *a1, ULONG_PTR a2, __int64 a3)
{
  _KPROCESS *Process; // rbx
  __int64 p_Blink; // r15
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 result; // rax
  unsigned __int64 v11; // r12
  int v12; // ebx
  volatile unsigned __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdi
  unsigned int v16; // ebx
  _KPROCESS *v17; // r9
  int v18; // edi
  int v19; // ebx
  struct _MDL *v20; // rax
  struct _MDL *v21; // rsi
  __int64 v22; // r14
  struct _MDL *v23; // rdi
  unsigned __int64 v24; // r12
  unsigned __int8 CurrentIrql; // r15
  __int64 v26; // rbx
  unsigned __int16 v27; // cx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  int v32; // [rsp+30h] [rbp-A8h]
  __int64 v33; // [rsp+38h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-98h]
  __int64 v35; // [rsp+48h] [rbp-90h]
  int v36; // [rsp+50h] [rbp-88h] BYREF
  _KPROCESS *v37; // [rsp+58h] [rbp-80h]
  __int64 v38; // [rsp+60h] [rbp-78h]
  PMDL Mdl; // [rsp+68h] [rbp-70h]
  __int64 v40[3]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v41; // [rsp+88h] [rbp-50h]
  unsigned __int64 *v42; // [rsp+90h] [rbp-48h] BYREF
  unsigned __int8 v46; // [rsp+F8h] [rbp+20h]

  v42 = 0LL;
  v40[0] = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v37 = Process;
  v40[1] = (__int64)Process;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v6 = *a1;
  v33 = v6;
  v40[2] = *a1;
  Mdl = 0LL;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v41 = v7 + 8 * (a3 - 1);
  v8 = 0LL;
  v38 = 0LL;
  v9 = MiCountSharedPages(v6, v7, v41);
  v35 = v9;
  if ( v9 )
  {
    result = MiChargeFullProcessCommitment(Process, v9);
    if ( (int)result < 0 )
      return result;
  }
  BugCheckParameter2 = a2;
  v11 = 0LL;
  v12 = 1;
  v32 = 1;
  v46 = MiLockWorkingSetShared(p_Blink);
  while ( v7 <= v41 )
  {
    if ( v12 || (v7 & 0xFFF) == 0 )
    {
      if ( v11 )
        MiUnlockPageTable(p_Blink, v11);
      v11 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiMakeSystemAddressValid(v7, (*(_DWORD *)(v6 + 48) >> 12) & 0x7F, v46, 0);
      v32 = 0;
    }
    v13 = *(_QWORD *)v7;
    if ( (*(_QWORD *)v7 & 1) != 0 )
    {
      v14 = 48 * ((v13 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( *(__int64 *)(v14 + 40) >= 0 || (*(_QWORD *)(v14 + 40) & 0x10000000000LL) == 0 && *(__int64 *)(v14 + 8) > 0 )
        goto LABEL_23;
      v15 = *(_QWORD *)(v14 + 8);
      if ( (v15 | 0x8000000000000000uLL) != MiGetProtoPteAddress(v33, BugCheckParameter2 >> 12, 0, &v42) )
        goto LABEL_23;
      if ( (v13 & 0x800) != 0 )
      {
        MiUnlockPageTable(p_Blink, v11);
        MiUnlockWorkingSetShared(p_Blink, v46);
        v16 = -1073741755;
        v6 = v33;
        goto LABEL_18;
      }
      v18 = MiCopyOnWrite(BugCheckParameter2, (volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL, 0, v40);
      if ( v18 >= 0 )
      {
        if ( (v13 & 0x200) == 0 )
          v38 = ++v8;
LABEL_23:
        v7 += 8LL;
        BugCheckParameter2 += 4096LL;
        v6 = v33;
        v12 = v32;
      }
      else
      {
        MiUnlockPageTable(p_Blink, v11);
        MiUnlockWorkingSetShared(p_Blink, v46);
        v11 = 0LL;
        MiCopyOnWriteCheckConditions(p_Blink, v18, v40[0]);
        v12 = 1;
        v32 = 1;
        MiLockWorkingSetShared(p_Blink);
        v6 = v33;
      }
    }
    else
    {
      MiUnlockPageTable(p_Blink, v11);
      MiUnlockWorkingSetShared(p_Blink, v46);
      v11 = 0LL;
      v12 = 1;
      v32 = 1;
      MiLockWorkingSetShared(p_Blink);
    }
  }
  MiUnlockPageTable(p_Blink, v11);
  MiUnlockWorkingSetShared(p_Blink, v46);
  v19 = a3;
  v20 = IoAllocateMdl((PVOID)a2, (_DWORD)a3 << 12, 0, 0, 0LL);
  v21 = v20;
  Mdl = v20;
  if ( v20 )
  {
    MmProbeAndLockPages(v20, 0, IoReadAccess);
    v21->MdlFlags |= 0x80u;
    v22 = 0LL;
    v23 = v21 + 1;
    v24 = (unsigned __int64)&v21[1] + 8 * a3;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    if ( (unsigned __int64)v23 < v24 )
    {
      do
      {
        v26 = 48 * (__int64)v23->Next - 0x220000000000LL;
        v36 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v36);
          while ( *(__int64 *)(v26 + 24) < 0 );
        }
        v27 = ((*(_QWORD *)(v26 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0) + 2;
        if ( (*(_BYTE *)(v26 + 34) & 8) == 0 )
          v27 = ((*(_QWORD *)(v26 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0) + 1;
        if ( (unsigned __int16)*(_DWORD *)(v26 + 32) > v27 )
          ++v22;
        _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v23 = (struct _MDL *)((char *)v23 + 8);
      }
      while ( (unsigned __int64)v23 < v24 );
      v19 = a3;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    v6 = v33;
    if ( v22 )
    {
      v28 = *(_QWORD *)(***(_QWORD ***)(v33 + 72) + 56LL);
      MiLogHotPatchPagesLocked(a2, (v19 << 12) + a2 - 1, *(_DWORD *)(v28 + 60), *(_DWORD *)(v28 + 72), v22);
    }
    v29 = a1[7];
    if ( v29 )
      v21->Next = (struct _MDL *)v29;
    a1[7] = (__int64)v21;
    v16 = 0;
  }
  else
  {
    v16 = -1073741670;
  }
LABEL_18:
  v17 = v37;
  if ( v8 )
  {
    v30 = *(unsigned int *)(v6 + 52);
    v31 = v8 + (v30 | ((unsigned __int64)*(unsigned __int8 *)(v6 + 34) << 32));
    *(_DWORD *)(v6 + 52) = v8 + v30;
    *(_BYTE *)(v6 + 34) = BYTE4(v31);
  }
  if ( v35 != v8 )
    MiReturnFullProcessCommitment(v17, v35 - v8);
  return v16;
}
