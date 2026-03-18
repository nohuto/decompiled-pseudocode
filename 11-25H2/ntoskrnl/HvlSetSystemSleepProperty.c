/*
 * XREFs of HvlSetSystemSleepProperty @ 0x140584F60
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14026D230 (HvcallInitiateHypercall.c)
 *     HvlpReleaseHypercallPage @ 0x14026D310 (HvlpReleaseHypercallPage.c)
 *     HvlpAcquireHypercallPage @ 0x140467900 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlSetSystemSleepProperty(int a1, char a2, char a3)
{
  _QWORD *v6; // rax
  __int128 v8; // [rsp+20h] [rbp-88h] BYREF
  __int64 v9; // [rsp+30h] [rbp-78h]
  __int64 v10; // [rsp+38h] [rbp-70h]
  __int64 v11; // [rsp+40h] [rbp-68h] BYREF

  v8 = 0LL;
  v9 = 0LL;
  LODWORD(v10) = 0;
  v6 = HvlpAcquireHypercallPage((__int64)&v8, 1, (__int64)&v11, 40LL);
  *(_DWORD *)v6 = 3;
  *((_DWORD *)v6 + 2) = a1;
  *((_BYTE *)v6 + 12) = a2;
  *((_BYTE *)v6 + 13) = a3;
  LOWORD(a1) = HvcallInitiateHypercall(111);
  HvlpReleaseHypercallPage((unsigned int *)&v8);
  return (_WORD)a1 != 0 ? 0xC0000001 : 0;
}
