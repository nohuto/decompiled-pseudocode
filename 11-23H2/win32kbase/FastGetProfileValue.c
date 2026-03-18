/*
 * XREFs of FastGetProfileValue @ 0x1C0061950
 * Callers:
 *     InitScancodeMap @ 0x1C00613A0 (InitScancodeMap.c)
 *     ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1C006178C (-CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     OpenCacheKeyEx @ 0x1C00371E0 (OpenCacheKeyEx.c)
 *     RtlLoadStringOrError @ 0x1C0061FA0 (RtlLoadStringOrError.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 */

__int64 __fastcall FastGetProfileValue(
        const UNICODE_STRING *a1,
        unsigned int a2,
        const WCHAR *a3,
        const void *a4,
        void *a5,
        unsigned int Size,
        int a7)
{
  const WCHAR *v9; // r14
  void *i; // rax
  unsigned __int64 v12; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v13; // rcx
  void *v14; // rsi
  ULONG *QuotaZInit; // rbx
  NTSTATUS v16; // eax
  ULONG Length; // [rsp+30h] [rbp-91h] BYREF
  int v19; // [rsp+34h] [rbp-8Dh] BYREF
  unsigned int v20; // [rsp+38h] [rbp-89h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-81h] BYREF
  __int128 v22; // [rsp+50h] [rbp-71h] BYREF
  _WORD v23[40]; // [rsp+60h] [rbp-61h] BYREF

  v20 = a2;
  Length = 0;
  v19 = gdwPolicyFlags | a7;
  v9 = a3;
  DestinationString = 0LL;
  v22 = 0LL;
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v23[0] = 0;
    RtlLoadStringOrError((unsigned __int16)a3, v23);
    v9 = v23;
  }
  for ( i = OpenCacheKeyEx(a1, a2, 131097LL, &v19); ; i = OpenCacheKeyEx(a1, v20, 131097LL, &v19) )
  {
    v14 = i;
    if ( !i )
    {
      if ( (a7 & 0x10) == 0 )
      {
LABEL_13:
        if ( v14 )
          ZwClose(v14);
        if ( a4 )
        {
          memmove(a5, a4, Size);
          return Size;
        }
      }
      return 0LL;
    }
    if ( Size )
    {
      Length = Size + 12;
      QuotaZInit = (ULONG *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                              v13,
                              v12,
                              Size + 12,
                              0x72707355u);
      if ( !QuotaZInit )
        goto LABEL_13;
    }
    else
    {
      Length = 16;
      QuotaZInit = (ULONG *)&v22;
    }
    RtlInitUnicodeString(&DestinationString, v9);
    v16 = ZwQueryValueKey(v14, &DestinationString, KeyValuePartialInformation, QuotaZInit, Length, &Length);
    if ( v16 >= 0 )
      break;
    if ( v16 == -2147483643 && !Size )
    {
      ZwClose(v14);
      return QuotaZInit[2];
    }
    if ( !v19 )
    {
      if ( Size && QuotaZInit )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, QuotaZInit);
      goto LABEL_13;
    }
    if ( Size && QuotaZInit )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, QuotaZInit);
    ZwClose(v14);
  }
  Length = QuotaZInit[2];
  memmove(a5, QuotaZInit + 3, Length);
  if ( Size )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, QuotaZInit);
  ZwClose(v14);
  return Length;
}
