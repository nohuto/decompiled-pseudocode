/*
 * XREFs of ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C17D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800133C4 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     pow @ 0x18009D4FC (pow.c)
 *     sqrt @ 0x18009D520 (sqrt.c)
 *     ?ButtonToInteractionState@MPCMouseProcessor@@AEAA_NIIPEAW4InteractionState@MPCHolographicInputManager@@@Z @ 0x1801C1490 (-ButtonToInteractionState@MPCMouseProcessor@@AEAA_NIIPEAW4InteractionState@MPCHolographicInputMa.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C19E8 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C31AC (-ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCMouseProcessor::ForwardInputReport(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  _BYTE *v3; // r11
  int *v4; // r10
  MPCMouseProcessor *v8; // rbp
  int v9; // ecx
  int v10; // eax
  const struct MouseProcessorState *v11; // rdx
  struct InputInfo *v12; // r8
  MPCMouseProcessor *v13; // r14
  double v14; // xmm0_8
  double v15; // xmm7_8
  double v16; // xmm0_8
  int v17; // eax
  unsigned int v18; // esi
  int v20; // eax
  unsigned int v21; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v23; // [rsp+60h] [rbp+18h] BYREF

  v3 = (char *)this + 5384;
  v4 = (int *)((char *)a2 + 16);
  if ( (*((_BYTE *)a3 + 90) & 1) != 0
    || (v8 = (MPCMouseProcessor *)((char *)this - 8), *v3)
    && MPCMouseProcessor::ButtonToInteractionState(
         (MPCMouseProcessor *)((char *)this - 8),
         *v4,
         16,
         (enum MPCHolographicInputManager::InteractionState *)&v23) )
  {
    *v3 = 1;
    *((_DWORD *)a3 + 29) = 1;
    *((_DWORD *)this + 1322) = *v4;
  }
  else
  {
    *v3 = 0;
    *((_DWORD *)this + 1323) = *v4;
    v9 = *((_DWORD *)a2 + 2);
    *((_DWORD *)this + 1318) = v9;
    v10 = *((_DWORD *)a2 + 3);
    *((_DWORD *)this + 1347) += v9;
    *((_DWORD *)this + 1348) += v10;
    ++*((_DWORD *)this + 1349);
    *((_DWORD *)this + 1319) = v10;
    if ( *((_BYTE *)MPCHolographicInputManager::GetInstance() + 3364)
      && *((_QWORD *)MPCHolographicInputManager::GetInstance() + 418) )
    {
      MPCMouseProcessor::ProcessPoints(v8, v11, v12);
      v13 = v8;
      if ( !*((_BYTE *)this + 5261) )
      {
        *((_DWORD *)this + 1316) = *(_DWORD *)a2;
        *((_DWORD *)this + 1317) = *((_DWORD *)a2 + 1);
        *((_BYTE *)this + 5261) = 1;
      }
      if ( *((_QWORD *)a3 + 2) - *((_QWORD *)this + 667) <= *((_QWORD *)this + 679) )
        v13 = v8;
      else
        *((_DWORD *)this + 1320) = 0;
      v14 = (double)*((int *)this + 1319);
      *((_QWORD *)this + 667) = *((_QWORD *)a3 + 2);
      v15 = pow(v14, 2.0);
      v16 = pow((double)*((int *)this + 1318), 2.0);
      *((_DWORD *)this + 1320) += (int)sqrt(v16 + v15);
      v17 = MPCMouseProcessor::ForwardInputReportInternal(v13, a2, a3);
      v18 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD0,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v17);
        return v18;
      }
      *((_DWORD *)this + 1316) = *(_DWORD *)a2;
      *((_DWORD *)this + 1317) = *((_DWORD *)a2 + 1);
    }
    else if ( *((_DWORD *)a3 + 29) )
    {
      *((_DWORD *)a3 + 29) = 1;
    }
    else
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, const struct MouseProcessorState *, struct InputInfo *))(**((_QWORD **)this + 463) + 24LL))(
              *((_QWORD *)this + 463),
              a2,
              a3);
      v21 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB8,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v20);
        return v21;
      }
    }
  }
  return 0LL;
}
