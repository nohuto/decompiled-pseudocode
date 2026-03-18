/*
 * XREFs of zzzAnimateFade @ 0x14023A678
 * Callers:
 *     xxxSystemTimerProc @ 0x14023EF10 (xxxSystemTimerProc.c)
 *     zzzStartSonar @ 0x14028572C (zzzStartSonar.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1401E2B3C (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     StopFade @ 0x1401EE440 (StopFade.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x14023A12C (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 __fastcall zzzAnimateFade(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v5; // esi
  unsigned int v6; // eax
  BYTE v7; // di
  __int64 v8; // r14
  HDC v9; // r8
  INT v10; // eax
  bool v11; // zf
  __int64 result; // rax
  _BYTE v13[8]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+38h] [rbp-8h]
  struct _BLENDFUNCTION v15; // [rsp+60h] [rbp+20h] BYREF
  struct tagPOINT v16; // [rsp+68h] [rbp+28h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = *(unsigned int *)(UserSessionState + 43064);
  v4 = (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *(_DWORD *)(UserSessionState + 43068);
  if ( (unsigned int)v4 > (unsigned int)v3 )
    return StopFade(v3, v4);
  v5 = *(_DWORD *)(UserSessionState + 43072) & 1;
  if ( v5 )
    v6 = 255 * v4;
  else
    v6 = 255 * (v3 - v4);
  *(_WORD *)&v15.BlendOp = 0;
  v15.AlphaFormat = 0;
  v7 = v6 / (unsigned int)v3;
  v15.SourceConstantAlpha = v7;
  v8 = W32GetUserSessionState(v3, v6 % (unsigned int)v3);
  if ( (*(_DWORD *)(UserSessionState + 43072) & 0x80u) == 0 )
  {
    zzzUpdateFade(0LL, 0LL, 0LL, 0LL, &v15);
    v4 = v8 + 16324;
  }
  else
  {
    DrawSonar(*(HDC *)(UserSessionState + 43032));
    v14 = 0LL;
    v13[0] = 0;
    AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v13);
    v9 = *(HDC *)(UserSessionState + 43032);
    v16.x = 0;
    v16.y = 0;
    zzzUpdateFade(
      (struct tagPOINT *)(UserSessionState + 43048),
      (struct tagSIZE *)(UserSessionState + 43056),
      v9,
      &v16,
      0LL);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v13);
    v10 = EngMulDiv(20, *(_DWORD *)(v8 + 16336), 96);
    v4 = v8 + 16324;
    *(_DWORD *)(v8 + 16324) -= v10;
  }
  if ( v5 )
    v11 = v7 == 0xFF;
  else
    v11 = v7 == 0;
  if ( v11 || (result = *(unsigned int *)(UserSessionState + 43072), (result & 0x80u) != 0LL) && *(int *)v4 < 0 )
  {
    *(_DWORD *)(UserSessionState + 43072) |= 2u;
    return StopFade(v3, v4);
  }
  return result;
}
