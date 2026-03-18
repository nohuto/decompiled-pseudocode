/*
 * XREFs of ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x140042C90
 * Callers:
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x140032AA8 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     xxxInternalInvalidate @ 0x1400428C0 (xxxInternalInvalidate.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x140042C90 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 * Callees:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x140042C90 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     PhysicalToLogicalInPlaceRgn @ 0x1400435E0 (PhysicalToLogicalInPlaceRgn.c)
 *     PhysicalToLogicalInPlaceRect @ 0x140044AD0 (PhysicalToLogicalInPlaceRect.c)
 *     InternalInvalidate3 @ 0x140044BB8 (InternalInvalidate3.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 *     GetAppCompatFlags @ 0x1400C13E0 (GetAppCompatFlags.c)
 *     ?SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z @ 0x140175244 (-SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x14019E0E8 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall InternalInvalidate2(struct tagWND *a1, HRGN a2, HRGN a3, struct tagRECT *a4, unsigned int a5)
{
  unsigned int v5; // edi
  HRGN v6; // rbx
  __int64 right; // rdx
  HRGN v8; // r15
  unsigned int v9; // r12d
  struct tagWND *v10; // rsi
  struct tagRECT v11; // xmm0
  int left; // eax
  int top; // eax
  int v14; // eax
  struct tagWND *v15; // r13
  __int16 v16; // r15
  __int64 v18; // r8
  __int64 v19; // r14
  LONG v20; // ecx
  LONG v21; // eax
  LONG v22; // ecx
  LONG bottom; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  __int64 UserSessionState; // rax
  __int64 v27; // rdx
  struct tagWND *v28; // rcx
  struct tagWND *v29; // r14
  HRGN v30; // r15
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  bool v35; // zf
  __int64 v36; // rax
  __int64 v37; // rax
  _BYTE *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  struct tagWND *v42; // rcx
  __int64 v43; // rax
  unsigned int v44; // eax
  bool v45; // cf
  __int64 v46; // rax
  int v47; // r13d
  __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  _BYTE *v52; // rcx
  int v53; // r12d
  HRGN v54; // rdx
  int v55; // ebx
  HRGN v56; // rcx
  float *v57; // rax
  float v58; // xmm1_4
  float v59; // xmm3_4
  int v60; // ecx
  int v61; // eax
  HRGN v62; // r14
  int v63; // eax
  int v64; // r15d
  __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 Prop; // rax
  __int64 v71; // rcx
  __int64 v72; // r14
  __int64 EmptyRgnPublic; // rbx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rax
  int v79; // [rsp+30h] [rbp-61h]
  HRGN v80; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v81; // [rsp+40h] [rbp-51h]
  int v82; // [rsp+44h] [rbp-4Dh]
  HRGN v83; // [rsp+48h] [rbp-49h]
  HRGN v84; // [rsp+50h] [rbp-41h] BYREF
  HRGN v85; // [rsp+58h] [rbp-39h]
  int v86; // [rsp+60h] [rbp-31h]
  HRGN v87; // [rsp+68h] [rbp-29h]
  struct tagRECT v88; // [rsp+70h] [rbp-21h] BYREF
  struct tagRECT v89; // [rsp+80h] [rbp-11h] BYREF

  v5 = 0;
  v85 = a2;
  v88 = 0LL;
  v6 = a2;
  v83 = a3;
  right = *((_QWORD *)a1 + 5);
  v8 = a3;
  v9 = a5 | 0x8000;
  v10 = a1;
  v11 = *(struct tagRECT *)(right + 88);
  if ( !*(_QWORD *)(right + 168) )
    v9 = a5;
  v81 = v9;
  v79 = v9 | 0x2000;
  v82 = v9 & 1;
  v88 = v11;
  if ( (v9 & 1) == 0 )
    goto LABEL_26;
  LOBYTE(a1) = (*(_BYTE *)(right + 26) >> 3) & ((v9 & 0x10000) == 0);
  if ( (_BYTE)a1 && (*((_DWORD *)v10 + 95) & 0x4000) == 0 )
  {
    a1 = (struct tagWND *)*((_QWORD *)v10 + 13);
    if ( a1 )
    {
      v36 = *((_QWORD *)v10 + 3);
      if ( v36 )
      {
        v37 = *(_QWORD *)(v36 + 8);
        if ( v37 )
        {
          if ( a1 == *(struct tagWND **)(v37 + 24) )
            return 1LL;
        }
      }
    }
    if ( (*(_DWORD *)(right + 232) & 2) == 0 )
      return 1LL;
  }
  *((_DWORD *)v10 + 95) &= ~0x4000u;
  if ( (*(_BYTE *)(right + 27) & 0x20) != 0 || (*(_BYTE *)(right + 26) & 8) != 0 )
  {
    if ( v88.left >= v88.right || v88.top >= v88.bottom )
      return 1LL;
  }
  else
  {
    v89 = *a4;
    if ( *((_QWORD *)v10 + 13) )
      PhysicalToLogicalInPlaceRect(v10, &v89);
    left = v88.left;
    right = (unsigned int)v88.right;
    if ( v88.left <= v89.left )
      left = v89.left;
    v88.left = left;
    if ( v88.right >= v89.right )
      right = (unsigned int)v89.right;
    v88.right = right;
    if ( left >= (int)right )
      goto LABEL_22;
    top = v88.top;
    right = (unsigned int)v88.bottom;
    if ( v88.top <= v89.top )
      top = v89.top;
    v88.top = top;
    if ( v88.bottom >= v89.bottom )
      right = (unsigned int)v89.bottom;
    v88.bottom = right;
    if ( top < (int)right )
    {
      v14 = 0;
    }
    else
    {
LABEL_22:
      v14 = 1;
      v88.bottom = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
      v88.top = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
      v88.right = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
      v88.left = _mm_cvtsi128_si32((__m128i)0LL);
    }
    if ( v14 )
      return 1LL;
  }
  if ( (unsigned __int64)v6 > 1 )
  {
    v24 = SmartRectInRegion(v6, &v88);
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        v44 = v25 - 1;
        if ( v44 )
        {
          if ( v44 == 1 )
            return 0LL;
        }
        else
        {
          v45 = (GetAppCompatFlags(*((_QWORD *)v10 + 2)) & 0x10000) != 0;
          v46 = 1LL;
          if ( v45 )
            v46 = (__int64)v6;
          v6 = (HRGN)v46;
          v85 = (HRGN)v46;
        }
      }
      else if ( (v9 & 0x8000) != 0 )
      {
        UserSessionState = W32GetUserSessionState(a1, right);
        SetRectRgnIndirect(*(_QWORD *)(UserSessionState + 63416), &v88);
        v28 = 0LL;
        v29 = v10;
        do
        {
          v30 = *(HRGN *)(*((_QWORD *)v29 + 5) + 168LL);
          v80 = v30;
          if ( v30 )
          {
            if ( v28 )
            {
              v61 = PhysicalToLogicalInPlaceRgn(v28, &v80);
              v30 = v80;
              v47 = v61;
            }
            else
            {
              v47 = 0;
            }
            v48 = *(_QWORD *)(W32GetUserSessionState(v28, v27) + 63416);
            v51 = W32GetUserSessionState(v50, v49);
            GreCombineRgn(*(_QWORD *)(v51 + 63416), v48, v30, 1LL);
            if ( v47 )
              GreDeleteObject(v30);
          }
          v28 = v29;
          v29 = (struct tagWND *)*((_QWORD *)v29 + 13);
        }
        while ( v29 );
        v31 = *(_QWORD *)(W32GetUserSessionState(v28, v27) + 63416);
        v34 = W32GetUserSessionState(v33, v32);
        v35 = (unsigned int)GreCombineRgn(*(_QWORD *)(v34 + 63416), v31, v85, 1LL) == 1;
        LOWORD(v9) = v81;
        if ( v35 )
          return 1LL;
        v6 = v85;
        v8 = v83;
      }
      goto LABEL_25;
    }
    return 1LL;
  }
LABEL_25:
  if ( (*(_BYTE *)(*((_QWORD *)v10 + 5) + 27LL) & 0x10) != 0 )
  {
    v69 = W32GetUserSessionState(a1, right);
    Prop = GetProp(v10, *(unsigned __int16 *)(v69 + 41422), 1LL);
    v72 = Prop;
    if ( Prop )
    {
      EmptyRgnPublic = *(_QWORD *)(Prop + 40);
      if ( !EmptyRgnPublic )
      {
        EmptyRgnPublic = CreateEmptyRgnPublic();
        if ( !EmptyRgnPublic )
          EmptyRgnPublic = 1LL;
      }
      v74 = W32GetUserSessionState(v71, right);
      SetRectRgnIndirect(*(_QWORD *)(v74 + 63416), &v88);
      if ( EmptyRgnPublic != 1 )
      {
        v78 = W32GetUserSessionState(v76, v75);
        GreCombineRgn(EmptyRgnPublic, EmptyRgnPublic, *(_QWORD *)(v78 + 63416), 2LL);
      }
      *(_QWORD *)(v72 + 40) = EmptyRgnPublic;
      v77 = W32GetUserSessionState(v76, v75);
      return (unsigned int)GreCombineRgn(v8, v8, *(_QWORD *)(v77 + 63416), 4LL) != 1;
    }
  }
LABEL_26:
  if ( (*(_BYTE *)(*((_QWORD *)v10 + 5) + 31LL) & 2) == 0 )
    InternalInvalidate3(v10);
  v15 = (struct tagWND *)*((_QWORD *)v10 + 14);
  v16 = v9;
  if ( v15 )
  {
    v18 = *((_QWORD *)v10 + 5);
    LOBYTE(right) = *(_BYTE *)(v18 + 31);
    if ( (((v9 & 0x40) == 0) & (unsigned __int8)~((unsigned __int8)right >> 5)) != 0
      && ((v9 & 0x80u) != 0 || (right & 2) == 0) )
    {
      v19 = 0LL;
      v89 = 0LL;
      if ( v82 )
        v79 |= 0x404u;
      v20 = *(_DWORD *)(v18 + 104);
      if ( v88.left > v20 )
        v20 = v88.left;
      v89.left = v20;
      v21 = *(_DWORD *)(v18 + 112);
      if ( v88.right < v21 )
        v21 = v88.right;
      v89.right = v21;
      if ( v20 >= v21 )
        goto LABEL_48;
      v22 = *(_DWORD *)(v18 + 108);
      if ( v88.top > v22 )
        v22 = v88.top;
      v89.top = v22;
      bottom = *(_DWORD *)(v18 + 116);
      if ( v88.bottom < bottom )
        bottom = v88.bottom;
      v89.bottom = bottom;
      if ( v22 < bottom )
      {
        v16 = v9;
        while ( v15 )
        {
          v52 = (_BYTE *)*((_QWORD *)v15 + 5);
          if ( (v52[31] & 0x10) != 0 )
          {
            if ( (v52[27] & 0x20) != 0 || (v52[26] & 8) != 0 )
            {
              v53 = 1;
              if ( v19 || (v19 = CreateEmptyRgnPublic()) != 0 )
              {
                v54 = v83;
                if ( v6 != (HRGN)1 )
                  v54 = v6;
                GreCombineRgn(v19, v54, 0LL, 5LL);
              }
            }
            else
            {
              v53 = 0;
            }
            v84 = v83;
            v80 = v6;
            v81 = PhysicalToLogicalInPlaceRect(v15, &v89);
            v55 = PhysicalToLogicalInPlaceRgn(v15, &v80);
            v82 = PhysicalToLogicalInPlaceRgn(v15, &v84);
            v87 = v84;
            v86 = InternalInvalidate2(v15, v80, v84, &v89, v79);
            if ( v55 )
              GreDeleteObject(v80);
            if ( v82 )
            {
              if ( (unsigned int)LogicalToPhysicalInPlaceRgnWorker(v15, &v84, 0LL) )
              {
                GreCombineRgn(v83, v84, 0LL, 5LL);
                GreDeleteObject(v84);
              }
              GreDeleteObject(v87);
            }
            if ( v81
              && (*(_DWORD *)(*((_QWORD *)v15 + 5) + 232LL) & 2) != 0
              && *((_QWORD *)v15 + 27)
              && (unsigned int)IsWindowDesktopComposed(v15) )
            {
              v57 = (float *)*((_QWORD *)v15 + 27);
              v58 = *v57;
              v59 = v57[5];
              right = (unsigned int)(int)v57[13];
              v60 = (int)v57[12];
              v89.left = v60 + (int)(float)((float)v89.left * *v57);
              v89.right = v60 + (int)(float)((float)v89.right * v58);
              v89.bottom = right + (int)(float)((float)v89.bottom * v59);
              v89.top = right + (int)(float)((float)v89.top * v59);
            }
            if ( v53 && v19 )
            {
              v56 = v83;
              if ( v85 != (HRGN)1 )
                v56 = v85;
              GreCombineRgn(v56, v19, 0LL, 5LL);
            }
            if ( !v86 && !v53 )
            {
              if ( (v16 & 0x12) == 0 )
              {
                if ( v19 )
                  GreDeleteObject(v19);
                return 0LL;
              }
              v16 &= 0xF3D2u;
              v79 &= 0xFFFFD3D2;
            }
          }
          v15 = (struct tagWND *)*((_QWORD *)v15 + 11);
          v6 = v85;
        }
        if ( v19 )
          GreDeleteObject(v19);
      }
      else
      {
LABEL_48:
        v16 = v9;
      }
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)v10 + 5) + 31LL) & 2) != 0 )
    InternalInvalidate3(v10);
  if ( (v16 & 0x2000) == 0 )
    return 1LL;
  v38 = (_BYTE *)*((_QWORD *)v10 + 5);
  if ( (v38[24] & 0x20) != 0 )
    return 1LL;
  if ( (v38[26] & 8) != 0 )
    return 1LL;
  if ( (v38[31] & 4) == 0 )
    return 1LL;
  if ( (v16 & 8) == 0 )
  {
    v39 = *((_QWORD *)v10 + 13);
    if ( !v39
      || (*(_BYTE *)(*(_QWORD *)(v39 + 40) + 31LL) & 2) == 0 && (GetAppCompatFlags(*((_QWORD *)v10 + 2)) & 0x4000) == 0 )
    {
      return 1LL;
    }
  }
  v40 = W32GetUserSessionState(v38, right);
  SetRectRgnIndirect(*(_QWORD *)(v40 + 63416), &v88);
  if ( v16 < 0 )
  {
    v42 = 0LL;
    do
    {
      v62 = *(HRGN *)(*((_QWORD *)v10 + 5) + 168LL);
      v80 = v62;
      if ( v62 )
      {
        if ( v42 )
        {
          v63 = LogicalToPhysicalInPlaceRgnWorker(v42, &v80, 0LL);
          v62 = v80;
          v64 = v63;
        }
        else
        {
          v64 = 0;
        }
        v65 = *(_QWORD *)(W32GetUserSessionState(v42, v41) + 63416);
        v68 = W32GetUserSessionState(v67, v66);
        GreCombineRgn(*(_QWORD *)(v68 + 63416), v65, v62, 1LL);
        if ( v64 )
          GreDeleteObject(v62);
      }
      v42 = v10;
      v10 = (struct tagWND *)*((_QWORD *)v10 + 13);
    }
    while ( v10 );
  }
  v43 = W32GetUserSessionState(v42, v41);
  LOBYTE(v5) = (unsigned int)GreCombineRgn(v83, v83, *(_QWORD *)(v43 + 63416), 4LL) != 1;
  return v5;
}
