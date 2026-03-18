/*
 * XREFs of PsChangeQuantumTable @ 0x1409C0FF8
 * Callers:
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 *     PspInitPhase0 @ 0x140C563A8 (PspInitPhase0.c)
 * Callees:
 *     KeSetQuantumProcess @ 0x14026A954 (KeSetQuantumProcess.c)
 *     PspUnlockProcessListShared @ 0x140320480 (PspUnlockProcessListShared.c)
 *     PspLockProcessListShared @ 0x14041D480 (PspLockProcessListShared.c)
 *     MmIsThisAnNtAsSystem @ 0x1404A8000 (MmIsThisAnNtAsSystem.c)
 *     PspComputeQuantum @ 0x1409C120C (PspComputeQuantum.c)
 */

char __fastcall PsChangeQuantumTable(char a1, char a2)
{
  int *v2; // rbx
  unsigned int v3; // eax
  int v6; // eax
  int v7; // edi
  char result; // al
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v10; // rdx
  __int64 *i; // rbx
  char v12; // al
  __int64 v13; // r8

  v2 = &PspVariableQuantums_With_ShortQuantum;
  v3 = a2 & 3;
  if ( v3 >= 2 )
    v3 = 2;
  PsPrioritySeparation = v3;
  if ( (KiVelocityFlags & 0x40000) == 0 )
    v2 = &PspVariableQuantums;
  v6 = a2 & 0xC;
  if ( (a2 & 0xC) == 0 )
  {
LABEL_17:
    if ( !MmIsThisAnNtAsSystem() )
      goto LABEL_7;
LABEL_22:
    KiVariableQuantumEnabled = 0;
    v2 = (int *)PspFixedQuantums;
    goto LABEL_8;
  }
  if ( v6 != 4 )
  {
    if ( v6 == 8 )
      goto LABEL_22;
    goto LABEL_17;
  }
LABEL_7:
  KiVariableQuantumEnabled = 1;
LABEL_8:
  v7 = a2 & 0x30;
  if ( !v7 )
    goto LABEL_25;
  if ( v7 == 16 )
  {
LABEL_10:
    v2 = (int *)((char *)v2 + 3);
    goto LABEL_11;
  }
  if ( v7 != 32 )
  {
LABEL_25:
    if ( MmIsThisAnNtAsSystem() )
      goto LABEL_10;
  }
LABEL_11:
  PspForegroundQuantum = *(_WORD *)v2;
  result = *((_BYTE *)v2 + 2);
  PspUseJobSchedulingClasses = v2 == (int *)byte_140B2BDBB;
  byte_140FD8B86 = result;
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    PspLockProcessListShared((__int64)CurrentThread);
    for ( i = (__int64 *)PsActiveProcessHead; i != &PsActiveProcessHead; i = (__int64 *)*i )
    {
      LOBYTE(v10) = *((_BYTE *)i + 738);
      v12 = PspComputeQuantum(i - 59, v10);
      KeSetQuantumProcess(v13, v12);
    }
    return PspUnlockProcessListShared((__int64)CurrentThread, v10);
  }
  return result;
}
