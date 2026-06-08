/*
 * XREFs of sub_14000F960 @ 0x14000F960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140040F94 @ 0x140040F94 (sub_140040F94.c)
 *     sub_1400457E0 @ 0x1400457E0 (sub_1400457E0.c)
 */

void __fastcall sub_14000F960(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  __int64 v2; // rdi
  unsigned int *v3; // rbx
  unsigned int v4; // esi
  char v5; // bl

  do
  {
    (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2528))(qword_140019128, qword_1400197B8);
    v2 = qword_1400191D8;
    LOBYTE(word_1400197CC) = 0;
    (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2536))(qword_140019128, qword_1400197B8);
    do
    {
      v3 = *(unsigned int **)(v2 - 40);
      v4 = *(_DWORD *)(v2 + 40);
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
      if ( v4 != v3[185] )
      {
        sub_140040F94(v3, v3[116], v3[128], v4);
        sub_1400457E0(v3);
      }
      (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
      (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2528))(qword_140019128, qword_1400197B8);
      v2 = *(_QWORD *)v2;
      (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2536))(qword_140019128, qword_1400197B8);
    }
    while ( (__int64 *)v2 != &qword_1400191D8 );
    v5 = 1;
    (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2528))(qword_140019128, qword_1400197B8);
    if ( !(_BYTE)word_1400197CC )
    {
      word_1400197CC = 0;
      v5 = 0;
    }
    (*(void (__fastcall **)(__int64, __int64))(qword_140019120 + 2536))(qword_140019128, qword_1400197B8);
  }
  while ( v5 );
}
