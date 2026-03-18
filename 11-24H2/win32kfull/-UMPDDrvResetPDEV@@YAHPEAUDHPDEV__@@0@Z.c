/*
 * XREFs of ?UMPDDrvResetPDEV@@YAHPEAUDHPDEV__@@0@Z @ 0x140205A00
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D8298 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D8380 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

_BOOL8 __fastcall UMPDDrvResetPDEV(struct DHPDEV__ *a1, struct DHPDEV__ *a2)
{
  BOOL v2; // ebx
  size_t Size; // [rsp+20h] [rbp-50h]
  int v7; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v8; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v9[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v10; // [rsp+48h] [rbp-28h]
  __int64 v11; // [rsp+50h] [rbp-20h]
  struct DHPDEV__ *v12; // [rsp+58h] [rbp-18h]
  struct DHPDEV__ *v13; // [rsp+60h] [rbp-10h]

  v2 = 0;
  *(_WORD *)((char *)v9 + 1) = 0;
  HIBYTE(v9[0]) = 0;
  v10 = 0LL;
  v7 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v8);
  *(_WORD *)((char *)v9 + 1) = 0;
  HIBYTE(v9[0]) = 0;
  v10 = 0LL;
  if ( v8 )
  {
    v9[1] = 7;
    LOBYTE(v9[0]) = 0;
    v11 = *(_QWORD *)v8;
    v12 = a1;
    v13 = a2;
    LODWORD(Size) = 4;
    if ( (unsigned int)UMPDOBJ::Thunk(v8, v9, 0x28u, &v7, Size) != -1 )
      v2 = v7 != 0;
  }
  XUMPDOBJ::~XUMPDOBJ(&v8);
  return v2;
}
