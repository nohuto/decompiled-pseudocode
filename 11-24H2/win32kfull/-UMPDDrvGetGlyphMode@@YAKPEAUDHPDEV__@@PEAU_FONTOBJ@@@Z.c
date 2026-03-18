/*
 * XREFs of ?UMPDDrvGetGlyphMode@@YAKPEAUDHPDEV__@@PEAU_FONTOBJ@@@Z @ 0x1401E56C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D8298 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D8380 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1400DA544 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall UMPDDrvGetGlyphMode(struct DHPDEV__ *a1, struct _FONTOBJ *a2)
{
  __int64 v4; // r8
  UMPDOBJ *v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  size_t Size; // [rsp+20h] [rbp-50h]
  unsigned int v10; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v11; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v12[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+48h] [rbp-28h]
  __int64 v14; // [rsp+50h] [rbp-20h]
  struct DHPDEV__ *v15; // [rsp+58h] [rbp-18h]
  struct _FONTOBJ *v16; // [rsp+60h] [rbp-10h] BYREF

  *(_WORD *)((char *)v12 + 1) = 0;
  HIBYTE(v12[0]) = 0;
  v13 = 0LL;
  v10 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v11);
  v5 = v11;
  *(_WORD *)((char *)v12 + 1) = 0;
  HIBYTE(v12[0]) = 0;
  v13 = 0LL;
  if ( !v11 )
    goto LABEL_5;
  v12[1] = 37;
  LOBYTE(v12[0]) = 0;
  v14 = *(_QWORD *)v11;
  v15 = a1;
  v16 = a2;
  if ( !(unsigned int)UMPDOBJ::pfo(v11, &v16, v4)
    || (LODWORD(Size) = 4, v6 = UMPDOBJ::Thunk(v5, v12, 0x28u, &v10, Size), v7 = v10, v6 == -1) )
  {
LABEL_5:
    v7 = 1;
  }
  XUMPDOBJ::~XUMPDOBJ(&v11);
  return v7;
}
