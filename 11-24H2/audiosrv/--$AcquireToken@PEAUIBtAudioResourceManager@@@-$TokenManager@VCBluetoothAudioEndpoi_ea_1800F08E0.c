/*
 * XREFs of ??$AcquireToken@PEAUIBtAudioResourceManager@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@QEAAJAEBQEAUIBtAudioResourceManager@@W4TOKEN_ACQUIRE_OPTION@@PEAPEAUIUnknown@@@Z @ 0x1800F08E0
 * Callers:
 *     ?AcquireToken@CBluetoothAudioEndpointResourceManagerProvider@@UEAAJPEAUIBtAudioResourceManager@@W4TOKEN_ACQUIRE_OPTION@@PEAPEAUIUnknown@@@Z @ 0x1800F1CE0 (-AcquireToken@CBluetoothAudioEndpointResourceManagerProvider@@UEAAJPEAUIBtAudioResourceManager@@.c)
 * Callees:
 *     ??$AcquireToken@PEAUIBtAudioResourceManager@@@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@AEAAJAEBQEAUIBtAudioResourceManager@@_NPEAPEAUIUnknown@@PEA_N@Z @ 0x1800F047C (--$AcquireToken@PEAUIBtAudioResourceManager@@@-$TokenManager@VCBluetoothAudioEndpointResourceMan.c)
 *     ?FreeTokensForContext@CBluetoothAudioEndpointResourceManagerProvider@@QEAAXPEAUIBtAudioResourceManager@@AEBVTokenEnumerator@?$TokenManager@VCBluetoothAudioEndpointResourceManagerProvider@@@@@Z @ 0x1800F1F34 (-FreeTokensForContext@CBluetoothAudioEndpointResourceManagerProvider@@QEAAXPEAUIBtAudioResourceM.c)
 */

__int64 __fastcall TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::AcquireToken<IBtAudioResourceManager *>(
        PSRWLOCK SRWLock,
        __int64 *a2,
        int a3,
        _QWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  PVOID Ptr; // rcx
  char v11[8]; // [rsp+30h] [rbp-18h] BYREF
  PSRWLOCK v12; // [rsp+38h] [rbp-10h]
  char v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = 0;
  result = TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::AcquireToken<IBtAudioResourceManager *>(
             SRWLock,
             a2,
             a3 == 0,
             a4,
             &v13);
  if ( *a4 )
    return 0LL;
  if ( !v13 && a3 == 2 )
  {
    v9 = *a2;
    Ptr = SRWLock[5].Ptr;
    v11[0] = 1;
    v12 = SRWLock;
    CBluetoothAudioEndpointResourceManagerProvider::FreeTokensForContext(Ptr, v9, v11);
    return TokenManager<CBluetoothAudioEndpointResourceManagerProvider>::AcquireToken<IBtAudioResourceManager *>(
             SRWLock,
             a2,
             0,
             a4,
             &v13);
  }
  return result;
}
