/*
 * XREFs of NtQuerySymbolicLinkObject @ 0x1409E41F0
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x1408119E0 (AdtpInitializeDriveLetters.c)
 *     IopReassignSystemRoot @ 0x140C1CFA0 (IopReassignSystemRoot.c)
 *     IopStoreSystemPartitionInformation @ 0x140C1D550 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408C10E0 (ExRaiseAccessViolation.c)
 */

__int64 __fastcall NtQuerySymbolicLinkObject(HANDLE Handle, unsigned __int64 a2, _DWORD *a3)
{
  unsigned int v6; // r13d
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int128 v11; // xmm0
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  NTSTATUS v15; // r15d
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v17; // rdi
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  int v20; // esi
  signed __int64 v21; // rax
  signed __int64 v22; // rdx
  unsigned __int64 v23; // rtt
  PVOID Object[2]; // [rsp+30h] [rbp-58h] BYREF
  void *v26[2]; // [rsp+40h] [rbp-48h]
  void *Src[2]; // [rsp+50h] [rbp-38h] BYREF

  *(_OWORD *)v26 = 0LL;
  *(_OWORD *)Src = 0LL;
  v6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (a2 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = 0x7FFFFFFF0000LL;
    v9 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v9 = a2;
    *(_WORD *)v9 = *(_WORD *)v9;
    v10 = a2 + 2;
    if ( a2 + 2 >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_WORD *)v10 = *(_WORD *)v10;
    v11 = *(_OWORD *)a2;
    *(_OWORD *)v26 = v11;
    if ( WORD1(v11) )
    {
      v12 = (unsigned __int64)v26[1];
      v13 = (unsigned __int64)v26[1] + WORD1(v11) - 1;
      if ( v26[1] > (void *)v13 || v13 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v14 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v12 = *(_BYTE *)v12;
        v12 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v12 != v14 );
    }
    if ( a3 )
    {
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v8 = (__int64)a3;
      *(_DWORD *)v8 = *(_DWORD *)v8;
    }
  }
  else
  {
    *(_OWORD *)v26 = *(_OWORD *)a2;
  }
  Object[0] = 0LL;
  v15 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)ObpSymbolicLinkObjectType, PreviousMode, Object, 0LL);
  if ( v15 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v17 = (unsigned __int64 *)((char *)Object[0] - 32);
    Object[1] = (char *)Object[0] - 32;
    v18 = KeAbPreAcquire((__int64)Object[0] - 32, 0LL);
    v19 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
      ExfAcquirePushLockExclusiveEx(v17, (__int64)v18, (__int64)v17);
    if ( v19 )
      *((_BYTE *)v19 + 10) = 1;
    if ( (*((_DWORD *)Object[0] + 7) & 0x10) != 0 )
      RtlInitUnicodeString((PUNICODE_STRING)Src, &word_140AEA890);
    else
      *(_OWORD *)Src = *(_OWORD *)((char *)Object[0] + 8);
    v20 = (int)Src[0];
    if ( a3 )
    {
      if ( WORD1(Src[0]) <= WORD1(v26[0]) )
      {
        v6 = WORD1(Src[0]);
LABEL_29:
        if ( v15 < 0 )
        {
          if ( a3 )
            *a3 = WORD1(Src[0]);
        }
        else
        {
          memmove(v26[1], Src[1], v6);
          *(_WORD *)a2 = v20;
          if ( a3 )
            *a3 = HIWORD(v20);
        }
        _m_prefetchw(v17);
        v21 = *v17;
        v22 = *v17 - 16;
        if ( (*v17 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v22 = 0LL;
        if ( (v21 & 2) != 0
          || (v23 = *v17, v23 != _InterlockedCompareExchange64((volatile signed __int64 *)v17, v22, v21)) )
        {
          ExfReleasePushLock(v17);
        }
        KeAbPostRelease((ULONG_PTR)v17);
        KeLeaveCriticalRegionThread();
        ObfDereferenceObject(Object[0]);
        return (unsigned int)v15;
      }
    }
    else if ( LOWORD(Src[0]) <= WORD1(v26[0]) )
    {
      v6 = LOWORD(Src[0]);
      goto LABEL_29;
    }
    v15 = -1073741789;
    goto LABEL_29;
  }
  return (unsigned int)v15;
}
