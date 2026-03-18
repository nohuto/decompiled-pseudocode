/*
 * XREFs of ?bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z @ 0x1401793D8
 * Callers:
 *     NtGdiModifyWorldTransform @ 0x140179300 (NtGdiModifyWorldTransform.c)
 * Callees:
 *     ?bWorldXformIdentity@@YAHPEBU_XFORML@@@Z @ 0x1401796AC (-bWorldXformIdentity@@YAHPEBU_XFORML@@@Z.c)
 *     ?bWorldMatrixInRange@@YAHPEAUMATRIX@@@Z @ 0x140179710 (-bWorldMatrixInRange@@YAHPEAUMATRIX@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memcmp @ 0x140340360 (memcmp.c)
 */

__int64 __fastcall XDCOBJ::bModifyWorldTransform(XDCOBJ *this, const struct _XFORML *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  bool v18; // zf
  __int64 v19; // rax
  const struct MATRIX *v20; // rdx
  const struct MATRIX *v21; // r8
  __int128 *p_Buf1; // [rsp+20h] [rbp-29h] BYREF
  const struct MATRIX *v23; // [rsp+28h] [rbp-21h] BYREF
  __int128 Buf1; // [rsp+30h] [rbp-19h] BYREF
  __int128 v25; // [rsp+40h] [rbp-9h]
  int v26; // [rsp+50h] [rbp+7h]
  _OWORD v27[2]; // [rsp+58h] [rbp+Fh] BYREF
  int v28; // [rsp+78h] [rbp+2Fh]

  Buf1 = 0LL;
  v26 = 0;
  v25 = 0LL;
  v6 = 0;
  Gre::Base::Globals(this);
  switch ( a3 )
  {
    case 1:
LABEL_6:
      v8 = *(_QWORD *)this;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 340LL) & 2) == 0 )
      {
        *(_OWORD *)(v8 + 392) = xmmword_140353550;
        *(_OWORD *)(v8 + 408) = xmmword_140353560;
        v9 = *(_QWORD *)(*(_QWORD *)this + 976LL);
        *(_OWORD *)(v9 + 356) = xmmword_140353550;
        *(_OWORD *)(v9 + 372) = xmmword_140353560;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 340LL) |= 0x80B2u;
      }
      return 1;
    case 2:
    case 3:
      vConvertXformToMatrix(a2, &Buf1);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 340LL) & 2) != 0 )
        goto LABEL_26;
      DC::QuickInitXform(*(_QWORD *)this, &v23, 515LL);
      v20 = v23;
      if ( v23 )
      {
        v28 = v26;
        p_Buf1 = &Buf1;
        v27[0] = Buf1;
        v27[1] = v25;
        if ( a3 == 2 )
        {
          v21 = v23;
          v20 = (const struct MATRIX *)v27;
        }
        else
        {
          v21 = (const struct MATRIX *)v27;
        }
        if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)&p_Buf1, v20, v21, 0) )
        {
LABEL_26:
          if ( (unsigned int)bWorldMatrixInRange((struct MATRIX *)&Buf1) )
          {
            v15 = *(_QWORD *)this;
            *(_OWORD *)(v15 + 392) = Buf1;
            *(_OWORD *)(v15 + 408) = v25;
            v16 = *(_QWORD *)(*(_QWORD *)this + 976LL);
            *(_OWORD *)(v16 + 356) = Buf1;
            *(_OWORD *)(v16 + 372) = v25;
            v17 = *(_QWORD *)this;
            v18 = memcmp(&Buf1, &xmmword_140353550, 0x20uLL) == 0;
            v19 = *(_QWORD *)(v17 + 976);
            if ( v18 )
            {
              *(_DWORD *)(v19 + 340) |= 0x80B2u;
              return 1;
            }
            *(_DWORD *)(v19 + 340) |= 0x80B0u;
            v14 = *(_QWORD *)(v17 + 976);
LABEL_12:
            *(_DWORD *)(v14 + 340) &= ~2u;
            return 1;
          }
        }
      }
      break;
    case 4:
      if ( (unsigned int)bWorldXformIdentity(a2) )
        goto LABEL_6;
      vConvertXformToMatrix(v7, &Buf1);
      if ( !(unsigned int)bWorldMatrixInRange((struct MATRIX *)&Buf1) )
        return v6;
      v11 = *(_QWORD *)this;
      *(_OWORD *)(v11 + 392) = Buf1;
      *(_OWORD *)(v11 + 408) = v25;
      v12 = *(_QWORD *)(*(_QWORD *)this + 976LL);
      *(_OWORD *)(v12 + 356) = Buf1;
      *(_OWORD *)(v12 + 372) = v25;
      v13 = *(_QWORD *)this;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 340LL) |= 0x80B0u;
      v14 = *(_QWORD *)(v13 + 976);
      goto LABEL_12;
  }
  return v6;
}
