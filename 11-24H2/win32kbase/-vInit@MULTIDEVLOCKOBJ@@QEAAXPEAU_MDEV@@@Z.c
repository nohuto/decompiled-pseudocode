/*
 * XREFs of ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x14013A8E4
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140176D8C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401C6C88 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     PALLOCNOZ @ 0x1400254A4 (PALLOCNOZ.c)
 */

void __fastcall MULTIDEVLOCKOBJ::vInit(MULTIDEVLOCKOBJ *this, struct _MDEV *a2)
{
  unsigned int v2; // edi
  unsigned int v5; // eax
  char *v6; // rax
  __int64 v7; // rdx

  v2 = 0;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  if ( !a2 )
  {
    *(_DWORD *)this = 1;
    return;
  }
  v5 = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 1) = v5;
  if ( v5 > 0xA )
  {
    v6 = (char *)PALLOCNOZ((unsigned int)(8 * *((_DWORD *)a2 + 5)), 0x706D7447u);
    *((_QWORD *)this + 1) = v6;
    if ( !v6 )
      return;
    *(_DWORD *)this = 3;
  }
  else
  {
    v6 = (char *)this + 16;
    *(_DWORD *)this = 1;
    *((_QWORD *)this + 1) = (char *)this + 16;
  }
  if ( v6 && *((_DWORD *)a2 + 5) )
  {
    do
    {
      v7 = v2++;
      *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v7) = *((_QWORD *)a2 + 7 * v7 + 5);
    }
    while ( v2 < *((_DWORD *)a2 + 5) );
  }
}
