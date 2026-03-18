/*
 * XREFs of ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x140126408
 * Callers:
 *     EngHTBlt @ 0x14000C53C (EngHTBlt.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x140127884 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 * Callees:
 *     PALLOCNOZ @ 0x140125A4C (PALLOCNOZ.c)
 *     HT_Get8BPPMaskPalette @ 0x1401267A0 (HT_Get8BPPMaskPalette.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

_BOOL8 __fastcall PALMEMOBJ::bCreateHTPalette(PALMEMOBJ *this, int a2, struct _GDIINFO *a3)
{
  int v5; // r12d
  struct tagPALETTEENTRY *v6; // rdi
  LONG v7; // r15d
  int v9; // edx
  int v10; // edx
  struct tagPALETTEENTRY *v11; // rax
  ULONG v12; // r9d
  unsigned int v13; // eax
  int v14; // r8d
  int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // r8d
  ULONG ulPrimaryOrder; // r8d
  __int64 m; // rax
  __int64 i; // rdx
  char v21; // cl
  __int64 j; // rdx
  char v23; // cl
  __int64 k; // rdx
  char v25; // cl
  _OWORD v26[2]; // [rsp+50h] [rbp-30h] BYREF

  if ( (unsigned int)(a2 - 5) > 2 )
  {
    v5 = 0;
    if ( !a2 )
    {
      v6 = (struct tagPALETTEENTRY *)&unk_140351FC8;
      v7 = 2;
      if ( (a3->flHTFlags & 0x100) != 0 )
      {
        v6 = (struct tagPALETTEENTRY *)v26;
        *(_QWORD *)&v26[0] = 0xFFFFFFLL;
      }
      goto LABEL_5;
    }
    v9 = a2 - 2;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( !v10 )
      {
        v7 = 16;
        v6 = (struct tagPALETTEENTRY *)&unk_1403619B0;
        goto LABEL_5;
      }
      if ( v10 == 1 )
      {
        v7 = HT_Get8BPPMaskPalette(
               0LL,
               a3->flHTFlags & 8,
               HIBYTE(a3->flHTFlags),
               a3->ciDevice.RedGamma,
               a3->ciDevice.GreenGamma,
               a3->ciDevice.BlueGamma);
        v11 = (struct tagPALETTEENTRY *)PALLOCNOZ(4 * v7, 1818316871LL);
        v6 = v11;
        if ( !v11 )
          return 0LL;
        if ( (a3->flHTFlags & 0x400) != 0 )
          *v11 = (struct tagPALETTEENTRY)809650002;
        else
          *v11 = 0;
        HT_Get8BPPMaskPalette(
          v11,
          a3->flHTFlags & 8,
          HIBYTE(a3->flHTFlags),
          a3->ciDevice.RedGamma,
          a3->ciDevice.GreenGamma,
          a3->ciDevice.BlueGamma);
        v5 = 1;
LABEL_5:
        if ( PALMEMOBJ::bCreatePalette(this, 1u, v7, (const unsigned int *)&v6->peRed, 0, 0, 0, 0x100400u, 1) )
        {
          if ( v5 )
            Win32FreePool(v6);
          return 1LL;
        }
        if ( v5 )
          Win32FreePool(v6);
        return 0LL;
      }
    }
    ulPrimaryOrder = a3->ulPrimaryOrder;
    v7 = 8;
    v6 = (struct tagPALETTEENTRY *)v26;
    v26[0] = xmmword_140352038;
    v26[1] = xmmword_140352048;
    if ( (ulPrimaryOrder & 1) != 0 )
    {
      for ( i = 1LL; i < 7; ++i )
      {
        v21 = *((_BYTE *)v26 + 4 * i + 1);
        *((_BYTE *)v26 + 4 * i + 1) = *((_BYTE *)v26 + 4 * i + 2);
        *((_BYTE *)v26 + 4 * i + 2) = v21;
      }
    }
    if ( (ulPrimaryOrder & 2) != 0 )
    {
      for ( j = 1LL; j < 7; ++j )
      {
        v23 = *((_BYTE *)v26 + 4 * j);
        *((_BYTE *)v26 + 4 * j) = *((_BYTE *)v26 + 4 * j + 1);
        *((_BYTE *)v26 + 4 * j + 1) = v23;
      }
    }
    else if ( (ulPrimaryOrder & 4) != 0 )
    {
      for ( k = 1LL; k < 7; ++k )
      {
        v25 = *((_BYTE *)v26 + 4 * k);
        *((_BYTE *)v26 + 4 * k) = *((_BYTE *)v26 + 4 * k + 2);
        *((_BYTE *)v26 + 4 * k + 2) = v25;
      }
    }
    if ( (a3->flHTFlags & 0x100) != 0 )
    {
      for ( m = 0LL; m < 2; ++m )
        v26[m] = _mm_xor_ps((__m128)_mm_loadu_si128((const __m128i *)&v26[m]), (__m128)_xmm);
    }
    goto LABEL_5;
  }
  v12 = a3->ulPrimaryOrder;
  v13 = 31;
  if ( a2 != 5 )
    v13 = 255;
  v14 = 992;
  if ( a2 != 5 )
    v14 = 65280;
  v15 = 31744;
  if ( a2 != 5 )
    v15 = 16711680;
  v16 = v14;
  if ( (v12 & 1) != 0 )
  {
    v16 = v13;
    v13 = v14;
  }
  if ( (v12 & 2) != 0 )
  {
    v17 = v16;
    v16 = v15;
  }
  else
  {
    v17 = v15;
    if ( (v12 & 4) != 0 )
    {
      v17 = v13;
      v13 = v15;
    }
  }
  return PALMEMOBJ::bCreatePalette(this, 2u, 0, 0LL, v17, v16, v13, 0x100200u, 1) != 0;
}
