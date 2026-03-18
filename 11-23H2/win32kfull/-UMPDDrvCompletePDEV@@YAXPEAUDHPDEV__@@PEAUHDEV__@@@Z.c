/*
 * XREFs of ?UMPDDrvCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C02B85C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B7140 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C02B71B8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02B7B44 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 */

void __fastcall UMPDDrvCompletePDEV(struct DHPDEV__ *a1, _QWORD *a2)
{
  size_t v4; // [rsp+20h] [rbp-50h]
  UMPDOBJ *v5; // [rsp+30h] [rbp-40h] BYREF
  __int128 v6; // [rsp+38h] [rbp-38h] BYREF
  __int128 v7; // [rsp+48h] [rbp-28h]
  __int64 v8; // [rsp+58h] [rbp-18h]

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v5);
  v8 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( v5 )
  {
    LODWORD(v4) = 0;
    *(_QWORD *)&v6 = 0x100000028LL;
    *(_QWORD *)&v7 = *(_QWORD *)v5;
    v8 = a2[2];
    *((_QWORD *)&v7 + 1) = a1;
    UMPDOBJ::Thunk(v5, &v6, 0x28u, 0LL, v4);
  }
  XUMPDOBJ::~XUMPDOBJ(&v5);
}
