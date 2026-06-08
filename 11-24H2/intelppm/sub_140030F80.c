/*
 * XREFs of sub_140030F80 @ 0x140030F80
 * Callers:
 *     sub_140030450 @ 0x140030450 (sub_140030450.c)
 *     sub_140030B50 @ 0x140030B50 (sub_140030B50.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140030E90 @ 0x140030E90 (sub_140030E90.c)
 *     sub_140037C28 @ 0x140037C28 (sub_140037C28.c)
 */

__int64 __fastcall sub_140030F80(__int64 a1)
{
  _DWORD *v2; // r9
  __int64 i; // rdx
  NTSTATUS v4; // ebx

  (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
  v2 = *(_DWORD **)(a1 + 1144);
  if ( v2 && *v2 )
  {
    for ( i = 0LL; (unsigned int)i < *v2; i = (unsigned int)(i + 1) )
    {
      if ( (v2[3 * i + 1] & 0x200) == 0 )
      {
        v4 = -1073741637;
        goto LABEL_13;
      }
    }
    v4 = sub_140030E90(a1);
    if ( v4 >= 0 )
    {
      if ( !*(_BYTE *)(a1 + 720) )
      {
        *(_BYTE *)(a1 + 720) = 1;
        sub_140037C28(a1);
      }
      v4 = 0;
    }
  }
  else
  {
    v4 = -1073741823;
  }
LABEL_13:
  (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
  return (unsigned int)v4;
}
