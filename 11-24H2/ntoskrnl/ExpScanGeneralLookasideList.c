/*
 * XREFs of ExpScanGeneralLookasideList @ 0x140404310
 * Callers:
 *     KeBalanceSetManager @ 0x1405C1BE0 (KeBalanceSetManager.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall ExpScanGeneralLookasideList(_QWORD *a1, KSPIN_LOCK *a2)
{
  KIRQL v4; // al
  _QWORD *v5; // r8
  KIRQL v6; // r11
  int v7; // edx
  unsigned int v8; // ecx
  int v9; // r9d
  int v10; // r10d
  int v11; // r10d
  unsigned int v12; // eax
  unsigned int v13; // edx

  v4 = KeAcquireSpinLockRaiseToDpc(a2);
  v5 = (_QWORD *)*a1;
  v6 = v4;
  if ( (_QWORD *)*a1 != a1 )
  {
    while ( 1 )
    {
      v7 = *((_DWORD *)v5 - 10) - *((_DWORD *)v5 + 5);
      *((_DWORD *)v5 + 5) = *((_DWORD *)v5 - 10);
      v8 = *((_DWORD *)v5 - 11) - *((_DWORD *)v5 + 4);
      v9 = *((unsigned __int16 *)v5 - 23);
      *((_DWORD *)v5 + 4) = *((_DWORD *)v5 - 11);
      if ( (_WORD)v9 != 0xFFFF )
        break;
LABEL_8:
      v5 = (_QWORD *)*v5;
      if ( v5 == a1 )
        goto LABEL_9;
    }
    v10 = *((unsigned __int16 *)v5 - 24);
    if ( v8 >= 0x4B )
    {
      v12 = 1000 * v7 / v8;
      if ( v12 >= 5 )
      {
        v13 = v12 * (v9 - v10) / 0x7D0 + 5;
        if ( v13 > 0x1E )
          v13 = 30;
        v11 = v13 + v10;
        if ( v11 > v9 )
          LOWORD(v11) = v9;
        goto LABEL_7;
      }
      v11 = v10 - 1;
    }
    else
    {
      v11 = v10 - 10;
    }
    if ( v11 < 4 )
      LOWORD(v11) = 4;
LABEL_7:
    *((_WORD *)v5 - 24) = v11;
    goto LABEL_8;
  }
LABEL_9:
  KeReleaseSpinLock(a2, v6);
}
