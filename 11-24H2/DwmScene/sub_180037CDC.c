/*
 * XREFs of sub_180037CDC @ 0x180037CDC
 * Callers:
 *     sub_180037A28 @ 0x180037A28 (sub_180037A28.c)
 *     sub_180038810 @ 0x180038810 (sub_180038810.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180037B18 @ 0x180037B18 (sub_180037B18.c)
 *     sub_1800383AC @ 0x1800383AC (sub_1800383AC.c)
 *     sub_1800384C0 @ 0x1800384C0 (sub_1800384C0.c)
 *     sub_180038770 @ 0x180038770 (sub_180038770.c)
 *     unknown_libname_6 @ 0x1800387C0 (unknown_libname_6.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

void __fastcall sub_180037CDC(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 (__fastcall *a8)(__int64, unsigned __int64))
{
  __int64 *v9; // rbp
  __int64 *v13; // rax
  __int64 v14; // r12
  __int64 v15; // r14
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+40h] [rbp-38h] BYREF
  __int64 v23; // [rsp+48h] [rbp-30h]

  if ( a2 != a3 )
  {
    v9 = a3;
    while ( a1 != a2 )
    {
      if ( a8((__int64)a2, (unsigned __int64)a1) )
      {
        v13 = a2 - 2;
        do
        {
          v14 = a5;
          v15 = (__int64)v9;
          v9 -= 2;
          --a5;
          if ( a2 == v9 )
          {
            v20 = *a2;
            *a2 = 0LL;
            v22 = v20;
            v21 = a2[1];
            a2[1] = 0LL;
            v23 = v21;
            sub_180038770(a1, a2, v15);
            v19 = a1;
LABEL_18:
            sub_180011110(v19, &v22);
            if ( v23 )
              sub_18001060C(v23);
            return;
          }
          v16 = a8((__int64)v9, (unsigned __int64)v13) == 0;
          v13 = a2 - 2;
        }
        while ( v16 );
        if ( a4 == 1 )
        {
          v17 = *a1;
          *a1 = 0LL;
          v22 = v17;
          v18 = a1[1];
          a1[1] = 0LL;
          v23 = v18;
          v19 = (__int64 *)unknown_libname_6(a2, v15, a1);
          goto LABEL_18;
        }
        if ( a4 > v14 || a4 > a7 )
        {
          if ( v14 > a7 )
            sub_180037B18((__int64)a1, (__int64)a2, v15, a4, v14, a6, a7, a8);
          else
            sub_1800384C0((_DWORD)a1, (_DWORD)a2, v15, a6, (__int64)a8);
        }
        else
        {
          sub_1800383AC((_DWORD)a1, (_DWORD)a2, v15, a6, (__int64)a8);
        }
        return;
      }
      a1 += 2;
      --a4;
    }
  }
}
