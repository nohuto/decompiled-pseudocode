/*
 * XREFs of ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x14030A06C
 * Callers:
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x140309304 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031B58 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1400631BC (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x14030AC10 (-ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z.c)
 *     ?XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z @ 0x14030B5D0 (-XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x14030B6AC (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
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
  unsigned __int64 v73; // rax
  __int64 v74; // rax
  __m128i v75; // xmm0
  int v76; // ecx
  int v77; // eax
  int v78; // eax
  __int64 v79; // r12
  const struct DXGDEVICE *v80; // r14
  __int64 v81; // rax
  const struct tagRECT *v82; // r8
  _DWORD *v83; // r8
  struct tagRECT *v84; // rcx
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  char v86; // [rsp+50h] [rbp-B0h]
  LONG v87; // [rsp+54h] [rbp-ACh]
  LONG v88; // [rsp+58h] [rbp-A8h]
  int v89; // [rsp+5Ch] [rbp-A4h]
  LONG v90; // [rsp+60h] [rbp-A0h]
  LONG v91; // [rsp+64h] [rbp-9Ch]
  LONG v92; // [rsp+68h] [rbp-98h]
  __int64 v93; // [rsp+70h] [rbp-90h]
  __int128 v94; // [rsp+70h] [rbp-90h]
  int v95; // [rsp+80h] [rbp-80h]
  int v96; // [rsp+84h] [rbp-7Ch]
  int v97; // [rsp+88h] [rbp-78h]
  int v98; // [rsp+8Ch] [rbp-74h]
  LONG v99; // [rsp+90h] [rbp-70h]
  unsigned int v100; // [rsp+94h] [rbp-6Ch]
  unsigned int v101; // [rsp+98h] [rbp-68h]
  __int64 v102; // [rsp+A0h] [rbp-60h] BYREF
  struct tagRECT v103; // [rsp+A8h] [rbp-58h] BYREF
  struct tagRECT v104; // [rsp+B8h] [rbp-48h] BYREF
  const struct DXGDEVICE *v105; // [rsp+C8h] [rbp-38h]
  ADAPTER_DISPLAY *v106; // [rsp+D0h] [rbp-30h]
  struct tagRECT *v107; // [rsp+D8h] [rbp-28h]
  struct tagRECT v108; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v109; // [rsp+F8h] [rbp-8h] BYREF

  v105 = a4;
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
    WdLogGlobalForLineNumber = 11253;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_SubRectCnt", 11253LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*(_QWORD *)&this[1].left )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 11254;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pVisRgnData", 11254LL, 0LL, 0LL, 0LL, 0LL);
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
    WdLogGlobalForLineNumber = 11270;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
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
      v97 = 0;
      v98 = 0;
      v96 = 0;
      v95 = 0;
      if ( v29 != v27 || (v30 = 0, this[8].right - this[8].left != this[9].right - this[9].left) )
        v30 = 1;
      left = this[8].left;
      v32 = this[9].left;
      v86 = v30;
      if ( v30 )
      {
        v96 = ((this[8].right - left) << 16) / (this[9].right - v32);
        v95 = (v29 << 16) / v27;
      }
      else
      {
        v97 = left - v32;
        v98 = v28 - v26;
      }
      if ( (a2->Flags.Value & 0x10100) == 0x10100 )
      {
        v94 = *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v105 + 237) + 3120LL) + 128LL)
                        + 4024LL * a2->VidPnSourceId
                        + 628);
        v71 = *(_QWORD *)(*((_QWORD *)v105 + 5) + 88LL);
        v102 = 0LL;
        v36 = v94;
        v35 = DWORD1(v94);
        v34 = DWORD2(v94);
        v33 = HIDWORD(v94);
        if ( (*(unsigned int (__fastcall **)(HDC, __int64 *))(v71 + 328))(a3, &v102) )
        {
          v36 = v94 - v102;
          v35 = DWORD1(v94) - HIDWORD(v102);
          v34 = DWORD2(v94) - v102;
          v33 = HIDWORD(v94) - HIDWORD(v102);
        }
        v72 = LOWORD(this[26].bottom);
        v90 = v36;
        v89 = v35;
        v91 = v34;
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
      v90 = v36;
      v89 = v35;
      v91 = v34;
LABEL_31:
      v37 = 0;
      v101 = 0;
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
        v108 = 0LL;
        v45 = *(_DWORD *)(v40 + 16LL * v37);
        if ( v45 > v41 )
          v41 = v45;
        v46 = *(_DWORD *)(v40 + 8 * v44 + 8);
        v108.left = v41;
        if ( v46 < v42 )
          v42 = v46;
        v47 = *(_DWORD *)(v40 + 8 * v44 + 4);
        v108.right = v42;
        if ( v47 > v43 )
          v43 = v47;
        v48 = *(_DWORD *)(v40 + 8 * v44 + 12);
        v49 = this[9].bottom;
        v108.top = v43;
        if ( v48 < v49 )
          v49 = v48;
        v108.bottom = v49;
        if ( v49 > v43 && v42 > v41 )
        {
          v103 = 0LL;
          if ( v86 )
          {
            DXGPRESENT::XformRect(v39, v38, &v103, &v108, v96, v95);
            v52 = v103.bottom;
            v51 = v103.right;
            v50 = v103.left;
            v99 = v103.top;
          }
          else
          {
            v50 = v41 + v97;
            v51 = v42 + v97;
            v103.left = v50;
            v103.right = v42 + v97;
            v52 = v49 + v98;
            v99 = v43 + v98;
            v103.top = v43 + v98;
            v103.bottom = v49 + v98;
          }
          v53 = *(_QWORD *)&this[1].left;
          v54 = 0;
          v92 = v52;
          v88 = v51;
          v87 = v50;
          v93 = v53;
          v100 = 0;
          if ( *(_DWORD *)(v53 + 8) )
          {
            while ( 1 )
            {
              v55 = LOWORD(this[26].bottom);
              v56 = (__m128i *)(16LL * v54 + v53 + 32);
              v109 = 0LL;
              v104 = 0LL;
              if ( (unsigned __int16)v55 > 1u )
              {
                v75 = *v56;
                v76 = v55;
                v77 = v55 * v75.m128i_i32[1];
                v57 = v55 * _mm_cvtsi128_si32(v75);
                *(_QWORD *)&v109 = __PAIR64__(v77, v57);
                DWORD2(v109) = v76 * v75.m128i_i32[2];
                v78 = v76 * v75.m128i_i32[3];
                v56 = (__m128i *)&v109;
                HIDWORD(v109) = v78;
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
              v104.left = v59;
              if ( v58 < v51 )
                v60 = v58;
              v104.right = v60;
              if ( v59 >= v60 )
                goto LABEL_64;
              v61 = v99;
              if ( v56->m128i_i32[1] > v99 )
                v61 = v56->m128i_i32[1];
              v62 = v56->m128i_i32[3];
              v104.top = v61;
              if ( v62 < v92 )
                v52 = v62;
              v104.bottom = v52;
              if ( v61 < v52 )
                break;
LABEL_63:
              v50 = v87;
LABEL_64:
              v54 = v100 + 1;
              v52 = v92;
              v53 = v93;
              v100 = v54;
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
                *(struct tagRECT *)(v64 + 16LL * (unsigned int)this[22].left) = v104;
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
              v79 = 0LL;
              if ( !this[4].top )
                goto LABEL_63;
              v80 = v105;
              do
              {
                v81 = *((_QWORD *)v80 + 237);
                if ( !v81 || !*(_QWORD *)(v81 + 3120) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 11412;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146LL,
                    0xFFFFFFFFLL,
                    L"(pDevice->GetDisplayAdapter(VidPnSourceId) != NULL) && pDevice->GetDisplayAdapter(VidPnSourceId)->Is"
                     "DisplayAdapter()",
                    11412LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                v106 = *(ADAPTER_DISPLAY **)(*((_QWORD *)v80 + 237) + 3120LL);
                if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(v106) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 11415;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146LL,
                    0xFFFFFFFFLL,
                    L"pDisplayCore->IsCoreResourceSharedOwner()",
                    11415LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                v82 = (const struct tagRECT *)(4024LL * (unsigned int)v79 + *((_QWORD *)v106 + 16) + 628LL);
                v107 = (struct tagRECT *)(*((_QWORD *)&this[14].left + v79)
                                        + 16LL * *((unsigned int *)&this[22].left + v79));
                if ( DXGPRESENT::IntersectRect(v107, &v104, v82)
                  && ((a2->Flags.Value & 0x100) == 0 || (_DWORD)v79 == a2->VidPnSourceId) )
                {
                  v84 = v107;
                  v107->top -= v83[1];
                  v84->bottom -= v83[1];
                  v84->left -= *v83;
                  v84->right -= *v83;
                  CddInterface = ADAPTER_DISPLAY::GetCddInterface(v106, v79);
                  if ( CddInterface )
                    (*((void (__fastcall **)(_QWORD, struct tagRECT *))CddInterface + 1))(*(_QWORD *)CddInterface, v107);
                  ++*(&this[22].left + v79);
                  this->top &= ~2u;
                }
                v79 = (unsigned int)(v79 + 1);
              }
              while ( (unsigned int)v79 < this[4].top );
              v35 = v89;
              v36 = v90;
              v34 = v91;
            }
            v51 = v88;
            goto LABEL_63;
          }
LABEL_65:
          v39 = this + 8;
          v38 = this + 9;
        }
        v37 = v101 + 1;
        v101 = v37;
        if ( v37 >= this[7].top )
          goto LABEL_3;
      }
    }
    if ( *(&this[10].left + j) >= (unsigned int)v23 )
      continue;
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)&this[14].left + j));
    v73 = 16LL * (unsigned int)v23;
    if ( !is_mul_ok((unsigned int)v23, 0x10uLL) )
      v73 = -1LL;
    v74 = operator new[](v73, 0x4B677844u, 256LL);
    *((_QWORD *)&this[14].left + j) = v74;
    if ( !v74 )
      break;
    *(&this[10].left + j) = v23;
  }
  *(&this[10].left + j) = 0;
  WdLogSingleEntry2(6LL, this, (unsigned int)v23);
  WdLogGlobalForLineNumber = 10503;
  DxgkLogInternalTriageEvent(
    0LL,
    262145LL,
    0xFFFFFFFFLL,
    L"0x%I64x fails to allocate array of 0x%I64d RECTs",
    (__int64)this,
    (unsigned int)v23,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
