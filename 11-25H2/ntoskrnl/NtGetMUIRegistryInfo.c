/*
 * XREFs of NtGetMUIRegistryInfo @ 0x140A168A0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     MUIBugCheck @ 0x14064EA1C (MUIBugCheck.c)
 *     MigrateOOBELanguageToInstallationLanguage @ 0x14064EA44 (MigrateOOBELanguageToInstallationLanguage.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     MUIInitializeResourceLock @ 0x140A16C28 (MUIInitializeResourceLock.c)
 *     PsCreateSystemThreadEx @ 0x140A17780 (PsCreateSystemThreadEx.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtGetMUIRegistryInfo(ULONG Flags, PULONG DataSize, PVOID Data)
{
  __int64 v5; // r14
  __int64 v6; // rax
  int v7; // esi
  ULONG v8; // ebx
  struct _KTHREAD *CurrentThread; // rax
  char v10; // bl
  unsigned int Length; // [rsp+50h] [rbp-A8h]
  __int128 v13; // [rsp+58h] [rbp-A0h] BYREF
  __int128 v14; // [rsp+68h] [rbp-90h]
  __int128 v15; // [rsp+78h] [rbp-80h]
  HANDLE Handle; // [rsp+88h] [rbp-70h] BYREF
  struct _KEVENT Event; // [rsp+90h] [rbp-68h] BYREF
  _DWORD v18[2]; // [rsp+A8h] [rbp-50h] BYREF
  __int64 v19; // [rsp+B0h] [rbp-48h]
  __int64 v20; // [rsp+B8h] [rbp-40h]
  int v21; // [rsp+C0h] [rbp-38h]
  int v22; // [rsp+C4h] [rbp-34h]
  __int128 v23; // [rsp+C8h] [rbp-30h]
  char v24; // [rsp+118h] [rbp+20h]

  v18[1] = 0;
  v22 = 0;
  memset(&Event, 0, sizeof(Event));
  Handle = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v24 = 0;
  if ( !KeGetCurrentThread()->PreviousMode || InitSafeBootMode )
    goto LABEL_25;
  if ( DataSize )
  {
    v5 = 0x7FFFFFFF0000LL;
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)DataSize < 0x7FFFFFFF0000LL )
      v6 = (__int64)DataSize;
    Length = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 )
    {
      if ( !Data )
        goto LABEL_8;
      goto LABEL_10;
    }
  }
  else
  {
    if ( (Flags & 0xA) == 0 )
      goto LABEL_8;
    Length = 0;
    v5 = 0x7FFFFFFF0000LL;
  }
  if ( Data )
  {
LABEL_8:
    v7 = -1073741811;
    goto LABEL_26;
  }
LABEL_10:
  v8 = 1;
  if ( Flags )
    v8 = Flags;
  if ( (v8 & 0xFFFFFFF4) != 0 )
    goto LABEL_8;
  if ( MUIRegistryLock || (v7 = MUIInitializeResourceLock(&MUIRegistryLock), (v7 & 0xC0000000) != 0xC0000000) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(MUIRegistryLock, 1u);
    v24 = 1;
    if ( MUIRegistryInfo != (PVOID)-1LL )
    {
      if ( (v8 & 1) != 0 )
      {
        v10 = 0;
        if ( MUIRegistryInfo )
          goto LABEL_17;
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        *(_QWORD *)&v13 = &Event;
        *((_QWORD *)&v13 + 1) = 0LL;
        *(_QWORD *)&v14 = 0LL;
        *((_QWORD *)&v14 + 1) = (unsigned __int16)PsInstallUILanguageId;
        *(_QWORD *)&v15 = (unsigned __int16)PsMachineUILanguageId;
        DWORD2(v15) = -1073741823;
        v18[0] = 48;
        v19 = 0LL;
        v21 = 512;
        v20 = 0LL;
        v23 = 0LL;
        v7 = PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, v18, 0LL, 0LL, MUIRegistrySystemRoutine, &v13, 0LL, 0LL);
        if ( v7 >= 0 )
        {
          ZwClose(Handle);
          v7 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          if ( v7 >= 0 )
          {
            v7 = DWORD2(v15);
            if ( SDWORD2(v15) < 0 )
              goto LABEL_35;
            MUIRegistryInfo = (PVOID)*((_QWORD *)&v13 + 1);
            LODWORD(MUIRegistryInfoSize) = v14;
            if ( !DWORD1(v14) )
              MUIBugCheck(32770);
            if ( !HIDWORD(v14) )
            {
              if ( PsUILanguageComitted )
                MUIBugCheck(32769);
              MigrateOOBELanguageToInstallationLanguage();
            }
            if ( !DWORD1(v15) )
              PsMachineUILanguageId = PsInstallUILanguageId;
          }
        }
        if ( v7 >= 0 )
        {
LABEL_17:
          if ( Length )
          {
            if ( Length < (unsigned int)MUIRegistryInfoSize )
            {
              v7 = -1073741789;
              goto LABEL_19;
            }
            v10 = 1;
          }
          v7 = 0;
LABEL_19:
          if ( (unsigned __int64)DataSize < 0x7FFFFFFF0000LL )
            v5 = (__int64)DataSize;
          *(_DWORD *)v5 = *(_DWORD *)v5;
          *DataSize = MUIRegistryInfoSize;
          if ( v10 )
          {
            ProbeForWrite(Data, Length, 1u);
            memset_0(Data, 0, Length);
            memmove(Data, MUIRegistryInfo, (unsigned int)MUIRegistryInfoSize);
          }
          goto LABEL_26;
        }
LABEL_35:
        MUIRegistryInfo = (PVOID)-1LL;
        LODWORD(MUIRegistryInfoSize) = 0;
        goto LABEL_26;
      }
      if ( (v8 & 2) != 0 )
      {
        if ( MUIRegistryInfo )
        {
          ExFreePoolWithTag(MUIRegistryInfo, 0);
          MUIRegistryInfo = 0LL;
          LODWORD(MUIRegistryInfoSize) = 0;
          if ( (v8 & 8) != 0 )
            ++*(_DWORD *)(MmWriteableSharedUserData + 932);
        }
      }
      else
      {
        if ( (v8 & 8) == 0 )
          goto LABEL_8;
        ++*(_DWORD *)(MmWriteableSharedUserData + 932);
        if ( MUIRegistryInfo )
          *((_DWORD *)MUIRegistryInfo + 3) = MEMORY[0xFFFFF780000003A4];
      }
LABEL_57:
      v7 = 0;
      goto LABEL_26;
    }
    if ( (v8 & 2) != 0 )
    {
      MUIRegistryInfo = 0LL;
      LODWORD(MUIRegistryInfoSize) = 0;
      goto LABEL_57;
    }
LABEL_25:
    v7 = -1073741823;
  }
LABEL_26:
  if ( v24 )
  {
    ExReleaseResourceLite(MUIRegistryLock);
    KeLeaveCriticalRegion();
  }
  return v7;
}
