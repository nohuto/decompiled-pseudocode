/*
 * XREFs of ?UMPDDrvEnableDriver@@YAHPEAGPEA_K@Z @ 0x1401D5E3C
 * Callers:
 *     ?UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z @ 0x1401D5D28 (-UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z.c)
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D8298 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D8380 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1400D89F0 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall UMPDDrvEnableDriver(unsigned __int16 *a1, unsigned __int64 *a2)
{
  UMPDOBJ *v4; // rbx
  __int64 v5; // r8
  unsigned int v6; // edi
  unsigned __int64 v7; // r8
  size_t Size; // [rsp+20h] [rbp-40h]
  UMPDOBJ *v10; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v11[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-20h]
  __int64 v13; // [rsp+48h] [rbp-18h]
  void *v14; // [rsp+50h] [rbp-10h] BYREF

  *(_WORD *)((char *)v11 + 1) = 0;
  HIBYTE(v11[0]) = 0;
  v12 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v10);
  v4 = v10;
  *(_WORD *)((char *)v11 + 1) = 0;
  HIBYTE(v11[0]) = 0;
  v12 = 0LL;
  if ( !v10 )
    goto LABEL_6;
  if ( !a1 )
    goto LABEL_6;
  v11[1] = 105;
  v5 = -1LL;
  LOBYTE(v11[0]) = 0;
  v13 = *(_QWORD *)v10;
  v14 = a1;
  do
    ++v5;
  while ( a1[v5] );
  v6 = 1;
  v7 = v5 + 1;
  if ( v7 >= 0x7FFFFFFF
    || !(unsigned int)UMPDOBJ::ThunkMemBlock(v10, (const void **)&v14, 2 * (int)v7)
    || (LODWORD(Size) = 8, (unsigned int)UMPDOBJ::Thunk(v4, v11, 0x20u, a2, Size) == -1) )
  {
LABEL_6:
    v6 = 0;
  }
  XUMPDOBJ::~XUMPDOBJ(&v10);
  return v6;
}
