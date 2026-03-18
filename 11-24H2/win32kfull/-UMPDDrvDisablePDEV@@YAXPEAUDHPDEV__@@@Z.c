/*
 * XREFs of ?UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1401FE700
 * Callers:
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1401C6230 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D8298 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D8380 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_GRETHREAD@@@Z @ 0x1400D8B1C (-vUMPDCachedResourceCleanup@@YAXPEAU_GRETHREAD@@@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall UMPDDrvDisablePDEV(struct DHPDEV__ *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  size_t Size; // [rsp+20h] [rbp-48h]
  UMPDOBJ *v6; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v7[2]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v8; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+48h] [rbp-20h]
  struct DHPDEV__ *v10; // [rsp+50h] [rbp-18h]

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v6);
  if ( v6 )
  {
    v7[0] = 0;
    v8 = 0LL;
    v7[1] = 2;
    LODWORD(Size) = 0;
    v9 = *(_QWORD *)v6;
    v10 = a1;
    UMPDOBJ::Thunk(v6, v7, 0x20u, 0LL, Size);
  }
  XUMPDOBJ::~XUMPDOBJ(&v6);
  CurrentThread = GreGetCurrentThread(v3, v2);
  if ( *((struct _GRETHREAD **)CurrentThread + 9) == (struct _GRETHREAD *)((char *)CurrentThread + 72) )
    vUMPDCachedResourceCleanup(CurrentThread);
}
