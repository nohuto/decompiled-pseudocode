/*
 * XREFs of sub_140046FD0 @ 0x140046FD0
 * Callers:
 *     sub_14000DAA4 @ 0x14000DAA4 (sub_14000DAA4.c)
 *     sub_1400359D0 @ 0x1400359D0 (sub_1400359D0.c)
 *     sub_140037080 @ 0x140037080 (sub_140037080.c)
 *     sub_1400373A8 @ 0x1400373A8 (sub_1400373A8.c)
 *     sub_1400385B0 @ 0x1400385B0 (sub_1400385B0.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_14003A5F4 @ 0x14003A5F4 (sub_14003A5F4.c)
 */

__int64 __fastcall sub_140046FD0(__int64 a1, __int64 *a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 result; // rax

  *a2 = a1;
  *(_QWORD *)(a3 + 8) = a2;
  if ( *(_DWORD *)(a1 + 80) )
  {
    *(_DWORD *)a3 = *(_DWORD *)(a1 + 84);
    *(_DWORD *)(a3 + 28) = *(_DWORD *)(a1 + 80);
  }
  else
  {
    *(_DWORD *)a3 = *(_DWORD *)(a1 + 56);
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x23u) )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019170, 0LL);
      sub_14003A5F4(a1, (__int64)a2, 0);
      (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019170);
    }
  }
  *(_DWORD *)(a3 + 20) = *(_DWORD *)(a1 + 736);
  result = a5;
  *(_DWORD *)(a3 + 16) = a4;
  *(_DWORD *)(a3 + 24) = a5;
  return result;
}
