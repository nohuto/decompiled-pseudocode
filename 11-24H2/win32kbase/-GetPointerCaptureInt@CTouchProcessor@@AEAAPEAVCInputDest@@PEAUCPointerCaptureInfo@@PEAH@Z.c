/*
 * XREFs of ?GetPointerCaptureInt@CTouchProcessor@@AEAAPEAVCInputDest@@PEAUCPointerCaptureInfo@@PEAH@Z @ 0x1400D25D8
 * Callers:
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1400D24E0 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1400D2568 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@QEAAX_KHPEAPEAXPEAH@Z @ 0x1400D26A0 (-GetPointerCapture@CTouchProcessor@@QEAAX_KHPEAPEAXPEAH@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140042D50 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x140205724 (-ReleasePointerCaptureInt@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z.c)
 */

struct CInputDest *__fastcall CTouchProcessor::GetPointerCaptureInt(
        CTouchProcessor *this,
        struct CPointerCaptureInfo *a2,
        int *a3)
{
  int v6; // r9d
  char v7; // al
  int v8; // r9d
  char v9; // al

  if ( !*((_DWORD *)a2 + 2) )
    goto LABEL_10;
  v6 = *((_DWORD *)a2 + 25);
  if ( v6 == 1 )
  {
    v7 = *(_BYTE *)(*((_QWORD *)a2 + 11) + 28LL);
  }
  else
  {
    if ( v6 != 2 )
      goto LABEL_6;
    v7 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 40LL) + 20LL);
  }
  if ( v7 < 0 )
    goto LABEL_15;
LABEL_6:
  v8 = v6 - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      v9 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 40LL) + 19LL);
      goto LABEL_9;
    }
LABEL_10:
    if ( a3 )
      *a3 = *((_DWORD *)a2 + 32);
    return (struct CInputDest *)(((unsigned __int64)a2 + 8) & -(__int64)(*((_DWORD *)a2 + 2) != 0));
  }
  v9 = *(_BYTE *)(*((_QWORD *)a2 + 11) + 27LL);
LABEL_9:
  if ( v9 >= 0 )
    goto LABEL_10;
LABEL_15:
  if ( IS_USERCRIT_OWNED_EXCLUSIVE() )
    CTouchProcessor::ReleasePointerCaptureInt(this, a2);
  if ( a3 )
    *a3 = 0;
  return 0LL;
}
