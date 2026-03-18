/*
 * XREFs of GreGetClipBox @ 0x140039310
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x140042F90 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     bCvtPts1 @ 0x14001C6E4 (bCvtPts1.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001D9D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001E1AC (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x140020190 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14002A080 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x140037E58 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1400381E0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x140039500 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?QuickInitXform@DC@@QEAA?AVEXFORMOBJ@@K@Z @ 0x140039DF0 (-QuickInitXform@DC@@QEAA-AVEXFORMOBJ@@K@Z.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x14003AB80 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x1400D1F28 (-bInFullScreen@DC@@QEBAHXZ.c)
 */

__int64 __fastcall GreGetClipBox(HDC a1, __int64 a2, int a3)
{
  unsigned int v5; // ebx
  DC *v6; // r10
  struct REGION *v7; // rax
  DC *v8; // r10
  __int128 v9; // xmm0
  unsigned __int64 v10; // rdx
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // rax
  DC *v14; // rsi
  DC *v16; // rcx
  int v17; // eax
  int v18; // ecx
  struct REGION *v19; // [rsp+28h] [rbp-E0h] BYREF
  DC *v20[14]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v21[144]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v22; // [rsp+160h] [rbp+58h] BYREF

  v5 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v20, a1);
  if ( v20[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v21);
    if ( !(unsigned int)DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v21, (struct _ERESOURCE ***)v20, 1) )
    {
      v16 = v20[0];
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      if ( !*((_QWORD *)v16 + 62) || (unsigned int)DC::bInFullScreen(v16) )
        v5 = 1;
      goto LABEL_14;
    }
    if ( DC::prgnRao(v20[0]) )
      v7 = DC::prgnRao(v6);
    else
      v7 = DC::prgnVisSnap(v6);
    v9 = *(_OWORD *)((char *)v7 + 52);
    v19 = v7;
    *(_OWORD *)a2 = v9;
    v10 = *(unsigned int *)(a2 + 8);
    if ( *(_DWORD *)a2 >= (int)v10 || (v11 = *(_DWORD *)(a2 + 4), v12 = *(_DWORD *)(a2 + 12), v11 >= v12) )
    {
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
LABEL_13:
      v5 = RGNOBJ::iComplexity((RGNOBJ *)&v19, (const struct REGION_CORE *)v10);
LABEL_14:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v21);
      goto LABEL_15;
    }
    v13 = *((_DWORD *)v8 + 10) & 1;
    *(_DWORD *)a2 -= *((_DWORD *)v8 + 2 * v13 + 254);
    v10 = (unsigned int)(v10 - *((_DWORD *)v8 + 2 * v13 + 254));
    *(_DWORD *)(a2 + 8) = v10;
    *(_DWORD *)(a2 + 4) = v11 - *((_DWORD *)v8 + 2 * v13 + 255);
    *(_DWORD *)(a2 + 12) = v12 - *((_DWORD *)v8 + 2 * v13 + 255);
    if ( !a3 )
    {
LABEL_12:
      if ( (*(_DWORD *)(*((_QWORD *)v8 + 122) + 108LL) & 1) != 0 )
      {
        v17 = *(_DWORD *)a2;
        v18 = *(_DWORD *)(a2 + 8);
        if ( *(_DWORD *)a2 > v18 )
        {
          *(_DWORD *)a2 = v18;
          *(_DWORD *)(a2 + 8) = v17;
        }
      }
      goto LABEL_13;
    }
    DC::QuickInitXform(v8, &v22, 2147484674LL);
    if ( v22 )
    {
      v8 = v20[0];
      v14 = v20[0];
      if ( (*(_BYTE *)(v22 + 32) & 0x43) != 0x43 )
      {
        if ( !(unsigned int)bCvtPts1(v22, a2, 2LL) )
          goto LABEL_11;
        v8 = v20[0];
      }
      if ( (*(_BYTE *)(*((_QWORD *)v14 + 122) + 108LL) & 1) != 0 )
      {
        ++*(_DWORD *)a2;
        ++*(_DWORD *)(a2 + 8);
      }
      goto LABEL_12;
    }
LABEL_11:
    v8 = v20[0];
    goto LABEL_12;
  }
LABEL_15:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v20);
  return v5;
}
