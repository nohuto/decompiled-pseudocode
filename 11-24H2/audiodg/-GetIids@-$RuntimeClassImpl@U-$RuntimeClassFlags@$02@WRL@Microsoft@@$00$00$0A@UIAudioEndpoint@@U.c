/*
 * XREFs of ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndpoint@@UIAudioEndpointRT@@UIAudioOutputEndpointRT@@UIBridgeSourceEndpointControl@@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x140067670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEndpoint,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x60uLL);
  if ( v6 )
  {
    *v6 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    v6[1] = GUID_30a99515_1527_4451_af9f_00c5f0234daf;
    v6[2] = GUID_00000038_0000_0000_c000_000000000046;
    v6[3] = GUID_dfd2005f_a6e5_4d39_a265_939ada9fbb4d;
    v6[4] = GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa;
    v6[5] = GUID_ed9309d0_76d3_430a_a5b4_6ee21020fca5;
    *a2 = 6;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
