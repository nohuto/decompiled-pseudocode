/*
 * XREFs of RtlRestoreContext @ 0x18011F080
 * Callers:
 *     RtlGuardRestoreContext @ 0x1800358A0 (RtlGuardRestoreContext.c)
 *     RtlUnwindEx @ 0x180041E80 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x18008CDF0 (RtlRaiseException.c)
 * Callees:
 *     RtlContinueLongJump @ 0x1800E5780 (RtlContinueLongJump.c)
 *     ZwContinue @ 0x1801608B0 (ZwContinue.c)
 */

void __cdecl RtlRestoreContext(PCONTEXT ContextRecord, struct _EXCEPTION_RECORD *ExceptionRecord)
{
  unsigned __int64 v2; // rax
  DWORD v3; // r8d
  volatile __int32 *v4; // rbx
  __int32 v5; // r8d
  _QWORD v6[154]; // [rsp-30h] [rbp-520h] BYREF
  _DWORD v7[2]; // [rsp+4A0h] [rbp-50h] BYREF
  DWORD64 P2Home; // [rsp+4A8h] [rbp-48h]
  unsigned int v9; // [rsp+4B0h] [rbp-40h]
  int P3Home_high; // [rsp+4B4h] [rbp-3Ch]
  _QWORD _4C0[7]; // [rsp+4C0h] [rbp-30h] BYREF
  WORD SegCs; // [rsp+4F8h] [rbp+8h]
  DWORD EFlags; // [rsp+500h] [rbp+10h]
  DWORD64 Rsp; // [rsp+508h] [rbp+18h]
  WORD SegSs; // [rsp+510h] [rbp+20h]
  int v16; // [rsp+560h] [rbp+70h]
  int v17; // [rsp+568h] [rbp+78h]
  int v18; // [rsp+570h] [rbp+80h]
  int v19; // [rsp+578h] [rbp+88h]
  int v20; // [rsp+580h] [rbp+90h]
  int v21; // [rsp+588h] [rbp+98h]
  int v22; // [rsp+590h] [rbp+A0h]
  int v23; // [rsp+598h] [rbp+A8h]
  int v24; // [rsp+5A0h] [rbp+B0h]
  int v25; // [rsp+5A8h] [rbp+B8h]
  int v26; // [rsp+5B0h] [rbp+C0h]
  int v27; // [rsp+5B8h] [rbp+C8h]
  int v28; // [rsp+5C0h] [rbp+D0h]
  int v29; // [rsp+5C8h] [rbp+D8h]
  int v30; // [rsp+5D0h] [rbp+E0h]
  int v31; // [rsp+5D8h] [rbp+E8h]
  int v32; // [rsp+5E0h] [rbp+F0h]
  int v33; // [rsp+5E8h] [rbp+F8h]
  int v34; // [rsp+5F0h] [rbp+100h]
  int v35; // [rsp+5F8h] [rbp+108h]
  int v36; // [rsp+600h] [rbp+110h]
  int v37; // [rsp+608h] [rbp+118h]
  int v38; // [rsp+610h] [rbp+120h]
  int v39; // [rsp+618h] [rbp+128h]
  int v40; // [rsp+620h] [rbp+130h]
  int v41; // [rsp+628h] [rbp+138h]
  void *v42; // [rsp+630h] [rbp+140h]

  if ( !ExceptionRecord )
  {
LABEL_6:
    if ( (LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] & 0x1000000000000000LL) == 0
      && (LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] & 0x1000) == 0
      && (ContextRecord->ContextFlags & 0xFFFFFF3F) == 0x10000F )
    {
      if ( (ContextRecord->ContextFlags & 0x100040) == 0x100040 )
      {
        v4 = (volatile __int32 *)((char *)&ContextRecord->1 + SLODWORD(ContextRecord[1].P3Home) + 464);
        v5 = _InterlockedExchange(v4 + 6, ContextRecord->MxCsr);
        _xrstor((void *)v4, *(_QWORD *)RtlpXcfgEnabledVolatileFeatures & 0xFFFFFFFFFFFFFFFCuLL);
        *((_DWORD *)v4 + 6) = v5;
      }
      _fxrstor(&ContextRecord->FltSave);
      _mm_setcsr(ContextRecord->MxCsr);
      SegSs = ContextRecord->SegSs;
      Rsp = ContextRecord->Rsp;
      EFlags = ContextRecord->EFlags;
      SegCs = ContextRecord->SegCs;
      _4C0[6] = ContextRecord->Rip;
      __asm { iretq }
    }
    if ( ZwContinue(ContextRecord, 0) == -1073740278 )
      __fastfail(0x30u);
    return;
  }
  if ( ExceptionRecord->ExceptionCode != -2147483607 || !ExceptionRecord->NumberParameters )
  {
    if ( ExceptionRecord->ExceptionCode == -2147483610 )
    {
      v2 = ExceptionRecord->ExceptionInformation[0];
      ContextRecord->Rbx = *(_QWORD *)(v2 + 8);
      ContextRecord->Rsp = *(_QWORD *)(v2 + 16);
      ContextRecord->Rbp = *(_QWORD *)(v2 + 24);
      ContextRecord->Rsi = *(_QWORD *)(v2 + 32);
      ContextRecord->Rdi = *(_QWORD *)(v2 + 40);
      ContextRecord->R12 = *(_QWORD *)(v2 + 48);
      ContextRecord->R13 = *(_QWORD *)(v2 + 56);
      ContextRecord->R14 = *(_QWORD *)(v2 + 64);
      ContextRecord->R15 = *(_QWORD *)(v2 + 72);
      ContextRecord->Rip = *(_QWORD *)(v2 + 80);
      v3 = *(_DWORD *)(v2 + 88);
      ContextRecord->MxCsr = v3;
      ContextRecord->FltSave.MxCsr = v3;
      ContextRecord->FltSave.ControlWord = *(_WORD *)(v2 + 92);
      ContextRecord->Xmm6 = *(M128A *)(v2 + 96);
      ContextRecord->Xmm7 = *(M128A *)(v2 + 112);
      ContextRecord->Xmm8 = *(M128A *)(v2 + 128);
      ContextRecord->Xmm9 = *(M128A *)(v2 + 144);
      ContextRecord->Xmm10 = *(M128A *)(v2 + 160);
      ContextRecord->Xmm11 = *(M128A *)(v2 + 176);
      ContextRecord->Xmm12 = *(M128A *)(v2 + 192);
      ContextRecord->Xmm13 = *(M128A *)(v2 + 208);
      ContextRecord->Xmm14 = *(M128A *)(v2 + 224);
      ContextRecord->Xmm15 = *(M128A *)(v2 + 240);
      RtlContinueLongJump(ContextRecord);
      return;
    }
    goto LABEL_6;
  }
  qmemcpy(v6, ContextRecord, sizeof(v6));
  if ( (v6[6] & 0x100040) == 0x100040 )
  {
    v9 = (_DWORD)ContextRecord + 1232 - (unsigned int)v7 + LODWORD(ContextRecord[1].P3Home);
    P3Home_high = HIDWORD(ContextRecord[1].P3Home);
    P2Home = ContextRecord[1].P2Home;
    v7[0] = -1232;
    v7[1] = (_DWORD)ContextRecord + 1232 - (unsigned int)v7 + HIDWORD(ContextRecord[1].P1Home);
  }
  _4C0[3] = v6[19];
  _4C0[0] = v6[31];
  RcFrameConsolidation(
    (int)ExceptionRecord,
    (int)RcFrameConsolidation,
    (int)_4C0,
    (int)ExceptionRecord,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
}
