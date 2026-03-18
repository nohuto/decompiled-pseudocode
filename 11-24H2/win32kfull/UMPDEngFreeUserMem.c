/*
 * XREFs of UMPDEngFreeUserMem @ 0x140335BF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D8298 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D8380 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

_BOOL8 __fastcall UMPDEngFreeUserMem(__int64 a1)
{
  BOOL v1; // ebx
  size_t Size; // [rsp+20h] [rbp-60h]
  int v5; // [rsp+30h] [rbp-50h] BYREF
  UMPDOBJ *v6; // [rsp+38h] [rbp-48h] BYREF
  _DWORD v7[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v8; // [rsp+48h] [rbp-38h]
  __int64 v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  __int128 v11; // [rsp+60h] [rbp-20h]

  v1 = 0;
  *(_WORD *)((char *)v7 + 1) = 0;
  HIBYTE(v7[0]) = 0;
  v8 = 0LL;
  v5 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v6);
  *(_WORD *)((char *)v7 + 1) = 0;
  HIBYTE(v7[0]) = 0;
  v8 = 0LL;
  if ( v6 && *((_BYTE *)v6 + 456) )
  {
    v7[1] = 120;
    LOBYTE(v7[0]) = 0;
    v9 = *(_QWORD *)v6;
    v10 = a1;
    v11 = 0LL;
    LODWORD(Size) = 4;
    if ( (unsigned int)UMPDOBJ::Thunk(v6, v7, 0x30u, &v5, Size) != -1 )
      v1 = v5 != 0;
    XUMPDOBJ::~XUMPDOBJ(&v6);
    return v1;
  }
  else
  {
    XUMPDOBJ::~XUMPDOBJ(&v6);
    return 0LL;
  }
}
