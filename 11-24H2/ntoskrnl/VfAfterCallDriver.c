/*
 * XREFs of VfAfterCallDriver @ 0x140B8FA94
 * Callers:
 *     IovpCallDriverWithStackBuffer @ 0x140B84950 (IovpCallDriverWithStackBuffer.c)
 *     IovCallDriver @ 0x140BA9D40 (IovCallDriver.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     VfBugCheckNoStackUsage @ 0x140610548 (VfBugCheckNoStackUsage.c)
 *     ViErrorReport1 @ 0x140610B34 (ViErrorReport1.c)
 *     IovpCallDriver2 @ 0x140B8F280 (IovpCallDriver2.c)
 */

void __fastcall VfAfterCallDriver(__int64 a1, int *a2)
{
  __int64 v4; // rdi
  ULONG *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  ULONG_PTR CombinedApcDisable; // rcx
  _DWORD *v9; // rcx

  if ( a1 )
  {
    v4 = 0LL;
    if ( !KeAreInterruptsEnabled() && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
    {
      *(_BYTE *)(a1 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
      BugCheckParameter1 = 193LL;
      *(_QWORD *)&VfBugcheckTmpData = 196LL;
      qword_140FFDA40 = *(_QWORD *)(a1 + 48);
      *(_OWORD *)&xmmword_140FFDA48 = 0LL;
      goto LABEL_9;
    }
    if ( *(_BYTE *)(a1 + 156) != KeGetCurrentIrql() && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
    {
      *(_BYTE *)(a1 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
      qword_140FFDA40 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)&VfBugcheckTmpData = 201LL;
      BugCheckParameter1 = 18LL;
      do
      {
        *((_QWORD *)&VfBugcheckTmpData + v4 + 3) = *(unsigned __int8 *)(a1 + v4 + 156);
        ++v4;
      }
      while ( v4 < 2 );
LABEL_9:
      VfBugCheckNoStackUsage();
    }
    if ( *(_DWORD *)(a1 + 188) != KeGetCurrentThread()->WaitBlock[3].SpareLong
      && !_bittest((const signed __int32 *)&VfRuleClasses, 0x16u) )
    {
      *(_BYTE *)(a1 + 157) = KeAcquireSpinLockRaiseToDpc(&VfBugcheckTmpDataLock);
      v5 = &VfBugcheckTmpData;
      v6 = 196LL;
      v7 = 2LL;
      do
      {
        *(_QWORD *)v5 = v6++;
        v5 += 2;
        --v7;
      }
      while ( v7 );
      qword_140FFDA40 = *(_QWORD *)(a1 + 48);
      CombinedApcDisable = KeGetCurrentThread()->CombinedApcDisable;
      *(&xmmword_140FFDA48 + 1) = *(unsigned int *)(a1 + 188);
      xmmword_140FFDA48 = CombinedApcDisable;
      VfBugCheckNoStackUsage();
    }
    v9 = (_DWORD *)(a1 + 152);
    if ( (MmVerifierData & 0x10) != 0 && (*v9 & 2) != 0 && *a2 == 259 )
    {
      ViErrorReport1(0x307u, *(const void **)(a1 + 176), *(const void **)(a1 + 168));
    }
    else if ( (*v9 & 1) != 0 )
    {
      IovpCallDriver2(a1, a2);
    }
  }
}
