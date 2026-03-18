/*
 * XREFs of ?CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1403BC35C
 * Callers:
 *     DxgkCreateKeyedMutex @ 0x1401F5480 (DxgkCreateKeyedMutex.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1400422B4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1402B601C (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1403BC45C (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z.c)
 */

int __fastcall DXGGLOBAL::CreateAndOpenKeyedMutex(
        DXGGLOBAL *this,
        unsigned __int64 a2,
        struct DXGKEYEDMUTEX **a3,
        unsigned int *a4,
        char *a5,
        unsigned int a6,
        struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS a7)
{
  struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS::$B4DEDF83753B475B9B3E39D19D4C994E::$F17D45C1D425D8A66D6110C13C01F6AF v11; // r8d
  int result; // eax
  unsigned int *v13; // rdx
  DXGKEYEDMUTEX *v14; // rbx
  int v15; // edi
  struct DXGKEYEDMUTEX *v16; // [rsp+78h] [rbp+20h] BYREF

  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4992;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"phKeyedMutex != NULL", 4992LL, 0LL, 0LL, 0LL, 0LL);
  }
  v11 = a7.0;
  *a4 = 0;
  v16 = 0LL;
  result = DXGGLOBAL::CreateKeyedMutex(this, a2, (struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS)v11, 0, &v16);
  if ( result >= 0 )
  {
    v13 = a4;
    v14 = v16;
    result = DXGKEYEDMUTEX::Open(v16, v13, a5, a6, 1);
    v15 = result;
    if ( result < 0 )
    {
      DXGKEYEDMUTEX::ReleaseReference(v14);
      return v15;
    }
    else
    {
      *a3 = v14;
    }
  }
  return result;
}
