/*
 * XREFs of ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1400F4FF8
 * Callers:
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x14008D3B0 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     xxxSetWindowRgn @ 0x1400F4A4C (xxxSetWindowRgn.c)
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1400F4D44 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x14014F0F0 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxSetWindowPosAndBand @ 0x14022F1B8 (xxxSetWindowPosAndBand.c)
 *     ?xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z @ 0x1402A8C4C (-xxxMoveSizeSetWindowPosOld@@YAXPEAUMOVESIZEDATA@@UtagRECT@@@Z.c)
 *     ?xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_NPEAUtagRECT@@3AEBU5@PEAUWindowAction@1@@Z @ 0x1402D8B48 (-xxxUpdatePosAndStateForAction@AdvancedWindowPos@@YAXPEAUtagWND@@W4State@1@1IW4MinMaxOptions@@_N.c)
 *     xxxArrangeIconicWindows @ 0x1402E9D44 (xxxArrangeIconicWindows.c)
 * Callees:
 *     _MonitorFromRect @ 0x140026BB0 (_MonitorFromRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140032E18 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     DestroySMWP @ 0x140083140 (DestroySMWP.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@I@Z @ 0x14014AC60 (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@I@Z.c)
 *     HWInsertAfter @ 0x14019A69C (HWInsertAfter.c)
 *     Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline @ 0x14026FAE4 (Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall _DeferWindowPos(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __int64 v10; // r15
  __int64 v11; // rcx
  unsigned int v15; // ebx
  __int64 UserSessionState; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  int v23; // r8d
  unsigned int v24; // r8d
  int v25; // edx
  __int16 v26; // ax
  int v27; // edx
  int v28; // r8d
  int v29; // edx
  int v30; // ecx
  unsigned int v31; // r8d
  __int64 v33; // rax
  unsigned int v34; // ecx
  __int128 v35; // xmm0
  int v36; // ecx
  unsigned __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v40[16]; // [rsp+28h] [rbp-28h] BYREF
  __int128 v41; // [rsp+38h] [rbp-18h] BYREF

  v10 = 1LL;
  v11 = *(unsigned int *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 28) + 1 > (int)v11 )
  {
    v15 = v11 + 4;
    if ( (int)v11 + 4 < (unsigned int)v11
      || v15 > 0xC30C30
      || ((UserSessionState = W32GetUserSessionState(v11, a2),
           v17 = 168LL * v15,
           v18 = 168LL * *(int *)(a1 + 32),
           v19 = *(_QWORD *)(a1 + 40),
           a1 != UserSessionState + 63296)
        ? (v20 = UserReAllocPoolWithQuota(v19, v18, v17, 2004054869LL))
        : (v20 = UserReAllocPool(v19, v18, v17, 2004054869LL)),
          !v20) )
    {
      DestroySMWP(a1, a2);
      return 0LL;
    }
    *(_QWORD *)(a1 + 40) = v20;
    *(_DWORD *)(a1 + 32) = v15;
  }
  v21 = *(int *)(a1 + 28);
  v22 = *(_QWORD *)(a1 + 40) + 168 * v21;
  *(_DWORD *)(a1 + 28) = v21 + 1;
  *(_QWORD *)v22 = *(_QWORD *)a2;
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 20LL) & 0x20) == 0 )
    v10 = HWInsertAfter(a3);
  *(_DWORD *)(v22 + 20) = a5;
  *(_DWORD *)(v22 + 24) = a6;
  *(_DWORD *)(v22 + 28) = a7;
  *(_QWORD *)(v22 + 8) = v10;
  *(_DWORD *)(v22 + 16) = a4;
  *(_DWORD *)(v22 + 32) = a8;
  v23 = *(_DWORD *)(v22 + 156);
  *(_QWORD *)(v22 + 112) = 0LL;
  *(_QWORD *)(v22 + 120) = 0LL;
  v24 = v23 & 0xFFFFFD1F;
  *(_QWORD *)(v22 + 128) = 0LL;
  *(_DWORD *)(v22 + 140) = 0;
  *(_DWORD *)(v22 + 136) = 0;
  *(_DWORD *)(v22 + 148) = 0;
  *(_DWORD *)(v22 + 144) = 0;
  *(_DWORD *)(v22 + 156) = v24;
  if ( (a8 & 3) != 3 || (v25 = v24, (a8 & 4) == 0) && a3 == -1 )
  {
    v25 = v24 | 0x20;
    *(_QWORD *)(v22 + 128) = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 256LL);
  }
  *(_DWORD *)(v22 + 156) = v25 & 0xFFFFF2E0;
  *(_DWORD *)(v22 + 152) = a9;
  v26 = IsRectEmptyInl((const struct tagRECT *)(*(_QWORD *)(a2 + 40) + 88LL));
  *(_DWORD *)(v22 + 156) = v27 ^ ((unsigned __int16)v27 ^ (unsigned __int16)(v26 << 12)) & 0x1000;
  if ( !(unsigned int)Feature_ApplyWindowActionConvergence__private_IsEnabledDeviceUsageNoInline() )
  {
    v28 = *(_DWORD *)(v22 + 32);
    if ( (v28 & 0xC00000) != 0 )
    {
      v29 = *(_DWORD *)(v22 + 20);
      LODWORD(v41) = *(_DWORD *)(v22 + 16);
      DWORD2(v41) = *(_DWORD *)(v22 + 24) + v41;
      v30 = v29 + *(_DWORD *)(v22 + 28);
      DWORD1(v41) = v29;
      HIDWORD(v41) = v30;
      if ( (v28 & 0x800000) != 0 )
        v31 = 18;
      else
        v31 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 288LL);
      v33 = MonitorFromRect((INT *)&v41, 2u, v31);
      v34 = *(_DWORD *)(v22 + 32);
      v39 = v33;
      if ( (v34 & 0x800000) != 0 )
      {
        PhysicalToLogicalDPIRect(&v41, &v41, *(unsigned int *)(*(_QWORD *)(a2 + 40) + 288LL), &v39);
        v33 = v39;
        v34 = *(_DWORD *)(v22 + 32) & 0xFF7FFFFF;
        *(_DWORD *)(v22 + 32) = v34;
      }
      if ( (v34 & 0x400000) != 0 )
      {
        v35 = (__int128)*WindowMargins::ExtendRect(
                           (WindowMargins *)v40,
                           (struct tagRECT *)a2,
                           (const struct tagWND *)&v41,
                           (const struct tagRECT *)*(unsigned __int16 *)(*(_QWORD *)(v33 + 40) + 60LL),
                           v39);
        *(_DWORD *)(v22 + 32) &= ~0x400000u;
        v41 = v35;
      }
      v36 = v41;
      v37 = v41;
      *(_DWORD *)(v22 + 24) = DWORD2(v41) - v41;
      v37 >>= 32;
      v38 = HIDWORD(v41) - v37;
      *(_DWORD *)(v22 + 16) = v36;
      *(_DWORD *)(v22 + 28) = v38;
      *(_DWORD *)(v22 + 20) = v37;
    }
  }
  return a1;
}
