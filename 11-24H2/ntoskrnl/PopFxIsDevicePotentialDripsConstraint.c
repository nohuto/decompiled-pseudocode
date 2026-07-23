/*
 * XREFs of PopFxIsDevicePotentialDripsConstraint @ 0x1404961FC
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     IoGetDevicePropertyData @ 0x1409C0320 (IoGetDevicePropertyData.c)
 */

bool __fastcall PopFxIsDevicePotentialDripsConstraint(PVOID Object)
{
  bool v1; // di
  __int64 v3; // rbx
  KIRQL v5; // dl
  ULONG RequiredSize; // [rsp+40h] [rbp-38h] BYREF
  ULONG Type; // [rsp+44h] [rbp-34h] BYREF
  __int64 Str1; // [rsp+48h] [rbp-30h] BYREF

  Str1 = 0LL;
  v1 = 0;
  RequiredSize = 0;
  Type = 0;
  ObfReferenceObjectWithTag(Object, 0x78466F50u);
  if ( Object )
  {
    v3 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
    if ( v3 )
    {
      v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 88));
      _m_prefetchw((const void *)(v3 + 296));
      if ( (_InterlockedOr((volatile signed __int32 *)(v3 + 296), 0) & 4) != 0 )
        v1 = (_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v3 + 80) + 864LL), 0, 0) & 0x10) != 0;
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 88), v5);
      if ( !v1
        && IoGetDevicePropertyData(
             *(PDEVICE_OBJECT *)(v3 + 32),
             &DEVPKEY_Device_EnumeratorName,
             0,
             0,
             8u,
             &Str1,
             &RequiredSize,
             &Type) >= 0
        && Type == 18
        && RequiredSize > 2
        && !*((_WORD *)&Type + ((unsigned __int64)RequiredSize >> 1) + 1) )
      {
        v1 = wcsicmp((const wchar_t *)&Str1, L"USB") == 0;
      }
    }
  }
  ObfDereferenceObjectWithTag(Object, 0x78466F50u);
  return v1;
}
