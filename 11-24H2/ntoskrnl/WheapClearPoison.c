/*
 * XREFs of WheapClearPoison @ 0x1407C820C
 * Callers:
 *     WheapAttemptPhysicalPageOffline @ 0x1407C7DBC (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     MmUnmapIoSpace @ 0x1402929D0 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 *     WheaLogInternalEvent @ 0x14065C840 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MmAddPhysicalMemory @ 0x1407EAAA0 (MmAddPhysicalMemory.c)
 *     MmRemovePhysicalMemory @ 0x1407EABA0 (MmRemovePhysicalMemory.c)
 */

__int64 __fastcall WheapClearPoison(PPHYSICAL_ADDRESS StartAddress)
{
  int v2; // ebx
  void *v3; // rax
  __int64 v4; // rdx
  LARGE_INTEGER StartAddressa; // [rsp+20h] [rbp-40h] BYREF
  LARGE_INTEGER NumberOfBytes; // [rsp+28h] [rbp-38h] BYREF
  _DWORD Src[8]; // [rsp+30h] [rbp-30h] BYREF
  LONGLONG QuadPart; // [rsp+50h] [rbp-10h]

  StartAddressa = *StartAddress;
  StartAddressa.LowPart |= 1u;
  NumberOfBytes.QuadPart = 4096LL;
  if ( MmRemovePhysicalMemory(&StartAddressa, &NumberOfBytes) >= 0 )
  {
    v3 = (void *)MmMapIoSpaceEx(StartAddress->QuadPart, 64LL, 4LL);
    if ( v3 )
    {
      __asm { clzero }
      _mm_mfence();
      MmUnmapIoSpace(v3, 0x40uLL);
      v2 = 0;
    }
    else
    {
      v2 = -1073741823;
    }
    MmAddPhysicalMemory(StartAddress, &NumberOfBytes);
    if ( v2 >= 0 && KeGetCurrentIrql() <= 2u )
    {
      QuadPart = StartAddress->QuadPart;
      Src[0] = 1733060695;
      Src[1] = 1;
      Src[2] = 40;
      Src[3] = 1;
      Src[5] = -2147483630;
      Src[4] = 541868360;
      Src[6] = 2;
      Src[7] = 8;
      WheaLogInternalEvent(Src, v4);
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v2;
}
