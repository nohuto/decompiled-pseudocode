/*
 * XREFs of ?GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z @ 0x14003871C
 * Callers:
 *     GreSaveDC @ 0x140036E78 (GreSaveDC.c)
 *     NtGdiSaveDC @ 0x1400386C0 (NtGdiSaveDC.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x1400D2138 (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14010E354 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0SAVEOBJ@@QEAA@AEAVXDCOBJ@@JP6AH0J@ZP6AX0J@Z@Z @ 0x140195CD0 (--0SAVEOBJ@@QEAA@AEAVXDCOBJ@@JP6AH0J@ZP6AX0J@Z@Z.c)
 *     ??1SAVEOBJ@@QEAA@XZ @ 0x140214940 (--1SAVEOBJ@@QEAA@XZ.c)
 *     ??1DCMODOBJ@@QEAA@XZ @ 0x14021694C (--1DCMODOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GrepSaveDC(struct XDCOBJ *a1, int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // r14d
  __int64 v5; // rdx
  int v6; // esi
  int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rcx
  _QWORD v13[2]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v14[4]; // [rsp+40h] [rbp-29h] BYREF
  int v15; // [rsp+44h] [rbp-25h]
  _BYTE v16[4]; // [rsp+58h] [rbp-11h] BYREF
  int v17; // [rsp+5Ch] [rbp-Dh]
  _QWORD v18[5]; // [rsp+70h] [rbp+7h] BYREF
  int v19; // [rsp+98h] [rbp+2Fh]
  __int64 v20; // [rsp+D0h] [rbp+67h] BYREF
  char v21; // [rsp+E0h] [rbp+77h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v3 = 0;
  if ( a2 || (*(_DWORD *)(HmgPentryFromPobjFast(*((_QWORD *)a1 + 2), *(_QWORD *)a1) + 8) & 0xFFFFFFFE) != 0 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
    v6 = *(_DWORD *)(v5 + 152);
    if ( (v6 & 0x1000) != 0 )
      GreDCSelectBrush(*(_QWORD *)a1, *(_QWORD *)(v5 + 160));
    if ( (v6 & 0x2000) != 0 )
      GreDCSelectPen(*(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 168LL));
    v20 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
    if ( (*(_DWORD *)(v20 + 40) & 1) != 0 )
      GrepLockVisRgnFast((struct Gre::Base::SESSION_GLOBALS *)v2);
    SEMOBJ<13>::SEMOBJ<13>(&v21, v2);
    v7 = *(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x800;
    if ( v7 )
      DC::bMakeInfoDC(*(DC **)a1, 0);
    DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v18, a1);
    if ( v18[0] )
    {
      PDEVOBJ::vReferencePdevFast((PDEVOBJ *)&v20, (struct Gre::Base::SESSION_GLOBALS *)v2);
      v8 = *(_QWORD *)a1;
      v13[0] = a1;
      v13[1] = *(_QWORD *)(v8 + 112);
      *(_QWORD *)(v8 + 112) = *(_QWORD *)v18[0];
      SAVEOBJ::SAVEOBJ(
        (SAVEOBJ *)v16,
        a1,
        *(_DWORD *)(v18[0] + 104LL),
        (int (*)(struct XDCOBJ *, int))bSavePath,
        (void (*)(struct XDCOBJ *, int))vRestorePath);
      if ( v17 )
      {
        SAVEOBJ::SAVEOBJ(
          (SAVEOBJ *)v14,
          a1,
          *(_DWORD *)(v18[0] + 104LL),
          (int (*)(struct XDCOBJ *, int))bSaveRegion,
          vRestoreRegion);
        if ( v15
          && GreSetDCOwnerExFastOpt(
               (struct Gre::Base::SESSION_GLOBALS *)v18[2],
               *(struct HOBJ__ **)v18[0],
               0x80000012,
               0,
               0) )
        {
          v15 = 0;
          v17 = 0;
          v13[0] = 0LL;
          v19 = 1;
          PDEVOBJ::vUnreferencePdevFast((PDEVOBJ *)&v20, (struct Gre::Base::SESSION_GLOBALS *)v2);
          if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0 )
            *(_DWORD *)(v18[0] + 36LL) |= 0x4000u;
          v9 = *(_QWORD *)(v18[0] + 496LL);
          if ( v9 )
          {
            v10 = *(_DWORD *)(v9 + 112);
            if ( (v10 & 0x800) != 0 )
            {
              INC_SHARE_REF_CNT_FAST(v2, *(_QWORD *)(v18[0] + 496LL));
            }
            else if ( v10 >= 0 )
            {
              INC_SHARE_REF_CNT(*(_QWORD *)(v18[0] + 496LL));
              ++*(_DWORD *)(v9 + 168);
            }
          }
          INC_SHARE_REF_CNT_FAST(v2, *(_QWORD *)(*(_QWORD *)a1 + 136LL));
          INC_SHARE_REF_CNT_FAST(v2, *(_QWORD *)(*(_QWORD *)a1 + 144LL));
          INC_SHARE_REF_CNT_FAST(v2, *(_QWORD *)(*(_QWORD *)a1 + 152LL));
          INC_SHARE_REF_CNT_FAST(v2, *(_QWORD *)(*(_QWORD *)a1 + 96LL));
          v11 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
          if ( v11 != *(_QWORD *)(v2 + 3768) )
            _InterlockedIncrement((volatile signed __int32 *)(v11 + 56));
          v3 = *(_DWORD *)(*(_QWORD *)a1 + 104LL);
          *(_DWORD *)(*(_QWORD *)a1 + 104LL) = v3 + 1;
        }
        SAVEOBJ::~SAVEOBJ((SAVEOBJ *)v14);
      }
      SAVEOBJ::~SAVEOBJ((SAVEOBJ *)v16);
      DCMODOBJ::~DCMODOBJ((DCMODOBJ *)v13);
    }
    else
    {
      EngSetLastError(8u);
    }
    DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v18);
    if ( v7 )
      DC::bMakeInfoDC(*(DC **)a1, 1);
    if ( (*(_DWORD *)(v20 + 40) & 1) != 0 )
      GrepUnlockVisRgnFast((struct Gre::Base::SESSION_GLOBALS *)v2);
    SEMOBJ<13>::vUnlock(&v21);
  }
  else
  {
    EngSetLastError(6u);
  }
  return v3;
}
