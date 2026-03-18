/*
 * XREFs of ?GetPresentStatisticsDWM@CDummyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1802C6C90
 * Callers:
 *     ?GetPresentStatistics@CDummyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x1802C6BF0 (-GetPresentStatistics@CDummyRemotingSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z.c)
 * Callees:
 *     ?CheckPresentCompleted@CPresentStats@CDummyRemotingSwapChain@@QEAA_NPEAVCD3DDevice@@I@Z @ 0x1802C6850 (-CheckPresentCompleted@CPresentStats@CDummyRemotingSwapChain@@QEAA_NPEAVCD3DDevice@@I@Z.c)
 *     ?GetKernelDeviceHandle@CD3DDevice@@QEBAIXZ @ 0x1802C6B4C (-GetKernelDeviceHandle@CD3DDevice@@QEBAIXZ.c)
 */

__int64 __fastcall CDummyRemotingSwapChain::GetPresentStatisticsDWM(
        CDummyRemotingSwapChain *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  unsigned int v2; // ebx
  unsigned int *v3; // r14
  unsigned int v4; // r13d
  CDummyRemotingSwapChain::CPresentStats *v5; // r15
  unsigned int v6; // r12d
  unsigned int i; // ebp
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r9d
  __int64 v13; // r8
  __int128 v14; // rax
  __int64 v15; // rcx
  _DWORD v17[2]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v18; // [rsp+28h] [rbp-60h]
  __int128 v19; // [rsp+38h] [rbp-50h]
  __int128 v20; // [rsp+48h] [rbp-40h]

  v2 = 0;
  v3 = (unsigned int *)((char *)this + 112);
  v4 = 0;
  v5 = (CDummyRemotingSwapChain *)((char *)this + 104);
  v6 = 0;
  for ( i = 0; i < 2; ++i )
  {
    if ( CDummyRemotingSwapChain::CPresentStats::CheckPresentCompleted(
           v5,
           *((struct CD3DDevice **)this + 6),
           *((_DWORD *)this + 22))
      && *v3 >= v4 )
    {
      v4 = *v3;
      v6 = i;
    }
    v5 = (CDummyRemotingSwapChain::CPresentStats *)((char *)v5 + 96);
    v3 += 24;
  }
  if ( *((_BYTE *)this + 96 * v6 + 192) )
  {
    *(_OWORD *)a2 = *((_OWORD *)this + 6 * v6 + 7);
    *((_OWORD *)a2 + 1) = *((_OWORD *)this + 6 * v6 + 8);
    *((_OWORD *)a2 + 2) = *((_OWORD *)this + 6 * v6 + 9);
    *((_OWORD *)a2 + 3) = *((_OWORD *)this + 6 * v6 + 10);
    *((_OWORD *)a2 + 4) = *((_OWORD *)this + 6 * v6 + 11);
    v17[0] = CD3DDevice::GetKernelDeviceHandle(*((CD3DDevice **)this + 6));
    v10 = *((_DWORD *)this + 22);
    v18 = 0LL;
    LODWORD(v18) = v10;
    v17[1] = 4;
    v19 = 0LL;
    v20 = 0LL;
    if ( (unsigned int)D3DKMTGetDeviceState(v17) )
    {
      return (unsigned int)-2003304442;
    }
    else
    {
      v11 = v20;
      v12 = DWORD2(v19);
      *((_QWORD *)a2 + 3) = v20;
      *((_DWORD *)a2 + 4) = v12;
      v13 = *((unsigned int *)this + 23);
      v14 = g_qpcFrequency.QuadPart * *((unsigned int *)this + 24);
      *((_QWORD *)a2 + 5) = v11;
      *((_DWORD *)a2 + 12) = *((_DWORD *)a2 + 1);
      v15 = *((_QWORD *)a2 + 1);
      *((_QWORD *)a2 + 8) = v14 / v13;
      *((_DWORD *)a2 + 8) = 0;
      *((_DWORD *)a2 + 9) = v12;
      *((_QWORD *)a2 + 7) = v15;
      *((_DWORD *)a2 + 18) = 1;
    }
  }
  else
  {
    return (unsigned int)-2003304309;
  }
  return v2;
}
