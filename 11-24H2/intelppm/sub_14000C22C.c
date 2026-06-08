/*
 * XREFs of sub_14000C22C @ 0x14000C22C
 * Callers:
 *     sub_1400287E4 @ 0x1400287E4 (sub_1400287E4.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14000C22C(_QWORD *a1)
{
  _QWORD *v2; // rax
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = 0LL;
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019798, 0LL);
  while ( 1 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2528))(qword_140019128, qword_140019790);
    if ( KeWaitForSingleObject(&Event, Executive, 0, 0, &Timeout) >= 0 )
      break;
    (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2536))(qword_140019128, qword_140019790);
  }
  v2 = (_QWORD *)qword_1400197A8;
  if ( *(__int64 **)qword_1400197A8 != &qword_1400197A0 )
    __fastfail(3u);
  *a1 = &qword_1400197A0;
  a1[1] = v2;
  *v2 = a1;
  ++dword_1400197B0;
  qword_1400197A8 = (__int64)a1;
  (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2536))(qword_140019128, qword_140019790);
  return (*(__int64 (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019798);
}
