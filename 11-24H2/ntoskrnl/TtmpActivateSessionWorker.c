/*
 * XREFs of TtmpActivateSessionWorker @ 0x14076A64C
 * Callers:
 *     TtmpSessionWorker @ 0x14076AF20 (TtmpSessionWorker.c)
 * Callees:
 *     TtmpInitiateModernStandbyTransition @ 0x14076A9D8 (TtmpInitiateModernStandbyTransition.c)
 *     TtmpSessionPowerControl @ 0x14076AE8C (TtmpSessionPowerControl.c)
 *     TtmiLogSessionActivate @ 0x14076DD78 (TtmiLogSessionActivate.c)
 */

__int64 __fastcall TtmpActivateSessionWorker(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rdi
  unsigned int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // r8
  unsigned int *v7; // rcx
  __int64 v8; // r8

  v2 = (unsigned int *)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 4);
  if ( (v4 & 8) == 0 )
  {
    if ( (v4 & 0x40) != 0 )
      return 259;
    if ( (v4 & 0x200) != 0 )
    {
      if ( (v4 & 0x100) != 0 )
        return 259;
      v6 = *(unsigned int *)(a1 + 12);
      *v2 = v4 | 0x100;
      v5 = TtmpInitiateModernStandbyTransition(a1, 0LL, v6);
      if ( v5 )
        return v5;
      v4 = *v2 & 0xFFFFFCFF;
      *v2 = v4;
      if ( (v4 & 0x10) == 0 )
        return 0;
      v7 = (unsigned int *)(a1 + 4);
    }
    else
    {
      v7 = (unsigned int *)(a1 + 4);
    }
    if ( (v4 & 0x400) == 0 )
    {
      v5 = 0;
      *v7 = v4 & 0xFFFFFFE7 | 8;
      TtmiLogSessionActivate();
      return v5;
    }
    if ( (v4 & 0x80u) == 0 )
    {
      v8 = *(unsigned int *)(a1 + 12);
      LOBYTE(a2) = 1;
      *v2 = v4 | 0x80;
      TtmpSessionPowerControl(a1, a2, v8);
    }
    return 259;
  }
  *v2 = v4 & 0xFFFFFFEF;
  return 0;
}
