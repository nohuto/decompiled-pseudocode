/*
 * XREFs of _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x14019AF2C
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x140087E70 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::_lambda_invoker_cdecl_ @ 0x1401C0B70 (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140016394 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002322C (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140039940 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x14003D9D0 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x14003DAD8 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     GreDeleteSemaphore @ 0x14003E0B0 (GreDeleteSemaphore.c)
 *     ?GreIsThreadTerminating@@YA_NPEAU_GRETHREAD@@@Z @ 0x140065090 (-GreIsThreadTerminating@@YA_NPEAU_GRETHREAD@@@Z.c)
 *     PDEVOBJ_bDisableHalftoneWrap @ 0x14014A5FC (PDEVOBJ_bDisableHalftoneWrap.c)
 *     ?RemoveHDEVFromList@@YAXPEAPEAUHDEV__@@PEAU1@@Z @ 0x140150AC4 (-RemoveHDEVFromList@@YAXPEAPEAUHDEV__@@PEAU1@@Z.c)
 *     IsPDEVOBJ_bDisableHalftoneSupported @ 0x140155C34 (IsPDEVOBJ_bDisableHalftoneSupported.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator()(struct _ERESOURCE *a1, struct _ERESOURCE *a2)
{
  HDEV *v2; // rdi
  __int64 v3; // rbx
  struct _ERESOURCE *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  PETHREAD *CurrentThread; // rax
  struct _ERESOURCE *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v2 = (HDEV *)a2;
  if ( ((__int64)a2->SystemResourcesList.Flink[2].Blink & 0x8000) != 0 )
  {
    v3 = *(_QWORD *)(W32GetSessionState(a1) + 88);
    SEMOBJ<19>::SEMOBJ<19>(&v8, (struct _ERESOURCE **)v3);
    RemoveHDEVFromList((HDEV *)(v3 + 3840), *v2);
    a2 = v8;
    if ( v8 )
      GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        (__int64)v8);
  }
  v4 = (struct _ERESOURCE *)*((_QWORD *)*v2 + 6);
  if ( v4 )
    GreDeleteSemaphore(v4, (__int64)a2);
  if ( *((_QWORD *)*v2 + 189) && (int)IsPDEVOBJ_bDisableHalftoneSupported((__int64)v4, (__int64)a2) >= 0 )
    PDEVOBJ_bDisableHalftoneWrap((__int64)v2, v5);
  PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)v2);
  if ( *((_QWORD *)*v2 + 223) )
  {
    CurrentThread = (PETHREAD *)GreGetCurrentThread(v6);
    if ( CurrentThread && !GreIsThreadTerminating(CurrentThread) )
      (*((void (__fastcall **)(_QWORD))*v2 + 337))(*((_QWORD *)*v2 + 223));
    *((_QWORD *)*v2 + 223) = 0LL;
  }
  PDEV::Free((struct PDEV *)*v2);
  *v2 = 0LL;
}
