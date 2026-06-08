/*
 * XREFs of sub_140030E90 @ 0x140030E90
 * Callers:
 *     sub_140030C8C @ 0x140030C8C (sub_140030C8C.c)
 *     sub_140030F80 @ 0x140030F80 (sub_140030F80.c)
 * Callees:
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 */

NTSTATUS __fastcall sub_140030E90(__int64 a1)
{
  NTSTATUS result; // eax
  int v3; // [rsp+20h] [rbp-A8h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+24h] [rbp-A4h] BYREF
  __int64 v5; // [rsp+28h] [rbp-A0h]
  int v6; // [rsp+80h] [rbp-48h]

  sub_140010680((char *)&v3, 0, 0x88uLL);
  result = KeGetProcessorNumberFromIndex(*(_DWORD *)(a1 + 56), &ProcNumber);
  if ( result >= 0 )
  {
    v3 = 82;
    v5 = a1 + 1120;
    v6 = 1;
    return ((__int64 (__fastcall *)(int *))qword_140019488)(&v3);
  }
  return result;
}
