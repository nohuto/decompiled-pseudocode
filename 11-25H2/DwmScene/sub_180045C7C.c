/*
 * XREFs of sub_180045C7C @ 0x180045C7C
 * Callers:
 *     sub_180049230 @ 0x180049230 (sub_180049230.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B2B0 (__security_check_cookie.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     sub_180027AB4 @ 0x180027AB4 (sub_180027AB4.c)
 *     sub_180037608 @ 0x180037608 (sub_180037608.c)
 *     sub_180037704 @ 0x180037704 (sub_180037704.c)
 *     sub_180045020 @ 0x180045020 (sub_180045020.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_180045C7C(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int *v6; // rbx
  __int128 *v7; // rdx
  _QWORD **v8; // rdi
  unsigned int v9; // ebx
  _QWORD **v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h]
  __int128 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A0h]
  __int64 v17; // [rsp+68h] [rbp-98h]
  int v18; // [rsp+70h] [rbp-90h] BYREF
  __int64 v19; // [rsp+78h] [rbp-88h]
  __int64 v20; // [rsp+80h] [rbp-80h]
  int v21; // [rsp+88h] [rbp-78h]
  __int64 v22; // [rsp+90h] [rbp-70h]
  __int64 v23; // [rsp+98h] [rbp-68h]
  int v24; // [rsp+A0h] [rbp-60h]
  __int64 v25; // [rsp+A8h] [rbp-58h]
  __int64 v26; // [rsp+B0h] [rbp-50h]
  int v27; // [rsp+B8h] [rbp-48h]
  __int64 v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  int v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  __int64 v32; // [rsp+E0h] [rbp-20h]
  int v33; // [rsp+E8h] [rbp-18h]
  __int64 v34; // [rsp+F0h] [rbp-10h]
  __int64 v35; // [rsp+F8h] [rbp-8h]
  int v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  __int64 v38; // [rsp+110h] [rbp+10h]
  int v39; // [rsp+118h] [rbp+18h]
  __int64 v40; // [rsp+120h] [rbp+20h] BYREF

  if ( *(_DWORD *)(a1 + 120) )
  {
    sub_180011B04(*a2 + 72, &v12);
    if ( !sub_180027AB4(a1, *(_DWORD *)(v12 + 244)) )
    {
      if ( (*(_BYTE *)(a1 + 40) & 4) == 0 )
      {
LABEL_15:
        if ( v13 )
          sub_18001050C(v13);
        return;
      }
      sub_180045020(a1, &v12);
    }
    v14 = 0LL;
    v16 = a1 + 144;
    v17 = 1LL;
    v18 = 0;
    v19 = a1 + 160;
    v20 = 2LL;
    v21 = 1;
    v22 = a1 + 176;
    v23 = 16LL;
    v24 = 4;
    v25 = a1 + 192;
    v26 = 4LL;
    v27 = 2;
    v28 = a1 + 240;
    v29 = 32LL;
    v30 = 5;
    v31 = a1 + 256;
    v32 = 64LL;
    v33 = 6;
    v34 = a1 + 208;
    v35 = 512LL;
    v36 = 9;
    v37 = a1 + 224;
    v38 = 1024LL;
    v39 = 10;
    v6 = (unsigned int *)&v18;
    do
    {
      v7 = (__int128 *)*((_QWORD *)v6 - 2);
      if ( !*(_QWORD *)v7 || (a3 & *((_QWORD *)v6 - 1)) == 0 )
        v7 = &v14;
      sub_180037704(*a2, v7, *v6);
      v6 += 6;
    }
    while ( v6 - 4 != (unsigned int *)&v40 );
    *(_DWORD *)(*(_QWORD *)(*a2 + 96) + 9832LL) = *(_DWORD *)(a1 + 300);
    if ( *(_QWORD *)(a1 + 272) )
    {
      sub_180037608(*a2, (_QWORD *)(a1 + 272));
      v8 = (_QWORD **)*a2;
      v9 = *(_DWORD *)(a1 + 112);
      (*(void (__fastcall **)(_QWORD *, _QWORD **))(*v8[12] + 8LL))(v8[12], v8);
      ((void (__fastcall *)(_QWORD **, _QWORD, _QWORD, _QWORD))(*v8)[26])(v8, v9, 0LL, 0LL);
      ((void (__fastcall *)(_QWORD **))(*v8)[37])(v8);
      _InterlockedAdd64(qword_1801C3590, *(unsigned int *)(a1 + 112));
    }
    else
    {
      v15 = 0LL;
      sub_180037608(*a2, &v15);
      v10 = (_QWORD **)*a2;
      v11 = *(_DWORD *)(a1 + 120);
      (*(void (__fastcall **)(_QWORD *, _QWORD **))(*v10[12] + 8LL))(v10[12], v10);
      ((void (__fastcall *)(_QWORD **, _QWORD, _QWORD))(*v10)[25])(v10, v11, 0LL);
    }
    _InterlockedAdd64(qword_1801C34F0, *(unsigned int *)(a1 + 120));
    _InterlockedIncrement64(qword_1801C3C70);
    if ( *((_QWORD *)&v14 + 1) )
      sub_18001050C(*((__int64 *)&v14 + 1));
    goto LABEL_15;
  }
}
