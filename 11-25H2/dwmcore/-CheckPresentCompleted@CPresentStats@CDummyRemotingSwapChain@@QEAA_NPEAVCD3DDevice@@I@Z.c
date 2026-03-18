/*
 * XREFs of ?CheckPresentCompleted@CPresentStats@CDummyRemotingSwapChain@@QEAA_NPEAVCD3DDevice@@I@Z @ 0x1802CFAD0
 * Callers:
 *     ?GetPresentStatisticsDWM@CDummyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1802CFF10 (-GetPresentStatisticsDWM@CDummyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ?GetKernelDeviceHandle@CD3DDevice@@QEBAIXZ @ 0x1802CFDCC (-GetKernelDeviceHandle@CD3DDevice@@QEBAIXZ.c)
 */

bool __fastcall CDummyRemotingSwapChain::CPresentStats::CheckPresentCompleted(
        CDummyRemotingSwapChain::CPresentStats *this,
        struct CD3DDevice *a2,
        int a3)
{
  int v6; // ecx
  __int64 v7; // rax
  _DWORD v9[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+28h] [rbp-40h]
  __int128 v11; // [rsp+38h] [rbp-30h]
  __int128 v12; // [rsp+48h] [rbp-20h]

  if ( !*((_BYTE *)this + 89) && !WaitForSingleObject(*(HANDLE *)this, 0) )
  {
    *((_BYTE *)this + 89) = 1;
    v9[0] = CD3DDevice::GetKernelDeviceHandle(a2);
    v10 = 0LL;
    LODWORD(v10) = a3;
    v9[1] = 4;
    v11 = 0LL;
    v12 = 0LL;
    if ( (unsigned int)D3DKMTGetDeviceState(v9) )
    {
      memset_0((char *)this + 8, 0, 0x50uLL);
      *((_BYTE *)this + 88) = 0;
    }
    else
    {
      v6 = DWORD2(v11);
      v7 = v12;
      *((_QWORD *)this + 2) = v12;
      *((_QWORD *)this + 4) = v7;
      *((_DWORD *)this + 3) = v6;
      *((_DWORD *)this + 6) = v6;
      *((_DWORD *)this + 11) = v6;
      *((_BYTE *)this + 88) = 1;
    }
  }
  return *((_BYTE *)this + 89);
}
