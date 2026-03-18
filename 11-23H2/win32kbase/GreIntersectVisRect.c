/*
 * XREFs of GreIntersectVisRect @ 0x1C016AF30
 * Callers:
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C016C2A0 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003C598 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C003D9E0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C003ED80 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C00402A0 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?vStamp@REGION@@QEAAXXZ @ 0x1C00403FC (-vStamp@REGION@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C004B718 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C004B77C (--1DCOBJA@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x1C007D90C (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C007D990 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C007DD10 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00D1650 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0154560 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0155B08 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreIntersectVisRect(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  unsigned int v5; // r15d
  PVOID v10; // [rsp+28h] [rbp-A1h] BYREF
  REGION *v11; // [rsp+30h] [rbp-99h] BYREF
  PVOID v12; // [rsp+38h] [rbp-91h] BYREF
  struct _RECTL v13; // [rsp+40h] [rbp-89h] BYREF
  __int64 v14; // [rsp+50h] [rbp-79h] BYREF
  char v15; // [rsp+58h] [rbp-71h]
  DC *v16[7]; // [rsp+60h] [rbp-69h] BYREF
  struct _ERESOURCE v17; // [rsp+98h] [rbp-31h] BYREF

  v5 = 0;
  if ( a2 >= a4 || a3 >= a5 || a2 < -134217728 || a4 > 0x7FFFFFF || a3 < -134217728 || a5 > 0x7FFFFFF )
    return 0LL;
  DCOBJA::DCOBJA((DCOBJA *)v16, a1);
  if ( v16[0] )
  {
    v10 = (PVOID)*((_QWORD *)v16[0] + 6);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)&v17, (struct PDEVOBJ *)&v10);
    DC::AcquireDcVisRgnExclusive(v16[0], (__int64)&v14);
    if ( (v17.ActiveCount & 1) != 0 )
    {
      v13.left = a2;
      v13.top = a3;
      v13.right = a4;
      v11 = (REGION *)*((_QWORD *)v16[0] + 142);
      v13.bottom = a5;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v12, *((_DWORD *)v11 + 12));
      if ( v10 && v12 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v10, &v13);
        RGNOBJ::vCopy((RGNOBJ *)&v12, (struct RGNOBJ *)&v11);
        if ( (unsigned int)RGNOBJ::iCombine((RGNOBJ *)&v11, (struct RGNOBJ *)&v10, (struct RGNOBJ *)&v12, 1) )
        {
          *((_QWORD *)v16[0] + 142) = v11;
          REGION::vStamp(v11);
          DC::vReleaseRao(v16[0]);
          v5 = 1;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP(&v12);
      RGNMEMOBJTMP::~RGNMEMOBJTMP(&v10);
    }
    if ( v15 )
      CPushLock::ReleaseLock((CPushLock *)(v14 + 1112));
    DEVLOCKOBJ::~DEVLOCKOBJ(&v17);
  }
  DCOBJA::~DCOBJA((HDC **)v16);
  return v5;
}
