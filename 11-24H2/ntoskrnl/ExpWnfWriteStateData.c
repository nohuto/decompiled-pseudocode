/*
 * XREFs of ExpWnfWriteStateData @ 0x1409037E0
 * Callers:
 *     ExpNtUpdateWnfStateData @ 0x1409027E0 (ExpNtUpdateWnfStateData.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlLargeIntegerToChar @ 0x140903D60 (RtlLargeIntegerToChar.c)
 *     RtlAnsiStringToUnicodeString @ 0x140903ED0 (RtlAnsiStringToUnicodeString.c)
 *     ExpWnfAcquirePermanentDataStoreHandle @ 0x140A5AB08 (ExpWnfAcquirePermanentDataStoreHandle.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  char *v14; // rax
  char *v15; // r14
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
  __int64 v27; // r8
  __int64 v28; // r9
  char *v29; // rax
  char *v30; // rdi
  int v31; // [rsp+30h] [rbp-148h]
  NTSTATUS v32; // [rsp+34h] [rbp-144h]
  _DWORD *v33; // [rsp+38h] [rbp-140h]
  PVOID P; // [rsp+40h] [rbp-138h]
  void *Src; // [rsp+48h] [rbp-130h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-128h] BYREF
  ANSI_STRING SourceString; // [rsp+60h] [rbp-118h] BYREF
  LARGE_INTEGER Value; // [rsp+70h] [rbp-108h] BYREF
  __int64 v39; // [rsp+78h] [rbp-100h]
  _OWORD v40[3]; // [rsp+88h] [rbp-F0h] BYREF
  CHAR String[80]; // [rsp+C0h] [rbp-B8h] BYREF
  char v42; // [rsp+110h] [rbp-68h] BYREF

  v6 = a3;
  Src = a2;
  v39 = a1;
  memset(v40, 0, sizeof(v40));
  v32 = 0;
  *(_QWORD *)&DestinationString.Length = 2228224LL;
  DestinationString.Buffer = (wchar_t *)&v42;
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
  v33 = 0LL;
  P = 0LL;
  v14 = (char *)KeAbPreAcquire(a1 + 80, 0LL);
  v15 = v14;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 80), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v14, a1 + 80);
  if ( v15 )
    v15[10] = 1;
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
      Pool2 = ExAllocatePool2(0x100uLL, (unsigned int)(v6 + 16), 0x20666E57u);
      v33 = (_DWORD *)Pool2;
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
        KiStackAttachProcess(v23, 0, (__int64)v40);
      }
      Pool2 = ExAllocatePool2(0x101uLL, (unsigned int)(v6 + 16), 0x20666E57u);
      v33 = (_DWORD *)Pool2;
      if ( v25 )
        KiUnstackDetachProcess((__int64)v40, 0, v27, v28);
    }
    if ( !Pool2 )
      return 3221225626LL;
    *(_QWORD *)(Pool2 + 8) = 0LL;
    *(_DWORD *)Pool2 = 1050884;
    *(_DWORD *)(Pool2 + 4) = v6;
    v29 = (char *)KeAbPreAcquire(a1 + 80, 0LL);
    v30 = v29;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 80), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v29, a1 + 80);
    if ( v30 )
      v30[10] = 1;
    v17 = 0LL;
    if ( *(_QWORD *)(a1 + 88) != 1LL )
      v17 = *(_DWORD **)(a1 + 88);
    if ( !v17 || v17[1] < (unsigned int)v6 )
      v17 = v33;
  }
  v18 = *(_DWORD *)(a1 + 96) + 1;
  v31 = v18;
  while ( !v18 )
  {
    v18 = 1;
    v31 = 1;
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
      v32 = ExpWnfAcquirePermanentDataStoreHandle(v19, &Src);
      if ( v32 < 0 )
        goto LABEL_34;
      v32 = ZwSetValueKey(Src, &DestinationString, 0, 3u, v17 + 3, v6 + 4);
      v20 = *(_QWORD *)(a1 + 104);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 8), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v20 + 8));
      KeAbPostRelease(v20 + 8);
      v18 = v31;
      if ( v32 < 0 )
      {
LABEL_34:
        P = *(PVOID *)(a1 + 88);
        *(_QWORD *)(a1 + 88) = 0LL;
        goto LABEL_36;
      }
    }
    if ( v17 == v33 )
    {
      P = *(PVOID *)(a1 + 88);
      *(_QWORD *)(a1 + 88) = v17;
      v33 = 0LL;
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
  if ( v33 )
    ExFreePoolWithTag(v33, 0x20666E57u);
  return (unsigned int)v32;
}
