/*
 * XREFs of RtlRestoreContext @ 0x1404FA460
 * Callers:
 *     RtlUnwindEx @ 0x1402322B0 (RtlUnwindEx.c)
 * Callees:
 *     KeKernelShadowStackRestoreContext @ 0x1403A9E70 (KeKernelShadowStackRestoreContext.c)
 *     KeCheckStackAndTargetAddress @ 0x14042A370 (KeCheckStackAndTargetAddress.c)
 *     KasanWrapperRtlRestoreContext @ 0x140441B70 (KasanWrapperRtlRestoreContext.c)
 *     ZwContinue @ 0x1406A7C10 (ZwContinue.c)
 */

void __cdecl RtlRestoreContext(PCONTEXT ContextRecord, _EXCEPTION_RECORD *ExceptionRecord)
{
  unsigned __int64 v4; // rax
  PCONTEXT v5; // rcx
  PCONTEXT v7; // rsi
  _QWORD v8[154]; // [rsp-30h] [rbp-520h] BYREF
  _DWORD v9[8]; // [rsp+4A0h] [rbp-50h] BYREF
  _QWORD _4C0[7]; // [rsp+4C0h] [rbp-30h] BYREF
  unsigned __int16 SegCs; // [rsp+4F8h] [rbp+8h]
  unsigned int EFlags; // [rsp+500h] [rbp+10h]
  unsigned __int64 Rsp; // [rsp+508h] [rbp+18h]
  unsigned __int16 SegSs; // [rsp+510h] [rbp+20h]
  int v15; // [rsp+560h] [rbp+70h]
  int v16; // [rsp+568h] [rbp+78h]
  int v17; // [rsp+570h] [rbp+80h]
  int v18; // [rsp+578h] [rbp+88h]
  int v19; // [rsp+580h] [rbp+90h]
  int v20; // [rsp+588h] [rbp+98h]
  int v21; // [rsp+590h] [rbp+A0h]
  int v22; // [rsp+598h] [rbp+A8h]
  int v23; // [rsp+5A0h] [rbp+B0h]
  int v24; // [rsp+5A8h] [rbp+B8h]
  int v25; // [rsp+5B0h] [rbp+C0h]
  int v26; // [rsp+5B8h] [rbp+C8h]
  int v27; // [rsp+5C0h] [rbp+D0h]
  int v28; // [rsp+5C8h] [rbp+D8h]
  int v29; // [rsp+5D0h] [rbp+E0h]
  int v30; // [rsp+5D8h] [rbp+E8h]
  int v31; // [rsp+5E0h] [rbp+F0h]
  int v32; // [rsp+5E8h] [rbp+F8h]
  int v33; // [rsp+5F0h] [rbp+100h]
  int v34; // [rsp+5F8h] [rbp+108h]
  int v35; // [rsp+600h] [rbp+110h]
  int v36; // [rsp+608h] [rbp+118h]
  int v37; // [rsp+610h] [rbp+120h]
  int v38; // [rsp+618h] [rbp+128h]
  int v39; // [rsp+620h] [rbp+130h]
  int v40; // [rsp+628h] [rbp+138h]
  __int64 v41; // [rsp+630h] [rbp+140h]

  KasanWrapperRtlRestoreContext((__int64)ContextRecord);
  if ( !ExceptionRecord )
  {
LABEL_6:
    if ( (ContextRecord->ContextFlags & 0xFFFFFF3F) == 0x10000F )
    {
      _mm_setcsr(ContextRecord->MxCsr);
      KeCheckStackAndTargetAddress(ContextRecord->Rip, ContextRecord->Rsp);
      v5 = ContextRecord;
      if ( (KiKernelCetEnabled & 1) != 0 )
      {
        __asm { rdsspq  rdx }
        KeKernelShadowStackRestoreContext((__int64)ContextRecord, _RDX, ExceptionRecord);
        v5 = ContextRecord;
      }
      SegSs = v5->SegSs;
      Rsp = v5->Rsp;
      EFlags = v5->EFlags;
      SegCs = v5->SegCs;
      _4C0[6] = v5->Rip;
      _disable();
      __asm { iretq }
    }
    ZwContinue(ContextRecord, 0);
    return;
  }
  if ( ExceptionRecord->ExceptionCode != -2147483607 || !ExceptionRecord->NumberParameters )
  {
    if ( ExceptionRecord->ExceptionCode == -2147483610 )
    {
      v4 = ExceptionRecord->ExceptionInformation[0];
      ContextRecord->Rbx = *(_QWORD *)(v4 + 8);
      ContextRecord->Rsp = *(_QWORD *)(v4 + 16);
      ContextRecord->Rbp = *(_QWORD *)(v4 + 24);
      ContextRecord->Rsi = *(_QWORD *)(v4 + 32);
      ContextRecord->Rdi = *(_QWORD *)(v4 + 40);
      ContextRecord->R12 = *(_QWORD *)(v4 + 48);
      ContextRecord->R13 = *(_QWORD *)(v4 + 56);
      ContextRecord->R14 = *(_QWORD *)(v4 + 64);
      ContextRecord->R15 = *(_QWORD *)(v4 + 72);
      ContextRecord->Rip = *(_QWORD *)(v4 + 80);
      ContextRecord->MxCsr = *(_DWORD *)(v4 + 88);
      ContextRecord->Xmm6 = *(_M128A *)(v4 + 96);
      ContextRecord->Xmm7 = *(_M128A *)(v4 + 112);
      ContextRecord->Xmm8 = *(_M128A *)(v4 + 128);
      ContextRecord->Xmm9 = *(_M128A *)(v4 + 144);
      ContextRecord->Xmm10 = *(_M128A *)(v4 + 160);
      ContextRecord->Xmm11 = *(_M128A *)(v4 + 176);
      ContextRecord->Xmm12 = *(_M128A *)(v4 + 192);
      ContextRecord->Xmm13 = *(_M128A *)(v4 + 208);
      ContextRecord->Xmm14 = *(_M128A *)(v4 + 224);
      ContextRecord->Xmm15 = *(_M128A *)(v4 + 240);
    }
    goto LABEL_6;
  }
  qmemcpy(v8, ContextRecord, sizeof(v8));
  v7 = ContextRecord + 1;
  if ( (v8[6] & 0x100080) == 0x100080 )
  {
    v9[6] = (_DWORD)v7 - (unsigned int)v9 + LODWORD(v7->P4Home);
    v9[7] = HIDWORD(v7->P4Home);
    v9[2] = v7->P2Home;
    v9[3] = HIDWORD(v7->P2Home);
    v9[0] = -1232;
    v9[1] = (_DWORD)v7 - (unsigned int)v9 + HIDWORD(v7->P1Home);
  }
  _4C0[3] = v8[19];
  _4C0[0] = v8[31];
  RcFrameConsolidation(
    (_DWORD)ExceptionRecord,
    (unsigned int)RcFrameConsolidation,
    (unsigned int)_4C0,
    (_DWORD)ExceptionRecord,
    v15,
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
    v41);
}
