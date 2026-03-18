/*
 * XREFs of GreLockVisRgnSharedOrExclusive @ 0x140010ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1400101A0 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x140010220 (--1DCOBJA@@QEAA@XZ.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEBAHXZ @ 0x140014590 (-bAllowShareAccess@PDEVOBJ@@QEBAHXZ.c)
 *     ??$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140020EE4 (--$GreAcquireSemaphoreShared@$00$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140021054 (--$GreAcquireSemaphoreShared@$01$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002115C (--$GreAcquireSemaphoreShared@$02$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     GreLockVisRgn @ 0x140021770 (GreLockVisRgn.c)
 */

__int64 __fastcall GreLockVisRgnSharedOrExclusive(__int64 a1, HDC a2, _DWORD *a3)
{
  __int64 v4; // rdi
  bool v5; // bl
  __int64 v6; // rbx
  _QWORD v8[10]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v9; // [rsp+88h] [rbp+10h] BYREF

  v4 = a1;
  if ( a2 )
  {
    DCOBJA::DCOBJA((DCOBJA *)v8, a2);
    if ( !v8[0] )
    {
      DCOBJA::~DCOBJA((DCOBJA *)v8);
      return 0LL;
    }
    v4 = *(_QWORD *)(v8[0] + 48LL);
    v9 = v4;
    v5 = (unsigned int)PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v9)
      && ((*(_DWORD *)(v8[0] + 36LL) & 0x200) == 0
       || (**(_BYTE **)(v8[0] + 976LL) & 1) != 0
       || (*(_DWORD *)(v8[0] + 36LL) & 0x8000) != 0);
    DCOBJA::~DCOBJA((DCOBJA *)v8);
  }
  else
  {
    v9 = a1;
    v5 = (unsigned int)PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v9) != 0;
  }
  *a3 = v5;
  if ( v5 )
  {
    v6 = *(_QWORD *)(W32GetSessionState() + 88);
    GreAcquireSemaphoreShared<1,>(v6);
    GreAcquireSemaphoreShared<2,>(v6);
    GreAcquireSemaphoreShared<3,>(v6);
  }
  else
  {
    GreLockVisRgn(v4);
  }
  return 1LL;
}
