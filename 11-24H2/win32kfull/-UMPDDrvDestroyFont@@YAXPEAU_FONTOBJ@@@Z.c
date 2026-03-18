/*
 * XREFs of ?UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x140332CB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D8298 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D8380 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1400DA544 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall UMPDDrvDestroyFont(struct _FONTOBJ *a1)
{
  __int64 v2; // r8
  UMPDOBJ *v3; // rbx
  size_t Size; // [rsp+20h] [rbp-50h]
  __int64 v5; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v6; // [rsp+38h] [rbp-38h] BYREF
  __int128 v7; // [rsp+40h] [rbp-30h] BYREF
  __int128 v8; // [rsp+50h] [rbp-20h]
  struct _FONTOBJ *v9; // [rsp+60h] [rbp-10h] BYREF

  LODWORD(v5) = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v6);
  v3 = v6;
  v9 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( v6 )
  {
    if ( a1 )
    {
      DWORD1(v7) = 43;
      LOBYTE(v7) = 0;
      *(_QWORD *)&v8 = *(_QWORD *)v6;
      *((_QWORD *)&v8 + 1) = a1[1].pvConsumer;
      v9 = a1;
      if ( (unsigned int)UMPDOBJ::pfo(v6, &v9, v2) )
      {
        LODWORD(Size) = 4;
        UMPDOBJ::Thunk(v3, &v7, 0x28u, &v5, Size);
      }
    }
  }
  v5 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
  XUMPDOBJ::~XUMPDOBJ(&v6);
}
