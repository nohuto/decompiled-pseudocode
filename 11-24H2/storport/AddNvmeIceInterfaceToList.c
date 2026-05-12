/*
 * XREFs of AddNvmeIceInterfaceToList @ 0x140069104
 * Callers:
 *     RegisterForNvmeIceInterfaceCallback @ 0x140183D80 (RegisterForNvmeIceInterfaceCallback.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaDuplicateUnicodeString @ 0x1400547E0 (RaDuplicateUnicodeString.c)
 *     WPP_SF_d @ 0x140055B28 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x140055B6C (WPP_SF_q.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     FreeNvmeIceEntry @ 0x1400695BC (FreeNvmeIceEntry.c)
 *     InitializeNvmeIceKeyTable @ 0x140069764 (InitializeNvmeIceKeyTable.c)
 *     RaidConvertCryptoCapabilitiesToInternal @ 0x14006A5E0 (RaidConvertCryptoCapabilitiesToInternal.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AddNvmeIceInterfaceToList(PCUNICODE_STRING SourceString, _QWORD *a2, _QWORD *a3)
{
  unsigned __int16 *v3; // r14
  _QWORD *v4; // rbx
  char *Pool; // r13
  const UNICODE_STRING *v8; // rdi
  PDEVICE_OBJECT v9; // rcx
  unsigned __int16 v10; // dx
  _QWORD *v11; // r9
  __int64 (__fastcall *v12)(__int64, _QWORD, unsigned int *); // rax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // edi
  PDEVICE_OBJECT v16; // rcx
  unsigned __int16 v17; // dx
  void *v18; // rcx
  void *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdx
  _QWORD *v23; // rax
  PVOID *i; // r15
  _QWORD *v25; // rax
  unsigned __int16 *v27; // [rsp+20h] [rbp-20h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-18h] BYREF
  unsigned int v30; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  Pool = 0LL;
  v27 = 0LL;
  v8 = SourceString;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !a2 || !a2[4] || !a2[5] || !a2[6] )
    {
      v9 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        goto LABEL_54;
      }
      v10 = 14;
      v11 = a2;
LABEL_53:
      WPP_SF_q(
        (__int64)v9->AttachedDevice,
        v10,
        (__int64)&WPP_cd59b0b4142e33753252084084bd022f_Traceguids,
        v11,
        v27,
        LockHandle.LockQueue.Next,
        LockHandle.LockQueue.Lock,
        *(_QWORD *)&LockHandle.OldIrql);
LABEL_54:
      v15 = -1073741811;
      goto LABEL_21;
    }
    goto LABEL_42;
  }
  if ( !a3 )
    goto LABEL_42;
  v12 = (__int64 (__fastcall *)(__int64, _QWORD, unsigned int *))a3[16];
  if ( !v12 || !a3[15] || !a3[5] )
  {
    v9 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_54;
    }
    v10 = 10;
    v11 = a3;
    goto LABEL_53;
  }
  v13 = a3[1];
  v30 = 0;
  v14 = v12(v13, 0LL, &v30);
  v15 = v14;
  if ( v14 < 0 && v14 != -1056964604 )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_21;
    }
    v17 = 11;
    goto LABEL_20;
  }
  Pool = (char *)RaidAllocatePool(64LL, v30, 1917018450LL, 0LL);
  if ( !Pool )
  {
LABEL_29:
    v15 = -1073741670;
    goto LABEL_21;
  }
  v15 = ((__int64 (__fastcall *)(_QWORD, char *, unsigned int *))a3[16])(a3[1], Pool, &v30);
  if ( v15 < 0 )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      goto LABEL_21;
    }
    v17 = 12;
LABEL_20:
    WPP_SF_d((__int64)v16->AttachedDevice, v17, (__int64)&WPP_cd59b0b4142e33753252084084bd022f_Traceguids, v15);
    goto LABEL_21;
  }
  v15 = RaidConvertCryptoCapabilitiesToInternal(&v27, Pool + 8, Pool);
  if ( v15 < 0 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xDu,
        (__int64)&WPP_cd59b0b4142e33753252084084bd022f_Traceguids,
        v15);
    }
    v3 = v27;
    goto LABEL_21;
  }
  v3 = v27;
  v8 = SourceString;
LABEL_42:
  v20 = RaidAllocatePool(64LL, 112LL, 1917018450LL, 0LL);
  v4 = (_QWORD *)v20;
  if ( !v20 )
    goto LABEL_29;
  v15 = RaDuplicateUnicodeString((PUNICODE_STRING)(v20 + 24), v8, v21, 0LL);
  if ( v15 >= 0 )
  {
    v4[5] = a2;
    if ( !(unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline()
      || (v4[13] = v3, v4[6] = a3,
                       v22 = *v3,
                       v3 = 0LL,
                       v27 = 0LL,
                       v15 = InitializeNvmeIceKeyTable(v4 + 7, v22),
                       v15 >= 0) )
    {
      *((_BYTE *)v4 + 96) = 0;
      if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
      {
        KeAcquireInStackQueuedSpinLock(&NvmeIceListSpinLock, &LockHandle);
        for ( i = (PVOID *)NvmeIceList; i != &NvmeIceList; i = (PVOID *)*i )
        {
          if ( RtlEqualUnicodeString((PCUNICODE_STRING)(v4 + 3), (PCUNICODE_STRING)(i + 3), 1u) )
          {
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            v15 = 0;
            goto LABEL_21;
          }
        }
        v4[1] = v4;
        *v4 = v4;
        *((_DWORD *)v4 + 4) = 1;
        v25 = (_QWORD *)qword_140171168;
        if ( *(PVOID **)qword_140171168 == &NvmeIceList )
        {
          *v4 = &NvmeIceList;
          v4[1] = v25;
          *v25 = v4;
          qword_140171168 = (__int64)v4;
          v4 = 0LL;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          goto LABEL_21;
        }
      }
      else
      {
        v4[1] = v4;
        *v4 = v4;
        v23 = (_QWORD *)qword_140171168;
        if ( *(PVOID **)qword_140171168 == &NvmeIceList )
        {
          *v4 = &NvmeIceList;
          v4[1] = v23;
          *v23 = v4;
          qword_140171168 = (__int64)v4;
          v4 = 0LL;
          goto LABEL_21;
        }
      }
      __fastfail(3u);
    }
  }
LABEL_21:
  if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( Pool )
      ExFreePoolWithTag(Pool, 0x72436152u);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x72436152u);
    if ( v4 )
      FreeNvmeIceEntry(v4);
  }
  else if ( v4 )
  {
    v18 = (void *)v4[4];
    if ( v18 )
      ExFreePoolWithTag(v18, 0x53446152u);
    v19 = (void *)v4[13];
    if ( v19 )
      ExFreePoolWithTag(v19, 0x72436152u);
    ExFreePoolWithTag(v4, 0x72436152u);
  }
  return (unsigned int)v15;
}
