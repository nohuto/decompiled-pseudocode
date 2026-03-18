/*
 * XREFs of ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1401541FC
 * Callers:
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x14001A5E0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14001EB5C (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14001F7E4 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     GreSetTextAlign @ 0x140038C8C (GreSetTextAlign.c)
 *     GreGetCharSet @ 0x1400BB178 (GreGetCharSet.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400BB3F0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C8FBC (--0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreGetTextAlign @ 0x1401F1C90 (GreGetTextAlign.c)
 *     ?GrepResetDC@@YAHAEAVXDCOBJ@@PEAU_devicemodeW@@PEAHPEAU_DRIVER_INFO_2W@@PEAX@Z @ 0x14020C298 (-GrepResetDC@@YAHAEAVXDCOBJ@@PEAU_devicemodeW@@PEAHPEAU_DRIVER_INFO_2W@@PEAX@Z.c)
 *     ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140325C78 (--0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?LookUpWndobjs@@YAHAEAVXDCOBJ@@PEAVDCOBJ@@PEAPEAUHDC__@@H@Z @ 0x140326B28 (-LookUpWndobjs@@YAHAEAVXDCOBJ@@PEAVDCOBJ@@PEAPEAUHDC__@@H@Z.c)
 *     ?ThreadCleanup@XFERDCOBJ@@SAXPEAX@Z @ 0x140326BE0 (-ThreadCleanup@XFERDCOBJ@@SAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XDCOBJ::vUnlockNoNullSet(XDCOBJ *this)
{
  struct _DC_ATTR *UserAttr; // rax
  __int64 *v3; // rdx
  __int64 v4; // rdi
  int v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)this )
  {
    if ( *((_DWORD *)this + 2) && (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
    {
      if ( (*((_DWORD *)this + 8) & 2) == 0 )
      {
        UserAttr = XDCOBJ::GetUserAttr(this);
        if ( UserAttr )
          DC::RestoreAttributes(*(DC **)this, UserAttr);
      }
      *(_DWORD *)(*(_QWORD *)this + 44LL) &= ~2u;
      *((_DWORD *)this + 2) = 0;
    }
    v3 = *(__int64 **)this;
    v5 = 0;
    v4 = *v3;
    HmgDecrementExclusiveReferenceCountExFastOpt(*((_QWORD *)this + 2), v3, *((unsigned int *)this + 8), &v5);
    if ( v5 )
      GrepDeleteDC(v4, 0x2000000LL);
  }
}
