/*
 * XREFs of AlpcpInitializeCompletionList @ 0x140A07CC8
 * Callers:
 *     NtAlpcSetInformation @ 0x140A073C0 (NtAlpcSetInformation.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     MmUnlockPages @ 0x1402D4670 (MmUnlockPages.c)
 *     IoAllocateMdl @ 0x1402D5350 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x1402D5660 (MmProbeAndLockPages.c)
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140329CF0 (MmMapLockedPagesSpecifyCache.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     AlpcGetHeaderSize @ 0x14044A530 (AlpcGetHeaderSize.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x140472AF4 (AlpcpFreeCompletionPacketLookaside.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x140A07AF4 (AlpcpAllocateCompletionPacketLookaside.c)
 *     AlpcpRegisterCompletionListDatabase @ 0x140A08204 (AlpcpRegisterCompletionListDatabase.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x140A0835C (AlpcpUnregisterCompletionListDatabase.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpInitializeCompletionList(__int64 a1, char *a2, unsigned int a3, int a4, int Flags, int a6)
{
  size_t v6; // rbx
  char v8; // r15
  char v9; // r12
  void *v10; // rsi
  void *Pool2; // rax
  struct _MDL *Mdl; // rcx
  __int64 v13; // rcx
  PVOID v14; // rax
  __int64 v15; // r15
  __int64 v16; // r10
  unsigned int v17; // ebx
  __int64 v18; // r11
  __int64 v19; // rax
  int v20; // eax
  int v21; // ecx
  ULONG v22; // eax
  ULONG v23; // ecx
  ULONG HeaderSize; // eax
  char *v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // r8
  __int64 *v28; // rax
  __int64 *v29; // r13
  __int64 v30; // rdx
  _DWORD *CompletionPacketLookaside; // r13
  unsigned int v32; // ebx
  char v33; // r13
  struct _MDL *v35; // rcx
  unsigned int v36; // [rsp+38h] [rbp-60h]
  int v37; // [rsp+3Ch] [rbp-5Ch]
  int P; // [rsp+40h] [rbp-58h]
  size_t v39; // [rsp+48h] [rbp-50h]
  char *v40; // [rsp+50h] [rbp-48h]

  v6 = a3;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  if ( ((unsigned __int16)a2 & 0xFFF) != 0LL
    || (a3 & 0xFFF) != 0
    || a3 - 0x4000 > 0x3FFFC000
    || (Flags & 0x55FFFFFF) != 0
    || !a4 )
  {
    v33 = 0;
    v32 = -1073741811;
    goto LABEL_37;
  }
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v10 = Pool2;
  if ( !Pool2 )
    goto LABEL_46;
  memset_0(Pool2, 0, 0xA0uLL);
  *((_QWORD *)v10 + 2) = KeGetCurrentThread()->ApcState.Process;
  *((_QWORD *)v10 + 5) = a2;
  v39 = v6;
  v40 = &a2[v6];
  *((_QWORD *)v10 + 6) = &a2[v6];
  if ( !(unsigned int)AlpcpRegisterCompletionListDatabase(v10) )
  {
    v32 = -1073741800;
    goto LABEL_47;
  }
  v9 = 1;
  Mdl = IoAllocateMdl(a2, v6, 0, 0, 0LL);
  *((_QWORD *)v10 + 4) = Mdl;
  if ( !Mdl )
  {
LABEL_46:
    v32 = -1073741670;
LABEL_47:
    v33 = 0;
    goto LABEL_37;
  }
  MmProbeAndLockPages(Mdl, KeGetCurrentThread()->PreviousMode, IoModifyAccess);
  v13 = *((_QWORD *)v10 + 4);
  if ( (*(_BYTE *)(v13 + 10) & 5) != 0 )
    v14 = *(PVOID *)(v13 + 24);
  else
    v14 = MmMapLockedPagesSpecifyCache((PMDL)v13, 0, MmCached, 0LL, 0, 0x40000000u);
  *((_QWORD *)v10 + 8) = v14;
  if ( v14 )
  {
    memset_0(v14, 0, v6);
    v15 = *((_QWORD *)v10 + 8);
    *(_QWORD *)v15 = 0xDEADBEEFBAADF00DuLL;
    *(_QWORD *)(v15 + 328) = 0xBAADF00DDEADBEEFuLL;
    v16 = (8 * ((unsigned int)v6 >> 6) + 4095) & 0xFFFFF000;
    v36 = v16;
    v17 = v6 - v16 - 4096;
    v18 = ((v17 >> 9) + 4095) & 0xFFFFF000;
    v37 = v18;
    P = v17 - v18;
    *((_QWORD *)v10 + 9) = v39;
    *((_QWORD *)v10 + 10) = v15;
    v19 = *((_QWORD *)v10 + 8) + 4096LL;
    *((_QWORD *)v10 + 11) = v19;
    *((_QWORD *)v10 + 12) = (unsigned int)v16;
    *((_QWORD *)v10 + 13) = v16 + v19;
    *((_QWORD *)v10 + 14) = (unsigned int)v18;
    *((_DWORD *)v10 + 34) = (v17 >> 6) - ((unsigned int)v18 >> 6);
    *((_QWORD *)v10 + 15) = v16 + v19 + v18;
    *((_QWORD *)v10 + 16) = v17 - (unsigned int)v18;
    *((_DWORD *)v10 + 36) = a4;
    *((_QWORD *)v10 + 5) = a2;
    *((_QWORD *)v10 + 6) = v40;
    *((_QWORD *)v10 + 7) = &a2[v18 + 4096 + v16];
    *((_DWORD *)v10 + 37) = Flags;
    if ( a6 )
    {
      v20 = ((Flags >> 31) & 0xC) + 24;
      if ( (Flags & 0x40000000) == 0 )
        v20 = ((Flags >> 31) & 0xC) + 8;
      v21 = v20 + 20;
      if ( (Flags & 0x20000000) == 0 )
        v21 = v20;
      v22 = v21 + 16;
      if ( (Flags & 0x10000000) == 0 )
        v22 = v21;
      v23 = v22 + 24;
      if ( (Flags & 0x8000000) == 0 )
        v23 = v22;
      HeaderSize = v23 + 8;
      if ( (Flags & 0x2000000) == 0 )
        HeaderSize = v23;
    }
    else
    {
      HeaderSize = AlpcGetHeaderSize(Flags);
      LODWORD(v16) = v36;
      LODWORD(v18) = v37;
    }
    *((_DWORD *)v10 + 38) = HeaderSize;
    *(_DWORD *)(v15 + 8) = a3;
    *(_DWORD *)(v15 + 12) = 4096;
    *(_DWORD *)(v15 + 16) = v16;
    *(_DWORD *)(v15 + 20) = v16 + 4096;
    *(_DWORD *)(v15 + 24) = v18;
    *(_DWORD *)(v15 + 28) = v18 + v16 + 4096;
    *(_DWORD *)(v15 + 32) = P;
    *(_QWORD *)(v15 + 64) |= 0xFFFFFFuLL;
    *(_QWORD *)(v15 + 64) |= 0xFFFFFF000000uLL;
    *(_QWORD *)(v15 + 64) &= 0xFFFFFFFFFFFFuLL;
    *(_DWORD *)(v15 + 36) = *((_DWORD *)v10 + 37);
    *(_DWORD *)(v15 + 40) = *((_DWORD *)v10 + 38);
    v25 = (char *)*((_QWORD *)v10 + 11);
    v26 = *((_QWORD *)v10 + 12);
    v27 = (unsigned __int64)(v26 + 3) >> 2;
    if ( v25 > &v25[v26] )
      v27 = 0LL;
    if ( v27 )
      memset_0(v25, -1, 4 * v27);
    v28 = KeAbPreAcquire(a1 + 352, 0LL);
    v29 = v28;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 352), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v28, a1 + 352);
    if ( v29 )
      *((_BYTE *)v29 + 10) = 1;
    v8 = 1;
    if ( *(_QWORD *)(a1 + 360) )
    {
      v32 = -1073740006;
    }
    else if ( (*(_DWORD *)(a1 + 416) & 0x40) != 0 )
    {
      v32 = -1073740032;
    }
    else
    {
      v30 = *(_QWORD *)(a1 + 32);
      if ( v30 )
      {
        CompletionPacketLookaside = AlpcpAllocateCompletionPacketLookaside(v36 >> 3, v30, *(_QWORD *)(a1 + 40));
        if ( !CompletionPacketLookaside )
        {
          v32 = -1073741670;
          goto LABEL_36;
        }
        AlpcpFreeCompletionPacketLookaside(*(KSPIN_LOCK **)(a1 + 48));
        *(_QWORD *)(a1 + 48) = CompletionPacketLookaside;
      }
      *(_QWORD *)(a1 + 360) = v10;
      v10 = 0LL;
      *(_DWORD *)(a1 + 416) = *(_DWORD *)(a1 + 416) ^ ((unsigned __int16)*(_DWORD *)(a1 + 416) ^ (unsigned __int16)((_WORD)a6 << 11)) & 0x800 | 0x1C000;
      v32 = 0;
    }
LABEL_36:
    v33 = 1;
    goto LABEL_37;
  }
  v32 = -1073741670;
  v33 = 1;
LABEL_37:
  if ( v8 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
  }
  if ( v10 )
  {
    if ( v33 )
      MmUnlockPages(*((PMDL *)v10 + 4));
    v35 = (struct _MDL *)*((_QWORD *)v10 + 4);
    if ( v35 )
      IoFreeMdl(v35);
    if ( v9 )
      AlpcpUnregisterCompletionListDatabase(v10);
    ExFreePoolWithTag(v10, 0);
  }
  return v32;
}
