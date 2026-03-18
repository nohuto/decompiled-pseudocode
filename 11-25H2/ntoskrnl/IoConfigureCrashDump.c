/*
 * XREFs of IoConfigureCrashDump @ 0x14058D584
 * Callers:
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x140704A20 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     PoShutdownBugCheck @ 0x140747350 (PoShutdownBugCheck.c)
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 *     PoBroadcastSystemState @ 0x140B54B5C (PoBroadcastSystemState.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140C0B6E0 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     IopDisableCrashDump @ 0x140590258 (IopDisableCrashDump.c)
 *     IopDumpTraceCrashDumpReconfiguration @ 0x140590620 (IopDumpTraceCrashDumpReconfiguration.c)
 *     IopInitDumpCapsuleSupport @ 0x140591038 (IopInitDumpCapsuleSupport.c)
 *     IopReadDumpRegistry @ 0x14059158C (IopReadDumpRegistry.c)
 *     IopRemoveDumpCapsuleSupport @ 0x140591718 (IopRemoveDumpCapsuleSupport.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     IopInitializeCrashDump @ 0x140704E50 (IopInitializeCrashDump.c)
 *     MmGetPageFileForCrashDump @ 0x1407DFC40 (MmGetPageFileForCrashDump.c)
 *     RtlPrefixUnicodeString @ 0x140871070 (RtlPrefixUnicodeString.c)
 *     RtlGetHostNtSystemRoot @ 0x140A9AA40 (RtlGetHostNtSystemRoot.c)
 */

__int64 __fastcall IoConfigureCrashDump(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  struct _KTHREAD *CurrentThread; // rdi
  int v6; // ebx
  void *PageFileForCrashDump; // rsi
  __int64 HostNtSystemRoot; // rax
  UNICODE_STRING String2; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  WCHAR SourceString[16]; // [rsp+40h] [rbp-30h] BYREF

  DestinationString = 0LL;
  v4 = a1;
  String2 = 0LL;
  wcscpy(SourceString, L"C:\\pagefile.sys");
  if ( !(_BYTE)a2 )
    IopReadDumpRegistry(a1, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      if ( ForceDumpDisabled || !AllowCrashDump )
      {
        v6 = -1073741637;
      }
      else
      {
        PageFileForCrashDump = (void *)MmGetPageFileForCrashDump(&String2);
        if ( PageFileForCrashDump && RtlPrefixUnicodeString(&stru_140009C68, &String2, 1u) )
        {
          DestinationString.Buffer = String2.Buffer + 4;
          DestinationString.Length = String2.Length - 8;
          DestinationString.MaximumLength = String2.MaximumLength - 8;
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, SourceString);
          HostNtSystemRoot = RtlGetHostNtSystemRoot();
          if ( *(_WORD *)HostNtSystemRoot )
            *DestinationString.Buffer = **(_WORD **)(HostNtSystemRoot + 8);
        }
        ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u);
        v6 = IopDisableCrashDump();
        if ( v6 >= 0 )
        {
          String2 = DestinationString;
          if ( (unsigned __int8)IopInitializeCrashDump(PageFileForCrashDump) )
          {
            IopRemoveDumpCapsuleSupport();
            v6 = 0;
          }
          else
          {
            if ( CapsuleDumpAllowed )
              IopInitDumpCapsuleSupport();
            v6 = -1073741823;
          }
        }
        ExReleaseResourceLite(&IopCrashDumpLock);
      }
      IopDumpTraceCrashDumpReconfiguration((unsigned int)v6);
    }
    else
    {
      v6 = -1073741808;
    }
  }
  else if ( ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u) )
  {
    v6 = IopDisableCrashDump();
    IopRemoveDumpCapsuleSupport();
    ExReleaseResourceLite(&IopCrashDumpLock);
  }
  else
  {
    v6 = -1073741823;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, a2, a3, a4);
  return (unsigned int)v6;
}
