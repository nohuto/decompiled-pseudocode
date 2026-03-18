/*
 * XREFs of NtGdiOffsetClipRgn @ 0x1401C8740
 * Callers:
 *     <none>
 * Callees:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x14001666C (-bTightenRao@DC@@QEAAHXZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14001D188 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14001FDF0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400CDFD8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1400CE6CC (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400CE8CC (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 */

__int64 __fastcall NtGdiOffsetClipRgn(HDC a1, LONG a2, LONG a3)
{
  unsigned int v5; // ebx
  DC *v6; // rax
  __int64 v7; // rcx
  struct REGION *v8; // rax
  unsigned int sizeScan; // eax
  struct _POINTL v11; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-D0h] BYREF
  DC *v14[14]; // [rsp+48h] [rbp-C0h] BYREF
  HDC v15[18]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v16; // [rsp+170h] [rbp+68h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v14, a1);
  v5 = 0;
  if ( v14[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v15);
    if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v14, 1) )
    {
LABEL_8:
      DEVLOCKOBJ::~DEVLOCKOBJ(v15);
      APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v14);
      return v5;
    }
    v6 = v14[0];
    v7 = *((_QWORD *)v14[0] + 20);
    v12 = v7;
    if ( !v7 )
    {
      v5 = 2;
      goto LABEL_8;
    }
    if ( *(_DWORD *)(v7 + 76) > 1u )
    {
      sizeScan = REGION_CORE::get_sizeScan((REGION_CORE *)(v7 + 24));
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v16, sizeScan);
      if ( !v16 )
      {
        EngSetLastError(8u);
        goto LABEL_8;
      }
      RGNOBJ::vCopy((RGNOBJ *)&v16, (struct RGNOBJ *)&v12);
      ++*(_DWORD *)(v16 + 76);
      --*(_DWORD *)(v12 + 76);
      *((_QWORD *)v14[0] + 20) = v16;
      v6 = v14[0];
    }
    v11.x = a2;
    v11.y = a3;
    DC::QuickInitXform(v6, v13, 2147484164LL);
    if ( ((*(_DWORD *)(v13[0] + 32LL) & 2) != 0
       || EXFORMOBJ::bXform((EXFORMOBJ *)v13, (const struct _VECTORL *)&v11, (struct _VECTORL *)&v11, 1uLL))
      && RGNOBJ::bOffset((RGNOBJ *)&v12, &v11) )
    {
      DC::bTightenRao(v14[0]);
      v8 = DC::prgnVisSnap(v14[0]);
      DC::vUpdate_VisRect(v14[0], v8);
      v5 = RGNOBJ::iComplexity((RGNOBJ *)&v12);
      goto LABEL_8;
    }
    EngSetLastError(0x3EBu);
    DEVLOCKOBJ::~DEVLOCKOBJ(v15);
  }
  else
  {
    EngSetLastError(6u);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v14);
  return 0LL;
}
