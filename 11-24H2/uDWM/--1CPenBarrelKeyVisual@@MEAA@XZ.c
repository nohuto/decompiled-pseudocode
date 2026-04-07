/*
 * XREFs of ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x180098388
 * Callers:
 *     ??_GCPenBarrelKeyVisual@@MEAAPEAXI@Z @ 0x180085CF0 (--_GCPenBarrelKeyVisual@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x18000F8D4 (-PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180098BEC (McTemplateU0q_EtwEventWriteTransfer.c)
 */

void __fastcall CPenBarrelKeyVisual::~CPenBarrelKeyVisual(CPenBarrelKeyVisual *this)
{
  __int64 v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  *(_QWORD *)this = &CPenBarrelKeyVisual::`vftable';
  CContactManager::PostKeystateFeedbackUpdate(
    *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
    *((_DWORD *)this + 64),
    0,
    (const struct tagPOINT *)((char *)this + 260),
    0);
  if ( *((_BYTE *)this + 302) && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(v2, &UdwmPenBarrel_Stop, *((unsigned int *)this + 64));
  v3 = (CBaseObject *)*((_QWORD *)this + 34);
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = (CBaseObject *)*((_QWORD *)this + 35);
  if ( v4 )
    CBaseObject::Release(v4);
  CTouchVisual::~CTouchVisual((void **)this);
}
