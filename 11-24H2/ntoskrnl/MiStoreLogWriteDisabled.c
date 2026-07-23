/*
 * XREFs of MiStoreLogWriteDisabled @ 0x1404A368C
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall MiStoreLogWriteDisabled(int a1, int a2)
{
  int v3; // [rsp+20h] [rbp-88h]
  int v4; // [rsp+28h] [rbp-80h]
  int v5; // [rsp+40h] [rbp-68h] BYREF
  int v6; // [rsp+44h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+50h] [rbp-58h] BYREF
  int *v8; // [rsp+70h] [rbp-38h]
  int v9; // [rsp+78h] [rbp-30h]
  int v10; // [rsp+7Ch] [rbp-2Ch]
  int *v11; // [rsp+80h] [rbp-28h]
  int v12; // [rsp+88h] [rbp-20h]
  int v13; // [rsp+8Ch] [rbp-1Ch]

  if ( *(_QWORD *)&qword_140E37658
    && **(_DWORD **)&qword_140E37658 > 5u
    && (*(_BYTE *)(*(_QWORD *)&qword_140E37658 + 16LL) & 2) != 0
    && (*(_QWORD *)(*(_QWORD *)&qword_140E37658 + 24LL) & 2LL) == *(_QWORD *)(*(_QWORD *)&qword_140E37658 + 24LL) )
  {
    v10 = 0;
    v13 = 0;
    v8 = &v5;
    v11 = &v6;
    v5 = a1;
    v9 = 4;
    v6 = a2;
    v12 = 4;
    tlgWriteEx_EtwWriteEx(
      *(__int64 *)&qword_140E37658,
      (unsigned __int8 *)&byte_140058AED,
      *(__int64 *)&qword_140E37658,
      1u,
      v3,
      v4,
      4u,
      &v7);
  }
}
