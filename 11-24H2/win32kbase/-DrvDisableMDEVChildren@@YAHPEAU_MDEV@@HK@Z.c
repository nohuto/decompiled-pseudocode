/*
 * XREFs of ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x140089590
 * Callers:
 *     DrvDisableMDEV @ 0x140089260 (DrvDisableMDEV.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x140178DA4 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x140086454 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1400868FC (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     DrvDxgkDisplayOnOff @ 0x14013A5F0 (DrvDxgkDisplayOnOff.c)
 */

__int64 __fastcall DrvDisableMDEVChildren(struct _MDEV *a1, int a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  int v8; // esi
  __int64 result; // rax
  __int64 v10; // rbp
  HDEV *v11; // rdi

  WdLogSingleEntry2(5LL, a1, a2);
  v7 = 0LL;
  WdLogGlobalForLineNumber = 20074;
  v8 = 1;
  if ( *((_DWORD *)a1 + 5) )
  {
    do
    {
      if ( a2 )
      {
        v10 = 56LL * (unsigned int)v7;
        v8 = DrvDisableDisplay(*(HDEV *)((char *)a1 + v10 + 40), 0);
        if ( !v8 )
          goto LABEL_8;
        DrvDxgkDisplayOnOff(*(_QWORD *)((char *)a1 + v10 + 40), 0LL, a3);
      }
      v7 = (unsigned int)(v7 + 1);
    }
    while ( (unsigned int)v7 < *((_DWORD *)a1 + 5) );
    if ( v8 )
      goto LABEL_5;
LABEL_8:
    if ( (_DWORD)v7 )
    {
      v11 = (HDEV *)((char *)a1 + 40);
      do
      {
        if ( a2 )
        {
          LOBYTE(v6) = 1;
          DrvDxgkDisplayOnOff(*v11, v6, a3);
          while ( !(unsigned int)DrvEnableDisplay(*v11) )
            ;
        }
        v11 += 7;
        --v7;
      }
      while ( v7 );
    }
  }
LABEL_5:
  WdLogSingleEntry1(5LL, v8);
  result = (unsigned int)v8;
  WdLogGlobalForLineNumber = 20115;
  return result;
}
