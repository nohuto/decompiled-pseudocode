/*
 * XREFs of MiIssuePageExtendRequest @ 0x140464038
 * Callers:
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MmResourcesAvailable @ 0x14041FA20 (MmResourcesAvailable.c)
 *     MiExtendPageFilesIfNecessary @ 0x140463FA8 (MiExtendPageFilesIfNecessary.c)
 *     MiPageFileNoFreeSpace @ 0x14046F624 (MiPageFileNoFreeSpace.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x1406F71B4 (MiExtendWorkingSetSwapPagefile.c)
 *     MiCreatePagingFile @ 0x1407EE934 (MiCreatePagingFile.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     MiQueuePageFileExtension @ 0x1403EF6FC (MiQueuePageFileExtension.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

_BOOL8 __fastcall MiIssuePageExtendRequest(__int64 a1, unsigned __int64 a2, char a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int32 *v10; // rbx
  char v11; // al
  char v12; // cl
  char v13; // al
  unsigned int v14; // r8d
  LARGE_INTEGER *Timeout; // r15
  unsigned int v16; // edx
  __int64 v17; // r9
  char v18; // al
  char v19; // r8
  char v20; // al
  KIRQL v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  volatile signed __int32 **v24; // rax
  _BYTE v25[48]; // [rsp+30h] [rbp-29h] BYREF
  __int16 v26; // [rsp+60h] [rbp+7h]
  char v27; // [rsp+62h] [rbp+9h]
  int v28; // [rsp+64h] [rbp+Bh]
  _QWORD v29[2]; // [rsp+68h] [rbp+Fh] BYREF
  int v30; // [rsp+78h] [rbp+1Fh]
  char v31; // [rsp+7Ch] [rbp+23h]
  char v32; // [rsp+7Fh] [rbp+26h]

  memset_0(v25, 0, 0x58uLL);
  CurrentThread = KeGetCurrentThread();
  if ( (a3 & 8) != 0 && !*(_BYTE *)(a1 + 2073) )
    return 0LL;
  if ( (a3 & 2) != 0 )
  {
    v10 = (volatile signed __int32 *)(((a3 & 8) != 0 ? 0x538 : 0) + a1 + 480);
    if ( !_InterlockedCompareExchange(v10 + 18, 1, 0) )
    {
      v11 = *((_BYTE *)v10 + 79);
      a2 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      v12 = v11 | 1;
      v13 = v11 & 0xFE;
      if ( (a3 & 4) == 0 )
        v12 = v13;
      *((_BYTE *)v10 + 79) = v12;
LABEL_35:
      Timeout = 0LL;
      goto LABEL_26;
    }
    return 0LL;
  }
  if ( (NTSTATUS (__fastcall *)(__int64))CurrentThread[1].ApcState.ApcListHead[0].Blink == MiDereferenceSegmentThread
    || KeGetCurrentIrql() >= 2u
    || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
  {
    return 0LL;
  }
  if ( (a3 & 8) != 0 )
    a2 = (a2 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v14 = *(_DWORD *)(a1 + 18520);
  v10 = (volatile signed __int32 *)v25;
  v31 = a4;
  v30 = 1;
  if ( (a3 & 1) != 0 )
    v32 |= 2u;
  v26 = 0;
  v28 = 0;
  v29[1] = v29;
  v29[0] = v29;
  v27 = 6;
  if ( (a3 & 8) != 0 )
  {
    Timeout = (LARGE_INTEGER *)&MiOneSecond;
    goto LABEL_26;
  }
  if ( a4 < v14 )
    goto LABEL_35;
  v16 = 0;
  Timeout = (LARGE_INTEGER *)&MiOneSecond;
  if ( v14 )
  {
    v17 = a1 + 18528;
    do
    {
      if ( (*(_BYTE *)(*(_QWORD *)v17 + 172LL) & 0x50) == 0 && **(_DWORD **)v17 < *(_DWORD *)(*(_QWORD *)v17 + 4LL) )
        break;
      ++v16;
      v17 += 8LL;
    }
    while ( v16 < v14 );
  }
  if ( v16 == v14 )
    return 0LL;
LABEL_26:
  v18 = *((_BYTE *)v10 + 79);
  v19 = v18 | 8;
  v20 = v18 & 0xF7;
  if ( (a3 & 8) == 0 )
    v19 = v20;
  *((_BYTE *)v10 + 79) = v19;
  *((_QWORD *)v10 + 5) = 0LL;
  *((_QWORD *)v10 + 4) = a2;
  *((_QWORD *)v10 + 3) = a1;
  *((_QWORD *)v10 + 10) = 0LL;
  *((_BYTE *)v10 + 79) = v19 & 0x9F | (&MiOneSecond != Timeout ? 0x20 : 0);
  MiQueuePageFileExtension((__int64)v10, 0x11u);
  if ( (a3 & 2) != 0 )
    return 0LL;
  if ( KeWaitForSingleObject((PVOID)(v10 + 12), Executive, 0, 0, Timeout) == 258 )
  {
    v21 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1728));
    if ( !*((_DWORD *)v10 + 13) )
    {
      v22 = *((_QWORD *)v10 + 10);
      if ( v22 )
      {
        *(_QWORD *)(v22 + 80) = 0LL;
      }
      else
      {
        v23 = *((_QWORD *)v10 + 1);
        if ( *(volatile signed __int32 **)(v23 + 8) != v10 + 2
          || (v24 = (volatile signed __int32 **)*((_QWORD *)v10 + 2), *v24 != v10 + 2) )
        {
          __fastfail(3u);
        }
        *v24 = (volatile signed __int32 *)v23;
        *(_QWORD *)(v23 + 8) = v24;
      }
      *((_QWORD *)v10 + 5) = 0LL;
    }
    MiReleaseSpinLockExclusive((_DWORD *)(a1 + 1728), v21);
  }
  return *((_QWORD *)v10 + 5) != 0;
}
