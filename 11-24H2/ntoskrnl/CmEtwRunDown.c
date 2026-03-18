/*
 * XREFs of CmEtwRunDown @ 0x140A6EEE8
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A15E44 (EtwpKernelTraceRundown.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     CmpFreeTransientPoolWithTag @ 0x140441FC0 (CmpFreeTransientPoolWithTag.c)
 *     EtwTraceSiloDcEvent @ 0x140480320 (EtwTraceSiloDcEvent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A66F0 (ZwQueryValueKey.c)
 *     CmpLogHiveRundownEvent @ 0x1407D6488 (CmpLogHiveRundownEvent.c)
 *     CmpConstructName @ 0x1408763E0 (CmpConstructName.c)
 *     CmpLockRegistryExclusive @ 0x14087DD80 (CmpLockRegistryExclusive.c)
 *     CmpGetNextActiveHive @ 0x14090B0EC (CmpGetNextActiveHive.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmEtwRunDown(__int64 a1, unsigned int a2, char a3, char a4, char a5)
{
  char v6; // di
  char v7; // si
  struct _EX_RUNDOWN_REF *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // eax
  __int64 *v19; // rsi
  __int64 v20; // r15
  __int64 i; // rdi
  unsigned __int16 *v22; // rax
  void *v23; // r14
  int v24; // edx
  NTSTATUS v26; // ebx
  __int16 v29; // [rsp+34h] [rbp-CCh] BYREF
  int v30; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+3Ch] [rbp-C4h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *NextActiveHive; // [rsp+48h] [rbp-B8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING ValueName; // [rsp+90h] [rbp-70h] BYREF
  __int128 v37; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-50h]
  __int128 v39; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v40; // [rsp+C8h] [rbp-38h]
  __int128 KeyValueInformation; // [rsp+D8h] [rbp-28h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+E8h] [rbp-18h] BYREF
  __int64 *v43; // [rsp+118h] [rbp+18h] BYREF
  __int64 v44; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]
  int v46; // [rsp+130h] [rbp+30h]
  int v47; // [rsp+134h] [rbp+34h]
  __int16 *v48; // [rsp+138h] [rbp+38h]
  __int64 v49; // [rsp+140h] [rbp+40h]

  v38 = 0LL;
  v30 = 0;
  v37 = 0LL;
  ResultLength = 0;
  v6 = a4;
  memset(&ObjectAttributes, 0, 44);
  KeyHandle = 0LL;
  v7 = a3;
  v29 = 0;
  ValueName = 0LL;
  KeyValueInformation = 0LL;
  DestinationString = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v37);
  if ( !a5 )
  {
    CmpAttachToRegistryProcess(&ApcState);
    v44 = 24LL;
    v43 = (__int64 *)&v39;
    v9 = 0LL;
    v49 = 2LL;
    v48 = &v29;
    while ( 1 )
    {
      NextActiveHive = CmpGetNextActiveHive(v9);
      v13 = (__int64)NextActiveHive;
      if ( !NextActiveHive )
        break;
      CmpLockRegistryExclusive(v11, v10, v12);
      if ( v6 )
        CmpLogHiveRundownEvent(v13, a1, a2);
      if ( v7 )
      {
        v18 = *(_DWORD *)(v13 + 1656);
        if ( v18 )
        {
          v19 = (__int64 *)(*(_QWORD *)(v13 + 1648) + 16LL);
          v20 = v18;
          do
          {
            for ( i = *v19; i; i = *(_QWORD *)(i + 8) )
            {
              v22 = (unsigned __int16 *)CmpConstructName(i - 16, v14, v16, v17);
              v23 = v22;
              if ( v22 )
              {
                v24 = *v22;
                v45 = *((_QWORD *)v22 + 1);
                v46 = v24;
                v47 = 0;
                *(_QWORD *)&v40 = i - 16;
                EtwTraceSiloDcEvent((__int64)&v43, 3u, a1, a2, 2329, 0x501802u);
                CmpFreeTransientPoolWithTag(v23, 0x624E4D43u);
              }
            }
            v19 += 3;
            --v20;
          }
          while ( v20 );
          v13 = (__int64)NextActiveHive;
          v6 = a4;
        }
        v7 = a3;
      }
      CmpUnlockRegistry(v15);
      v9 = (struct _EX_RUNDOWN_REF *)v13;
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
      v26 = ZwQueryValueKey(
              KeyHandle,
              &ValueName,
              KeyValuePartialInformation,
              &KeyValueInformation,
              0x10u,
              &ResultLength);
      ZwClose(KeyHandle);
      if ( v26 >= 0 )
      {
        v30 = HIDWORD(KeyValueInformation);
        v43 = (__int64 *)&v30;
        v44 = 4LL;
        EtwTraceSiloDcEvent((__int64)&v43, 1u, a1, a2, 2339, 0x501802u);
      }
    }
  }
  v43 = &CmPerfCounters;
  v44 = 88LL;
  EtwTraceSiloDcEvent((__int64)&v43, 1u, a1, a2, 2338, 0x501802u);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v37);
  return 0LL;
}
