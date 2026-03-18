/*
 * XREFs of ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1403279B8
 * Callers:
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x140326C50 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1400628CC (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x140328560 (-ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z.c)
 *     ?XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z @ 0x140328F20 (-XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x140328FFC (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 */

__int64 __fastcall DXGPRESENT::CombineRectList(
        struct tagRECT *this,
        const struct _D3DKMT_PRESENT *a2,
        HDC a3,
        const struct DXGDEVICE *a4,
        LONG a5,
        LONG a6)
{
  struct tagRECT *v7; // rdi
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  LONG right; // edx
  LONG v13; // r10d
  LONG v14; // r9d
  LONG bottom; // ecx
  LONG v16; // r8d
  LONG v17; // edx
  int bottom_low; // eax
  unsigned int i; // edx
  unsigned int top; // ecx
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rdi
  unsigned int j; // r14d
  unsigned int v25; // ecx
  LONG v26; // r10d
  int v27; // r9d
  LONG v28; // r11d
  int v29; // r8d
  char v30; // al
  LONG left; // ecx
  LONG v32; // edx
  int v33; // esi
  LONG v34; // r15d
  int v35; // edi
  LONG v36; // r14d
  unsigned int v37; // eax
  const struct tagRECT *v38; // r11
  const struct tagRECT *v39; // r12
  __int64 v40; // rcx
  LONG v41; // r8d
  LONG v42; // r9d
  LONG v43; // r10d
  __int64 v44; // rdx
  LONG v45; // eax
  LONG v46; // eax
  LONG v47; // eax
  LONG v48; // eax
  LONG v49; // ecx
  LONG v50; // r11d
  LONG v51; // r8d
  LONG v52; // r12d
  __int64 v53; // r9
  unsigned int v54; // ecx
  int v55; // edx
  __m128i *v56; // rcx
  int v57; // edx
  LONG v58; // eax
  LONG v59; // r9d
  LONG v60; // r10d
  LONG v61; // r11d
  LONG v62; // eax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v63; // eax
  __int64 v64; // r8
  __int64 v65; // rdx
  __int64 v66; // rcx
  LONG v67; // ecx
  LONG v68; // eax
  int v69; // ecx
  int v70; // eax
  __int64 v71; // rdx
  int v72; // eax
  __int64 v73; // r9
  unsigned __int64 v74; // rax
  __int64 v75; // rax
  __m128i v76; // xmm0
  int v77; // ecx
  int v78; // eax
  int v79; // eax
  __int64 v80; // r12
  const struct DXGDEVICE *v81; // r14
  __int64 v82; // rax
  const struct tagRECT *v83; // r8
  _DWORD *v84; // r8
  struct tagRECT *v85; // rcx
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  char v87; // [rsp+50h] [rbp-B0h]
  LONG v88; // [rsp+54h] [rbp-ACh]
  LONG v89; // [rsp+58h] [rbp-A8h]
  int v90; // [rsp+5Ch] [rbp-A4h]
  LONG v91; // [rsp+60h] [rbp-A0h]
  LONG v92; // [rsp+64h] [rbp-9Ch]
  LONG v93; // [rsp+68h] [rbp-98h]
  __int64 v94; // [rsp+70h] [rbp-90h]
  __int128 v95; // [rsp+70h] [rbp-90h]
  int v96; // [rsp+80h] [rbp-80h]
  int v97; // [rsp+84h] [rbp-7Ch]
  int v98; // [rsp+88h] [rbp-78h]
  int v99; // [rsp+8Ch] [rbp-74h]
  LONG v100; // [rsp+90h] [rbp-70h]
  unsigned int v101; // [rsp+94h] [rbp-6Ch]
  unsigned int v102; // [rsp+98h] [rbp-68h]
  __int64 v103; // [rsp+A0h] [rbp-60h] BYREF
  struct tagRECT v104; // [rsp+A8h] [rbp-58h] BYREF
  struct tagRECT v105; // [rsp+B8h] [rbp-48h] BYREF
  const struct DXGDEVICE *v106; // [rsp+C8h] [rbp-38h]
  ADAPTER_DISPLAY *v107; // [rsp+D0h] [rbp-30h]
  struct tagRECT *v108; // [rsp+D8h] [rbp-28h]
  struct tagRECT v109; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v110; // [rsp+F8h] [rbp-8h] BYREF

  v106 = a4;
  v7 = this + 8;
  this[8].top = 0;
  this[8].right = this[2].left - this[1].right;
  this[8].bottom = this[2].top - this[1].bottom;
  this[8].left = 0;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_BYTE *)&Value & 2) != 0 )
  {
    if ( (*(_BYTE *)&Value & 0x40) != 0 && !DXGPRESENT::IntersectRect(this + 8, &a2->DstRect, this + 8) )
      goto LABEL_3;
    this[9] = *v7;
  }
  else
  {
    this[9].right = a5;
    this[9].bottom = a6;
    this[9].top = 0;
    this[9].left = 0;
    if ( !(unsigned int)DXGPRESENT::ClipRects(
                          this + 9,
                          v7,
                          (const struct tagRECT *)((unsigned __int64)&a2->SrcRect & -(__int64)((*(_DWORD *)&a2->Flags.0 & 0x80u) != 0)),
                          (const struct tagRECT *)((unsigned __int64)&a2->DstRect & -(__int64)((a2->Flags.Value & 0x40) != 0))) )
      goto LABEL_3;
  }
  right = this[1].right;
  v13 = right + v7->left;
  v14 = right + this[8].right;
  bottom = this[1].bottom;
  v16 = bottom + this[8].top;
  v17 = bottom + this[8].bottom;
  v7->left = v13;
  this[8].bottom = v17;
  this[8].top = v16;
  this[8].right = v14;
  if ( (a2->Flags.Value & 0x10000) != 0 )
  {
    bottom_low = LOWORD(this[26].bottom);
    if ( (unsigned __int16)bottom_low > 1u )
    {
      this[8].left = v13 * bottom_low;
      this[8].top = bottom_low * v16;
      this[8].right = bottom_low * v14;
      this[8].bottom = v17 * bottom_low;
    }
  }
  if ( !this[7].top )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 11203;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_SubRectCnt", 11203LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*(_QWORD *)&this[1].left )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 11204;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pVisRgnData", 11204LL, 0LL, 0LL, 0LL, 0LL);
  }
  for ( i = 0; ; ++i )
  {
    top = 1;
    if ( this[4].top )
      top = this[4].top;
    if ( i >= top )
      break;
    v21 = i;
    *(&this[22].left + v21) = 0;
  }
  v22 = *(_QWORD *)&this[1].left;
  v23 = *(unsigned int *)(v22 + 8) * (unsigned __int64)(unsigned int)this[7].top;
  if ( v23 > 0xFFFFFFFF )
  {
    WdLogSingleEntry4(2LL, -1073741675LL, this, (unsigned int)this[7].top, *(unsigned int *)(v22 + 8));
    v66 = *(_QWORD *)&this[1].left;
    WdLogGlobalForLineNumber = 11220;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x from 0x%I64x due to multiplication overflow 0x%I64d x 0x%I64d",
      -1073741675LL,
      (__int64)this,
      (unsigned int)this[7].top,
      *(unsigned int *)(v66 + 8),
      0LL);
    return 3221225621LL;
  }
  if ( !(_DWORD)v23 )
  {
LABEL_3:
    this->top &= 0xFFFFFEF7;
    return 0LL;
  }
  for ( j = 0; ; ++j )
  {
    v25 = 1;
    if ( this[4].top )
      v25 = this[4].top;
    if ( j >= v25 )
    {
      v26 = this[9].top;
      v27 = this[9].bottom - v26;
      v28 = this[8].top;
      v29 = this[8].bottom - v28;
      v98 = 0;
      v99 = 0;
      v97 = 0;
      v96 = 0;
      if ( v29 != v27 || (v30 = 0, this[8].right - this[8].left != this[9].right - this[9].left) )
        v30 = 1;
      left = this[8].left;
      v32 = this[9].left;
      v87 = v30;
      if ( v30 )
      {
        v97 = ((this[8].right - left) << 16) / (this[9].right - v32);
        v96 = (v29 << 16) / v27;
      }
      else
      {
        v98 = left - v32;
        v99 = v28 - v26;
      }
      if ( (a2->Flags.Value & 0x10100) == 0x10100 )
      {
        v95 = *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v106 + 235) + 3120LL) + 128LL)
                        + 3984LL * a2->VidPnSourceId
                        + 628);
        v71 = *(_QWORD *)(*((_QWORD *)v106 + 5) + 88LL);
        v103 = 0LL;
        v36 = v95;
        v35 = DWORD1(v95);
        v34 = DWORD2(v95);
        v33 = HIDWORD(v95);
        if ( (*(unsigned int (__fastcall **)(HDC, __int64 *))(v71 + 328))(a3, &v103) )
        {
          v36 = v95 - v103;
          v35 = DWORD1(v95) - HIDWORD(v103);
          v34 = DWORD2(v95) - v103;
          v33 = HIDWORD(v95) - HIDWORD(v103);
        }
        v72 = LOWORD(this[26].bottom);
        v91 = v36;
        v90 = v35;
        v92 = v34;
        if ( (unsigned __int16)v72 <= 1u )
          goto LABEL_31;
        v36 *= v72;
        v35 *= v72;
        v34 *= v72;
        v33 *= v72;
      }
      else
      {
        v33 = 0;
        v34 = 0;
        v35 = 0;
        v36 = 0;
      }
      v91 = v36;
      v90 = v35;
      v92 = v34;
LABEL_31:
      v37 = 0;
      v102 = 0;
      if ( !this[7].top )
        goto LABEL_3;
      v38 = this + 9;
      v39 = this + 8;
      while ( 1 )
      {
        v40 = *(_QWORD *)&this[7].right;
        v41 = v38->left;
        v42 = this[9].right;
        v43 = this[9].top;
        v44 = 2LL * v37;
        v109 = 0LL;
        v45 = *(_DWORD *)(v40 + 16LL * v37);
        if ( v45 > v41 )
          v41 = v45;
        v46 = *(_DWORD *)(v40 + 8 * v44 + 8);
        v109.left = v41;
        if ( v46 < v42 )
          v42 = v46;
        v47 = *(_DWORD *)(v40 + 8 * v44 + 4);
        v109.right = v42;
        if ( v47 > v43 )
          v43 = v47;
        v48 = *(_DWORD *)(v40 + 8 * v44 + 12);
        v49 = this[9].bottom;
        v109.top = v43;
        if ( v48 < v49 )
          v49 = v48;
        v109.bottom = v49;
        if ( v49 > v43 && v42 > v41 )
        {
          v104 = 0LL;
          if ( v87 )
          {
            DXGPRESENT::XformRect(v39, v38, &v104, &v109, v97, v96);
            v52 = v104.bottom;
            v51 = v104.right;
            v50 = v104.left;
            v100 = v104.top;
          }
          else
          {
            v50 = v41 + v98;
            v51 = v42 + v98;
            v104.left = v50;
            v104.right = v42 + v98;
            v52 = v49 + v99;
            v100 = v43 + v99;
            v104.top = v43 + v99;
            v104.bottom = v49 + v99;
          }
          v53 = *(_QWORD *)&this[1].left;
          v54 = 0;
          v93 = v52;
          v89 = v51;
          v88 = v50;
          v94 = v53;
          v101 = 0;
          if ( *(_DWORD *)(v53 + 8) )
          {
            while ( 1 )
            {
              v55 = LOWORD(this[26].bottom);
              v56 = (__m128i *)(16LL * v54 + v53 + 32);
              v110 = 0LL;
              v105 = 0LL;
              if ( (unsigned __int16)v55 > 1u )
              {
                v76 = *v56;
                v77 = v55;
                v78 = v55 * v76.m128i_i32[1];
                v57 = v55 * _mm_cvtsi128_si32(v76);
                *(_QWORD *)&v110 = __PAIR64__(v78, v57);
                DWORD2(v110) = v77 * v76.m128i_i32[2];
                v79 = v77 * v76.m128i_i32[3];
                v56 = (__m128i *)&v110;
                HIDWORD(v110) = v79;
              }
              else
              {
                v57 = v56->m128i_i32[0];
              }
              v58 = v56->m128i_i32[2];
              v59 = v50;
              v60 = v51;
              if ( v57 > v50 )
                v59 = v57;
              v105.left = v59;
              if ( v58 < v51 )
                v60 = v58;
              v105.right = v60;
              if ( v59 >= v60 )
                goto LABEL_64;
              v61 = v100;
              if ( v56->m128i_i32[1] > v100 )
                v61 = v56->m128i_i32[1];
              v62 = v56->m128i_i32[3];
              v105.top = v61;
              if ( v62 < v93 )
                v52 = v62;
              v105.bottom = v52;
              if ( v61 < v52 )
                break;
LABEL_63:
              v50 = v88;
LABEL_64:
              v54 = v101 + 1;
              v52 = v93;
              v53 = v94;
              v101 = v54;
              if ( v54 >= *(_DWORD *)(*(_QWORD *)&this[1].left + 8LL) )
                goto LABEL_65;
            }
            v63 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
            if ( (*(_DWORD *)&v63 & 0x10000) != 0 )
            {
              v64 = *(_QWORD *)&this[14].left;
              v65 = 2LL * (unsigned int)this[22].left;
              if ( (*(_WORD *)&v63 & 0x100) == 0 )
              {
                *(struct tagRECT *)(v64 + 16LL * (unsigned int)this[22].left) = v105;
                goto LABEL_61;
              }
              v67 = v36;
              v68 = v34;
              if ( v59 > v36 )
                v67 = v59;
              *(_DWORD *)(v64 + 16LL * (unsigned int)this[22].left) = v67;
              if ( v60 < v34 )
                v68 = v60;
              *(_DWORD *)(v64 + 8 * v65 + 8) = v68;
              if ( v67 < v68 )
              {
                v69 = v35;
                v70 = v33;
                if ( v61 > v35 )
                  v69 = v61;
                *(_DWORD *)(v64 + 8 * v65 + 4) = v69;
                if ( v52 < v33 )
                  v70 = v52;
                *(_DWORD *)(v64 + 8 * v65 + 12) = v70;
                if ( v69 < v70 )
                {
LABEL_61:
                  ++this[22].left;
                  this->top &= ~2u;
                }
              }
            }
            else
            {
              v80 = 0LL;
              if ( !this[4].top )
                goto LABEL_63;
              v81 = v106;
              do
              {
                v82 = *((_QWORD *)v81 + 235);
                if ( !v82 || !*(_QWORD *)(v82 + 3120) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 11362;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"(pDevice->GetDisplayAdapter(VidPnSourceId) != NULL) && pDevice->GetDisplayAdapter(VidPnSourceId)->Is"
                     "DisplayAdapter()",
                    11362LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                v107 = *(ADAPTER_DISPLAY **)(*((_QWORD *)v81 + 235) + 3120LL);
                if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(v107) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 11365;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    0xFFFFFFFFLL,
                    L"pDisplayCore->IsCoreResourceSharedOwner()",
                    11365LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                v83 = (const struct tagRECT *)(3984LL * (unsigned int)v80 + *((_QWORD *)v107 + 16) + 628LL);
                v108 = (struct tagRECT *)(*((_QWORD *)&this[14].left + v80)
                                        + 16LL * *((unsigned int *)&this[22].left + v80));
                if ( DXGPRESENT::IntersectRect(v108, &v105, v83)
                  && ((a2->Flags.Value & 0x100) == 0 || (_DWORD)v80 == a2->VidPnSourceId) )
                {
                  v85 = v108;
                  v108->top -= v84[1];
                  v85->bottom -= v84[1];
                  v85->left -= *v84;
                  v85->right -= *v84;
                  CddInterface = ADAPTER_DISPLAY::GetCddInterface(v107, v80);
                  if ( CddInterface )
                    (*((void (__fastcall **)(_QWORD, struct tagRECT *))CddInterface + 1))(*(_QWORD *)CddInterface, v108);
                  ++*(&this[22].left + v80);
                  this->top &= ~2u;
                }
                v80 = (unsigned int)(v80 + 1);
              }
              while ( (unsigned int)v80 < this[4].top );
              v35 = v90;
              v36 = v91;
              v34 = v92;
            }
            v51 = v89;
            goto LABEL_63;
          }
LABEL_65:
          v39 = this + 8;
          v38 = this + 9;
        }
        v37 = v102 + 1;
        v102 = v37;
        if ( v37 >= this[7].top )
          goto LABEL_3;
      }
    }
    if ( *(&this[10].left + j) >= (unsigned int)v23 )
      continue;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)&this[14].left + j));
    v74 = 16LL * (unsigned int)v23;
    if ( !is_mul_ok((unsigned int)v23, 0x10uLL) )
      v74 = -1LL;
    v75 = operator new[](v74, 0x4B677844u, 256LL, v73);
    *((_QWORD *)&this[14].left + j) = v75;
    if ( !v75 )
      break;
    *(&this[10].left + j) = v23;
  }
  *(&this[10].left + j) = 0;
  WdLogSingleEntry2(6LL, this, (unsigned int)v23);
  WdLogGlobalForLineNumber = 10453;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    0xFFFFFFFFLL,
    L"0x%I64x fails to allocate array of 0x%I64d RECTs",
    (__int64)this,
    (unsigned int)v23,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
