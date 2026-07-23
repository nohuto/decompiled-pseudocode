/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x14091E760
 * Callers:
 *     NtQueryInformationAtom @ 0x14091E440 (NtQueryInformationAtom.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExGetHandlePointer @ 0x140431FD0 (ExGetHandlePointer.c)
 *     RtlpLookupLowBox @ 0x140435ADC (RtlpLookupLowBox.c)
 *     _snwprintf_s @ 0x140500FF0 (_snwprintf_s.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExpLookupHandleTableEntry @ 0x140850180 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140851898 (ExpBlockOnLockedHandleEntry.c)
 *     RtlpLockAtomTable @ 0x14091EAC0 (RtlpLockAtomTable.c)
 */

NTSTATUS __cdecl RtlQueryAtomInAtomTable(
        PVOID AtomTableHandle,
        RTL_ATOM Atom,
        PULONG AtomUsage,
        PULONG AtomFlags,
        PWSTR AtomName,
        PULONG AtomNameLength)
{
  int v8; // edi
  unsigned int *v10; // rsi
  __int64 *v11; // rbx
  __int64 v12; // r8
  unsigned __int64 HandlePointer; // rsi
  __int64 v14; // rcx
  _QWORD *v15; // rcx
  unsigned int v16; // edi
  struct _KTHREAD *v17; // r13
  unsigned int v18; // eax
  unsigned int v19; // esi
  struct _KTHREAD *v20; // r13
  unsigned int LockNV; // eax
  signed __int32 v23[8]; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v24; // [rsp+20h] [rbp-B8h]
  NTSTATUS v25; // [rsp+30h] [rbp-A8h]
  PULONG v26; // [rsp+38h] [rbp-A0h]
  __int64 v27; // [rsp+40h] [rbp-98h]
  struct _KTHREAD *v28; // [rsp+48h] [rbp-90h]
  __int64 v29; // [rsp+50h] [rbp-88h]
  PVOID v30; // [rsp+58h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-78h]
  struct _KTHREAD *v32; // [rsp+68h] [rbp-70h]
  wchar_t DstBuf[16]; // [rsp+78h] [rbp-60h] BYREF

  v26 = AtomUsage;
  v8 = Atom;
  v28 = (struct _KTHREAD *)AtomNameLength;
  v30 = AtomTableHandle;
  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return -1073741811;
  if ( (unsigned __int16)v8 < 0xC000u )
  {
    if ( !(_WORD)v8 )
    {
      v25 = -1073741811;
      goto LABEL_41;
    }
    v25 = 0;
    if ( AtomUsage )
      *AtomUsage = 1;
    if ( AtomFlags )
      *AtomFlags = 1;
    if ( !AtomName )
      goto LABEL_41;
    LODWORD(v24) = v8;
    v19 = 2 * snwprintf_s(DstBuf, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", v24);
    LODWORD(v26) = v19;
    v20 = v28;
    LockNV = v28->Header.LockNV;
    if ( v19 >= v28->Header.LockNV )
    {
      if ( LockNV < 2 )
        goto LABEL_38;
      v19 = LockNV - 2;
      LODWORD(v26) = LockNV - 2;
    }
    if ( v19 )
    {
      memmove(AtomName, DstBuf, v19);
      AtomName[(unsigned __int64)v19 >> 1] = 0;
      v20->Header.LockNV = v19;
      goto LABEL_41;
    }
LABEL_38:
    v25 = -1073741789;
    goto LABEL_41;
  }
  v25 = -1073741816;
  v27 = 4 * (v8 & 0x3FFFu);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (unsigned int *)*((_QWORD *)AtomTableHandle + 2);
  v29 = v27;
  if ( ((4 * (v8 & 0x3FFF)) & 0x3FC) != 0 )
  {
    v11 = (__int64 *)ExpLookupHandleTableEntry(v10, v27);
    if ( v11 )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v11);
          v12 = *v11;
          if ( (*v11 & 1) != 0 )
            break;
          if ( !v12 )
            goto LABEL_25;
          ExpBlockOnLockedHandleEntry((__int64)v10, v11, v12);
        }
      }
      while ( v12 != _InterlockedCompareExchange64(v11, v12 - 1, v12) );
      HandlePointer = ExGetHandlePointer(v11);
      v14 = *((_QWORD *)AtomTableHandle + 2);
      _InterlockedIncrement64(v11);
      v15 = (_QWORD *)(v14 + 48);
      _InterlockedOr(v23, 0);
      if ( *v15 )
        ExfUnblockPushLock((__int64)v15, 0LL);
      v32 = KeGetCurrentThread();
      KeLeaveCriticalRegionThread((__int64)v32);
      if ( !HandlePointer )
        goto LABEL_41;
      if ( *(_WORD *)(HandlePointer + 10) != (_WORD)v8 )
        goto LABEL_41;
      if ( !RtlpLookupLowBox((__int64)AtomTableHandle, HandlePointer, 0) )
        goto LABEL_41;
      v25 = 0;
      if ( v26 )
        *v26 = *(unsigned __int16 *)(HandlePointer + 36);
      if ( AtomFlags )
        *AtomFlags = *(unsigned __int16 *)(HandlePointer + 38);
      if ( !AtomName )
        goto LABEL_41;
      v16 = 2 * *(unsigned __int8 *)(HandlePointer + 40);
      LODWORD(v26) = v16;
      v17 = v28;
      v18 = v28->Header.LockNV;
      if ( v16 >= v28->Header.LockNV )
      {
        if ( v18 < 2 )
        {
          v28->Header.LockNV = v16;
LABEL_27:
          v25 = -1073741789;
          goto LABEL_41;
        }
        v16 = v18 - 2;
        LODWORD(v26) = v18 - 2;
      }
      if ( v16 )
      {
        memmove(AtomName, (const void *)(HandlePointer + 42), v16);
        AtomName[(unsigned __int64)v16 >> 1] = 0;
        v17->Header.LockNV = v16;
        goto LABEL_41;
      }
      goto LABEL_27;
    }
  }
LABEL_25:
  v28 = KeGetCurrentThread();
  KeLeaveCriticalRegionThread((__int64)v28);
LABEL_41:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)AtomTableHandle + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)AtomTableHandle + 1);
  KeAbPostRelease((ULONG_PTR)AtomTableHandle + 8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v25;
}
