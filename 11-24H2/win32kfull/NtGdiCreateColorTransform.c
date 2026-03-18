/*
 * XREFs of NtGdiCreateColorTransform @ 0x14033BB30
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline @ 0x140325560 (Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GrepCreateColorTransform@@YAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x14033B214 (-GrepCreateColorTransform@@YAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

struct HOBJ__ *__fastcall NtGdiCreateColorTransform(
        HDC a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        PVOID Address,
        unsigned int a6,
        PVOID a7,
        unsigned int a8)
{
  unsigned __int64 v8; // r13
  unsigned int v11; // r12d
  tagLOGCOLORSPACEW *v12; // rcx
  __int64 v13; // rax
  HANDLE v14; // rax
  HANDLE v15; // rax
  HANDLE v16; // rax
  struct HOBJ__ *v17; // rsi
  int v19; // [rsp+40h] [rbp-378h]
  HANDLE SecureHandle; // [rsp+48h] [rbp-370h]
  HANDLE v21; // [rsp+50h] [rbp-368h]
  HANDLE v22; // [rsp+58h] [rbp-360h]
  void *v23; // [rsp+80h] [rbp-338h]
  void *v24; // [rsp+88h] [rbp-330h]
  void *v25; // [rsp+90h] [rbp-328h]
  _QWORD v27[14]; // [rsp+B0h] [rbp-308h] BYREF
  tagLOGCOLORSPACEW v28; // [rsp+120h] [rbp-298h] BYREF

  v8 = a4;
  v11 = a8;
  memset_0(&v28, 0, sizeof(v28));
  SecureHandle = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v19 = 0;
  if ( !a2 )
    return 0LL;
  if ( (a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v12 = &v28;
  v13 = 4LL;
  do
  {
    *(_OWORD *)&v12->lcsSignature = *(_OWORD *)a2;
    *(_OWORD *)&v12->lcsIntent = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&v12->lcsEndpoints.ciexyzGreen.ciexyzX = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&v12->lcsEndpoints.ciexyzBlue.ciexyzY = *(_OWORD *)(a2 + 48);
    *(_OWORD *)&v12->lcsGammaBlue = *(_OWORD *)(a2 + 64);
    *(_OWORD *)&v12->lcsFilename[6] = *(_OWORD *)(a2 + 80);
    *(_OWORD *)&v12->lcsFilename[14] = *(_OWORD *)(a2 + 96);
    v12 = (tagLOGCOLORSPACEW *)((char *)v12 + 128);
    *(_OWORD *)&v12[-1].lcsFilename[252] = *(_OWORD *)(a2 + 112);
    a2 += 128LL;
    --v13;
  }
  while ( v13 );
  *(_OWORD *)&v12->lcsSignature = *(_OWORD *)a2;
  *(_OWORD *)&v12->lcsIntent = *(_OWORD *)(a2 + 16);
  *(_OWORD *)&v12->lcsEndpoints.ciexyzGreen.ciexyzX = *(_OWORD *)(a2 + 32);
  *(_OWORD *)&v12->lcsEndpoints.ciexyzBlue.ciexyzY = *(_OWORD *)(a2 + 48);
  *(_QWORD *)&v12->lcsGammaBlue = *(_QWORD *)(a2 + 64);
  *(_DWORD *)&v12->lcsFilename[2] = *(_DWORD *)(a2 + 72);
  if ( a3 && (_DWORD)v8 )
  {
    if ( (unsigned int)Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline() )
      v14 = GrepSecureVirtualMemory(a3, v8, 2u);
    else
      v14 = MmSecureVirtualMemory(a3, v8, 2u);
    SecureHandle = v14;
    v11 = a8;
    if ( v14 )
      v25 = a3;
    else
      v19 = 1;
  }
  if ( Address && a6 )
  {
    if ( (unsigned int)Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline() )
      v15 = GrepSecureVirtualMemory(Address, a6, 2u);
    else
      v15 = MmSecureVirtualMemory(Address, a6, 2u);
    v21 = v15;
    if ( v15 )
      v24 = Address;
    else
      v19 = 1;
  }
  if ( a7 && v11 )
  {
    if ( (unsigned int)Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline() )
      v16 = GrepSecureVirtualMemory(a7, v11, 2u);
    else
      v16 = MmSecureVirtualMemory(a7, v11, 2u);
    v22 = v16;
    if ( v16 )
      v23 = a7;
    else
      v19 = 1;
  }
  v17 = 0LL;
  if ( !v19 )
  {
    APIDCOBJ::APIDCOBJ((APIDCOBJ *)v27, a1);
    if ( v27[0] )
      v17 = GrepCreateColorTransform((struct XDCOBJ *)v27, &v28, v25, v8, v24, a6, v23, v11);
    else
      EngSetLastError(0x57u);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v27);
  }
  if ( SecureHandle )
  {
    if ( (unsigned int)Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline() )
      GrepUnsecureVirtualMemory(SecureHandle);
    else
      MmUnsecureVirtualMemory(SecureHandle);
  }
  if ( v21 )
  {
    if ( (unsigned int)Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline() )
      GrepUnsecureVirtualMemory(v21);
    else
      MmUnsecureVirtualMemory(v21);
  }
  if ( v22 )
  {
    if ( (unsigned int)Feature_Servicing_GdiMsrc99105__private_IsEnabledDeviceUsageNoInline() )
      GrepUnsecureVirtualMemory(v22);
    else
      MmUnsecureVirtualMemory(v22);
  }
  return v17;
}
