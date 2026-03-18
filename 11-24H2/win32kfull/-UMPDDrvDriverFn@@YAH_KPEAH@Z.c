/*
 * XREFs of ?UMPDDrvDriverFn@@YAH_KPEAH@Z @ 0x1401D5F3C
 * Callers:
 *     ?UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z @ 0x1401D5D28 (-UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z.c)
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D8298 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D8380 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall UMPDDrvDriverFn(__int64 a1, int *a2)
{
  unsigned int v2; // ebx
  size_t Size; // [rsp+20h] [rbp-40h]
  UMPDOBJ *v7; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v8[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-20h]
  __int64 v10; // [rsp+48h] [rbp-18h]
  __int64 v11; // [rsp+50h] [rbp-10h]

  v2 = 0;
  *(_WORD *)((char *)v8 + 1) = 0;
  HIBYTE(v8[0]) = 0;
  v9 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v7);
  *(_WORD *)((char *)v8 + 1) = 0;
  HIBYTE(v8[0]) = 0;
  v9 = 0LL;
  if ( v7 )
  {
    v8[1] = 108;
    LOBYTE(v8[0]) = 0;
    v10 = *(_QWORD *)v7;
    v11 = a1;
    LODWORD(Size) = 416;
    LOBYTE(v2) = (unsigned int)UMPDOBJ::Thunk(v7, v8, 0x20u, a2, Size) != -1;
    XUMPDOBJ::~XUMPDOBJ(&v7);
    return v2;
  }
  else
  {
    XUMPDOBJ::~XUMPDOBJ(&v7);
    return 0LL;
  }
}
