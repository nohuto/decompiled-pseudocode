/*
 * XREFs of ?GreGetUFI@@YAHPEAUHDC__@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1C02757B0
 * Callers:
 *     NtGdiGetEmbUFI @ 0x1C02C25B0 (NtGdiGetEmbUFI.c)
 *     NtGdiGetUFI @ 0x1C02C2F90 (NtGdiGetUFI.c)
 * Callees:
 *     ComputeFileviewCheckSum @ 0x1C001A010 (ComputeFileviewCheckSum.c)
 *     ?bInPrivatePFT@PFFOBJ@@QEBAHXZ @ 0x1C0086A14 (-bInPrivatePFT@PFFOBJ@@QEBAHXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00C8860 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z @ 0x1C010D900 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     memmove @ 0x1C0140A40 (memmove.c)
 */

__int64 __fastcall GreGetUFI(HDC a1, _QWORD *a2, void *a3, _DWORD *a4, _DWORD *a5, __int64 a6, _QWORD *a7, int a8)
{
  _DWORD *v8; // rsi
  _QWORD *v10; // r12
  unsigned int v13; // r13d
  int v14; // eax
  __int64 v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rbx
  __int64 v19; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v21[32]; // [rsp+50h] [rbp-20h] BYREF

  v8 = (_DWORD *)a6;
  v10 = a7;
  *(_DWORD *)a6 = 0;
  if ( v10 )
    *v10 = 0LL;
  v13 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v20, a1);
  if ( v20[0] )
  {
    LODWORD(a7) = a8;
    v14 = *(unsigned __int16 *)(v20[0] + 12LL);
    a6 = 0LL;
    HIDWORD(a7) = v14;
    if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&a6, (struct XDCOBJ *)v20, 0, 2u, (const struct RFONTOBJ::Tag *)&a7) )
      GreAcquireSemaphore(*(_QWORD *)(a6 + 504));
    v15 = a6;
    if ( a6 )
    {
      *a2 = *(_QWORD *)(*(_QWORD *)(a6 + 120) + 84LL);
      v16 = *(__int64 **)(v15 + 120);
      if ( v16 )
      {
        v17 = *v16;
        v19 = v17;
        if ( v17 )
        {
          v13 = 1;
          if ( PFFOBJ::bInPrivatePFT((PFFOBJ *)&v19) )
          {
            *v8 |= 1u;
            if ( v10 )
              *v10 = *(unsigned int *)(*v16 + 140);
          }
          if ( (*(_DWORD *)(v17 + 52) & 0x10) != 0 )
            *v8 |= 4u;
          if ( *(_QWORD *)(v17 + 40) )
          {
            *v8 |= 2u;
            if ( a3 )
              memmove(a3, *(const void **)(v17 + 40), *(unsigned int *)(v17 + 48));
            if ( a4 )
              *a4 = *(_DWORD *)(v17 + 48);
            if ( a5 )
            {
              *a5 = *(_DWORD *)(v17 + 136);
              *a5 -= ComputeFileviewCheckSum(*(_DWORD **)(v17 + 40), *(_DWORD *)(v17 + 48));
            }
          }
          else
          {
            if ( a3 )
              memset(a3, 0, 0x48uLL);
            if ( a4 )
              *a4 = 0;
            if ( a5 )
              *a5 = 0;
          }
        }
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a6);
    if ( v20[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v20);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v21);
  return v13;
}
