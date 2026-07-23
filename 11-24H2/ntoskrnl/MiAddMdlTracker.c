/*
 * XREFs of MiAddMdlTracker @ 0x1404CBC78
 * Callers:
 *     MiProbeAndLockComplete @ 0x1402377D8 (MiProbeAndLockComplete.c)
 *     MiSwitchToTransition @ 0x1404EEE28 (MiSwitchToTransition.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402E2DD0 (ExAllocateFromNPagedLookasideList.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     wyhash @ 0x140382B78 (wyhash.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiGetInstructionPointer @ 0x14066CD98 (MiGetInstructionPointer.c)
 *     MiCaptureStackTraceEx @ 0x14069195C (MiCaptureStackTraceEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

_QWORD *__fastcall MiAddMdlTracker(ULONG_PTR BugCheckParameter3, __int64 a2, int a3)
{
  _QWORD *result; // rax
  PEPROCESS v7; // rbp
  bool v8; // bl
  struct _LIST_ENTRY *Flink; // rdi
  __int64 v10; // rsi
  volatile LONG *p_Blink; // rcx
  KIRQL v12; // bp
  struct _LIST_ENTRY *v13; // rdx
  struct _LIST_ENTRY *Blink; // rax
  _OWORD v15[10]; // [rsp+30h] [rbp-B8h] BYREF
  _UNKNOWN *retaddr; // [rsp+E8h] [rbp+0h]

  result = memset_0(v15, 0, sizeof(v15));
  v7 = *(PEPROCESS *)(BugCheckParameter3 + 16);
  v8 = 0;
  if ( v7 || (v7 = PsInitialSystemProcess) != 0LL )
  {
    Flink = v7[2].Header.WaitListHead.Flink;
    if ( Flink )
    {
      if ( HIDWORD(Flink[1].Blink) )
      {
        result = ExAllocateFromNPagedLookasideList(&Lookaside);
        v10 = (__int64)result;
        if ( result )
        {
          result[3] = BugCheckParameter3;
          result[5] = a2;
          result[4] = *(_QWORD *)(BugCheckParameter3 + 32);
          *((_DWORD *)result + 12) = *(_DWORD *)(BugCheckParameter3 + 44);
          *((_DWORD *)result + 13) = *(_DWORD *)(BugCheckParameter3 + 40);
          result[8] = *(_QWORD *)(BugCheckParameter3 + 48);
          *((_DWORD *)result + 15) = wyhash((_QWORD *)(BugCheckParameter3 + 48), 8 * a2, 0LL);
          if ( !(unsigned int)MiCaptureStackTraceEx(v15, 14LL) )
          {
            *(_QWORD *)&v15[0] = MiGetInstructionPointer();
            *((_QWORD *)&v15[0] + 1) = retaddr;
          }
          *(_OWORD *)(v10 + 72) = v15[0];
          *(_OWORD *)(v10 + 88) = v15[1];
          *(_OWORD *)(v10 + 104) = v15[2];
          *(_OWORD *)(v10 + 120) = v15[3];
          *(_OWORD *)(v10 + 136) = v15[4];
          *(_OWORD *)(v10 + 152) = v15[5];
          *(_OWORD *)(v10 + 168) = v15[6];
          *(_DWORD *)(v10 + 56) = a3;
          *(_QWORD *)(v10 + 184) = v7;
          p_Blink = (volatile LONG *)&Flink[1].Blink;
          if ( KeGetCurrentIrql() == 2 )
          {
            v12 = 17;
            ExAcquireSpinLockExclusiveAtDpcLevel(p_Blink);
          }
          else
          {
            v12 = ExAcquireSpinLockExclusive(p_Blink);
          }
          v13 = Flink->Flink;
          if ( Flink->Flink )
          {
            while ( 1 )
            {
              if ( (struct _LIST_ENTRY *)BugCheckParameter3 >= v13[1].Blink )
              {
                if ( (struct _LIST_ENTRY *)BugCheckParameter3 <= v13[1].Blink )
                  KeBugCheckEx(0xD9u, 1uLL, (ULONG_PTR)v13, BugCheckParameter3, (ULONG_PTR)Flink[1].Flink);
                Blink = v13->Blink;
                if ( !Blink )
                {
                  v8 = 1;
                  break;
                }
              }
              else
              {
                Blink = v13->Flink;
                if ( !v13->Flink )
                  break;
              }
              v13 = Blink;
            }
          }
          RtlAvlInsertNodeEx((unsigned __int64 *)Flink, (unsigned __int64)v13, v8, (_QWORD *)v10);
          Flink[1].Flink = (struct _LIST_ENTRY *)((char *)Flink[1].Flink + a2);
          return (_QWORD *)MiReleaseSpinLockExclusive(&Flink[1].Blink, v12);
        }
        else
        {
          HIDWORD(Flink[1].Blink) = 0;
        }
      }
    }
  }
  return result;
}
