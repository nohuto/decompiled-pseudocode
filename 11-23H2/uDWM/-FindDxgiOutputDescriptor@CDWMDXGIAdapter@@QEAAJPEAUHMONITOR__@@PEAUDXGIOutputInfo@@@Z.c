/*
 * XREFs of ?FindDxgiOutputDescriptor@CDWMDXGIAdapter@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z @ 0x1800BF828
 * Callers:
 *     ?FindDxgiOutputDescriptor@CDWMDXGIEnumeration@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z @ 0x1800B4380 (-FindDxgiOutputDescriptor@CDWMDXGIEnumeration@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDWMDXGIAdapter::FindDxgiOutputDescriptor(
        CDWMDXGIAdapter *this,
        HMONITOR a2,
        struct DXGIOutputInfo *a3)
{
  unsigned int v3; // r11d
  unsigned int v4; // r9d
  unsigned int v5; // r10d
  __int64 v6; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm1

  v3 = *((_DWORD *)this + 94);
  v4 = 0;
  v5 = -2147024809;
  if ( v3 )
  {
    while ( 1 )
    {
      v6 = *((_QWORD *)this + 44) + 304LL * v4;
      if ( *(HMONITOR *)(v6 + 104) == a2 )
        break;
      if ( ++v4 >= v3 )
        return v5;
    }
    v7 = 2LL;
    do
    {
      *(_OWORD *)a3 = *(_OWORD *)v6;
      *((_OWORD *)a3 + 1) = *(_OWORD *)(v6 + 16);
      *((_OWORD *)a3 + 2) = *(_OWORD *)(v6 + 32);
      *((_OWORD *)a3 + 3) = *(_OWORD *)(v6 + 48);
      *((_OWORD *)a3 + 4) = *(_OWORD *)(v6 + 64);
      *((_OWORD *)a3 + 5) = *(_OWORD *)(v6 + 80);
      *((_OWORD *)a3 + 6) = *(_OWORD *)(v6 + 96);
      a3 = (struct DXGIOutputInfo *)((char *)a3 + 128);
      v8 = *(_OWORD *)(v6 + 112);
      v6 += 128LL;
      *((_OWORD *)a3 - 1) = v8;
      --v7;
    }
    while ( v7 );
    v5 = 0;
    *(_OWORD *)a3 = *(_OWORD *)v6;
    *((_OWORD *)a3 + 1) = *(_OWORD *)(v6 + 16);
    *((_OWORD *)a3 + 2) = *(_OWORD *)(v6 + 32);
  }
  return v5;
}
