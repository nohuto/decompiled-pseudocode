/*
 * XREFs of ?FilterMoveForStableContact@CPTPEngine@@AEAAHPEAUPTPInput@@UtagPOINT@@PEAUCContactState@@@Z @ 0x1400CD864
 * Callers:
 *     ?HandleDrag@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CD408 (-HandleDrag@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x140190450 (-HandleMove@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 * Callees:
 *     ?SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParameters@345@@Z @ 0x1400CDB34 (-SendTelemetryOutput@CBasePTPEngine@@IEAAXW4Action@Telemetry@Payload@PTPTelemetryOutput@@TParame.c)
 */

__int64 __fastcall CPTPEngine::FilterMoveForStableContact(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct tagPOINT a3,
        struct CContactState *a4)
{
  __int64 v7; // rbp
  char v8; // cl
  bool v9; // si
  char v10; // dl
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r13
  __int64 v14; // r11
  __int64 v15; // r12
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r12
  int v18; // edx
  bool v19; // al
  __int64 v20; // rax
  __int64 v21; // xmm0_8
  __int128 v23; // [rsp+20h] [rbp-68h] BYREF
  __int64 v24; // [rsp+30h] [rbp-58h]
  __int64 v25; // [rsp+50h] [rbp-38h]

  if ( (*((_DWORD *)this + 821) & 0x80u) == 0 )
    return 0LL;
  v7 = *(_QWORD *)a2;
  if ( a3 )
  {
    v8 = 1;
  }
  else
  {
    v8 = 0;
    if ( (*(_DWORD *)a4 & 0x4000000) == 0 )
    {
      *(_DWORD *)a4 |= 0x4000000u;
      *((_QWORD *)a4 + 14) = *(_QWORD *)a2;
    }
  }
  if ( (*(_DWORD *)a4 & 0x4000000) != 0 && v8 )
  {
    v10 = 1;
    v9 = 0;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    if ( !v8 )
      goto LABEL_7;
  }
  *(_DWORD *)a4 &= ~0x4000000u;
LABEL_7:
  if ( (*((_DWORD *)this + 768) & 0x1000000) != 0
    && v10
    && (int)((HIDWORD(*((_QWORD *)a4 + 1)) - HIDWORD(*((_QWORD *)a4 + 6)))
           * (HIDWORD(*((_QWORD *)a4 + 1)) - HIDWORD(*((_QWORD *)a4 + 6)))
           + (*((_QWORD *)a4 + 1) - *((_QWORD *)a4 + 6)) * (*((_QWORD *)a4 + 1) - *((_QWORD *)a4 + 6))) > (unsigned __int64)(unsigned int)(*((_DWORD *)this + 778) * *((_DWORD *)this + 778)) )
  {
    v9 = v7 - *((_QWORD *)a4 + 14) >= *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 798) / 0x3E8;
  }
  v11 = *((_QWORD *)a4 + 1);
  v12 = *((unsigned int *)this + 780);
  v13 = *((unsigned int *)this + 779);
  v14 = HIDWORD(*((_QWORD *)a4 + 1));
  v15 = v13 * (int)((HIDWORD(*((_QWORD *)a4 + 6)) - v14) * (HIDWORD(*((_QWORD *)a4 + 6)) - v14));
  v16 = v12 * v13;
  v17 = v12 * (int)((*((_QWORD *)a4 + 6) - v11) * (*((_QWORD *)a4 + 6) - v11)) + v15;
  v18 = *(_DWORD *)a4;
  v19 = __CFSHR__(*(_DWORD *)a4, 28)
     && ((int)((v14 - HIDWORD(*((_QWORD *)a4 + 6))) * (v14 - HIDWORD(*((_QWORD *)a4 + 6)))
             + (v11 - *((_QWORD *)a4 + 6)) * (v11 - *((_QWORD *)a4 + 6))) <= (unsigned __int64)(unsigned int)(*((_DWORD *)this + 777) * *((_DWORD *)this + 777))
      || v7 - *((_QWORD *)a4 + 13) < *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 797) / 0x3E8)
     && v17 < v16;
  if ( v9 )
  {
    *((_QWORD *)a4 + 6) = v11;
    v20 = *(_QWORD *)((char *)a2 + 28);
    v25 = 0LL;
    *(_DWORD *)a4 = v18 | 0x8000000;
    v23 = 0LL;
    v21 = v25;
    *((_QWORD *)a4 + 7) = v20;
    *((_QWORD *)a4 + 13) = v7;
    v24 = v21;
    CBasePTPEngine::SendTelemetryOutput(this, 12LL, &v23);
    return 1LL;
  }
  if ( v19 )
    return 1LL;
  if ( __CFSHR__(*(_DWORD *)a4, 28) )
  {
    v25 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    CBasePTPEngine::SendTelemetryOutput(this, 13LL, &v23);
    *((_QWORD *)a4 + 15) = *(_QWORD *)a2;
  }
  *(_DWORD *)a4 &= ~0x8000000u;
  return 0LL;
}
