/*
 * XREFs of PopDirectedDripsUmDirectedFxAddTestDevice @ 0x140764184
 * Callers:
 *     PopDirectedDripsUmPowerInformationInternal @ 0x1406F6004 (PopDirectedDripsUmPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     RtlInsertElementGenericTableAvl @ 0x1403E40F0 (RtlInsertElementGenericTableAvl.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopDirectedDripsUmCreateTestDevice @ 0x1407640C4 (PopDirectedDripsUmCreateTestDevice.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopDirectedDripsUmDirectedFxAddTestDevice(unsigned int a1, __int64 a2)
{
  PVOID v2; // rdi
  int v4; // ebx
  unsigned int v5; // r10d
  unsigned __int64 v6; // rdx
  BOOLEAN NewElement; // [rsp+30h] [rbp+8h] BYREF
  CLONG BufferSize; // [rsp+40h] [rbp+18h] BYREF
  PVOID Buffer; // [rsp+48h] [rbp+20h] BYREF

  BufferSize = 0;
  v2 = 0LL;
  NewElement = 0;
  Buffer = 0LL;
  if ( a1 >= 0x10 )
  {
    v5 = *(_DWORD *)(a2 + 12);
    v6 = 2LL * v5;
    if ( v6 > 0xFFFFFFFF || (unsigned int)v6 > a1 - 16 )
    {
      v4 = -1073741811;
    }
    else
    {
      v4 = PopDirectedDripsUmCreateTestDevice(v5, (_WORD *)(a2 + 16), &Buffer, &BufferSize);
      if ( v4 < 0 )
      {
        v2 = Buffer;
      }
      else
      {
        PopAcquireRwLockExclusive((unsigned __int64 *)&PopDirectedDripsUmLock);
        v2 = Buffer;
        if ( RtlInsertElementGenericTableAvl(&PopDirectedDripsUmTestDeviceTable, Buffer, BufferSize, &NewElement) )
        {
          if ( NewElement )
          {
            _InterlockedIncrement(&PopDirectedDripsUmTestDeviceCount);
            v2 = Buffer;
            v4 = 0;
          }
          else
          {
            v4 = -1073740008;
          }
        }
        else
        {
          v4 = -1073741670;
        }
        PopReleaseRwLock(&PopDirectedDripsUmLock);
      }
    }
    if ( v2 )
      ExFreePoolWithTag(v2, 0x4D554444u);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
