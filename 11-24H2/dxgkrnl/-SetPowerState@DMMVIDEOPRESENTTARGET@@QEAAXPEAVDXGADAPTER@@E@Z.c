/*
 * XREFs of ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x140063768
 * Callers:
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x140063768 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 *     ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x14025F0F4 (-DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILUR.c)
 *     ?SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1403D56DC (-SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 *     ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1403E0F24 (-RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z @ 0x140011BF0 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXIK@Z.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x140025980 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ?SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z @ 0x140063768 (-SetPowerState@DMMVIDEOPRESENTTARGET@@QEAAXPEAVDXGADAPTER@@E@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::SetPowerState(
        DMMVIDEOPRESENTTARGET *this,
        struct DXGADAPTER *a2,
        unsigned __int8 a3)
{
  unsigned __int8 v3; // di
  _QWORD **v6; // rcx
  _QWORD *v7; // rax
  unsigned int v8; // edx
  char v9; // al
  DMMVIDEOPRESENTTARGET *v10; // rcx
  char *v11; // rsi
  char *i; // rbx

  v3 = a3;
  if ( !*((_BYTE *)this + 420) )
  {
    v6 = (_QWORD **)((char *)this + 440);
    v7 = *v6;
    if ( !a3 )
    {
      while ( v7 != v6 )
      {
        if ( *((_BYTE *)v7 - 52) )
        {
          v3 = 1;
          break;
        }
        v7 = (_QWORD *)*v7;
      }
    }
    v8 = *((_DWORD *)this + 100);
    if ( v8 != -1 )
    {
      v9 = *((_BYTE *)this + 404);
      if ( v3 )
      {
        if ( !v9 )
          DXGADAPTER::SetPowerComponentActiveCBInternal(a2, v8, 1u, 0);
      }
      else if ( v9 )
      {
        DXGADAPTER::SetPowerComponentIdleCBInternal(a2, v8, 0);
      }
    }
    v10 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 59);
    *((_BYTE *)this + 404) = v3;
    if ( v10 )
      DMMVIDEOPRESENTTARGET::SetPowerState(v10, a2, v3);
    v11 = (char *)this + 480;
    for ( i = (char *)*((_QWORD *)this + 60); i != v11; i = *(char **)i )
      DMMVIDEOPRESENTTARGET::SetPowerState((DMMVIDEOPRESENTTARGET *)(i - 496), a2, v3);
  }
}
