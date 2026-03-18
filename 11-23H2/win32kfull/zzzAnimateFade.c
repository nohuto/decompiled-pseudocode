/*
 * XREFs of zzzAnimateFade @ 0x1C01BCB78
 * Callers:
 *     xxxSystemTimerProc @ 0x1C0005B40 (xxxSystemTimerProc.c)
 *     zzzStartSonar @ 0x1C01BCDFC (zzzStartSonar.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01BBD00 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01BC2E4 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     StopFade @ 0x1C01BC550 (StopFade.c)
 */

__int64 zzzAnimateFade()
{
  unsigned int v0; // r9d
  unsigned int v1; // ecx
  unsigned int v2; // edi
  unsigned int v3; // eax
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  bool v9; // zf
  __int64 result; // rax
  __int64 v11; // rcx
  char v12; // [rsp+40h] [rbp+8h] BYREF
  struct _BLENDFUNCTION v13; // [rsp+48h] [rbp+10h] BYREF

  v0 = gfade[10];
  v1 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - gfade[11];
  if ( v1 > v0 )
    return StopFade();
  v2 = gfade[12] & 1;
  if ( v2 )
    v3 = 255 * v1;
  else
    v3 = 255 * (v0 - v1);
  *(_WORD *)&v13.BlendOp = 0;
  v13.AlphaFormat = 0;
  v4 = v3 / v0;
  v13.SourceConstantAlpha = v3 / v0;
  if ( (gfade[12] & 0x80u) == 0 )
  {
    zzzUpdateFade(0LL, 0LL, 0LL, 0LL, &v13);
  }
  else
  {
    DrawSonar(*(HDC *)&gfade[2]);
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v12);
    zzzUpdateFade((struct tagPOINT *)&gfade[6], (struct tagSIZE *)&gfade[8], *(HDC *)&gfade[2], gZero, 0LL);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v12, v5, v6);
    v8 = SGDGetUserSessionState(v7);
    *(_DWORD *)(v8 + 15964) -= 20;
  }
  if ( v2 )
    v9 = (_BYTE)v4 == 0xFF;
  else
    v9 = (_BYTE)v4 == 0;
  if ( v9
    || (result = *(_QWORD *)gfade, v11 = gfade[12], (v11 & 0x80u) != 0LL)
    && (result = SGDGetUserSessionState(v11), *(int *)(result + 15964) < 0) )
  {
    gfade[12] |= 2u;
    return StopFade();
  }
  return result;
}
