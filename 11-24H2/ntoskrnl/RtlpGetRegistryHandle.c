/*
 * XREFs of RtlpGetRegistryHandle @ 0x1409CC85C
 * Callers:
 *     RtlCreateRegistryKey @ 0x140782080 (RtlCreateRegistryKey.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x1407824F8 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14078291C (RtlpUpdateDynamicTimeZones.c)
 *     RtlCheckRegistryKey @ 0x1409CC310 (RtlCheckRegistryKey.c)
 *     RtlpQueryRegistryValues @ 0x1409CC350 (RtlpQueryRegistryValues.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x1409DBBB4 (RtlpGetTimeZoneInfoHandle.c)
 *     ExpRefreshTimeZoneInformation @ 0x1409DC59C (ExpRefreshTimeZoneInformation.c)
 *     RtlWriteRegistryValue @ 0x140A54360 (RtlWriteRegistryValue.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140A87340 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     RtlDeleteRegistryValue @ 0x140AC0B50 (RtlDeleteRegistryValue.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14040BAE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14040BBA0 (RtlAppendUnicodeStringToString.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1406A67B0 (ZwCreateKey.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140865040 (RtlFormatCurrentUserKeyPath.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 */

__int64 __fastcall RtlpGetRegistryHandle(int a1, const WCHAR *a2, char a3, HANDLE *a4)
{
  __int64 result; // rax
  __int64 v8; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  wchar_t *v11; // rcx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 v13; // r9
  __int64 Size; // rdx
  __int64 Tag; // r8
  __int64 Type; // rcx
  NTSTATUS appended; // ebx
  __int64 v18; // r9
  NTSTATUS v19; // eax
  struct _KPRCB *v20; // r8
  wchar_t *Buffer; // rdx
  _GENERAL_LOOKASIDE *v22; // rcx
  UNICODE_STRING Destination; // [rsp+48h] [rbp-19h] BYREF
  UNICODE_STRING Source; // [rsp+58h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF

  result = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  memset(&ObjectAttributes, 0, 44);
  Source = 0LL;
  if ( (a1 & 0x40000000) != 0 )
  {
    *a4 = (HANDLE)a2;
  }
  else
  {
    v8 = (unsigned int)a1;
    LODWORD(v8) = a1 & 0x7FFFFFFF;
    if ( a1 >= 0 )
      v8 = (unsigned int)a1;
    if ( (unsigned int)v8 >= 6 )
    {
      return 3221225485LL;
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      P = CurrentPrcb->PPLookasideList[8].P;
      ++P->TotalAllocates;
      v11 = (wchar_t *)RtlpInterlockedPopEntrySList(&P->ListHead);
      if ( v11 )
        goto LABEL_8;
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[8].L;
      ++L->TotalAllocates;
      v11 = (wchar_t *)RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( v11
        || (Size = L->Size,
            Tag = L->Tag,
            Type = (unsigned int)L->Type,
            ++L->AllocateMisses,
            (v11 = (wchar_t *)guard_dispatch_icall_no_overrides(Type, Size, Tag, v13)) != 0LL) )
      {
LABEL_8:
        *(_DWORD *)v11 = CurrentPrcb->Number;
      }
      Destination.Buffer = v11;
      if ( v11 )
      {
        *(_DWORD *)&Destination.Length = 34340864;
        if ( !(_DWORD)v8 )
          goto LABEL_11;
        if ( (_DWORD)v8 == 5 && RtlFormatCurrentUserKeyPath(&Source) >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&Destination, &Source);
          if ( Source.Buffer )
            ExFreePool(Source.Buffer);
        }
        else
        {
          appended = RtlAppendUnicodeToString(&Destination, (PCWSTR)RtlpRegistryPaths[v8]);
        }
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&Destination, L"\\");
          if ( appended >= 0 )
          {
LABEL_11:
            appended = RtlAppendUnicodeToString(&Destination, a2);
            if ( appended >= 0 )
            {
              ObjectAttributes.Length = 48;
              ObjectAttributes.ObjectName = &Destination;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 576;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              if ( a3 )
                v19 = ZwCreateKey(a4, 0x40000000u, &ObjectAttributes, 0, 0LL, 0, 0LL);
              else
                v19 = ZwOpenKey(a4, 0x82000000, &ObjectAttributes);
              appended = v19;
            }
          }
        }
        v20 = KeGetCurrentPrcb();
        Buffer = Destination.Buffer;
        v22 = v20->PPLookasideList[8].P;
        ++v22->TotalFrees;
        if ( LOWORD(v22->ListHead.Alignment) < v22->Depth
          || (++v22->FreeMisses,
              v22 = v20->PPLookasideList[8].L,
              ++v22->TotalFrees,
              LOWORD(v22->ListHead.Alignment) < v22->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v22->ListHead, (PSLIST_ENTRY)Buffer);
        }
        else
        {
          ++v22->FreeMisses;
          if ( (void (__stdcall *)(PVOID))v22->FreeEx == ExFreePool )
            ExFreePool(Buffer);
          else
            guard_dispatch_icall_no_overrides(Buffer, Buffer, v20, v18);
        }
        return (unsigned int)appended;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
  return result;
}
