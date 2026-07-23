/*
 * XREFs of SleepstudyHelperCreateBlockerFromComponent @ 0x140767A20
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140A192D0 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140A195D4 (SshpGenerateDeviceFriendlyName.c)
 *     SshpGenerateDeviceVerboseDescription @ 0x140A19898 (SshpGenerateDeviceVerboseDescription.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SleepstudyHelperCreateBlockerFromComponent(
        __int64 a1,
        __int128 *a2,
        struct _DEVICE_OBJECT *a3,
        int a4,
        __int64 *a5)
{
  __int64 Pool2; // rax
  __int64 v10; // rdi
  int DeviceFriendlyName; // ebx
  __int128 v12; // xmm0

  if ( a1 && a2 && a3 && a5 )
  {
    Pool2 = ExAllocatePool2(0x100uLL, 0x60uLL, *(_DWORD *)(a1 + 24));
    v10 = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 8) = 0;
      *(_QWORD *)Pool2 = a1;
      v12 = *a2;
      *(_QWORD *)(Pool2 + 32) = a3;
      *(_DWORD *)(Pool2 + 44) = a4;
      *(_OWORD *)(Pool2 + 16) = v12;
      *(_DWORD *)(Pool2 + 40) = 52428;
      *(_BYTE *)(Pool2 + 88) = 1;
      DeviceFriendlyName = SshpGenerateDeviceFriendlyName(a3);
      if ( DeviceFriendlyName < 0
        || (DeviceFriendlyName = SshpGenerateDeviceVerboseDescription(a3), DeviceFriendlyName < 0) )
      {
        SleepstudyHelperDestroyBlockerBuilder(v10);
      }
      else
      {
        *a5 = v10;
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)DeviceFriendlyName;
}
