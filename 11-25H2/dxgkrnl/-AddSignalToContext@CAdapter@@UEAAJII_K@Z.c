/*
 * XREFs of ?AddSignalToContext@CAdapter@@UEAAJII_K@Z @ 0x1400990A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkSignalSynchronizationObjectInternal @ 0x1402A8CDC (DxgkSignalSynchronizationObjectInternal.c)
 */

__int64 __fastcall CAdapter::AddSignalToContext(CAdapter *this, unsigned int a2, int a3, __int64 a4)
{
  __int64 v7; // r8
  _QWORD v9[58]; // [rsp+20h] [rbp-1E8h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[0] = a2 | 0x100000000LL;
  LODWORD(v9[1]) = a3;
  v9[50] = a4;
  return ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64, _QWORD))DxgkSignalSynchronizationObjectInternal)(
           v9,
           0LL,
           v7,
           0LL);
}
