/*
 * XREFs of ?DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z @ 0x1403EF3E0
 * Callers:
 *     DxgDetermineBootImageMode @ 0x1401B4A1C (DxgDetermineBootImageMode.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

char __fastcall DxgkSetBootAnimationRelayState(int a1)
{
  struct DXGGLOBAL *Global; // rax
  char v3; // di
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  bool v7; // zf
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (struct DXGGLOBAL *)((char *)Global + 1600), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v3 = 0;
  v4 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 397);
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
          goto LABEL_11;
        v7 = a1 == 4;
      }
      else
      {
        v7 = a1 == 3;
      }
    }
    else
    {
      v7 = a1 == 2;
    }
  }
  else
  {
    v7 = ((a1 - 1) & 0xFFFFFFFD) == 0;
  }
  if ( v7 )
  {
    v3 = 1;
    *((_DWORD *)DXGGLOBAL::GetGlobal() + 397) = a1;
  }
LABEL_11:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v9);
  return v3;
}
