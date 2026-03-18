/*
 * XREFs of ?RtlStringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x140050B6C
 * Callers:
 *     ?GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z @ 0x1401C0378 (-GetBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAJPEAU_DXGK_DIAG_BLACK_SCREEN_PACKET2@@I@Z.c)
 *     ?Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z @ 0x1401C0A38 (-Initialize@DISPLAYSTATECHECKER@@QEAAJW4_D3DKMT_BLACK_SCREEN_DETECTION_TRIGGER@@HPEBDU_GUID@@@Z.c)
 *     ?Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z @ 0x1401C0B08 (-Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z.c)
 *     DpiAcpiPrepareDisplayMuxSupport @ 0x1402520FC (DpiAcpiPrepareDisplayMuxSupport.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyA(char *a1, __int64 a2, const char *a3)
{
  __int64 v3; // r9
  __int64 v4; // r8
  char v5; // al
  char *v6; // rax
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 3221225485LL;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v3 = 2147483646 - a2;
    v4 = a3 - a1;
    do
    {
      if ( !(v3 + a2) )
        break;
      v5 = a1[v4];
      if ( !v5 )
        break;
      *a1++ = v5;
      --a2;
    }
    while ( a2 );
    v6 = a1 - 1;
    if ( a2 )
      v6 = a1;
    *v6 = 0;
    return a2 == 0 ? 0x80000005 : 0;
  }
  return result;
}
