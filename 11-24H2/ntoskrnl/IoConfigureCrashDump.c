/*
 * XREFs of IoConfigureCrashDump @ 0x14058DDD4
 * Callers:
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x14070E6B0 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     PoShutdownBugCheck @ 0x140751760 (PoShutdownBugCheck.c)
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 *     PoBroadcastSystemState @ 0x140B66DA4 (PoBroadcastSystemState.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140C1E8F4 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     IopDisableCrashDump @ 0x140590A74 (IopDisableCrashDump.c)
 *     IopDumpTraceCrashDumpReconfiguration @ 0x140590E3C (IopDumpTraceCrashDumpReconfiguration.c)
 *     IopInitDumpCapsuleSupport @ 0x14059185C (IopInitDumpCapsuleSupport.c)
 *     IopReadDumpRegistry @ 0x140591DB0 (IopReadDumpRegistry.c)
 *     IopRemoveDumpCapsuleSupport @ 0x140591F3C (IopRemoveDumpCapsuleSupport.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     IopInitializeCrashDump @ 0x14070EAE0 (IopInitializeCrashDump.c)
 *     MmGetPageFileForCrashDump @ 0x1407F00B0 (MmGetPageFileForCrashDump.c)
 *     RtlPrefixUnicodeString @ 0x1408726F0 (RtlPrefixUnicodeString.c)
 *     RtlGetHostNtSystemRoot @ 0x140A9BB90 (RtlGetHostNtSystemRoot.c)
 */

__int64 __fastcall IoConfigureCrashDump(__int64 a1, char a2)
{
  int v2; // ebx
  struct _KTHREAD *CurrentThread; // rdi
  int v4; // ebx
  void *PageFileForCrashDump; // rsi
  __int64 HostNtSystemRoot; // rax
  UNICODE_STRING String2; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  WCHAR SourceString[16]; // [rsp+40h] [rbp-30h] BYREF

  DestinationString = 0LL;
  v2 = a1;
  String2 = 0LL;
  wcscpy(SourceString, L"C:\\pagefile.sys");
  if ( !a2 )
    IopReadDumpRegistry(a1, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( ForceDumpDisabled || !AllowCrashDump )
      {
        v4 = -1073741637;
      }
      else
      {
        PageFileForCrashDump = (void *)MmGetPageFileForCrashDump(&String2);
        if ( PageFileForCrashDump && RtlPrefixUnicodeString(&stru_140009EB8, &String2, 1u) )
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
        v4 = IopDisableCrashDump();
        if ( v4 >= 0 )
        {
          String2 = DestinationString;
          if ( (unsigned __int8)IopInitializeCrashDump(PageFileForCrashDump) )
          {
            IopRemoveDumpCapsuleSupport();
            v4 = 0;
          }
          else
          {
            if ( CapsuleDumpAllowed )
              IopInitDumpCapsuleSupport();
            v4 = -1073741823;
          }
        }
        ExReleaseResourceLite(&IopCrashDumpLock);
      }
      IopDumpTraceCrashDumpReconfiguration((unsigned int)v4);
    }
    else
    {
      v4 = -1073741808;
    }
  }
  else if ( ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u) )
  {
    v4 = IopDisableCrashDump();
    IopRemoveDumpCapsuleSupport();
    ExReleaseResourceLite(&IopCrashDumpLock);
  }
  else
  {
    v4 = -1073741823;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)v4;
}
