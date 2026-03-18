/*
 * XREFs of ?ProcessTrigger@CLegacyAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYANIMATIONTRIGGER_TRIGGER@@@Z @ 0x1802A8F14
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800F3A90 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1801E5B78 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 */

__int64 __fastcall CLegacyAnimationTrigger::ProcessTrigger(
        CComposition **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LEGACYANIMATIONTRIGGER_TRIGGER *a3)
{
  unsigned __int64 FrameTargetTime; // rbp
  unsigned int v4; // ebx
  __int64 i; // rsi
  _QWORD *v7; // rcx
  int v8; // eax

  FrameTargetTime = *((_QWORD *)a3 + 1);
  v4 = 0;
  if ( !FrameTargetTime )
    FrameTargetTime = CComposition::GetFrameTargetTime(this[3]);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 24); i = (unsigned int)(i + 1) )
  {
    v7 = (_QWORD *)*((_QWORD *)this[9] + i);
    if ( v7[16] )
    {
      v7[17] = FrameTargetTime;
      v7[25] = FrameTargetTime;
      v8 = CBaseAnimation::RegisterAnimateResource(*((CComposition ***)this[9] + i));
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x21u, 0LL);
        return v4;
      }
    }
  }
  this[13] = (CComposition *)FrameTargetTime;
  return v4;
}
