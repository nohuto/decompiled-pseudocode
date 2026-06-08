/*
 * XREFs of sub_14003E4A0 @ 0x14003E4A0
 * Callers:
 *     sub_14002E7F4 @ 0x14002E7F4 (sub_14002E7F4.c)
 *     sub_140030C8C @ 0x140030C8C (sub_140030C8C.c)
 *     sub_140037AD0 @ 0x140037AD0 (sub_140037AD0.c)
 *     sub_14003814C @ 0x14003814C (sub_14003814C.c)
 *     sub_14003CF60 @ 0x14003CF60 (sub_14003CF60.c)
 *     sub_14003DDFC @ 0x14003DDFC (sub_14003DDFC.c)
 *     sub_14003E0E8 @ 0x14003E0E8 (sub_14003E0E8.c)
 *     sub_14003E448 @ 0x14003E448 (sub_14003E448.c)
 * Callees:
 *     sub_140003BC4 @ 0x140003BC4 (sub_140003BC4.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140033E48 @ 0x140033E48 (sub_140033E48.c)
 */

__int64 __fastcall sub_14003E4A0(
        __int64 a1,
        char *a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 *a5,
        char *a6,
        _BYTE *a7,
        __int64 a8)
{
  void (__fastcall *v9)(_QWORD *, __int64, _QWORD *); // r13
  __int64 v12; // r10
  int v13; // ecx
  char v15; // cl
  const char *v16; // rdx
  __int64 v17; // xmm1_8
  void *v18; // rdx
  int v19; // ecx
  char v20; // r8
  __int64 (*v21)(); // r9
  unsigned __int16 v22; // r9
  unsigned __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  unsigned int v26; // [rsp+50h] [rbp-20h]
  __int64 v27; // [rsp+60h] [rbp-10h] BYREF
  int v28; // [rsp+68h] [rbp-8h]
  int v30; // [rsp+C0h] [rbp+50h]

  v9 = 0LL;
  v26 = -1073741823;
  *a5 = 0LL;
  v12 = a1;
  if ( a3 == -1 )
  {
    v30 = 3;
  }
  else
  {
    v13 = a3;
    if ( a3 >= 3 )
      v13 = 3;
    v30 = v13;
  }
  if ( !qword_140019328 )
  {
LABEL_12:
    v15 = *a2;
    v16 = (const char *)&unk_140012AF0;
    if ( a3 != -1 )
      v16 = (const char *)&unk_140012AF4;
    if ( v15 == 127 )
    {
      if ( a2[1] != 1 )
      {
        if ( a3 != 1 && (a3 != -1 || (*(_QWORD *)(v12 + 280) & 0x20E0000000000LL) == 0) )
        {
          if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
            return v26;
          v22 = 14;
LABEL_48:
          sub_140003BC4((__int64)off_140018050->DeviceExtension, 2u, 1u, v22, (__int64)&unk_140012BD0, v16);
          return v26;
        }
        v17 = *(_QWORD *)a2;
        v18 = sub_140005D70;
        v19 = *((_DWORD *)a2 + 2);
        *a5 &= 0xFF0FFFFFFFFFFFFFuLL;
        v20 = 1;
        goto LABEL_18;
      }
      if ( a2[2] != 1 )
      {
        if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
          return v26;
        v22 = 13;
        goto LABEL_48;
      }
      v19 = *((_DWORD *)a2 + 2);
      v17 = *(_QWORD *)a2;
      v27 = *(_QWORD *)a2;
      if ( HIDWORD(v27) )
      {
        LODWORD(v27) = 134219777;
        v19 = 0;
        v17 = v27;
      }
      v18 = sub_14000A110;
      v20 = 1;
      v23 = *a5 & 0xFF0FFFFFFFFFFFFFuLL | 0x10000000000000LL;
    }
    else
    {
      if ( v15 != 1 )
      {
        if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
          return v26;
        v22 = 16;
        goto LABEL_48;
      }
      if ( a3 < 2 )
      {
        if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
          return v26;
        v22 = 15;
        goto LABEL_48;
      }
      if ( a3 != 2 && a3 != -1 )
      {
        v24 = *((_DWORD *)a2 + 2);
        v27 = *(_QWORD *)a2;
        v28 = v24;
        sub_140033E48(&v27);
        v21 = sub_140009FE0;
        v17 = v27;
        v18 = sub_140009EE0;
        v20 = 0;
        v9 = sub_14000A060;
        v19 = v28;
        *a5 = *a5 & 0xF40FFFFFFFFFFFFFuLL | 0xB20000000000000LL;
        *(_WORD *)a5 = WORD2(v27);
        goto LABEL_19;
      }
      v25 = *((_DWORD *)a2 + 2);
      v27 = *(_QWORD *)a2;
      v28 = v25;
      sub_140033E48(&v27);
      v18 = sub_140009E10;
      v17 = v27;
      v20 = 0;
      v23 = *a5 & 0xFB0FFFFFFFFFFFFFuLL | 0x420000000000000LL;
      v19 = v28;
    }
    *a5 = v23;
    v9 = sub_14000A060;
    *(_WORD *)a5 = WORD2(v27);
LABEL_18:
    v21 = 0LL;
LABEL_19:
    v26 = 0;
    if ( a8 )
    {
      *(_QWORD *)(a8 + 32) = v17;
      *(_DWORD *)(a8 + 40) = v19;
      *(_BYTE *)(a8 + 80) = 1;
      *(_QWORD *)(a8 + 16) = v21;
      *(_QWORD *)(a8 + 24) = v18;
      *(_QWORD *)(a8 + 64) = v9;
    }
    if ( a6 )
      *a6 = v20;
    if ( a7 )
      *a7 = 1;
    goto LABEL_7;
  }
  v26 = qword_140019328(v12, a2, a3);
  if ( (v26 & 0x80000000) != 0 )
  {
    v12 = a1;
    goto LABEL_12;
  }
LABEL_7:
  if ( a8 && HIBYTE(word_140019A69) )
  {
    *(_QWORD *)(a8 + 24) = sub_14000A0C0;
    *(_QWORD *)(a8 + 64) = sub_14000A080;
    *(_QWORD *)(a8 + 32) = *a5;
    *(_DWORD *)(a8 + 40) = v30;
    *(_QWORD *)(a8 + 56) = *a5;
  }
  return v26;
}
