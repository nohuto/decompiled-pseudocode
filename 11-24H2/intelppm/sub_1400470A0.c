/*
 * XREFs of sub_1400470A0 @ 0x1400470A0
 * Callers:
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140027BB0 @ 0x140027BB0 (sub_140027BB0.c)
 *     sub_14002FAF0 @ 0x14002FAF0 (sub_14002FAF0.c)
 *     sub_140034388 @ 0x140034388 (sub_140034388.c)
 */

__int64 __fastcall sub_1400470A0(__int64 a1)
{
  int v2; // eax
  int v3; // edx
  int v4; // edi
  unsigned __int16 v5; // r9
  unsigned __int8 v6; // dl
  struct _DEVICE_OBJECT *v7; // r8
  __int64 v8; // r9
  PVOID v9; // rcx
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  __int64 v12; // rbx
  int v14; // [rsp+28h] [rbp-10h]
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(qword_140019120 + 2504))(
    qword_140019128,
    *(_QWORD *)(a1 + 208),
    0LL);
  P = 0LL;
  v2 = sub_140027BB0(a1, (__int64)&P);
  v4 = v2;
  if ( v2 >= 0 )
  {
    v4 = sub_14002FAF0((__int64)P, *(const wchar_t **)(a1 + 64));
    if ( v4 >= 0 )
    {
      v9 = P;
      v4 = 0;
      P = 0LL;
      v10 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 544) = v9;
      sub_140034388((__int64)v9, v10, v7, v8);
      goto LABEL_12;
    }
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x80000u);
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      goto LABEL_12;
    v5 = 12;
    v6 = 2;
LABEL_7:
    v14 = v4;
    sub_1400050F8((__int64)off_140018050->DeviceExtension, v6, 3u, v5, (__int64)&unk_140013150, v14);
    goto LABEL_12;
  }
  P = 0LL;
  if ( v2 != -1073741772 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      goto LABEL_12;
    v5 = 11;
    v6 = 3;
    goto LABEL_7;
  }
  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    LOBYTE(v3) = 4;
    sub_140003D28(off_140018050->DeviceExtension, v3, 2, 10, (__int64)&unk_140013150);
  }
LABEL_12:
  (*(void (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2512))(qword_140019128, *(_QWORD *)(a1 + 208));
  if ( v4 < 0 )
    *(_QWORD *)(a1 + 280) &= 0xFFFDE1FFFFFFFFFFuLL;
  v11 = P;
  if ( P )
  {
    v12 = 0LL;
    if ( *((_DWORD *)P + 4) )
    {
      do
      {
        if ( *(_QWORD *)&v11[20 * v12 + 24] )
        {
          RtlFreeUnicodeString((PUNICODE_STRING)&v11[20 * v12 + 22]);
          v11 = P;
        }
        v12 = (unsigned int)(v12 + 1);
      }
      while ( (unsigned int)v12 < v11[4] );
    }
    ExFreePoolWithTag(v11, 0);
  }
  return (unsigned int)v4;
}
