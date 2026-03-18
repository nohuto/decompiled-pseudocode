/*
 * XREFs of NtUserDeferWindowPosAndBand @ 0x140241080
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     DestroySMWP @ 0x140083140 (DestroySMWP.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1400F4D44 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1400F5A44 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1401C251C (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     ?TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z @ 0x1401E98D0 (-TransformSWPCoords@@YAXPEAUtagWND@@PEAH111I@Z.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Feature_SetWindowBandViaBroker__private_IsEnabledDeviceUsageNoInline @ 0x140292678 (Feature_SetWindowBandViaBroker__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NtUserDeferWindowPosAndBand(
        __int64 a1,
        HWND a2,
        struct tagWND *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        int a10)
{
  __int64 v12; // rdi
  int v13; // r13d
  __int64 v15; // rbx
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r14
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  struct tagWND *v25; // r15
  char v26; // al
  unsigned int v27; // r12d
  char v28; // si
  __int64 *v29; // rax
  __int64 v30; // rcx
  struct tagWND *v32; // [rsp+50h] [rbp-20h] BYREF
  struct tagWND *v33; // [rsp+58h] [rbp-18h] BYREF
  _BYTE v34[8]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v35; // [rsp+68h] [rbp-8h]
  int v36; // [rsp+B8h] [rbp+48h] BYREF

  v36 = a4;
  v12 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v13 = a4;
  v34[0] = 0;
  v15 = EnterCrit(0LL, 0LL);
  v35 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v34);
  if ( (a8 & 0xFFFD9800) != 0 )
  {
    v17 = 1004;
LABEL_3:
    UserSetLastError(v17);
    goto LABEL_20;
  }
  LOBYTE(v16) = 4;
  v18 = HMValidateHandleWithDescriptor(a1, v16);
  v20 = v18;
  if ( !v18 )
    goto LABEL_20;
  if ( (*(_DWORD *)(v18 + 24) & 4) != 0 )
  {
    if ( a10 )
      DestroySMWP(v18, v19);
    v17 = 1405;
    goto LABEL_3;
  }
  LOBYTE(v21) = ValidateHWNDND(a2, &v32);
  if ( v21 && (unsigned int)ValidateHWNDIA(a3, &v33) )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v23);
    v25 = v32;
    v26 = ShouldVirtualizeWindowRect(v32, CurrentThreadDpiAwarenessContext);
    v27 = a8;
    if ( v26 )
    {
      TransformSWPCoords(v25, &v36, &a5, &a6, &a7, a8);
      v13 = v36;
    }
    v28 = a10 != 0;
    if ( (unsigned int)Feature_SetWindowBandViaBroker__private_IsEnabledDeviceUsageNoInline()
      && (unsigned int)IsImmersiveBroker(*(_QWORD *)(v15 + 464)) )
    {
      v28 |= 2u;
    }
    v29 = (__int64 *)_DeferWindowPosAndBand(v20, v25, v33, v13, a5, a6, a7, v27, a9, v28);
    if ( v29 )
      v12 = *v29;
  }
  else if ( a10 )
  {
    DestroySMWP(v20, v22);
  }
LABEL_20:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v34);
  UserSessionSwitchLeaveCrit(v30);
  return v12;
}
