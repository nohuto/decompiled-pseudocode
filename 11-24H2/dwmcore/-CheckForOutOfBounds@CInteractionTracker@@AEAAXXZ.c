/*
 * XREFs of ?CheckForOutOfBounds@CInteractionTracker@@AEAAXXZ @ 0x1800146C0
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180013DC0 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 * Callees:
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x180014980 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x180014AC0 (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CInteractionTracker::CheckForOutOfBounds(CInteractionTracker *this, __int64 a2)
{
  unsigned int v3; // xmm1_4
  unsigned int v4; // xmm0_4
  unsigned int v5; // xmm1_4
  unsigned int v6; // xmm0_4
  unsigned __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+28h] [rbp-20h]

  if ( !*((_DWORD *)this + 46) && (*((_BYTE *)this + 540) & 0x20) == 0 )
  {
    *(float *)&v3 = fmaxf(*((float *)this + 23), *((float *)this + 26));
    v7 = *((_QWORD *)this + 11);
    *(float *)&v4 = fmaxf(*((float *)this + 22), *((float *)this + 25));
    v8 = 0;
    v7 = __PAIR64__(v3, v4);
    CInteractionTracker::SetPosition(this, &v7, 0LL);
  }
  if ( !*((_DWORD *)this + 46) )
  {
    if ( (*((_BYTE *)this + 540) & 0x20) == 0 )
    {
      *(float *)&v5 = fminf(*((float *)this + 23), *((float *)this + 29));
      v7 = *((_QWORD *)this + 11);
      *(float *)&v6 = fminf(*((float *)this + 22), *((float *)this + 28));
      v8 = 0;
      v7 = __PAIR64__(v5, v6);
      CInteractionTracker::SetPosition(this, &v7, 0LL);
    }
    if ( !*((_DWORD *)this + 46) )
    {
      if ( (*((_BYTE *)this + 540) & 0x20) == 0 )
        CInteractionTracker::SetScale(this, a2, 0LL);
      if ( !*((_DWORD *)this + 46) && (*((_BYTE *)this + 540) & 0x20) == 0 )
        CInteractionTracker::SetScale(this, a2, 0LL);
    }
  }
}
