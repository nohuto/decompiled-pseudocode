/*
 * XREFs of ?ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE@@@Z @ 0x1801DFC80
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18000CBEC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18001BE40 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 */

__int64 __fastcall CBaseExpression::ProcessSetTracingCookie(
        CBaseExpression *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE *a3)
{
  struct CSparseStorage::AllocatedStorage **v3; // r10
  CBaseExpression *v4; // r11
  CSparseStorage::AllocatedStorage *v5; // rcx
  const struct tagMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE *v6; // r9
  _DWORD *v7; // rdx
  __int64 v9; // rcx
  struct CResourceTable *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v3 = (struct CSparseStorage::AllocatedStorage **)((char *)this + 312);
  v4 = this;
  v5 = (CSparseStorage::AllocatedStorage *)*((_QWORD *)this + 39);
  v6 = a3;
  if ( (*((_DWORD *)v5 + 1) & 0x40000000) != 0 && *((_DWORD *)CSparseStorage::AllocatedStorage::FindSlot(v5, 2) + 1) )
  {
    v7 = (_DWORD *)((char *)v6 + 8);
    if ( !*((_DWORD *)v6 + 2) )
      --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 3) + 824LL) + 152LL);
  }
  else
  {
    v7 = (_DWORD *)((char *)v6 + 8);
    if ( *((_DWORD *)v6 + 2) )
    {
      v9 = *(_QWORD *)(*((_QWORD *)v4 + 3) + 824LL);
      ++*(_DWORD *)(v9 + 152);
      *(_BYTE *)(v9 + 440) |= 2u;
    }
  }
  LODWORD(v10) = *v7;
  if ( (_DWORD)v10 == LODWORD(`CVisual::SetWorldRenderingScaleOverride'::`2'::sc_defaultValue) )
    *((_DWORD *)*v3 + 1) &= ~0x40000000u;
  else
    CSparseStorage::SetData(v3, 2, 4u, &v10);
  return 0LL;
}
