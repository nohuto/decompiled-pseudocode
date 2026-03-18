/*
 * XREFs of ValidateHwndIAMComponetUIAware @ 0x1400F5B08
 * Callers:
 *     NtUserSetWindowCompositionAttribute @ 0x140246D90 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1CDisableILCheckAuto@@QEAA@XZ @ 0x140061790 (--1CDisableILCheckAuto@@QEAA@XZ.c)
 *     ??0CDisableILCheckAuto@@QEAA@XZ @ 0x1400617A8 (--0CDisableILCheckAuto@@QEAA@XZ.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140063510 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IAMThreadAccessGranted @ 0x1400F5BC0 (IAMThreadAccessGranted.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1400F63C8 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 __fastcall ValidateHwndIAMComponetUIAware(__int64 a1, __int64 a2)
{
  const struct tagWND *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rax
  __int64 v7; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagWND *Host; // rdi
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  CDisableILCheckAuto::CDisableILCheckAuto((CDisableILCheckAuto *)v12, a2);
  v3 = (const struct tagWND *)ValidateHwnd(a1);
  v6 = PtiCurrent(v5, v4);
  if ( (unsigned int)IAMThreadAccessGranted(v6)
    || v3
    && (unsigned int)CoreWindowProp::IsComponent(v3, v7)
    && (Host = CoreWindowProp::GetHost(v3)) != 0LL
    && *(_QWORD *)(*((_QWORD *)Host + 2) + 464LL) == *((_QWORD *)PtiCurrent(v10, v9) + 58) )
  {
    CDisableILCheckAuto::~CDisableILCheckAuto((CDisableILCheckAuto *)v12);
    return (__int64)v3;
  }
  else
  {
    CDisableILCheckAuto::~CDisableILCheckAuto((CDisableILCheckAuto *)v12);
    return ValidateHwnd(a1);
  }
}
