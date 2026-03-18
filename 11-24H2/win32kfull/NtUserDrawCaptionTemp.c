/*
 * XREFs of NtUserDrawCaptionTemp @ 0x1402940D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ @ 0x14003D210 (--0_unnamed_type_list_@tagTLBLOCK@@QEAA@XZ.c)
 *     ??1?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ @ 0x14003E628 (--1-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@XZ.c)
 *     ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14003F454 (--0-$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140040874 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     xxxDrawCaptionTemp @ 0x14007B5FC (xxxDrawCaptionTemp.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x140116D40 (--$ManualLock@X@-$Win32RawLockedItemBase@G$1-Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall NtUserDrawCaptionTemp(
        __int64 a1,
        HDC a2,
        _OWORD *a3,
        HFONT a4,
        __int64 a5,
        ULONG64 a6,
        unsigned int a7)
{
  ULONG64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct tagTHREADINFO *v13; // r13
  unsigned int v14; // ebx
  __int64 v15; // rcx
  struct tagWND *v16; // r14
  struct tagCURSOR *v17; // rsi
  int v18; // ecx
  void *v19; // rdi
  ULONG64 v20; // rdx
  void *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v25; // [rsp+40h] [rbp-B8h]
  void *v26[2]; // [rsp+48h] [rbp-B0h] BYREF
  HFONT v27; // [rsp+58h] [rbp-A0h]
  HDC v28; // [rsp+60h] [rbp-98h]
  ULONG_PTR BugCheckParameter2[4]; // [rsp+68h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+88h] [rbp-70h] BYREF
  ULONG_PTR v31[2]; // [rsp+98h] [rbp-60h] BYREF
  __int64 v32[2]; // [rsp+A8h] [rbp-50h] BYREF

  v27 = a4;
  v28 = a2;
  v9 = a6;
  *(_OWORD *)v32 = 0LL;
  *(_OWORD *)v26 = 0LL;
  EnterCrit(0LL, 0LL);
  v13 = PtiCurrent(v11, v10);
  v14 = 0;
  if ( a1 )
  {
    v16 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v16 )
      goto LABEL_28;
  }
  else
  {
    v16 = 0LL;
  }
  if ( a5 )
  {
    LOBYTE(v12) = 3;
    v17 = (struct tagCURSOR *)HMValidateHandleWithDescriptor(a5, v12);
    if ( !v17 )
      goto LABEL_28;
  }
  else
  {
    v17 = 0LL;
  }
  tagTLBLOCK::_unnamed_type_list_::_unnamed_type_list_((tagTLBLOCK::_unnamed_type_list_ *)BugCheckParameter2);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v32 = *a3;
  if ( a6 >= MmUserProbeAddress )
    v9 = MmUserProbeAddress;
  v18 = *(_DWORD *)v9;
  v25 = *(_DWORD *)v9;
  LODWORD(v26[0]) = *(_DWORD *)v9;
  v19 = *(void **)(v9 + 8);
  v26[1] = v19;
  if ( v19 )
  {
    if ( ((unsigned __int8)v19 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v20 = (ULONG64)v19 + (unsigned __int16)v18 + 2;
    if ( v20 <= (unsigned __int64)v19 || v20 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v18 > HIWORD(v25) )
    {
      if ( (v18 & 1) == 0 )
        goto LABEL_26;
    }
    else if ( (v18 & 1) == 0 )
    {
      v21 = (void *)Win32AllocPoolWithQuotaZInit((unsigned __int16)v18 + 2LL, 2020897621LL);
      v26[1] = v21;
      if ( !v21 )
        ExRaiseStatus(-1073741801);
      Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
        BugCheckParameter2,
        (ULONG_PTR)v21,
        (__int64)Win32FreePool);
      memmove(v26[1], v19, LOWORD(v26[0]));
      *((_WORD *)v26[1] + ((unsigned __int64)LOWORD(v26[0]) >> 1)) = 0;
      WORD1(v26[0]) = LOWORD(v26[0]) + 2;
      goto LABEL_22;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10935);
LABEL_26:
    ExRaiseAccessViolation();
  }
LABEL_22:
  Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(v31, (__int64)v13, (__int64)v16);
  Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(BugCheckParameter3, (__int64)v13, (__int64)v17);
  v14 = xxxDrawCaptionTemp(v16, v28, (RECT *)v32, v27, v17, (unsigned __int64)v26 & -(__int64)(v26[1] != 0LL), a7);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v22);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)v31, v23);
  Win32RawLockedNtObject<tagDESKTOP>::~Win32RawLockedNtObject<tagDESKTOP>((__int64)BugCheckParameter2);
LABEL_28:
  UserSessionSwitchLeaveCrit(v15);
  return v14;
}
