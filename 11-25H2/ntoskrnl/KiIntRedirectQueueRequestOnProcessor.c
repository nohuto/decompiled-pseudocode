/*
 * XREFs of KiIntRedirectQueueRequestOnProcessor @ 0x140377540
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x140279DF0 (KiCallInterruptServiceRoutine.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140288640 (HalpInterruptSendIpi.c)
 *     KeIsEmptyAffinityEx @ 0x140377880 (KeIsEmptyAffinityEx.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KiIntRedirectQueueRequestOnProcessor(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  ULONG_PTR v3; // rbx
  unsigned int v4; // r8d
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 result; // rax
  _DWORD v9[2]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v10; // [rsp+38h] [rbp-C8h]
  int v11; // [rsp+40h] [rbp-C0h]
  _DWORD v12[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v13[33]; // [rsp+58h] [rbp-A8h] BYREF

  v3 = (unsigned int)BugCheckParameter3;
  memset_0(v13, 0, 0x100uLL);
  v12[1] = 0;
  v12[0] = 2097153;
  memset_0(v13, 0, 0x100uLL);
  v4 = *((_DWORD *)KiGlobalState + v3) & 0x3F;
  v5 = *((_DWORD *)KiGlobalState + v3) >> 6;
  if ( !(_DWORD)v5 )
    goto LABEL_2;
  if ( HIWORD(v12[0]) > (unsigned int)v5 )
  {
    LOWORD(v12[0]) = v5 + 1;
LABEL_2:
    v6 = (unsigned int)v5;
    v7 = v13[v5];
    _bittestandset64(&v7, v4);
    v13[v6] = v7;
  }
  v11 = 0;
  v9[1] = 0;
  if ( (unsigned int)KeIsEmptyAffinityEx(v12) )
  {
    LODWORD(result) = -1073741811;
LABEL_9:
    KeBugCheckEx(0xA0u, 0x4001uLL, 0x103uLL, v3, (int)result);
  }
  v9[0] = 2;
  v10 = v12;
  result = HalpInterruptSendIpi(v9, a2);
  if ( (int)result < 0 )
    goto LABEL_9;
  return result;
}
