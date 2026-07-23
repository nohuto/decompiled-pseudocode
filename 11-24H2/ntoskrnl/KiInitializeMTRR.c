/*
 * XREFs of KiInitializeMTRR @ 0x140C2B8EC
 * Callers:
 *     KiInitMachineDependent @ 0x1405BDA44 (KiInitMachineDependent.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     MmUnlockPagableImageSection @ 0x1402BBBB0 (MmUnlockPagableImageSection.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MmLockPagableSectionByHandle @ 0x140A35770 (MmLockPagableSectionByHandle.c)
 *     KeRestoreMtrrBroadcast @ 0x140B598A0 (KeRestoreMtrrBroadcast.c)
 *     KiMaskToLength @ 0x140B59A10 (KiMaskToLength.c)
 *     KiReadFixedMtrr @ 0x140B59A3C (KiReadFixedMtrr.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall KiInitializeMTRR(char a1)
{
  char v1; // r12
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v3; // rax
  unsigned __int8 v4; // dl
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r15
  unsigned int v7; // ebp
  __int64 v8; // rsi
  unsigned int v9; // r14d
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // r13
  unsigned __int64 v13; // rbx
  __int64 v14; // rsi

  v1 = 1;
  if ( !KeGetPcr()->Prcb.Number )
  {
    qword_140F103C8 = __readmsr(0xFEu);
    KiMtrrInfo = __readmsr(0x2FFu);
    CurrentPrcb = KeGetCurrentPrcb();
    byte_140F103D1 = 0;
    if ( CurrentPrcb->CpuVendor == 1 )
    {
      v3 = __readmsr(0xC0010010);
      byte_140F103D1 = (v3 & 0x1040000) == 0x40000;
    }
    if ( (_BYTE)qword_140F103C8 != 0 && (KiMtrrInfo & 0x800) != 0 )
    {
      v4 = qword_140F103C8;
      if ( (KeFeatureBits & 0x40) == 0 && (qword_140F103C8 & 0x400) != 0 )
      {
        v4 = qword_140F103C8;
        qword_140F103C8 &= ~0x400uLL;
      }
      if ( !qword_140F103D8 )
        qword_140F103D8 = (PVOID)ExAllocatePool2(0x40uLL, 16 * (unsigned int)v4, 0x2020654BuLL);
      if ( !qword_140F103E0 && _bittest64(&qword_140F103C8, 8u) )
        qword_140F103E0 = (PVOID)ExAllocatePool2(0x40uLL, 0x58uLL, 0x2020654BuLL);
    }
    else
    {
      if ( (KeFeatureBits & 0x40) != 0
        && (qword_140F103C8 & 0x1FF) != 0
        && (KiMtrrInfo & 0x800) == 0
        && (CurrentPrcb->CpuVendor != 1 || (_BYTE)KiMtrrInfo != 6)
        && (_BYTE)KdDebuggerEnabled )
      {
        DbgPrintEx(0x65u, 0, "Caching is disabled by incorrect MTRR settings.\n");
        __debugbreak();
      }
      v1 = 0;
    }
  }
  if ( !qword_140F103D8 || !qword_140F103E0 && _bittest64(&qword_140F103C8, 8u) )
    goto LABEL_44;
  v5 = __readmsr(0xFEu);
  if ( (KeFeatureBits & 0x40) == 0 && (v5 & 0x400) != 0 )
    v5 &= ~0x400uLL;
  if ( v5 != qword_140F103C8 )
    KeBugCheckEx(0x3Eu, 0x40uLL, 0LL, 0LL, 0LL);
  if ( __readmsr(0x2FFu) != KiMtrrInfo )
    DbgPrintEx(0x65u, 0, "KiInitializeMTRR: MTRR_MSR_DEFAULT is not consistent between processors.\n");
  if ( !v1 )
    goto LABEL_44;
  if ( KeGetPcr()->Prcb.Number )
    goto LABEL_41;
  if ( qword_140F103E0 )
    KiReadFixedMtrr(qword_140F103E0);
  v6 = (unsigned __int8)v5;
  v7 = 0;
  if ( !(_BYTE)v5 )
    goto LABEL_41;
  v8 = 0LL;
  v9 = 513;
  do
  {
    v10 = __readmsr(v9 - 1);
    v11 = __readmsr(v9);
    v13 = v11;
    if ( (v11 & 0x800) != 0 )
    {
      v12 = v11 & KiMtrrMaskMask;
      if ( ((KiMaskToLength(v11 & KiMtrrMaskMask) + v12) & ~(1LL << KiMtrrMaxRangeShift)) != 0 )
      {
        DbgPrintEx(0x65u, 0, "KiInitializeMTRR: Found non-contiguous MTRR mask!\n");
        v1 = 0;
      }
      v14 = 2 * v8;
      *((_QWORD *)qword_140F103D8 + v14) = v10;
      *((_QWORD *)qword_140F103D8 + v14 + 1) = v13;
    }
    ++v7;
    v9 += 2;
    v8 = v7;
  }
  while ( v7 < v6 );
  if ( v1 )
  {
LABEL_41:
    if ( a1 )
    {
      byte_140F103D0 = 1;
      if ( KeGetCurrentIrql() < 2u )
      {
        MmLockPagableSectionByHandle(ExPageLockHandle);
        KeRestoreMtrrBroadcast();
        MmUnlockPagableImageSection(ExPageLockHandle);
      }
    }
  }
  else
  {
LABEL_44:
    if ( qword_140F103D8 )
    {
      ExFreePoolWithTag(qword_140F103D8, 0);
      qword_140F103D8 = 0LL;
    }
    if ( qword_140F103E0 )
    {
      ExFreePoolWithTag(qword_140F103E0, 0);
      qword_140F103E0 = 0LL;
    }
  }
}
