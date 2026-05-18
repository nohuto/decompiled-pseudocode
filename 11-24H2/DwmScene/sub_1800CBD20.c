/*
 * XREFs of sub_1800CBD20 @ 0x1800CBD20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001C420 @ 0x18001C420 (sub_18001C420.c)
 *     sub_1800262E0 @ 0x1800262E0 (sub_1800262E0.c)
 *     sub_180027298 @ 0x180027298 (sub_180027298.c)
 *     sub_1800CBAD4 @ 0x1800CBAD4 (sub_1800CBAD4.c)
 *     sub_1800CBE90 @ 0x1800CBE90 (sub_1800CBE90.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800CBD20(__int64 a1)
{
  __int64 **v2; // rsi
  __int64 v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  int v6; // eax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r9
  __int64 *v11; // rax
  __int64 v12; // rcx
  _BYTE *v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h]
  _QWORD *v16; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v17; // [rsp+38h] [rbp-18h]
  __int64 v18; // [rsp+40h] [rbp-10h]
  __int64 v19; // [rsp+70h] [rbp+20h] BYREF

  if ( !*(_QWORD *)(a1 + 488) )
    return 0;
  v2 = (__int64 **)(a1 + 504);
  v3 = **(_QWORD **)(a1 + 504);
  v19 = v3;
  while ( !*(_BYTE *)(v3 + 25) )
  {
    **(_BYTE **)(v3 + 40) = 0;
    sub_18001C420(&v19);
    v3 = v19;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD **))(**(_QWORD **)(a1 + 488) + 16LL))(*(_QWORD *)(a1 + 488), &v16);
  v4 = v16;
  v5 = v17;
  if ( v16 != v17 )
  {
    do
    {
      v6 = (**(__int64 (__fastcall ***)(_QWORD))*v4)(*v4);
      v7 = (_QWORD *)sub_1800CBAD4(a1, v6);
      unknown_libname_81(&v14, v7);
      *v14 = 1;
      sub_1800CBE90(a1, v4, &v14);
      if ( v15 )
        sub_18001060C(v15);
      v4 += 2;
    }
    while ( v4 != v5 );
    v5 = v17;
    v4 = v16;
  }
  if ( v4 )
  {
    if ( v4 != v5 )
    {
      do
      {
        v8 = v4[1];
        if ( v8 )
          sub_18001060C(v8);
        v4 += 2;
      }
      while ( v4 != v5 );
      v4 = v16;
    }
    sub_180010234(v4, (v18 - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  v9 = **v2;
  v19 = v9;
  while ( (__int64 *)v9 != *v2 )
  {
    if ( **(_BYTE **)(v9 + 40) )
    {
      sub_18001C420(&v19);
    }
    else
    {
      sub_18001C420(&v19);
      v11 = sub_180027298(v2, v10);
      sub_1800262E0(v12, v11);
    }
    v9 = v19;
  }
  return 1;
}
