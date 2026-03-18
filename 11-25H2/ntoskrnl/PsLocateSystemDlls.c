/*
 * XREFs of PsLocateSystemDlls @ 0x140762170
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14025D590 (VslGetNestedPageProtectionFlags.c)
 *     ExVerifySuite @ 0x1404F4500 (ExVerifySuite.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     PspLocateSystemDll @ 0x1407624B0 (PspLocateSystemDll.c)
 *     PspMapSystemDll @ 0x14090B898 (PspMapSystemDll.c)
 */

__int64 PsLocateSystemDlls()
{
  _UNKNOWN ***v0; // rbx
  __int64 v1; // rsi
  int i; // edi
  __int64 v3; // r10
  int v4; // eax
  __int64 v5; // rdx
  int SystemDll; // eax

  if ( !ExVerifySuite(EmbeddedNT) || (PsEmbeddedNTMask & 1) == 0 )
  {
    v0 = PspSystemDlls;
    v1 = VslGetNestedPageProtectionFlags(0LL) & 4;
    for ( i = 0; i < 6; ++i )
    {
      v3 = (__int64)*v0;
      if ( *v0 )
      {
        v4 = *(_DWORD *)(v3 + 8);
        if ( (v4 & 0x20) != 0 )
        {
          v5 = (__int64)*v0;
          *(_QWORD *)(v3 + 56) = PspSystemDlls[0][7];
          if ( (int)PspMapSystemDll(KeGetCurrentThread()->ApcState.Process, v5, 0LL, 1LL) < 0 )
            *v0 = 0LL;
        }
        else
        {
          SystemDll = PspLocateSystemDll(*v0, (v4 & 0x10) != 0 ? (unsigned int)v1 : 0);
          if ( SystemDll < 0 && ((_DWORD)(*v0)[1] & 1) != 0 )
            KeBugCheckEx(0x6Bu, SystemDll, 2uLL, i, 0LL);
        }
      }
      ++v0;
    }
  }
  return 0LL;
}
