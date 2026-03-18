/*
 * XREFs of ACPICMLidWorker @ 0x1400241F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 *     WPP_RECORDER_SF_Lqss @ 0x14001E4C0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIButtonEvent @ 0x14002433C (ACPIButtonEvent.c)
 */

__int64 __fastcall ACPICMLidWorker(__int64 a1, char a2)
{
  char v2; // di
  __int64 result; // rax
  BOOL v6; // edi
  KIRQL v7; // al
  __int64 v8; // r8
  __int64 v9; // r9
  const char *v10; // rcx
  const char *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0;
  v13 = 0LL;
  result = ACPIGet(a1, 1145654367, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v13, 0LL);
  if ( (int)result < 0 )
  {
    v10 = byte_140075488;
    v11 = byte_140075488;
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 8);
      v2 = a1;
      if ( (v12 & 0x200000000000LL) != 0 )
      {
        v10 = *(const char **)(a1 + 608);
        if ( (v12 & 0x400000000000LL) != 0 )
          v11 = *(const char **)(a1 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return WPP_RECORDER_SF_Lqss(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               2u,
               0x11u,
               0x18u,
               (__int64)&WPP_14d801cc74893723bea673682ddc6690_Traceguids,
               result,
               v2,
               v10,
               v11);
  }
  else
  {
    v6 = v13 != 0;
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
    *(_BYTE *)(a1 + 192) = v6;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 184), v7);
    return ACPIButtonEvent(*(_QWORD *)(a1 + 768), (v6 ? 0x80000000 : 4) | (((a2 & 1) + 2) << 18), v8, v9);
  }
  return result;
}
