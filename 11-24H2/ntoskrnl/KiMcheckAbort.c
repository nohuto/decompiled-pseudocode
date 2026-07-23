/*
 * XREFs of KiMcheckAbort @ 0x1406BB9C0
 * Callers:
 *     KiMcheckAbortShadow @ 0x140BBD9C0 (KiMcheckAbortShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1403FE680 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1404F9550 (KiSaveDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B4DD0 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1405BA300 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     KiKernelShadowStackAssistMceAlternateReturn @ 0x1405C43B0 (KiKernelShadowStackAssistMceAlternateReturn.c)
 *     KiMcheckFastForward @ 0x1405C7780 (KiMcheckFastForward.c)
 *     KiSetSpecCtrlNmi @ 0x1406AD570 (KiSetSpecCtrlNmi.c)
 *     KxMcheckAbort @ 0x1406BC000 (KxMcheckAbort.c)
 */

void __fastcall KiMcheckAbort(
        __int64 a1,
        __int64 _RDX,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r11
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  unsigned __int32 v16; // eax
  unsigned __int64 v17; // rdx
  int v18; // eax
  int v19; // r8d
  unsigned int v20; // eax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int128 v23; // xmm4
  __int128 v24; // xmm5
  __int64 v26; // rcx
  __int64 v27; // r10
  unsigned __int64 v28; // rax
  unsigned __int8 CurrentIrql; // al
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rcx
  unsigned __int64 InitialStack; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 (__fastcall **v38)(int, int, int, int, int, int, int, int, int, int, int, int, int, __int16); // rcx
  __int64 (__fastcall *v39)(); // rax
  bool v40; // zf
  _KIDTENTRY64 *IdtBase; // rax
  int v42; // r9d
  int v43; // r8d
  int v44; // edx
  int v45; // ecx
  __m128i v46; // [rsp+0h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter4[4]; // [rsp+10h] [rbp-80h] BYREF
  unsigned __int64 v48; // [rsp+30h] [rbp-60h]
  unsigned __int8 v49; // [rsp+38h] [rbp-58h]
  unsigned __int8 v50; // [rsp+39h] [rbp-57h]
  char v51; // [rsp+3Bh] [rbp-55h]
  unsigned int v52; // [rsp+3Ch] [rbp-54h]
  __int64 v53; // [rsp+40h] [rbp-50h]
  __int64 v54; // [rsp+48h] [rbp-48h]
  __int64 v55; // [rsp+50h] [rbp-40h]
  __int64 v56; // [rsp+58h] [rbp-38h]
  __int64 v57; // [rsp+60h] [rbp-30h]
  __int64 v58; // [rsp+68h] [rbp-28h]
  __int64 v59; // [rsp+70h] [rbp-20h]
  unsigned __int64 v60; // [rsp+78h] [rbp-18h]
  _OWORD v61[6]; // [rsp+80h] [rbp-10h] BYREF
  unsigned __int64 v62; // [rsp+E0h] [rbp+50h]
  __int64 v63; // [rsp+E8h] [rbp+58h]
  __int16 v64; // [rsp+110h] [rbp+80h]
  unsigned int v65; // [rsp+150h] [rbp+C0h]
  __int64 (__fastcall *retaddr)(int, int, int, int, int, int, int, int, int, int, int, int, int, __int16); // [rsp+178h] [rbp+E8h]
  unsigned __int16 v67; // [rsp+180h] [rbp+F0h]
  unsigned int v68; // [rsp+188h] [rbp+F8h]
  unsigned __int64 v69; // [rsp+190h] [rbp+100h]
  unsigned __int16 v70; // [rsp+198h] [rbp+108h]

  v51 = 0;
  v53 = v8;
  v54 = a1;
  v55 = _RDX;
  v56 = a3;
  v57 = a4;
  v58 = v9;
  v59 = v10;
  if ( (v67 & 1) == 0 )
  {
    __asm { rdsspq  rdx }
    v63 = _RDX;
    v60 = __readmsr(0xC0000101);
    v16 = __segmentlimit(0x50u);
    if ( v40 )
    {
      v19 = (v16 & 0x3FF) << 6;
      v18 = v16 >> 14;
    }
    else
    {
      if ( (KeFeatureBits & 0x400000000LL) == 0 )
      {
        __sgdt(v61);
        v17 = *(_QWORD *)(*(_QWORD *)((char *)v61 + 2) - 8000LL);
LABEL_8:
        v20 = v17;
        v21 = HIDWORD(v17);
        __writemsr(0xC0000101, __PAIR64__(v21, v20));
        v22 = __readcr2();
        v62 = v22;
        KiSetSpecCtrlNmi(3221225729LL, v21);
        goto LABEL_20;
      }
      __asm { rdtscp }
      v18 = 1;
      v19 = 805306432;
    }
    v17 = KiProcessorBlock[*((unsigned int *)qword_140F22998 + (v19 | (unsigned int)v18))] - 384;
    goto LABEL_8;
  }
  if ( (KiKvaShadow & 1) == 0 )
    __asm { swapgs }
  _mm_lfence();
  _RCX = KeGetPcr()->Prcb.KernelShadowStackInitial;
  if ( _RCX )
  {
    __asm { rdsspq  rdx }
    if ( _RDX == KeGetPcr()->Prcb.TransitionShadowStack + 8 )
    {
      __asm
      {
        rstorssp qword ptr [rcx]
        saveprevssp
      }
    }
  }
  KiSetSpecCtrlNmi(_RCX, _RDX);
  if ( KiUserCetPl3SspCanonicalizeUpperMask )
  {
    v26 = 1703LL;
    v28 = __readmsr(0x6A7u);
    if ( HIDWORD(v28) )
    {
      v26 = HIDWORD(v28);
      if ( (KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v28)) != HIDWORD(v28) )
      {
        v26 = 1703LL;
        __writemsr(0x6A7u, __PAIR64__((unsigned int)KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v28), v28));
      }
    }
  }
  v40 = (*(_BYTE *)(v27 + 3) & 3) == 0;
  v64 = 0;
  if ( !v40 )
    *(double *)&v11 = KiSaveDebugRegisterState(v26);
LABEL_20:
  v52 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v61[0] = v11;
  v61[1] = v12;
  v61[2] = v13;
  v61[3] = v14;
  v61[4] = v23;
  v61[5] = v24;
  if ( KeGetPcr()->Prcb.DeepSleep )
    KeWakeProcessor();
  if ( &ExpInterlockedPopEntrySListResume < (_UNKNOWN *)retaddr
    && &ExpInterlockedPopEntrySListEnd >= (_UNKNOWN *)retaddr )
  {
    KiCheckForSListAddress((__int64)BugCheckParameter4);
  }
  __incgsdword(0x87C0u);
  if ( (_BYTE)KeSmapEnabled )
    __asm { clac }
  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(0xFu);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
  }
  v50 = CurrentIrql;
  _enable();
  KiMcheckFastForward((ULONG_PTR)BugCheckParameter4, 0);
  __incgsbyte(0x8527u);
  if ( (v67 & 1) == 0 )
  {
    v31 = *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 52);
    if ( v69 <= v31 )
    {
      v30 = (unsigned int)KeIstStackSize;
      if ( (KiKvaShadow & 1) != 0 )
        v30 = 464LL;
      if ( v69 > v31 - v30 )
        goto LABEL_38;
    }
    if ( (KiKvaShadow & 1) != 0 )
    {
      v32 = *(_QWORD *)(*(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 52) + 8LL);
      if ( v69 <= v32 && v69 > v32 - (unsigned int)KeIstStackSize + 32 )
      {
LABEL_38:
        v70 |= 4u;
        _InterlockedIncrement64(&KiMcheckNmiBlocking);
      }
    }
    if ( *(_BYTE *)retaddr == 0xF4 && *(_WORD *)((char *)retaddr - 1) == 0xF4FB )
    {
      v68 &= ~0x200u;
      retaddr = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))((char *)retaddr - 1);
      _InterlockedIncrement64(&KiMcheckStiBlocking);
    }
  }
  KxMcheckAbort(BugCheckParameter4, v30, &v46);
  if ( (v46.m128i_i8[0] & 1) != 0 )
  {
    MEMORY[0x8B10] = _mm_load_si128(&v46);
    v51 = 1;
  }
  __writegsbyte(0x8527u, KeGetPcr()->Prcb.MceActive - 1);
  _disable();
  if ( KiIrqlFlags )
    KzSetIrqlUnsafe(v50);
  else
    __writecr8(v50);
  _disable();
  if ( (v67 & 1) != 0 )
  {
    if ( (_BYTE)KeSmapEnabled )
      __asm { stac }
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->Header.LockNV & 0x10000) != 0 && (CurrentThread->Header.Size & 1) != 0 )
    {
      KiCopyCounters((__int64)CurrentThread);
      CurrentThread = KeGetCurrentThread();
    }
    _mm_setcsr(v52);
    if ( v64 )
      KiRestoreDebugRegisterState(CurrentThread);
    if ( _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 0x16u) )
    {
      __asm { rdsspq  rcx }
      if ( _RCX == KeGetPcr()->Prcb.KernelShadowStackInitial + 8 )
      {
        _RCX = KeGetPcr()->Prcb.TransitionShadowStack;
        __asm
        {
          rstorssp qword ptr [rcx]
          saveprevssp
        }
      }
    }
    if ( !v51 )
    {
LABEL_69:
      __writegsbyte(0x85Eu, v49);
      if ( KeGetPcr()->Prcb.BpbNmiSpecCtrl )
        __writemsr(0x48u, v65);
      goto LABEL_71;
    }
    InitialStack = (unsigned __int64)KeGetCurrentThread()->InitialStack;
  }
  else
  {
    if ( !v51 )
      goto LABEL_75;
    InitialStack = v69 & 0xFFFFFFFFFFFFFFF0uLL;
  }
  __asm { rdsspq  rdx }
  if ( _RDX )
  {
    v48 = InitialStack;
    KiKernelShadowStackAssistMceAlternateReturn((__int64)BugCheckParameter4);
    InitialStack = v48;
  }
  v38 = (__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))(InitialStack - 40);
  *v38 = retaddr;
  v38[1] = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v67;
  v38[2] = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v68;
  v38[3] = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v69;
  v38[4] = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v70;
  if ( (v67 & 1) == 0 )
  {
    retaddr = KxMcheckAlternateReturn;
LABEL_75:
    _mm_setcsr(v52);
    __writegsbyte(0x85Eu, v49);
    if ( KeGetPcr()->Prcb.BpbNmiSpecCtrl )
      __writemsr(0x48u, v65);
    __writemsr(0xC0000101, v60);
    __writecr2(v62);
    v42 = v57;
    v43 = v56;
    v44 = v55;
    v45 = v54;
    if ( (KiKvaShadow & 1) == 0 )
      goto LABEL_74;
LABEL_72:
    KiKernelIstMceExit(v45, v44, v43, v42, a5, a6, a7, a8);
    return;
  }
  v39 = (__int64 (__fastcall *)())KxMcheckAlternateReturn;
  v40 = (KiKvaShadow & 1) == 0;
  if ( (KiKvaShadow & 1) != 0 )
  {
    IdtBase = KeGetPcr()->IdtBase;
    *(&IdtBase[1118].Alignment + 1) = KeGetPcr()->Prcb.KernelDirectoryTableBase & 0x7FFFFFFFFFFFFFFFLL;
    IdtBase[1118].Alignment = (unsigned __int64)KeGetPcr();
    IdtBase = (_KIDTENTRY64 *)((char *)IdtBase + 16856);
    IdtBase->Alignment = (unsigned __int64)*v38;
    *(_KIDTENTRY64 *)((char *)IdtBase + 8) = *(_KIDTENTRY64 *)(v38 + 1);
    *(&IdtBase[1].Alignment + 1) = (unsigned __int64)v38[3];
    IdtBase[2].Alignment = (unsigned __int64)v38;
    v39 = KxMcheckAlternateReturnShadow;
  }
  retaddr = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v39;
  if ( v40 )
    goto LABEL_69;
LABEL_71:
  v42 = v57;
  v43 = v56;
  v44 = v55;
  v45 = v54;
  if ( (KiKvaShadow & 1) != 0 )
    goto LABEL_72;
  __asm { swapgs }
  _mm_lfence();
LABEL_74:
  KiMcheckExit();
}
