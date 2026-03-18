/*
 * XREFs of ?bCompute@DC@@QEAAHXZ @ 0x1C003A080
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00397F0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003C598 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C003C5D0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003D9E0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C003E000 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?vStamp@REGION@@QEAAXXZ @ 0x1C00403FC (-vStamp@REGION@@QEAAXXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C0041FC0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C005C000 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C005FD20 (-vUpdateScaledRegions@DC@@QEAAXXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C005FDE0 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C007D990 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C007DB3C (-bContain@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C007DD60 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?vGetSubRect@RGNOBJ@@QEBAXPEAU_RECTL@@@Z @ 0x1C0096B70 (-vGetSubRect@RGNOBJ@@QEBAXPEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00D28F8 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 */

__int64 __fastcall DC::bCompute(DC *this)
{
  unsigned int v2; // esi
  REGION *v3; // rbx
  int v4; // ecx
  REGION *v5; // rax
  __int64 v6; // rcx
  REGION *v7; // rdx
  REGION *v8; // r8
  REGION **v9; // rcx
  _BOOL8 v10; // rcx
  _BOOL8 v11; // rax
  int v12; // r15d
  int v13; // eax
  DC *v14; // rcx
  REGION *v16; // [rsp+20h] [rbp-60h] BYREF
  REGION *v17; // [rsp+28h] [rbp-58h] BYREF
  REGION *v18; // [rsp+30h] [rbp-50h] BYREF
  REGION *v19; // [rsp+38h] [rbp-48h] BYREF
  REGION *v20; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v21[2]; // [rsp+48h] [rbp-38h] BYREF
  char v22; // [rsp+58h] [rbp-28h]
  REGION *v23; // [rsp+60h] [rbp-20h]
  __int128 v24; // [rsp+68h] [rbp-18h]

  DC::AcquireDcVisRgnShared(this);
  *((_DWORD *)this + 250) = 0x7FFFFFFF;
  v2 = 0;
  *((_DWORD *)this + 251) = 0x7FFFFFFF;
  *((_DWORD *)this + 252) = 0x80000000;
  *((_DWORD *)this + 253) = 0x80000000;
  if ( !*((_QWORD *)this + 142) )
    goto LABEL_56;
  v3 = (REGION *)*((_QWORD *)this + 143);
  v4 = 0;
  v17 = (REGION *)*((_QWORD *)this + 142);
  v18 = v3;
  v2 = 1;
  v5 = v3;
  if ( !v3 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v16);
    v3 = v16;
    if ( !v16 )
    {
LABEL_6:
      v2 = 0;
      goto LABEL_56;
    }
    v18 = v16;
    v4 = 1;
    v5 = v16;
  }
  if ( !v5 )
    goto LABEL_6;
  if ( v4 || (*((_DWORD *)this + 9) & 0x10) != 0 )
  {
    if ( !(unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v18, (struct RGNOBJ *)&v17) )
      goto LABEL_6;
    if ( (unsigned int)DC::bDpiScaledSurface(this) )
      *((_DWORD *)this + 130) |= 0x10u;
    v3 = v18;
    *((_QWORD *)this + 143) = v18;
  }
  else if ( (unsigned int)DC::bDpiScaledSurface(this) && !*((_QWORD *)this + 145) )
  {
    *((_DWORD *)this + 130) |= 0x10u;
  }
  v6 = *((_QWORD *)this + 20);
  v7 = (REGION *)*((_QWORD *)this + 21);
  v8 = (REGION *)*((_QWORD *)this + 141);
  if ( !((unsigned __int64)v8 | (unsigned __int64)v7 | v6) )
  {
    if ( *((_QWORD *)this + 144) )
    {
      v16 = (REGION *)*((_QWORD *)this + 144);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v16);
      *((_QWORD *)this + 144) = 0LL;
    }
    v9 = &v18;
    goto LABEL_20;
  }
  v23 = (REGION *)*((_QWORD *)this + 20);
  v24 = 0LL;
  v10 = v6 != 0;
  v11 = v10 + 1;
  *(&v23 + v10) = v7;
  if ( !v7 )
    v11 = v10;
  v12 = v11 + 1;
  *(&v23 + v11) = v8;
  if ( !v8 )
    v12 = v11;
  v17 = (REGION *)*((_QWORD *)this + 144);
  if ( !v17 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v16);
    if ( v16 )
      v17 = v16;
  }
  if ( !v17 )
  {
LABEL_59:
    v2 = 0;
    goto LABEL_51;
  }
  if ( v12 == 1 )
  {
    v16 = v23;
    v13 = RGNOBJ::bCopy((RGNOBJ *)&v17, (struct RGNOBJ *)&v16);
    goto LABEL_33;
  }
  if ( v12 == 2 )
  {
    v19 = v23;
    v16 = (REGION *)v24;
    v13 = RGNOBJ::iCombine((RGNOBJ *)&v17, (struct RGNOBJ *)&v19, (struct RGNOBJ *)&v16, 1);
LABEL_33:
    if ( !v13 )
      v2 = 0;
    goto LABEL_40;
  }
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
  v20 = v23;
  v21[0] = *((_QWORD *)&v24 + 1);
  v19 = (REGION *)v24;
  if ( !v16
    || !(unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v16, (struct RGNOBJ *)&v20, (struct RGNOBJ *)&v19, 1)
    || !(unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v17, (struct RGNOBJ *)&v16, (struct RGNOBJ *)v21, 1) )
  {
    v2 = 0;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
LABEL_40:
  if ( !v2 )
    goto LABEL_51;
  REGION::vStamp(v17);
  if ( !(unsigned int)RGNOBJ::bOffset((RGNOBJ *)&v17, (struct _POINTL *)this + 129) )
    goto LABEL_59;
  if ( *((_DWORD *)v3 + 12) != 56 || !(unsigned int)RGNOBJ::bContain((RGNOBJ *)&v18, (struct RGNOBJ *)&v17) )
  {
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
    if ( v16
      && (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v16, (struct RGNOBJ *)&v18, (struct RGNOBJ *)&v17, 1)
      && (unsigned int)RGNOBJ::bCopy((RGNOBJ *)&v17, (struct RGNOBJ *)&v16) )
    {
      *((_QWORD *)this + 144) = v17;
      RGNOBJ::vGetSubRect((RGNOBJ *)&v17, (struct _RECTL *)((char *)this + 1000));
      *((_DWORD *)this + 9) &= ~0x10u;
    }
    else
    {
      v2 = 0;
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
    if ( v2 )
      goto LABEL_53;
LABEL_51:
    *((_QWORD *)this + 144) = 0LL;
    if ( v17 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v17);
    goto LABEL_53;
  }
  v9 = &v17;
  *((_QWORD *)this + 144) = v17;
LABEL_20:
  RGNOBJ::vGetSubRect((RGNOBJ *)v9, (struct _RECTL *)((char *)this + 1000));
  *((_DWORD *)this + 9) &= ~0x10u;
LABEL_53:
  if ( (unsigned int)DC::bDpiScaledSurface(this) )
    *((_DWORD *)this + 130) |= 8u;
  DC::vUpdateScaledRegions(v14);
  DC::vUpdate_VisRect(this, *((struct REGION **)this + 143));
LABEL_56:
  if ( v22 )
    CPushLock::ReleaseLock((CPushLock *)(v21[1] + 1112LL));
  return v2;
}
