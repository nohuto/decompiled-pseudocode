/*
 * XREFs of NtGdiGetDIBitsInternal @ 0x140155610
 * Callers:
 *     <none>
 * Callees:
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140018F7C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14001EB5C (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x14015A480 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     GreGetBitmapBitsSize @ 0x14016305C (GreGetBitmapBitsSize.c)
 *     ?init_probe@?$umptr_w@E@@SA?AV1@PEAE_K1@Z @ 0x14018AFDC (-init_probe@-$umptr_w@E@@SA-AV1@PEAE_K1@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtGdiGetDIBitsInternal(
        HDC a1,
        HSURF a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        unsigned int *Address,
        unsigned int a7,
        unsigned int a8)
{
  int v8; // esi
  __int64 v9; // r13
  unsigned int v10; // r15d
  unsigned int v11; // edi
  struct tagBITMAPINFO *v12; // rsi
  unsigned int v13; // r8d
  unsigned int v14; // ecx
  unsigned int v15; // r13d
  int v16; // r11d
  __int16 v17; // r9
  unsigned int v18; // r10d
  unsigned int v19; // edx
  char *v20; // rcx
  unsigned int v21; // r8d
  unsigned int biHeight; // edx
  unsigned int v23; // ecx
  unsigned int v24; // edx
  bool v25; // zf
  int v26; // eax
  unsigned int biWidth_high; // eax
  unsigned int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // r8d
  __int64 inited; // rax
  unsigned int DIBits; // r15d
  unsigned int BitmapBitsSize; // [rsp+60h] [rbp-178h]
  unsigned int v35; // [rsp+68h] [rbp-170h]
  int v37; // [rsp+7Ch] [rbp-15Ch]
  __int64 v38; // [rsp+88h] [rbp-150h] BYREF
  __int64 v39; // [rsp+90h] [rbp-148h]
  __int64 v40; // [rsp+98h] [rbp-140h]
  __int16 v41; // [rsp+A0h] [rbp-138h]
  __int64 v42; // [rsp+A8h] [rbp-130h]
  HSURF v43; // [rsp+B0h] [rbp-128h]
  HSURF v44; // [rsp+B8h] [rbp-120h]
  unsigned int *v45; // [rsp+C0h] [rbp-118h]
  _BYTE v46[24]; // [rsp+C8h] [rbp-110h] BYREF
  __int16 v47; // [rsp+E0h] [rbp-F8h]
  _BYTE v48[128]; // [rsp+F0h] [rbp-E8h] BYREF
  _DWORD v49[8]; // [rsp+170h] [rbp-68h] BYREF
  __int64 v50; // [rsp+190h] [rbp-48h]

  v43 = a2;
  v44 = a2;
  v35 = a4;
  v45 = Address;
  BitmapBitsSize = a8;
  v37 = 1;
  memset(v46, 0, sizeof(v46));
  v47 = 0;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0;
  memset(v49, 0, sizeof(v49));
  v50 = 0LL;
  v8 = 2;
  if ( a7 > 2 || !Address || !a2 )
    return 0LL;
  v9 = a5 & -(__int64)(a4 != 0);
  v42 = v9;
  v10 = *Address;
  ProbeForWrite(Address, *Address, 1u);
  if ( v9 )
  {
    v11 = 0;
  }
  else
  {
    if ( v10 == 12 && !*((_WORD *)Address + 5) )
    {
      v11 = 12;
LABEL_14:
      memmove(v49, Address, v11);
      v49[0] = v11;
LABEL_15:
      v12 = (struct tagBITMAPINFO *)v49;
      goto LABEL_16;
    }
    v11 = 0;
    if ( v10 >= 0x28 && !*((_WORD *)Address + 7) )
      v11 = 40;
  }
  if ( v11 )
    goto LABEL_14;
  if ( v10 == 40 )
    Address[8] = 0;
  v13 = a7;
  if ( v10 == 12 )
  {
    v14 = 3;
    v15 = 12;
    v16 = 3;
    v17 = *((_WORD *)Address + 5);
    v18 = 0;
    v19 = 0;
    goto LABEL_29;
  }
  if ( v10 >= 0x28 )
  {
    v15 = v10;
    v16 = 4;
    v17 = *((_WORD *)Address + 7);
    v18 = Address[8];
    v19 = Address[4];
    v14 = 3;
LABEL_29:
    switch ( v19 )
    {
      case 3u:
        if ( a7 == 1 )
          v13 = 0;
        if ( ((v17 - 16) & 0xFFEF) != 0 )
          goto LABEL_33;
        v18 = 0;
        if ( v10 > 0x28 )
          v14 = 0;
        else
          v18 = 3;
LABEL_63:
        if ( v18 && v18 <= v14 )
          v14 = v18;
        if ( v13 != 1 )
        {
          if ( v13 == 2 )
            v16 = 0;
          v8 = v16;
        }
        v11 = (v15 + v8 * v14 + 3) & 0xFFFFFFFC;
        if ( v11 >= v15 )
        {
          v9 = v42;
          goto LABEL_73;
        }
LABEL_33:
        v11 = 0;
        v12 = (struct tagBITMAPINFO *)v49;
        goto LABEL_106;
      case 0u:
        if ( v17 != 1 )
        {
          if ( v17 != 4 )
          {
            if ( v17 != 8 )
            {
              if ( a7 == 1 )
                v13 = 0;
              v14 = 0;
              if ( ((v17 - 16) & 0xFFE7) != 0 || v17 == 40 )
                goto LABEL_33;
              goto LABEL_63;
            }
LABEL_60:
            v14 = 256;
            goto LABEL_63;
          }
LABEL_62:
          v14 = 16;
          goto LABEL_63;
        }
LABEL_52:
        v14 = 2;
        goto LABEL_63;
      case 0xAu:
        switch ( v17 )
        {
          case 1:
            goto LABEL_52;
          case 4:
            goto LABEL_62;
          case 8:
            goto LABEL_60;
        }
        if ( v17 != 32 )
          goto LABEL_33;
        break;
      case 2u:
      case 0xCu:
        if ( v17 != 4 )
          goto LABEL_33;
        goto LABEL_62;
      case 1u:
      case 0xBu:
        if ( v17 != 8 )
          goto LABEL_33;
        goto LABEL_60;
      default:
        if ( v19 - 4 > 1 )
          goto LABEL_33;
        break;
    }
    v14 = 0;
    goto LABEL_63;
  }
  v11 = 0;
LABEL_73:
  if ( !v11 )
    goto LABEL_15;
  v12 = (struct tagBITMAPINFO *)Win32AllocPoolZInit(v11, 1886221383LL);
  if ( v12 )
  {
    v20 = (char *)Address + v11;
    if ( v20 < (char *)Address || (unsigned __int64)v20 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v12, Address, v11);
    v12->bmiHeader.biSize = v10;
    if ( GreGetBitmapSizeInternal(v12, a7, v10) != v11 )
    {
LABEL_22:
      v11 = 0;
      goto LABEL_106;
    }
    if ( v10 >= 0x28 )
      v12->bmiHeader.biClrUsed = 0;
    v21 = v35;
    if ( v35 )
    {
      if ( v10 < 0x28 )
      {
        biWidth_high = HIWORD(v12->bmiHeader.biWidth);
        v28 = a3;
        if ( biWidth_high < a3 )
          v28 = HIWORD(v12->bmiHeader.biWidth);
        a3 = v28;
        v29 = biWidth_high - v28;
        v30 = v35;
        if ( v29 < v35 )
          v30 = v29;
        v35 = v30;
        if ( !LOWORD(v12->bmiHeader.biWidth) || !LOWORD(v12->bmiHeader.biHeight) )
          goto LABEL_93;
        v25 = HIWORD(v12->bmiHeader.biHeight) == 0;
      }
      else
      {
        biHeight = -v12->bmiHeader.biHeight;
        if ( v12->bmiHeader.biHeight >= 0 )
          biHeight = v12->bmiHeader.biHeight;
        v23 = a3;
        if ( biHeight < a3 )
          v23 = biHeight;
        a3 = v23;
        v24 = biHeight - v23;
        if ( v24 < v35 )
          v21 = v24;
        v35 = v21;
        if ( !v12->bmiHeader.biWidth || !v12->bmiHeader.biPlanes )
          goto LABEL_93;
        v25 = v12->bmiHeader.biBitCount == 0;
      }
      v26 = 0;
      if ( !v25 )
      {
LABEL_94:
        v37 = v26;
        goto LABEL_16;
      }
LABEL_93:
      v26 = 1;
      goto LABEL_94;
    }
  }
LABEL_16:
  if ( v11 && v9 && v12 )
  {
    if ( v12->bmiHeader.biSize < 0x28 || v12->bmiHeader.biCompression - 1 > 1 || v12->bmiHeader.biSizeImage )
    {
      if ( a8 || (BitmapBitsSize = GreGetBitmapBitsSize(v12)) != 0 )
      {
        inited = umptr_w<unsigned char>::init_probe(v46, v9, BitmapBitsSize, 4LL);
        v38 = *(_QWORD *)inited;
        v39 = *(_QWORD *)(inited + 8);
        v40 = *(_QWORD *)(inited + 16);
        v41 = *(_WORD *)(inited + 24);
      }
      v11 &= -(v38 != 0);
      goto LABEL_106;
    }
    goto LABEL_22;
  }
LABEL_106:
  if ( v38 && v37 || !v11 || !v12 )
  {
    DIBits = 0;
  }
  else
  {
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v48, a1);
    DIBits = GrepGetDIBits(
               (OPTAPIDCOBJ *)v48,
               v43,
               a3,
               v35,
               (__int64)&v38,
               &v12->bmiHeader.biSize,
               a7,
               BitmapBitsSize,
               v11);
    if ( DIBits )
      memmove(Address, v12, v11);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v48);
  }
  if ( v12 )
  {
    if ( v12 != (struct tagBITMAPINFO *)v49 )
      Win32FreePool(v12);
  }
  return DIBits;
}
