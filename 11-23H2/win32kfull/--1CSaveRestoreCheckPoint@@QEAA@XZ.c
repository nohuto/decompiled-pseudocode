/*
 * XREFs of ??1CSaveRestoreCheckPoint@@QEAA@XZ @ 0x1C005BF54
 * Callers:
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@W4MigrateWindowOptions@@PEAK@Z @ 0x1C005C088 (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F04DC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005C068 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 */

void __fastcall CSaveRestoreCheckPoint::~CSaveRestoreCheckPoint(CSaveRestoreCheckPoint *this)
{
  _OWORD *v1; // rbx
  __int64 v2; // rdx
  _QWORD *v3; // r9
  __int64 v4; // rax
  _OWORD *Prop; // rax

  v1 = (_OWORD *)((char *)this + 8);
  if ( !(unsigned int)IsRectEmptyInl((const struct tagRECT *)((char *)this + 8)) )
  {
    LOBYTE(v2) = 1;
    v4 = HMValidateHandleNoSecure(*v3, v2);
    if ( v4 )
    {
      Prop = (_OWORD *)GetProp(v4, *((unsigned __int16 *)&WPP_MAIN_CB.AlignmentRequirement + 2), 1LL);
      if ( Prop )
        *Prop = *v1;
    }
  }
}
