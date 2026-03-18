/*
 * XREFs of ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x1800154B0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180015570 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetTarget(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETTARGET *a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  char v9; // [rsp+30h] [rbp-18h]

  v3 = *((_DWORD *)a3 + 3);
  v4 = 0LL;
  if ( v3 )
  {
    if ( v3 < *((_DWORD *)a2 + 7) )
    {
      v5 = *((_QWORD *)a2 + 5);
      if ( *(_DWORD *)(*((_DWORD *)a2 + 6) * v3 + v5) )
        v4 = *(_QWORD *)(*((_DWORD *)a2 + 6) * v3 + v5 + 8);
    }
  }
  *((_DWORD *)this + 54) = v3;
  *((_DWORD *)this + 55) = *((_DWORD *)a3 + 2);
  v9 = *((_BYTE *)a3 + 32);
  v6 = CBaseExpression::SetTarget(
         this,
         *((unsigned int *)a2 + 12),
         v4,
         *((unsigned int *)a3 + 4),
         *((_DWORD *)a3 + 9),
         *((unsigned __int16 *)a3 + 17),
         v9,
         *((_QWORD *)a3 + 3));
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x5Du, 0LL);
  else
    return 0;
  return v7;
}
