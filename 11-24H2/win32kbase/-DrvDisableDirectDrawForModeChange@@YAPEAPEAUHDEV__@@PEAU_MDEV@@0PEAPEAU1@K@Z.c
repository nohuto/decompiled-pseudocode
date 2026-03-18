/*
 * XREFs of ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x140088E4C
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401C6C88 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     PALLOCNOZ @ 0x1400254A4 (PALLOCNOZ.c)
 *     GreSuspendDirectDraw @ 0x140087130 (GreSuspendDirectDraw.c)
 */

HDEV *__fastcall DrvDisableDirectDrawForModeChange(struct _MDEV *a1, struct _MDEV *a2, HDEV *a3)
{
  unsigned int *v6; // rsi
  unsigned int v7; // ecx
  char *v8; // rax
  HDEV *v9; // rdx
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  __int64 v12; // rcx
  unsigned int v13; // r9d
  __int64 v14; // rcx
  __int64 v15; // rsi
  HDEV *v16; // rdi
  HDEV *result; // rax

  W32GetSessionState(a1);
  v6 = (unsigned int *)((char *)a2 + 20);
  v7 = *((_DWORD *)a2 + 5) + *((_DWORD *)a1 + 5) + 3;
  if ( v7 > 7 )
  {
    result = (HDEV *)PALLOCNOZ(8 * v7, 0x706D7447u);
    a3 = result;
    if ( !result )
      return result;
    v8 = (char *)a2 + 20;
  }
  else
  {
    v8 = (char *)a2 + 20;
  }
  v9 = a3 + 1;
  v10 = 0;
  if ( *(_QWORD *)a1 )
  {
    *v9 = *(HDEV *)a1;
    v10 = 1;
    v9 = a3 + 2;
    v6 = (unsigned int *)v8;
  }
  v11 = 0;
  if ( *((_DWORD *)a1 + 5) )
  {
    do
    {
      ++v10;
      v12 = 56LL * v11++;
      *v9++ = *(HDEV *)((char *)a1 + v12 + 40);
    }
    while ( v11 < *((_DWORD *)a1 + 5) );
    v6 = (unsigned int *)((char *)a2 + 20);
  }
  if ( *(_QWORD *)a2 )
  {
    *v9++ = *(HDEV *)a2;
    ++v10;
  }
  v13 = 0;
  if ( *((_DWORD *)a2 + 5) )
  {
    do
    {
      ++v10;
      v14 = 56LL * v13++;
      *v9++ = *(HDEV *)((char *)a2 + v14 + 40);
    }
    while ( v13 < *v6 );
  }
  v15 = v10;
  *a3 = (HDEV)v10;
  if ( v10 )
  {
    v16 = a3 + 1;
    do
    {
      GreSuspendDirectDraw(*v16++, 2);
      --v15;
    }
    while ( v15 );
  }
  return a3;
}
