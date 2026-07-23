/*
 * XREFs of CmEtwRunDown @ 0x140A6836C
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A0F024 (EtwpKernelTraceRundown.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     EtwTraceSiloDcEvent @ 0x14047AF60 (EtwTraceSiloDcEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     CmpLogHiveRundownEvent @ 0x1407D69FC (CmpLogHiveRundownEvent.c)
 *     CmpConstructName @ 0x14087A710 (CmpConstructName.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     CmpGetNextActiveHive @ 0x1408E280C (CmpGetNextActiveHive.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmEtwRunDown(__int64 a1, unsigned int a2, char a3, char a4, char a5)
{
  char v6; // di
  char v7; // si
  struct _EX_RUNDOWN_REF *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  __int64 *v16; // rsi
  __int64 v17; // r15
  __int64 i; // rdi
  unsigned __int16 *v19; // rax
  void *v20; // r14
  int v21; // edx
  NTSTATUS v23; // ebx
  __int16 v26; // [rsp+34h] [rbp-CCh] BYREF
  int v27; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+3Ch] [rbp-C4h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *NextActiveHive; // [rsp+48h] [rbp-B8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING ValueName; // [rsp+90h] [rbp-70h] BYREF
  __int128 v34; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v35; // [rsp+B0h] [rbp-50h]
  __int128 v36; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v37; // [rsp+C8h] [rbp-38h]
  __int128 KeyValueInformation; // [rsp+D8h] [rbp-28h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-18h] BYREF
  __int64 *v40; // [rsp+118h] [rbp+18h] BYREF
  __int64 v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  int v43; // [rsp+130h] [rbp+30h]
  int v44; // [rsp+134h] [rbp+34h]
  __int16 *v45; // [rsp+138h] [rbp+38h]
  __int64 v46; // [rsp+140h] [rbp+40h]

  v35 = 0LL;
  v27 = 0;
  v34 = 0LL;
  ResultLength = 0;
  v6 = a4;
  memset(&ObjectAttributes, 0, 44);
  KeyHandle = 0LL;
  v7 = a3;
  v26 = 0;
  ValueName = 0LL;
  KeyValueInformation = 0LL;
  DestinationString = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v34);
  if ( !a5 )
  {
    CmpAttachToRegistryProcess(&ApcState);
    v41 = 24LL;
    v40 = (__int64 *)&v36;
    v9 = 0LL;
    v46 = 2LL;
    v45 = &v26;
    while ( 1 )
    {
      NextActiveHive = CmpGetNextActiveHive(v9);
      v10 = (__int64)NextActiveHive;
      if ( !NextActiveHive )
        break;
      CmpLockRegistryExclusive();
      if ( v6 )
        CmpLogHiveRundownEvent(v10, a1, a2);
      if ( v7 )
      {
        v15 = *(_DWORD *)(v10 + 1656);
        if ( v15 )
        {
          v16 = (__int64 *)(*(_QWORD *)(v10 + 1648) + 16LL);
          v17 = v15;
          do
          {
            for ( i = *v16; i; i = *(_QWORD *)(i + 8) )
            {
              v19 = (unsigned __int16 *)CmpConstructName(i - 16, v11, v13, v14);
              v20 = v19;
              if ( v19 )
              {
                v21 = *v19;
                v42 = *((_QWORD *)v19 + 1);
                v43 = v21;
                v44 = 0;
                *(_QWORD *)&v37 = i - 16;
                EtwTraceSiloDcEvent((__int64)&v40, 3u, a1, a2, 2329, 0x501802u);
                CmpFreeTransientPoolWithTag(v20, 0x624E4D43u);
              }
            }
            v16 += 3;
            --v17;
          }
          while ( v17 );
          v10 = (__int64)NextActiveHive;
          v6 = a4;
        }
        v7 = a3;
      }
      CmpUnlockRegistry(v12);
      v9 = (struct _EX_RUNDOWN_REF *)v10;
    }
    CmpDetachFromRegistryProcess(&ApcState);
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Select");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"Current");
      v23 = ZwQueryValueKey(
              KeyHandle,
              &ValueName,
              KeyValuePartialInformation,
              &KeyValueInformation,
              0x10u,
              &ResultLength);
      ZwClose(KeyHandle);
      if ( v23 >= 0 )
      {
        v27 = HIDWORD(KeyValueInformation);
        v40 = (__int64 *)&v27;
        v41 = 4LL;
        EtwTraceSiloDcEvent((__int64)&v40, 1u, a1, a2, 2339, 0x501802u);
      }
    }
  }
  v40 = &CmPerfCounters;
  v41 = 88LL;
  EtwTraceSiloDcEvent((__int64)&v40, 1u, a1, a2, 2338, 0x501802u);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v34);
  return 0LL;
}
