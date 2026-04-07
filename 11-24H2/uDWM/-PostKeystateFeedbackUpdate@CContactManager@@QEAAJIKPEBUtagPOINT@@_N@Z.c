/*
 * XREFs of ?PostKeystateFeedbackUpdate@CContactManager@@QEAAJIKPEBUtagPOINT@@_N@Z @ 0x18000F8D4
 * Callers:
 *     ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18000F5A4 (-PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x180098388 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UCPenContact@@$0A@@@QEAAJPEFBUCPenContact@@I@Z @ 0x18000DED8 (-AddMultipleAndSet@-$DynArray@UCPenContact@@$0A@@@QEAAJPEFBUCPenContact@@I@Z.c)
 *     ?PostKeystateFeedback@CDesktopManager@@QEAAJ_NK@Z @ 0x1800BABA8 (-PostKeystateFeedback@CDesktopManager@@QEAAJ_NK@Z.c)
 */

__int64 __fastcall CContactManager::PostKeystateFeedbackUpdate(
        CContactManager *this,
        unsigned int a2,
        int a3,
        const struct tagPOINT *a4,
        bool a5)
{
  _QWORD *v6; // r11
  __int64 i; // r10
  struct tagPOINT v9; // rax
  _DWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  struct tagPOINT v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+30h] [rbp-28h]
  struct tagPOINT v13; // [rsp+34h] [rbp-24h]
  int v14; // [rsp+3Ch] [rbp-1Ch]
  __int64 v15; // [rsp+40h] [rbp-18h]

  v6 = (_QWORD *)((char *)this + 216);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 60); i = (unsigned int)(i + 1) )
  {
    if ( *(_DWORD *)(*v6 + 40 * i) == a2 )
    {
      if ( (int)i >= 0 )
      {
        *(_QWORD *)(*v6 + 40 * i + 20) = *(_QWORD *)(*v6 + 40 * i + 8);
        *(_DWORD *)(*v6 + 40 * i + 16) = *(_DWORD *)(*v6 + 40 * i + 4);
        *(struct tagPOINT *)(*v6 + 40 * i + 8) = *a4;
        *(_DWORD *)(*v6 + 40 * i + 4) = a3;
        goto LABEL_10;
      }
      break;
    }
  }
  if ( !a5 )
    return 0LL;
  v9 = *a4;
  v14 = 0;
  v15 = 0LL;
  v11 = v9;
  v13 = v9;
  v10[0] = a2;
  v10[1] = a3;
  v12 = a3;
  DynArray<CPenContact,0>::AddMultipleAndSet((__int64 *)this + 27, (__int64)v10);
LABEL_10:
  CDesktopManager::PostKeystateFeedback(CDesktopManager::s_pDesktopManagerInstance, a5, a2);
  return 0LL;
}
