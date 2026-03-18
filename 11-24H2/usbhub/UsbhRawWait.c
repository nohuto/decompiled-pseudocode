/*
 * XREFs of UsbhRawWait @ 0x14001A244
 * Callers:
 *     UsbhPortResumeComplete @ 0x1400191B0 (UsbhPortResumeComplete.c)
 *     UsbhPortConnect @ 0x140019BF0 (UsbhPortConnect.c)
 *     UsbhWait @ 0x14001A1D4 (UsbhWait.c)
 *     UsbhAddDevice @ 0x14004EA90 (UsbhAddDevice.c)
 * Callees:
 *     UsbhHighResWait @ 0x14001A35C (UsbhHighResWait.c)
 */

void __fastcall UsbhRawWait(unsigned int a1)
{
  __int64 v1; // rdi
  LARGE_INTEGER v2; // rax
  __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  union _LARGE_INTEGER v5; // rcx
  LARGE_INTEGER v6; // rcx
  bool v7; // cc
  __int64 v8; // rax
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp+10h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v11; // [rsp+58h] [rbp+20h]

  if ( a1 )
  {
    PerformanceFrequency.QuadPart = 0LL;
    v1 = (int)a1;
    if ( dword_14006F714 != 1 || !(unsigned __int8)UsbhHighResWait(a1) )
    {
      v2 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v3 = ((unsigned __int64)(PerformanceFrequency.QuadPart * v1) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
      v4 = v2.QuadPart + ((v3 + ((unsigned __int64)(PerformanceFrequency.QuadPart * v1 - v3) >> 1)) >> 9);
      v11 = v4;
      for ( v5.QuadPart = -10000 * (int)v1; ; v5.QuadPart = -10000 * v8 )
      {
        for ( Interval = v5; ; Interval.QuadPart = -10000LL )
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
          v7 = v6.HighPart <= SHIDWORD(v11);
          if ( v6.HighPart == HIDWORD(v11) )
          {
            if ( v6.LowPart >= (unsigned int)v4 )
              return;
            v7 = v6.HighPart <= SHIDWORD(v11);
          }
          if ( !v7 )
            return;
          v8 = (__int64)(v4 - v6.QuadPart) / (__int64)(PerformanceFrequency.QuadPart / 0x3E8uLL);
          PerformanceFrequency.QuadPart /= 0x3E8uLL;
          if ( (unsigned int)v8 | ((unsigned __int64)((__int64)(v4 - v6.QuadPart) / PerformanceFrequency.QuadPart) >> 32) )
            break;
        }
      }
    }
  }
}
