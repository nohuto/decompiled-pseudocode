/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x1408F4910
 * Callers:
 *     NtQueryInformationAtom @ 0x1408F45F0 (NtQueryInformationAtom.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExGetHandlePointer @ 0x14041B770 (ExGetHandlePointer.c)
 *     RtlpLookupLowBox @ 0x14042463C (RtlpLookupLowBox.c)
 *     _snwprintf_s @ 0x140501030 (_snwprintf_s.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExpLookupHandleTableEntry @ 0x1408481F0 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140849D30 (ExpBlockOnLockedHandleEntry.c)
 *     RtlpLockAtomTable @ 0x1408F4C90 (RtlpLockAtomTable.c)
 */

NTSTATUS __cdecl RtlQueryAtomInAtomTable(
        PVOID AtomTableHandle,
        RTL_ATOM Atom,
        PULONG AtomUsage,
        PULONG AtomFlags,
        PWSTR AtomName,
        PULONG AtomNameLength)
{
  int v8; // r15d
  ULONG v10; // edi
  unsigned int *v11; // rdi
  __int64 *v12; // rbx
  __int64 v13; // r8
  unsigned __int64 HandlePointer; // rsi
  __int64 v15; // rcx
  _QWORD *v16; // rcx
  unsigned int v17; // edi
  unsigned int v18; // esi
  signed __int32 v20[8]; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v21; // [rsp+20h] [rbp-C8h]
  NTSTATUS v22; // [rsp+30h] [rbp-B8h]
  PULONG v23; // [rsp+38h] [rbp-B0h]
  unsigned int v24; // [rsp+40h] [rbp-A8h]
  __int64 v25; // [rsp+48h] [rbp-A0h]
  PULONG v26; // [rsp+50h] [rbp-98h]
  struct _KTHREAD *v27; // [rsp+58h] [rbp-90h]
  __int64 v28; // [rsp+60h] [rbp-88h]
  PVOID v29; // [rsp+68h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-78h]
  struct _KTHREAD *v31; // [rsp+78h] [rbp-70h]
  wchar_t DstBuf[16]; // [rsp+88h] [rbp-60h] BYREF

  v27 = (struct _KTHREAD *)AtomFlags;
  v23 = AtomUsage;
  v8 = Atom;
  v26 = AtomNameLength;
  v29 = AtomTableHandle;
  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return -1073741811;
  v10 = *AtomNameLength & 0xFFFFFFFE;
  v24 = v10;
  if ( (unsigned __int16)v8 < 0xC000u )
  {
    if ( !(_WORD)v8 )
    {
      v22 = -1073741811;
      goto LABEL_41;
    }
    v22 = 0;
    if ( AtomUsage )
      *AtomUsage = 1;
    if ( AtomFlags )
      *AtomFlags = 1;
    if ( !AtomName )
      goto LABEL_41;
    LODWORD(v21) = v8;
    v18 = 2 * snwprintf_s(DstBuf, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", v21);
    LODWORD(v23) = v18;
    if ( v18 >= v10 )
    {
      if ( v10 < 2 )
        goto LABEL_38;
      v18 = v10 - 2;
      LODWORD(v23) = v10 - 2;
    }
    if ( v18 )
    {
      memmove(AtomName, DstBuf, v18);
      AtomName[(unsigned __int64)v18 >> 1] = 0;
      *v26 = v18;
      goto LABEL_41;
    }
LABEL_38:
    v22 = -1073741789;
    goto LABEL_41;
  }
  v22 = -1073741816;
  v25 = 4 * (v8 & 0x3FFFu);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = (unsigned int *)*((_QWORD *)AtomTableHandle + 2);
  v28 = v25;
  if ( ((4 * (v8 & 0x3FFF)) & 0x3FC) != 0 )
  {
    v12 = (__int64 *)ExpLookupHandleTableEntry(v11, v25);
    if ( v12 )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v12);
          v13 = *v12;
          if ( (*v12 & 1) != 0 )
            break;
          if ( !v13 )
            goto LABEL_25;
          ExpBlockOnLockedHandleEntry((__int64)v11, v12, v13);
        }
      }
      while ( v13 != _InterlockedCompareExchange64(v12, v13 - 1, v13) );
      HandlePointer = ExGetHandlePointer(v12);
      v15 = *((_QWORD *)AtomTableHandle + 2);
      _InterlockedIncrement64(v12);
      v16 = (_QWORD *)(v15 + 48);
      _InterlockedOr(v20, 0);
      if ( *v16 )
        ExfUnblockPushLock((__int64)v16, 0LL);
      v31 = KeGetCurrentThread();
      KeLeaveCriticalRegionThread();
      if ( !HandlePointer )
        goto LABEL_41;
      if ( *(_WORD *)(HandlePointer + 10) != (_WORD)v8 )
        goto LABEL_41;
      if ( !RtlpLookupLowBox((__int64)AtomTableHandle, HandlePointer, 0) )
        goto LABEL_41;
      v22 = 0;
      if ( v23 )
        *v23 = *(unsigned __int16 *)(HandlePointer + 36);
      if ( v27 )
        v27->Header.LockNV = *(unsigned __int16 *)(HandlePointer + 38);
      if ( !AtomName )
        goto LABEL_41;
      v17 = 2 * *(unsigned __int8 *)(HandlePointer + 40);
      LODWORD(v23) = v17;
      if ( v17 >= v24 )
      {
        if ( v24 < 2 )
        {
          *v26 = v17;
LABEL_27:
          v22 = -1073741789;
          goto LABEL_41;
        }
        v17 = v24 - 2;
        LODWORD(v23) = v24 - 2;
      }
      if ( v17 )
      {
        memmove(AtomName, (const void *)(HandlePointer + 42), v17);
        AtomName[(unsigned __int64)v17 >> 1] = 0;
        *v26 = v17;
        goto LABEL_41;
      }
      goto LABEL_27;
    }
  }
LABEL_25:
  v27 = KeGetCurrentThread();
  KeLeaveCriticalRegionThread();
LABEL_41:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)AtomTableHandle + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)AtomTableHandle + 1);
  KeAbPostRelease((ULONG_PTR)AtomTableHandle + 8);
  KeLeaveCriticalRegionThread();
  return v22;
}
