/*
 * XREFs of ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x140008200
 * Callers:
 *     EngLineTo @ 0x140007EE0 (EngLineTo.c)
 *     EngStrokePath @ 0x140009AE0 (EngStrokePath.c)
 * Callees:
 *     vDrawLine @ 0x140007688 (vDrawLine.c)
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall vSolidLine(
        struct SURFACE *a1,
        struct _PATHOBJ *a2,
        struct _POINTFIX *a3,
        struct _CLIPOBJ *a4,
        unsigned int a5)
{
  int v5; // r14d
  __int64 v6; // r10
  __int64 v8; // r9
  unsigned int v10; // r8d
  struct _PATHOBJ *v11; // r15
  unsigned int *v12; // r13
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // ebx
  int v19; // r14d
  RECTL rclBounds; // xmm0
  int v21; // ecx
  LONG right; // eax
  LONG bottom; // eax
  struct _PATHOBJ v24; // rcx
  int v25; // r12d
  ULONG count; // eax
  ULONG v27; // edi
  char flags; // r8
  POINTFIX *pptfx; // rdx
  POINTFIX *v30; // rsi
  POINTFIX *v31; // rcx
  int v32; // ebx
  unsigned int v33; // ebx
  unsigned int v34; // [rsp+40h] [rbp-81h]
  __int64 v35; // [rsp+48h] [rbp-79h]
  __int64 v36; // [rsp+50h] [rbp-71h]
  struct _PATHDATA v37; // [rsp+58h] [rbp-69h] BYREF
  int v38; // [rsp+68h] [rbp-59h]
  POINTFIX v39; // [rsp+70h] [rbp-51h] BYREF
  POINTFIX v40; // [rsp+78h] [rbp-49h] BYREF
  struct _PATHOBJ *v41; // [rsp+80h] [rbp-41h]
  RECTL v42; // [rsp+90h] [rbp-31h] BYREF
  LONG top; // [rsp+A0h] [rbp-21h]
  LONG left; // [rsp+A4h] [rbp-1Dh]
  LONG v45; // [rsp+A8h] [rbp-19h]
  LONG v46; // [rsp+ACh] [rbp-15h]
  LONG v47; // [rsp+B0h] [rbp-11h]
  int v48; // [rsp+B4h] [rbp-Dh]
  LONG v49; // [rsp+B8h] [rbp-9h]
  int v50; // [rsp+BCh] [rbp-5h]
  int v51; // [rsp+C0h] [rbp-1h]
  LONG v52; // [rsp+C4h] [rbp+3h]
  int v53; // [rsp+C8h] [rbp+7h]
  LONG v54; // [rsp+CCh] [rbp+Bh]

  v5 = *((_DWORD *)a1 + 24);
  v6 = *((_QWORD *)a1 + 10);
  v41 = a2;
  v8 = *((_QWORD *)a1 + 79);
  v10 = *((_DWORD *)a1 + 22);
  v40 = 0LL;
  v11 = a2;
  v39 = 0LL;
  v12 = 0LL;
  v34 = v10;
  v36 = v6;
  v35 = v8;
  v37 = 0LL;
  switch ( v5 )
  {
    case 1:
      v18 = -(a5 != 0);
      goto LABEL_13;
    case 2:
      v33 = (16 * a5) | a5;
      goto LABEL_40;
    case 3:
      v33 = a5;
LABEL_40:
      v32 = (v33 << 8) | v33;
      goto LABEL_37;
    case 4:
      v32 = a5;
LABEL_37:
      v18 = (v32 << 16) | v32;
      goto LABEL_13;
  }
  if ( (unsigned int)(v5 - 5) >= 2 )
  {
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged();
    if ( CurrentThreadNonPaged )
      v14 = *CurrentThreadNonPaged;
    else
      v14 = 0LL;
    v15 = (v14 + 8) & -(__int64)(v14 != 0);
    if ( v15 )
    {
      v16 = *(_QWORD *)(((v14 + 8) & -(__int64)(v14 != 0)) + 0x48);
      if ( v16 != v15 + 72 )
      {
        v17 = v16 - 56;
        if ( v17 )
        {
          if ( (*(_DWORD *)(v17 + 444) & 0x100) != 0 && *(_DWORD *)(v17 + 452) )
            return;
        }
      }
    }
    v10 = v34;
    v6 = v36;
    v8 = v35;
  }
  v18 = a5;
LABEL_13:
  if ( a4 && a4->iDComplexity == 1 )
  {
    v12 = (unsigned int *)&v42;
    rclBounds = a4->rclBounds;
    left = a4->rclBounds.left;
    v47 = left;
    v52 = left;
    v21 = 1 - a4->rclBounds.top;
    top = a4->rclBounds.top;
    right = a4->rclBounds.right;
    v50 = v21;
    v53 = v21;
    v46 = right;
    v49 = right;
    v54 = right;
    bottom = a4->rclBounds.bottom;
    v48 = 1 - bottom;
    v51 = 1 - bottom;
    v42 = rclBounds;
    v45 = bottom;
  }
  v19 = v5 - 1;
  if ( v11 )
  {
    v24 = v11[1];
    v11->fl &= ~8u;
    v37.flags = 0;
    *(_QWORD *)(*(_QWORD *)&v24 + 80LL) = *(_QWORD *)(*(_QWORD *)&v24 + 32LL);
    do
    {
      v25 = EPATHOBJ::bEnum((EPATHOBJ *)v11, &v37);
      v38 = v25;
      count = v37.count;
      v27 = v37.count;
      if ( !v37.count )
        break;
      flags = v37.flags;
      pptfx = v37.pptfx;
      if ( (v37.flags & 1) != 0 )
      {
        v30 = v37.pptfx + 1;
        v40 = *v37.pptfx;
        v27 = v37.count - 1;
        v31 = v37.pptfx;
      }
      else
      {
        v31 = &v39;
        v30 = v37.pptfx;
      }
      if ( v27 )
      {
        do
        {
          vDrawLine((int *)v31, (int *)v30, v36, v34, v18, v12, v19, v35);
          v31 = v30++;
          --v27;
        }
        while ( v27 );
        pptfx = v37.pptfx;
        count = v37.count;
        flags = v37.flags;
        v11 = v41;
        v25 = v38;
      }
      v39 = pptfx[count - 1];
      if ( (flags & 8) != 0 )
        vDrawLine((int *)&v39, (int *)&v40, v36, v34, v18, v12, v19, v35);
    }
    while ( v25 );
  }
  else
  {
    vDrawLine((int *)a3, (int *)&a3[1], v6, v10, v18, v12, v19, v8);
  }
}
