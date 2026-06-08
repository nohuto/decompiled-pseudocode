/*
 * XREFs of sub_14000806C @ 0x14000806C
 * Callers:
 *     sub_140007344 @ 0x140007344 (sub_140007344.c)
 * Callees:
 *     sub_1400082E8 @ 0x1400082E8 (sub_1400082E8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

signed __int64 __fastcall sub_14000806C(__int64 a1, signed __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  int v5; // ecx
  unsigned int v6; // r9d
  signed __int64 v7; // rdi
  unsigned int v8; // r8d
  signed __int64 v9; // rax
  __int64 v11; // [rsp+30h] [rbp+8h]
  unsigned __int64 v12; // [rsp+30h] [rbp+8h]
  int v13; // [rsp+40h] [rbp+18h] BYREF
  int v14; // [rsp+44h] [rbp+1Ch]

  v14 = HIDWORD(a3);
  v3 = 0;
  v13 = 0;
  if ( qword_140018EB8 )
    v3 = qword_140018EB8();
  v11 = sub_1400082E8(a1, &v13);
  v5 = v11;
  v6 = HIDWORD(v11);
  while ( 1 )
  {
    HIDWORD(v12) = HIDWORD(a2);
    v7 = a2;
    if ( (a2 & 8) != 0 )
    {
      v8 = a2;
    }
    else
    {
      v8 = (v13 != 0 ? 8 : 0) | v5 & 0x3F800 | a2 & 0xFFFC07F7;
      v12 = __PAIR64__(v6, v8);
      v7 = __PAIR64__(v6, v8);
    }
    if ( (a2 & 4) == 0 )
    {
      LODWORD(v12) = v8 & 0xFFFFFBFF | v5 & 0x400 | 4;
      v7 = v12;
    }
    v9 = _InterlockedCompareExchange64(&qword_140021DE8, v7, a2);
    if ( a2 == v9 )
      break;
    a2 = v9;
  }
  if ( (a2 & 4) == 0 && qword_140018E88 )
    qword_140018E88(&qword_140021DE8, 3LL, v3);
  return v7;
}
