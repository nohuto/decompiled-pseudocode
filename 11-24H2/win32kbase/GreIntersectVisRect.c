/*
 * XREFs of GreIntersectVisRect @ 0x140179B90
 * Callers:
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x14017596C (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400101A0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x140010220 (--1DCOBJA@@QEAA@XZ.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x140025A90 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1400262A0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x140026664 (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14002686C (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14002689C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140029D30 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x14002B150 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x140035740 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x140037E58 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?vStamp@REGION@@AEAAXXZ @ 0x1400CA620 (-vStamp@REGION@@AEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14014A5C0 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1401C2DFC (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall GreIntersectVisRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v5; // esi
  const struct REGION_CORE *v9; // r8
  __int64 v11; // [rsp+20h] [rbp-E0h] BYREF
  REGION *v12; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  char v14; // [rsp+40h] [rbp-C0h]
  DC *v15[10]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v16[144]; // [rsp+A0h] [rbp-60h] BYREF
  struct _RECTL v17; // [rsp+130h] [rbp+30h] BYREF

  v5 = 0;
  if ( a2 >= a4 || a3 >= a5 || a2 < -134217728 || a4 > 0x7FFFFFF || a3 < -134217728 || a5 > 0x7FFFFFF )
    return 0LL;
  DCOBJA::DCOBJA((DCOBJA *)v15, a1);
  if ( v15[0] )
  {
    v11 = *((_QWORD *)v15[0] + 6);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v16, (struct PDEVOBJ *)&v11);
    DC::AcquireDcVisRgnExclusive(v15[0]);
    if ( (v16[24] & 1) != 0 )
    {
      v12 = (REGION *)*((_QWORD *)v15[0] + 142);
      v17.left = a2;
      v17.top = a3;
      v17.right = a4;
      v17.bottom = a5;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11);
      REGION_CORE::get_sizeScan((REGION *)((char *)v12 + 24));
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v13);
      if ( v11 && v13[0] )
      {
        RGNOBJ::vSet((RGNOBJ *)&v11, &v17);
        RGNOBJ::vCopy((RGNOBJ *)v13, (struct RGNOBJ *)&v12, v9);
        if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v12, (struct RGNOBJ *)&v11, (struct RGNOBJ *)v13, 1) )
        {
          *((_QWORD *)v15[0] + 142) = v12;
          REGION::vStamp(v12);
          DC::vReleaseRao(v15[0]);
          v5 = 1;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v13);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11);
    }
    if ( v14 )
      CPushLock::ReleaseLock((CPushLock *)(v13[1] + 1112LL));
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v16);
  }
  DCOBJA::~DCOBJA((DCOBJA *)v15);
  return v5;
}
