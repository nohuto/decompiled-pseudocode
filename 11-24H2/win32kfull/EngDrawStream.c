/*
 * XREFs of EngDrawStream @ 0x140170650
 * Callers:
 *     ?MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x140052700 (-MulDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEA.c)
 *     ?RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1402FD0F0 (-RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXP.c)
 * Callees:
 *     ?bRedirHooked@SURFACE@@QEAAHXZ @ 0x1401708A8 (-bRedirHooked@SURFACE@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EngDrawStream(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int *a6,
        unsigned int a7,
        __int64 a8,
        _QWORD *a9)
{
  int v9; // edi
  int *v10; // r12
  unsigned int v12; // r14d
  unsigned int v13; // edx
  __int64 v14; // r15
  __int64 v15; // rbx
  int *v16; // rsi
  __int64 v17; // r11
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // r10
  int v23; // edx
  int v24; // ecx
  __int64 v25; // r8
  __int64 (__fastcall *v26)(int, __int64, int, int, __int64, __int64, __int64, __int64); // r10
  __int64 (__fastcall *v27)(int, __int64, int, int, __int64, __int64, __int64, __int64); // r9
  _QWORD v28[4]; // [rsp+60h] [rbp-61h] BYREF
  _QWORD *v29; // [rsp+80h] [rbp-41h]
  __int64 v30; // [rsp+88h] [rbp-39h]
  __int64 v31; // [rsp+90h] [rbp-31h]
  __int64 v32; // [rsp+98h] [rbp-29h]
  int v33; // [rsp+A0h] [rbp-21h] BYREF
  int v34; // [rsp+A4h] [rbp-1Dh]
  int v35; // [rsp+A8h] [rbp-19h]
  int v36; // [rsp+ACh] [rbp-15h]

  v9 = 0;
  v10 = a6;
  v12 = a7;
  v29 = a9;
  v32 = a2;
  v30 = a4;
  v31 = a3;
  v13 = 1;
  v14 = (a1 - 24) & -(__int64)(a1 != 0);
  v15 = *(_QWORD *)(v14 + 0x30);
  if ( a7 >= 4 )
  {
    v16 = (int *)(a8 + 12);
    do
    {
      if ( *(v16 - 3) != 9 || v12 < 0x3C )
        return v13;
      v17 = *v10;
      v33 = *(v16 - 2);
      v18 = *(v16 - 1);
      v34 = *(v16 - 1);
      v19 = *v16;
      v35 = *v16;
      v20 = v16[1];
      v36 = v16[1];
      if ( (unsigned __int64)(v17 + v33 + 0x80000000LL) <= 0xFFFFFFFF
        && (unsigned __int64)(v17 + v19 + 0x80000000LL) <= 0xFFFFFFFF )
      {
        v22 = a6[1];
        if ( (unsigned __int64)(v22 + v18 + 0x80000000LL) <= 0xFFFFFFFF
          && (unsigned __int64)(v22 + v20 + 0x80000000LL) <= 0xFFFFFFFF )
        {
          v23 = v17 + v33;
          v24 = v17 + v19;
          v33 = v23;
          v35 = v24;
          v34 = v22 + v18;
          v36 = v22 + v20;
          if ( v23 >= v24 )
          {
            if ( v23 - v24 >= 0 )
            {
LABEL_14:
              v25 = 0LL;
              v26 = *(__int64 (__fastcall **)(int, __int64, int, int, __int64, __int64, __int64, __int64))(*(_QWORD *)(v14 + 48) + 3408LL);
              if ( v26 )
                v9 |= 1u;
              else
                v26 = EngNineGrid;
              if ( (v9 & 1) != 0 )
                v9 &= ~1u;
              if ( (!*(_QWORD *)(a1 + 16) || (*(_DWORD *)(v15 + 2112) & 0x400) == 0)
                && !(unsigned int)SURFACE::bRedirHooked((SURFACE *)v14)
                && (*(_BYTE *)(v14 + 112) & 0x10) == 0 )
              {
                v26 = v27;
              }
              v28[3] = v29[6];
              v28[2] = v29[5];
              v28[1] = v29[4];
              v28[0] = 33488896LL;
              v13 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int *, int *, int *, _QWORD *, __int64))v26)(
                      a1,
                      v32,
                      v31,
                      v30,
                      &v33,
                      v16 + 2,
                      v16 + 6,
                      v28,
                      v25);
              goto LABEL_7;
            }
          }
          else if ( ((v24 - v23) & 0x80000000) == 0 )
          {
            goto LABEL_14;
          }
        }
      }
      v13 = 0;
LABEL_7:
      v10 = a6;
      v12 -= 60;
      v16 += 15;
    }
    while ( v12 >= 4 );
  }
  return v13;
}
