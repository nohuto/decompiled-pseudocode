/*
 * XREFs of RtlpGetRegistryHandle @ 0x1409B52DC
 * Callers:
 *     RtlCreateRegistryKey @ 0x140781FB0 (RtlCreateRegistryKey.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x140782428 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlpUpdateDynamicTimeZones @ 0x14078284C (RtlpUpdateDynamicTimeZones.c)
 *     RtlCheckRegistryKey @ 0x1409B4D90 (RtlCheckRegistryKey.c)
 *     RtlpQueryRegistryValues @ 0x1409B4DD0 (RtlpQueryRegistryValues.c)
 *     RtlWriteRegistryValue @ 0x1409B6290 (RtlWriteRegistryValue.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x1409B6330 (RtlpGetTimeZoneInfoHandle.c)
 *     ExpRefreshTimeZoneInformation @ 0x140A7981C (ExpRefreshTimeZoneInformation.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140A82090 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     RtlDeleteRegistryValue @ 0x140ABBCB0 (RtlDeleteRegistryValue.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140869650 (RtlFormatCurrentUserKeyPath.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

__int64 __fastcall RtlpGetRegistryHandle(int a1, const WCHAR *a2, char a3, HANDLE *a4)
{
  __int64 result; // rax
  __int64 v8; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  wchar_t *v11; // rcx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  __int64 Type; // rcx
  NTSTATUS appended; // ebx
  NTSTATUS v16; // eax
  struct _KPRCB *v17; // r8
  wchar_t *Buffer; // rdx
  _GENERAL_LOOKASIDE *v19; // rcx
  UNICODE_STRING Destination; // [rsp+48h] [rbp-19h] BYREF
  UNICODE_STRING CurrentUserKeyPath; // [rsp+58h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF

  result = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  memset(&ObjectAttributes, 0, 44);
  CurrentUserKeyPath = 0LL;
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
            Type = (unsigned int)L->Type,
            ++L->AllocateMisses,
            (v11 = (wchar_t *)guard_dispatch_icall_no_overrides(Type, Size)) != 0LL) )
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
        if ( (_DWORD)v8 == 5 && RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath) >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&Destination, &CurrentUserKeyPath);
          if ( CurrentUserKeyPath.Buffer )
            ExFreePool(CurrentUserKeyPath.Buffer);
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
                v16 = ZwCreateKey(a4, 0x40000000u, &ObjectAttributes, 0, 0LL, 0, 0LL);
              else
                v16 = ZwOpenKey(a4, 0x82000000, &ObjectAttributes);
              appended = v16;
            }
          }
        }
        v17 = KeGetCurrentPrcb();
        Buffer = Destination.Buffer;
        v19 = v17->PPLookasideList[8].P;
        ++v19->TotalFrees;
        if ( LOWORD(v19->ListHead.Alignment) < v19->Depth
          || (++v19->FreeMisses,
              v19 = v17->PPLookasideList[8].L,
              ++v19->TotalFrees,
              LOWORD(v19->ListHead.Alignment) < v19->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v19->ListHead, (PSLIST_ENTRY)Buffer);
        }
        else
        {
          ++v19->FreeMisses;
          if ( (void (__stdcall *)(PVOID))v19->FreeEx == ExFreePool )
            ExFreePool(Buffer);
          else
            guard_dispatch_icall_no_overrides(Buffer, Buffer);
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
