/*
 * XREFs of sub_140033CF0 @ 0x140033CF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003A78 @ 0x140003A78 (sub_140003A78.c)
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400042E0 @ 0x1400042E0 (sub_1400042E0.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140040970 @ 0x140040970 (sub_140040970.c)
 *     sub_140040F94 @ 0x140040F94 (sub_140040F94.c)
 */

__int64 __fastcall sub_140033CF0(__int64 a1, struct _IO_WORKITEM *a2)
{
  char v3; // si
  int v4; // edx
  __int64 v5; // rdi
  __int64 result; // rax
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  v3 = 0;
  IoFreeWorkItem(a2);
  v5 = *(_QWORD *)(a1 + 64);
  if ( (*(_DWORD *)(v5 + 280) & 0x3000000) != 0 )
  {
    if ( (int)sub_140040970(*(_QWORD *)(a1 + 64), &v7) >= 0 )
    {
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(qword_140019120 + 2504))(qword_140019128, qword_140019158, 0LL);
      v3 = 1;
      sub_140040F94(v5, *(unsigned int *)(v5 + 464), v7, 100LL);
      ((void (__fastcall *)(__int64))qword_140019698)(v5);
    }
  }
  else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    LOBYTE(v4) = 2;
    sub_140003D28(off_140018050->DeviceExtension, v4, 1, 91, (__int64)&unk_140012FE8);
  }
  v7 = *(_DWORD *)(v5 + 512);
  sub_140003A78((ULONG *)v5, &stru_1400144B0, &stru_140014300, 4, (__int64)&v7);
  result = sub_1400042E0((_QWORD *)(v5 + 696), v5 + 512);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(qword_140019120 + 2512))(qword_140019128, qword_140019158);
  return result;
}
