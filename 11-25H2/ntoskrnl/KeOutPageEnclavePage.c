/*
 * XREFs of KeOutPageEnclavePage @ 0x1405B69E8
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1403FC4C8 (MiDecommitHardwareEnclavePages.c)
 * Callees:
 *     KiEnclsStatus @ 0x1403FCA0C (KiEnclsStatus.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     KiEncls @ 0x14069FC30 (KiEncls.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KeOutPageEnclavePage(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 v8; // [rsp+A0h] [rbp+0h] BYREF

  memset_0((void *)(((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFF80uLL) + 128), 0, 0x80uLL);
  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  *(_QWORD *)((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFF80uLL) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFF80uLL) + 0x18) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFF80uLL) + 0x10) = ((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFF80uLL)
                                                                      + 128;
  *(_QWORD *)(((unsigned __int64)&v8 & 0xFFFFFFFFFFFFFF80uLL) + 8) = a2;
  v6 = KiEncls(11LL, (unsigned __int64)&v8 & 0xFFFFFFFFFFFFFF80uLL, a1, a3);
  return KiEnclsStatus(v6);
}
