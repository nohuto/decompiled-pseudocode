/*
 * XREFs of ExpWnfWriteStateData @ 0x1408E5390
 * Callers:
 *     ExpNtUpdateWnfStateData @ 0x1408E4380 (ExpNtUpdateWnfStateData.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x14069BD40 (ZwSetValueKey.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     RtlLargeIntegerToChar @ 0x1408E5910 (RtlLargeIntegerToChar.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408E5A80 (RtlAnsiStringToUnicodeString.c)
 *     ExpWnfAcquirePermanentDataStoreHandle @ 0x140A61150 (ExpWnfAcquirePermanentDataStoreHandle.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfWriteStateData(__int64 a1, void *a2, unsigned int a3, int a4, int a5)
{
  size_t v6; // r13
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // r11d
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 *v14; // rax
  __int64 *v15; // r14
  _DWORD *v16; // rcx
  _DWORD *v17; // r14
  __int32 v18; // edi
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v22; // rcx
  _KPROCESS *v23; // rcx
  int v24; // eax
  int v25; // r14d
  __int64 Pool2; // rdi
  __int64 *v27; // rax
  __int64 *v28; // r14
  int v29; // [rsp+30h] [rbp-148h]
  NTSTATUS v30; // [rsp+34h] [rbp-144h]
  _DWORD *v31; // [rsp+38h] [rbp-140h]
  PVOID P; // [rsp+40h] [rbp-138h]
  void *Src; // [rsp+48h] [rbp-130h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-128h] BYREF
  ANSI_STRING SourceString; // [rsp+60h] [rbp-118h] BYREF
  LARGE_INTEGER Value; // [rsp+70h] [rbp-108h] BYREF
  __int64 v37; // [rsp+78h] [rbp-100h]
  _OWORD v38[3]; // [rsp+88h] [rbp-F0h] BYREF
  CHAR String[80]; // [rsp+C0h] [rbp-B8h] BYREF
  char v40; // [rsp+110h] [rbp-68h] BYREF

  v6 = a3;
  Src = a2;
  v37 = a1;
  memset(v38, 0, sizeof(v38));
  v30 = 0;
  *(_QWORD *)&DestinationString.Length = 2228224LL;
  DestinationString.Buffer = (wchar_t *)&v40;
  if ( *(_QWORD *)(a1 + 104) )
  {
    v8 = *(_QWORD *)(a1 + 40) ^ 0x41C64E6DA3BC0074LL;
    SourceString = 0LL;
    Value.QuadPart = v8;
    if ( RtlLargeIntegerToChar(&Value, 0x10u, 65, String) >= 0 )
    {
      SourceString.Buffer = String;
      SourceString.MaximumLength = 65;
      v9 = -1LL;
      do
        ++v9;
      while ( String[v9] );
      SourceString.Length = v9;
      RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
    }
    v10 = DestinationString.Length >> 1;
    v11 = 16 - v10;
    DestinationString.Length = 32;
    if ( v10 )
    {
      LODWORD(v12) = 16;
      v13 = v10;
      do
      {
        --v13;
        v12 = (unsigned int)(v12 - 1);
        DestinationString.Buffer[v12] = DestinationString.Buffer[v13];
        --v10;
      }
      while ( v10 );
    }
    if ( v11 )
    {
      v22 = v11;
      do
      {
        DestinationString.Buffer[--v22] = 48;
        --v11;
      }
      while ( v11 );
    }
  }
  v31 = 0LL;
  P = 0LL;
  v14 = KeAbPreAcquire(a1 + 80, 0LL);
  v15 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 80), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v14, a1 + 80);
  if ( v15 )
    *((_BYTE *)v15 + 10) = 1;
  if ( a5 )
  {
    v24 = *(_QWORD *)(a1 + 88) ? *(_DWORD *)(a1 + 96) : 0;
    if ( v24 != a4 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
      KeAbPostRelease(a1 + 80);
      return 3221225473LL;
    }
  }
  v16 = 0LL;
  if ( *(_QWORD *)(a1 + 88) != 1LL )
    v16 = *(_DWORD **)(a1 + 88);
  if ( !v16 && (*(_QWORD *)(a1 + 104) || (_DWORD)v6) || (v17 = v16) != 0LL && v16[1] < (unsigned int)v6 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
    KeAbPostRelease(a1 + 80);
    if ( ((*(_DWORD *)(a1 + 40) >> 4) & 3) != 3 || PsInitialSystemProcess == *(PEPROCESS *)(a1 + 152) )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      v31 = (_DWORD *)Pool2;
    }
    else
    {
      v23 = *(_KPROCESS **)(a1 + 152);
      if ( !v23 )
        return 3221225524LL;
      if ( v23 == KeGetCurrentThread()->ApcState.Process )
      {
        v25 = 0;
      }
      else
      {
        v25 = 1;
        KiStackAttachProcess(v23, 0, (__int64)v38);
      }
      Pool2 = ExAllocatePool2(0x101uLL);
      v31 = (_DWORD *)Pool2;
      if ( v25 )
        KiUnstackDetachProcess((__int64)v38, 0LL);
    }
    if ( !Pool2 )
      return 3221225626LL;
    *(_QWORD *)(Pool2 + 8) = 0LL;
    *(_DWORD *)Pool2 = 1050884;
    *(_DWORD *)(Pool2 + 4) = v6;
    v27 = KeAbPreAcquire(a1 + 80, 0LL);
    v28 = v27;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 80), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v27, a1 + 80);
    if ( v28 )
      *((_BYTE *)v28 + 10) = 1;
    v17 = 0LL;
    if ( *(_QWORD *)(a1 + 88) != 1LL )
      v17 = *(_DWORD **)(a1 + 88);
    if ( !v17 || v17[1] < (unsigned int)v6 )
      v17 = v31;
  }
  v18 = *(_DWORD *)(a1 + 96) + 1;
  v29 = v18;
  while ( !v18 )
  {
    v18 = 1;
    v29 = 1;
  }
  if ( v17 )
  {
    memmove(v17 + 4, Src, v6);
    v17[2] = v6;
    v17[3] = v18;
    v19 = *(_QWORD *)(a1 + 104);
    if ( v19 )
    {
      Src = 0LL;
      v30 = ExpWnfAcquirePermanentDataStoreHandle(v19, &Src);
      if ( v30 < 0 )
        goto LABEL_34;
      v30 = ZwSetValueKey(Src, &DestinationString, 0, 3u, v17 + 3, v6 + 4);
      v20 = *(_QWORD *)(a1 + 104);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 8), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v20 + 8));
      KeAbPostRelease(v20 + 8);
      v18 = v29;
      if ( v30 < 0 )
      {
LABEL_34:
        P = *(PVOID *)(a1 + 88);
        *(_QWORD *)(a1 + 88) = 0LL;
        goto LABEL_36;
      }
    }
    if ( v17 == v31 )
    {
      P = *(PVOID *)(a1 + 88);
      *(_QWORD *)(a1 + 88) = v17;
      v31 = 0LL;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 88) = 1LL;
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 96), v18);
LABEL_36:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
  KeAbPostRelease(a1 + 80);
  if ( (unsigned __int64)P >= 2 )
    ExFreePoolWithTag(P, 0x20666E57u);
  if ( v31 )
    ExFreePoolWithTag(v31, 0x20666E57u);
  return (unsigned int)v30;
}
