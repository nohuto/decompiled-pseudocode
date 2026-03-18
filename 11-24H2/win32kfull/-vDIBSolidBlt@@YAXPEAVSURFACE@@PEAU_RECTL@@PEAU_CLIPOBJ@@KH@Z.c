/*
 * XREFs of ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x140018168
 * Callers:
 *     EngBitBlt @ 0x1400179A0 (EngBitBlt.c)
 *     ??1FRINGERECT@@QEAA@XZ @ 0x140180A64 (--1FRINGERECT@@QEAA@XZ.c)
 *     EngEraseSurface @ 0x1401DA350 (EngEraseSurface.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x14000C23C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A315C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?vSolidFillRect1@@YAXPEAU_RECTL@@KPEAEJKK@Z @ 0x14011DD50 (-vSolidFillRect1@@YAXPEAU_RECTL@@KPEAEJKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1401226C8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

void __fastcall vDIBSolidBlt(struct SURFACE *a1, struct _RECTL *a2, struct _CLIPOBJ *a3, unsigned int a4, int a5)
{
  int v8; // r13d
  __int64 v9; // rdi
  unsigned int v10; // edx
  void (__fastcall *v11)(struct _RECTL *, unsigned int, unsigned __int8 *, int, unsigned int, unsigned int); // rsi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  unsigned __int8 *v15; // r15
  unsigned int v16; // r12d
  unsigned int i; // r14d
  struct _RECTL *v18; // rcx
  LONG left; // r9d
  LONG v20; // eax
  LONG right; // r10d
  LONG v22; // eax
  LONG top; // r8d
  LONG v24; // eax
  LONG bottom; // eax
  LONG v26; // edx
  unsigned int v27; // [rsp+40h] [rbp-1E8h]
  int v28; // [rsp+44h] [rbp-1E4h]
  unsigned int v31; // [rsp+90h] [rbp-198h] BYREF
  _OWORD v32[20]; // [rsp+94h] [rbp-194h] BYREF

  v28 = 0;
  v8 = 0;
  memset_0(&v31, 0, 0x144uLL);
  v9 = *((unsigned int *)a1 + 24);
  if ( (unsigned int)(v9 - 1) > 5 && (unsigned int)bUMPDSecurityGateEx() )
    return;
  v10 = dword_14034EB40[v9];
  v27 = v10;
  if ( a5 )
  {
    v11 = vSolidXorRect24;
    if ( (_DWORD)v9 != 5 )
      v11 = vSolidXorRect1;
  }
  else
  {
    v11 = vSolidFillRect1;
    if ( (_DWORD)v9 == 5 )
      v11 = vSolidFillRect24;
  }
  v12 = v9 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 != 1 )
          goto LABEL_9;
        goto LABEL_51;
      }
    }
    else
    {
      LOBYTE(a4) = (16 * (a4 & 0xF)) | a4 & 0xF;
    }
    a4 = ((unsigned __int8)a4 << 8) | (unsigned __int8)a4;
LABEL_51:
    a4 = (a4 << 16) ^ (unsigned __int16)a4;
    goto LABEL_9;
  }
  a4 &= 1u;
  if ( a4 )
    a4 = -1;
LABEL_9:
  if ( a3 )
  {
    if ( a3->iDComplexity == 1 )
    {
      v8 = 1;
      v31 = 1;
      v32[0] = a3->rclBounds;
    }
    else if ( a3->iDComplexity == 3 )
    {
      v8 = 1;
      v28 = 1;
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a3, 0, 0, 4u, 0x14u);
      v10 = v27;
    }
  }
  v15 = (unsigned __int8 *)*((_QWORD *)a1 + 10);
  v16 = *((_DWORD *)a1 + 22);
  if ( *((_QWORD *)a1 + 79) )
  {
    v11 = vSolidFillRectWithCallback;
    v15 = (unsigned __int8 *)*((_QWORD *)a1 + 79);
  }
  if ( v8 )
  {
    if ( !v28 )
      goto LABEL_33;
    do
    {
      v28 = XCLIPOBJ::bEnum((XCLIPOBJ *)a3, 0x144u, (char *)&v31, 0LL);
LABEL_33:
      for ( i = 0; i < v31; ++i )
      {
        v18 = (struct _RECTL *)&v32[i];
        left = v18->left;
        v20 = a2->left;
        if ( v18->left < a2->left )
        {
          v18->left = v20;
          left = v20;
        }
        right = v18->right;
        v22 = a2->right;
        if ( right > v22 )
        {
          v18->right = v22;
          right = v22;
        }
        top = v18->top;
        v24 = a2->top;
        if ( top < v24 )
        {
          v18->top = v24;
          top = v24;
        }
        bottom = v18->bottom;
        v26 = a2->bottom;
        if ( bottom > v26 )
        {
          v18->bottom = v26;
          bottom = v26;
        }
        if ( top < bottom && left < right )
        {
          if ( v11 == vSolidFillRect1 )
            vSolidFillRect1(v18, 1u, v15, v16, a4, v27);
          else
            v11(v18, 1u, v15, v16, a4, v27);
        }
      }
    }
    while ( v28 );
  }
  else if ( v11 == vSolidFillRect1 )
  {
    vSolidFillRect1(a2, 1u, v15, v16, a4, v10);
  }
  else
  {
    v11(a2, 1u, v15, v16, a4, v10);
  }
}
