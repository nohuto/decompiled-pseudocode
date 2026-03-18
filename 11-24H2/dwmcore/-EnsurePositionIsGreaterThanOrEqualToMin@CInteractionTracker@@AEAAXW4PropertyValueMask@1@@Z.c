/*
 * XREFs of ?EnsurePositionIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x1800148F0
 * Callers:
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1800E37B8 (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 * Callees:
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x180014980 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CInteractionTracker::EnsurePositionIsGreaterThanOrEqualToMin(__int64 a1, char a2)
{
  int v2; // eax
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]

  if ( !*(_DWORD *)(a1 + 184) && (*(_BYTE *)(a1 + 540) & 0x20) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 96);
    v4 = *(_QWORD *)(a1 + 88);
    v5 = v2;
    if ( (a2 & 1) != 0 )
      LODWORD(v4) = fmaxf(*(float *)(a1 + 88), *(float *)(a1 + 100));
    if ( (a2 & 2) != 0 )
      HIDWORD(v4) = fmaxf(*(float *)(a1 + 92), *(float *)(a1 + 104));
    v5 = 0;
    return CInteractionTracker::SetPosition(a1, &v4, 0LL);
  }
  return result;
}
