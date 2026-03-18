/*
 * XREFs of ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x14021158C
 * Callers:
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x140211704 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 * Callees:
 *     IntersectRect @ 0x14000C128 (IntersectRect.c)
 *     EngMulDiv @ 0x140053870 (EngMulDiv.c)
 *     PtInRect @ 0x1400DCAE4 (PtInRect.c)
 *     GetUserHandedness @ 0x140152738 (GetUserHandedness.c)
 *     ?GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@PEBUCompositionInputObject@@U2@@Z @ 0x1402114D8 (-GetInputRectFromInputSinkInScreenSpace@CPalmRejectZoneInfo@@AEAA-AUtagRECT@@PEBUCompositionInpu.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

bool __fastcall CPalmRejectZoneInfo::HitTestDelayZonePalmRejectionRegion(
        CPalmRejectZoneInfo *this,
        struct tagPOINT a2,
        struct tagRECT *a3)
{
  const struct CompositionInputObject *v4; // r8
  CPalmRejectZoneInfo *v7; // rcx
  const struct CompositionInputObject *v8; // r8
  int v9; // eax
  INT v10; // r12d
  INT v11; // edi
  LONG left; // r14d
  LONG top; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 i; // r8
  unsigned int UserHandedness; // eax
  LONG right; // ecx
  LONG v19; // eax
  struct tagRECT v21; // [rsp+20h] [rbp-40h] BYREF
  struct tagRECT v22; // [rsp+30h] [rbp-30h] BYREF
  struct tagRECT v23; // [rsp+40h] [rbp-20h] BYREF

  v4 = (const struct CompositionInputObject *)*((_QWORD *)this + 9);
  v21 = *(struct tagRECT *)((char *)this + 24);
  CPalmRejectZoneInfo::GetInputRectFromInputSinkInScreenSpace(this, &v22, v4, &v21);
  v8 = (const struct CompositionInputObject *)*((_QWORD *)this + 10);
  if ( !v8
    || (v21 = *(struct tagRECT *)((char *)this + 40),
        CPalmRejectZoneInfo::GetInputRectFromInputSinkInScreenSpace(v7, &v23, v8, &v21),
        v21 = 0LL,
        (v9 = IntersectRect(&v21, &v22.left, &v23.left)) != 0) )
  {
    v10 = *((_DWORD *)this + 22);
    v11 = 0;
    left = v22.left;
    top = v22.top;
    v21.left = v22.left;
    v21.top = v22.top;
    v15 = *(_QWORD *)(W32GetUserSessionState(v7) + 57008);
    for ( i = *(_QWORD *)(v15 + 112); i; i = *(_QWORD *)(i + 56) )
    {
      v15 = *(_QWORD *)(i + 40);
      if ( (*(_DWORD *)(v15 + 24) & 1) != 0 && PtInRect((_DWORD *)(v15 + 28), *(unsigned __int64 *)&v21.left) )
      {
        v11 = EngMulDiv(v10, *(unsigned __int16 *)(i + 72), 96);
        break;
      }
    }
    UserHandedness = (unsigned int)GetUserHandedness(v15, v14);
    right = v22.right;
    if ( UserHandedness )
    {
      right = v11 + v22.right;
    }
    else
    {
      left -= v11;
      top -= v11;
    }
    v21.right = right;
    v19 = v11 + v22.bottom;
    v21.bottom = v11 + v22.bottom;
    v21.top = top;
    v21.left = left;
    a3->left = left;
    a3->top = top;
    a3->right = right;
    a3->bottom = v19;
    a3[1] = v22;
    LOBYTE(v9) = PtInRect(&v21, *(_QWORD *)&a2);
  }
  return v9;
}
