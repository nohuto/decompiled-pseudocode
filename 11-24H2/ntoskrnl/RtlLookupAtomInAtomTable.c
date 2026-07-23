/*
 * XREFs of RtlLookupAtomInAtomTable @ 0x14097DD80
 * Callers:
 *     NtFindAtom @ 0x14097DBB0 (NtFindAtom.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExGetHandlePointer @ 0x14041B770 (ExGetHandlePointer.c)
 *     RtlpLookupOrCreateLowBox @ 0x1404246D0 (RtlpLookupOrCreateLowBox.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 *     ExpLookupHandleTableEntry @ 0x1408481F0 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140849D30 (ExpBlockOnLockedHandleEntry.c)
 *     RtlUnicodeStringToInteger @ 0x14097E410 (RtlUnicodeStringToInteger.c)
 */

NTSTATUS __cdecl RtlLookupAtomInAtomTable(PVOID AtomTableHandle, PWSTR AtomName, PRTL_ATOM Atom)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v7; // rax
  char *v8; // rbx
  __int16 v9; // cx
  PWSTR v10; // rax
  PWSTR v11; // rbx
  unsigned int v12; // edi
  WCHAR v13; // ax
  __int64 v14; // rbx
  const wchar_t *HandlePointer; // rdi
  __int64 LowBox; // rax
  __int16 v17; // r8
  unsigned int *v18; // rdi
  __int64 *v19; // rbx
  __int64 v20; // r8
  unsigned __int64 v21; // rdi
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  unsigned int v24; // esi
  unsigned int *v25; // rdi
  __int64 *v26; // rbx
  __int64 v27; // r8
  __int64 v28; // rcx
  _QWORD *v29; // rcx
  signed __int32 v31[8]; // [rsp+0h] [rbp-E8h] BYREF
  NTSTATUS v32; // [rsp+20h] [rbp-C8h]
  unsigned int i; // [rsp+24h] [rbp-C4h]
  const wchar_t *v34; // [rsp+28h] [rbp-C0h]
  __int64 v35; // [rsp+30h] [rbp-B8h]
  __int64 v36; // [rsp+38h] [rbp-B0h]
  PWSTR v37; // [rsp+40h] [rbp-A8h]
  PWSTR v38; // [rsp+48h] [rbp-A0h]
  __int64 v39; // [rsp+50h] [rbp-98h]
  UNICODE_STRING String; // [rsp+58h] [rbp-90h] BYREF
  PWSTR v41; // [rsp+68h] [rbp-80h]
  __int64 v42; // [rsp+70h] [rbp-78h]
  __int64 v43; // [rsp+78h] [rbp-70h]
  const wchar_t *v44; // [rsp+80h] [rbp-68h]
  PVOID v45; // [rsp+88h] [rbp-60h]
  struct _KTHREAD *v46; // [rsp+90h] [rbp-58h]
  struct _KTHREAD *v47; // [rsp+98h] [rbp-50h]
  struct _KTHREAD *v48; // [rsp+A0h] [rbp-48h]
  struct _KTHREAD *v49; // [rsp+A8h] [rbp-40h]
  struct _KTHREAD *v50; // [rsp+B0h] [rbp-38h]
  struct _KTHREAD *v51; // [rsp+B8h] [rbp-30h]
  __int16 v52; // [rsp+F0h] [rbp+8h]
  ULONG Value; // [rsp+108h] [rbp+20h] BYREF

  v45 = AtomTableHandle;
  if ( !AtomTableHandle || *(_DWORD *)AtomTableHandle != 1836020801 )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (char *)KeAbPreAcquire((__int64)AtomTableHandle + 8, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)AtomTableHandle + 2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)AtomTableHandle + 1, v7, (__int64)AtomTableHandle + 8);
  if ( v8 )
    v8[10] = 1;
  v41 = AtomName;
  String = 0LL;
  v37 = 0LL;
  Value = 0;
  if ( ((unsigned __int64)AtomName & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (unsigned __int16)AtomName >= 0xC000u )
      goto LABEL_12;
    if ( !(_WORD)AtomName )
      LOWORD(AtomName) = -16384;
LABEL_63:
    if ( (unsigned __int16)AtomName >= 0xC000u )
    {
      LOWORD(AtomName) = 0;
      v32 = -1073741811;
    }
    else
    {
      v32 = 0;
    }
    if ( Atom )
      *Atom = (unsigned __int16)AtomName;
    goto LABEL_75;
  }
  if ( *AtomName == 35 )
  {
    v9 = (_WORD)AtomName + 2;
    v41 = AtomName + 1;
    v10 = AtomName + 1;
    v37 = AtomName + 1;
    while ( *v10 )
    {
      if ( (unsigned __int16)(*v10 - 48) > 9u )
        goto LABEL_12;
      v37 = ++v10;
    }
    Value = 0;
    String.Buffer = AtomName + 1;
    String.Length = (_WORD)v10 - v9;
    String.MaximumLength = (_WORD)v10 - v9;
    if ( RtlUnicodeStringToInteger(&String, 0xAu, &Value) >= 0 )
    {
      if ( Value - 1 > 0xBFFF )
        v52 = -16384;
      else
        v52 = Value;
      LOWORD(AtomName) = v52;
      goto LABEL_63;
    }
  }
LABEL_12:
  if ( !*AtomName )
  {
    v32 = -1073741773;
    goto LABEL_75;
  }
  i = 0;
  v38 = 0LL;
  v34 = 0LL;
  if ( ((unsigned __int64)AtomName & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v11 = AtomName;
    v38 = AtomName;
    v12 = 0;
    for ( i = 0; ; i = v12 )
    {
      v13 = *v11;
      if ( !*v11 )
        break;
      v38 = ++v11;
      if ( v13 >= 0x61u )
      {
        if ( v13 > 0x7Au )
          v13 = RtlUpcaseUnicodeChar(v13);
        else
          v13 -= 32;
      }
      v12 += v13 + (v13 >> 1) + 2 * v13;
    }
    v14 = v11 - AtomName;
    if ( (unsigned int)v14 > 0xFF )
    {
      HandlePointer = 0LL;
      v34 = 0LL;
      goto LABEL_29;
    }
    HandlePointer = (const wchar_t *)((char *)AtomTableHandle + 8 * (v12 % *((_DWORD *)AtomTableHandle + 7)) + 32);
    do
    {
      HandlePointer = *(const wchar_t **)HandlePointer;
      v34 = HandlePointer;
    }
    while ( HandlePointer
         && (*((unsigned __int8 *)HandlePointer + 40) != (_DWORD)v14 || wcsicmp(HandlePointer + 21, AtomName)) );
  }
  else
  {
    HandlePointer = 0LL;
    v34 = 0LL;
    if ( (unsigned __int16)AtomName >= 0xC000u )
    {
      v24 = 4 * ((unsigned __int16)AtomName & 0x3FFF);
      v35 = v24;
      v46 = KeGetCurrentThread();
      --v46->KernelApcDisable;
      v25 = (unsigned int *)*((_QWORD *)AtomTableHandle + 2);
      v42 = v35;
      if ( (v24 & 0x3FC) == 0 || (v26 = (__int64 *)ExpLookupHandleTableEntry(v25, v35)) == 0LL )
      {
LABEL_67:
        v48 = KeGetCurrentThread();
        KeLeaveCriticalRegionThread();
        HandlePointer = 0LL;
        v34 = 0LL;
        goto LABEL_29;
      }
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v26);
          v27 = *v26;
          if ( (*v26 & 1) != 0 )
            break;
          if ( !v27 )
            goto LABEL_67;
          ExpBlockOnLockedHandleEntry((__int64)v25, v26, v27);
        }
      }
      while ( v27 != _InterlockedCompareExchange64(v26, v27 - 1, v27) );
      HandlePointer = (const wchar_t *)ExGetHandlePointer(v26);
      v28 = *((_QWORD *)AtomTableHandle + 2);
      _InterlockedIncrement64(v26);
      v29 = (_QWORD *)(v28 + 48);
      _InterlockedOr(v31, 0);
      if ( *v29 )
        ExfUnblockPushLock((__int64)v29, 0LL);
      v47 = KeGetCurrentThread();
      KeLeaveCriticalRegionThread();
      v34 = HandlePointer;
    }
  }
  if ( HandlePointer )
  {
    LowBox = RtlpLookupOrCreateLowBox((__int64)AtomTableHandle, (__int64)HandlePointer, 1);
    if ( !LowBox )
    {
      v32 = -1073741801;
      goto LABEL_75;
    }
    v39 = LowBox;
  }
LABEL_29:
  v44 = HandlePointer;
  v32 = 0;
  if ( HandlePointer )
  {
    v17 = 4 * HandlePointer[4];
    v36 = 4 * (unsigned int)HandlePointer[4];
    v49 = KeGetCurrentThread();
    --v49->KernelApcDisable;
    v18 = (unsigned int *)*((_QWORD *)AtomTableHandle + 2);
    v43 = v36;
    if ( (v17 & 0x3FC) != 0 && (v19 = (__int64 *)ExpLookupHandleTableEntry(v18, v36)) != 0LL )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v19);
          v20 = *v19;
          if ( (*v19 & 1) != 0 )
            break;
          if ( !v20 )
            goto LABEL_58;
          ExpBlockOnLockedHandleEntry((__int64)v18, v19, v20);
        }
      }
      while ( v20 != _InterlockedCompareExchange64(v19, v20 - 1, v20) );
      v21 = ExGetHandlePointer(v19);
      v22 = *((_QWORD *)AtomTableHandle + 2);
      _InterlockedIncrement64(v19);
      v23 = (_QWORD *)(v22 + 48);
      _InterlockedOr(v31, 0);
      if ( *v23 )
        ExfUnblockPushLock((__int64)v23, 0LL);
      v50 = KeGetCurrentThread();
      KeLeaveCriticalRegionThread();
      if ( v21 )
      {
        v32 = 0;
        if ( Atom )
          *Atom = v44[5];
        goto LABEL_75;
      }
    }
    else
    {
LABEL_58:
      v51 = KeGetCurrentThread();
      KeLeaveCriticalRegionThread();
    }
    v32 = -1073741816;
  }
  else
  {
    v32 = -1073741772;
  }
LABEL_75:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)AtomTableHandle + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)AtomTableHandle + 1);
  KeAbPostRelease((ULONG_PTR)AtomTableHandle + 8);
  KeLeaveCriticalRegionThread();
  return v32;
}
