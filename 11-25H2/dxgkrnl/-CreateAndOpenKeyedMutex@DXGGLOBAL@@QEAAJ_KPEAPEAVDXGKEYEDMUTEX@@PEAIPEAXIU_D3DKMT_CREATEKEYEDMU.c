/*
 * XREFs of ?CreateAndOpenKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1403C7D0C
 * Callers:
 *     DxgkCreateKeyedMutex @ 0x1401EF230 (DxgkCreateKeyedMutex.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1400427F4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1402FF39C (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1403C7E0C (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::CreateAndOpenKeyedMutex(
        DXGGLOBAL *this,
        unsigned __int64 a2,
        struct DXGKEYEDMUTEX **a3,
        unsigned int *a4,
        char *a5,
        unsigned int a6,
        struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS a7)
{
  struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS::$B4DEDF83753B475B9B3E39D19D4C994E::$F17D45C1D425D8A66D6110C13C01F6AF v11; // r8d
  __int64 result; // rax
  unsigned int *v13; // rdx
  DXGKEYEDMUTEX *v14; // rbx
  unsigned int v15; // edi
  DXGKEYEDMUTEX *v16; // [rsp+78h] [rbp+20h] BYREF

  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4987;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"phKeyedMutex != NULL", 4987LL, 0LL, 0LL, 0LL, 0LL);
  }
  v11 = a7.0;
  *a4 = 0;
  v16 = 0LL;
  result = DXGGLOBAL::CreateKeyedMutex(this, a2, (struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS)v11, 0, &v16);
  if ( (int)result >= 0 )
  {
    v13 = a4;
    v14 = v16;
    result = DXGKEYEDMUTEX::Open(v16, v13, a5, a6, 1);
    v15 = result;
    if ( (int)result < 0 )
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
