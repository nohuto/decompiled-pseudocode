/*
 * XREFs of NtQuerySymbolicLinkObject @ 0x1409DEC50
 * Callers:
 *     AdtpInitializeDriveLetters @ 0x140812120 (AdtpInitializeDriveLetters.c)
 *     IopReassignSystemRoot @ 0x140C1EFE0 (IopReassignSystemRoot.c)
 *     IopStoreSystemPartitionInformation @ 0x140C1F590 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408BEAA0 (ExRaiseAccessViolation.c)
 */

NTSTATUS __cdecl NtQuerySymbolicLinkObject(HANDLE LinkHandle, PUNICODE_STRING LinkTarget, PULONG ReturnedLength)
{
  unsigned int v6; // r13d
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 p_MaximumLength; // rcx
  UNICODE_STRING v11; // xmm0
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  int v15; // r15d
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v17; // rdi
  char *v18; // rax
  char *v19; // rsi
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
    if ( ((unsigned __int8)LinkTarget & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = 0x7FFFFFFF0000LL;
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)LinkTarget < 0x7FFFFFFF0000LL )
      v9 = (__int64)LinkTarget;
    *(_WORD *)v9 = *(_WORD *)v9;
    p_MaximumLength = (__int64)&LinkTarget->MaximumLength;
    if ( (unsigned __int64)&LinkTarget->MaximumLength >= 0x7FFFFFFF0000LL )
      p_MaximumLength = 0x7FFFFFFF0000LL;
    *(_WORD *)p_MaximumLength = *(_WORD *)p_MaximumLength;
    v11 = *LinkTarget;
    *(UNICODE_STRING *)v26 = v11;
    if ( v11.MaximumLength )
    {
      v12 = (unsigned __int64)v26[1];
      v13 = (unsigned __int64)v26[1] + v11.MaximumLength - 1;
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
    if ( ReturnedLength )
    {
      if ( (unsigned __int64)ReturnedLength < 0x7FFFFFFF0000LL )
        v8 = (__int64)ReturnedLength;
      *(_DWORD *)v8 = *(_DWORD *)v8;
    }
  }
  else
  {
    *(UNICODE_STRING *)v26 = *LinkTarget;
  }
  Object[0] = 0LL;
  v15 = ObReferenceObjectByHandle(LinkHandle, 1u, (POBJECT_TYPE)ObpSymbolicLinkObjectType, PreviousMode, Object, 0LL);
  if ( v15 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v17 = (unsigned __int64 *)((char *)Object[0] - 32);
    Object[1] = (char *)Object[0] - 32;
    v18 = (char *)KeAbPreAcquire((__int64)Object[0] - 32, 0LL);
    v19 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
      ExfAcquirePushLockExclusiveEx(v17, v18, (__int64)v17);
    if ( v19 )
      v19[10] = 1;
    if ( (*((_DWORD *)Object[0] + 7) & 0x10) != 0 )
      RtlInitUnicodeString((PUNICODE_STRING)Src, &word_140AEDAC0);
    else
      *(_OWORD *)Src = *(_OWORD *)((char *)Object[0] + 8);
    v20 = (int)Src[0];
    if ( ReturnedLength )
    {
      if ( WORD1(Src[0]) <= WORD1(v26[0]) )
      {
        v6 = WORD1(Src[0]);
LABEL_29:
        if ( v15 < 0 )
        {
          if ( ReturnedLength )
            *ReturnedLength = WORD1(Src[0]);
        }
        else
        {
          memmove(v26[1], Src[1], v6);
          LinkTarget->Length = v20;
          if ( ReturnedLength )
            *ReturnedLength = HIWORD(v20);
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
        return v15;
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
  return v15;
}
