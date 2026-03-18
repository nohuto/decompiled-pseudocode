/*
 * XREFs of ?GreFontIsLinked@@YAHPEAUHDC__@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C0089AD8
 * Callers:
 *     NtGdiFontIsLinked @ 0x1C0089A90 (NtGdiFontIsLinked.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00C8860 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z @ 0x1C00CC9A8 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010D900 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreFontIsLinked(HDC a1)
{
  unsigned int v1; // esi
  int v2; // eax
  Gre::Base *v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdi
  char v7; // cl
  _QWORD v9[2]; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v10[32]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v11[8]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v12; // [rsp+D0h] [rbp+77h] BYREF
  int v13; // [rsp+D8h] [rbp+7Fh] BYREF
  int v14; // [rsp+DCh] [rbp+83h]

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] )
  {
    v2 = *(unsigned __int16 *)(v9[0] + 12LL);
    v12 = 0LL;
    v14 = v2;
    v13 = 18;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v12, (struct XDCOBJ *)v9, 0, 2u, (const struct RFONTOBJ::Tag *)&v13) )
      GreAcquireSemaphore(*(_QWORD *)(v12 + 504));
    if ( v12 )
    {
      v4 = *(_QWORD *)(v12 + 120);
      Gre::Base::Globals(v3);
      v6 = *(_QWORD *)(SGDGetSessionState(v5) + 32);
      GreAcquireSemaphore(*(_QWORD *)(v6 + 13272));
      ++*(_DWORD *)(v6 + 13300);
      EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
      GreReleaseSemaphoreInternal(*(_QWORD *)(v6 + 13272));
      if ( v4 && (*(_DWORD *)(v4 + 12) & 8) == 0 )
      {
        if ( *(_DWORD *)(v12 + 708) )
        {
          LOBYTE(v1) = *(_DWORD *)(v6 + 19352) != 0;
        }
        else if ( *(_QWORD *)(v6 + 13320)
               || *(_QWORD *)(v6 + 13328)
               || *(_DWORD *)(v6 + 19360)
               && (IFIOBJR::IFIOBJR(
                     (IFIOBJR *)v11,
                     *(const struct _IFIMETRICS **)(v4 + 32),
                     (struct RFONTOBJ *)&v12,
                     (struct XDCOBJ *)v9),
                   v7 = *(_BYTE *)(v11[0] + 44LL),
                   v7 != 1)
               && (unsigned __int8)(v7 - 3) > 0xFBu
               && (*(_BYTE *)(v6 + 18736) & (unsigned __int8)(v7 + 2) & 0xF) != 0 )
        {
          v1 = 1;
        }
        else if ( *(_QWORD *)(v4 + 120) )
        {
          v1 = 1;
        }
      }
      GreAcquireSemaphore(*(_QWORD *)(v6 + 13272));
      --*(_DWORD *)(v6 + 13300);
      EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
      GreReleaseSemaphoreInternal(*(_QWORD *)(v6 + 13272));
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
    if ( v9[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v10);
  return v1;
}
