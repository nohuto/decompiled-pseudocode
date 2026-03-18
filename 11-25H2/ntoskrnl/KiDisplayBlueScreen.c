/*
 * XREFs of KiDisplayBlueScreen @ 0x1405AFF14
 * Callers:
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A891C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A8BF0 (BgpFwAcquireLock.c)
 *     RtlStringCbPrintfExA @ 0x1405378D4 (RtlStringCbPrintfExA.c)
 *     InbvAcquireDisplayOwnership @ 0x14058BA20 (InbvAcquireDisplayOwnership.c)
 *     IoSaveBugCheckProgress @ 0x14058E6E0 (IoSaveBugCheckProgress.c)
 *     KeGetBugMessageText @ 0x1405AEF0C (KeGetBugMessageText.c)
 *     KiBugCheckConvertParameterValueToUnicodeString @ 0x1405AF254 (KiBugCheckConvertParameterValueToUnicodeString.c)
 *     KiDumpParameterImages @ 0x1405B02A8 (KiDumpParameterImages.c)
 *     KiHeadlessDisplayString @ 0x1405B0518 (KiHeadlessDisplayString.c)
 *     HeadlessDispatch @ 0x140647D90 (HeadlessDispatch.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14068F010 (BgpFwDisplayBugCheckScreen.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14068F360 (BgpFwDisplayBugCheckScreenModernized.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KiDisplayBlueScreen(int a1)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  unsigned __int64 *v4; // rdi
  __int64 v5; // rdx
  char *v6; // rcx
  char *v7; // rax
  unsigned __int16 v8; // cx
  char *v9; // rdx
  unsigned __int16 v10; // r8
  char *v11; // r9
  __int64 v12; // r10
  __int16 v13; // ax
  int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int16 *v17; // rsi
  unsigned __int16 *v18; // rbx
  char *v19; // rbx
  __int64 v20; // rsi
  char *v21; // rbx
  char v23; // [rsp+48h] [rbp-C0h] BYREF
  int v24; // [rsp+4Ch] [rbp-BCh] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+50h] [rbp-B8h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd_8[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v27; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int16 v28; // [rsp+78h] [rbp-90h]
  unsigned __int16 v29; // [rsp+7Ah] [rbp-8Eh]
  char *v30; // [rsp+80h] [rbp-88h]
  char v31; // [rsp+88h] [rbp-80h] BYREF
  char v32; // [rsp+90h] [rbp-78h] BYREF
  char pszDest[16]; // [rsp+C8h] [rbp-40h] BYREF
  char v34; // [rsp+D8h] [rbp-30h] BYREF
  char v35; // [rsp+178h] [rbp+70h] BYREF

  memset_0(&v27, 0, 0x60uLL);
  ppszDestEnd = 0LL;
  v24 = KiBugCheckData;
  v23 = 1;
  *(_OWORD *)ppszDestEnd_8 = 0LL;
  HeadlessDispatch(14LL, 0LL, 0LL);
  HeadlessDispatch(1LL, &v23, 1LL);
  v2 = 4LL;
  HeadlessDispatch(20LL, &v24, 4LL);
  IoSaveBugCheckProgress(129);
  v3 = *(_QWORD *)&KiBugCheckDriver;
  v4 = (unsigned __int64 *)&qword_140F46028;
  if ( *(_QWORD *)&KiBugCheckDriver || (KiDumpParameterImages(0LL), (v3 = *(_QWORD *)&KiBugCheckDriver) != 0) )
  {
    if ( *(_WORD *)v3 == 30 && !memcmp(*(const void **)(v3 + 8), L"VerifierExt.sys", 0x1EuLL) )
      LODWORD(v3) = 0;
  }
  v5 = 4LL;
  v30 = &v35;
  v6 = &v34;
  v29 = 256;
  v7 = &v31;
  do
  {
    *((_QWORD *)v7 + 1) = v6;
    v6 += 38;
    *(_DWORD *)v7 = 2490404;
    v7 += 16;
    --v5;
  }
  while ( v5 );
  if ( KeGetBugMessageText(KiBugCheckData, (__int64)ppszDestEnd_8) )
  {
    v9 = ppszDestEnd_8[1];
    v8 = (unsigned __int16)ppszDestEnd_8[0];
  }
  else
  {
    RtlStringCbPrintfExA(pszDest, 0xBuLL, &ppszDestEnd, 0LL, 0, "0x%08x", KiBugCheckData);
    v8 = (_WORD)ppszDestEnd - (unsigned __int16)pszDest;
    v9 = pszDest;
  }
  v10 = 0;
  if ( v8 >= (unsigned __int16)((v29 >> 1) - 1) )
    v8 = (v29 >> 1) - 1;
  if ( v8 )
  {
    v11 = v30;
    v10 = v8;
    v12 = v8;
    do
    {
      v13 = *v9++;
      *(_WORD *)v11 = v13;
      v11 += 2;
      --v12;
    }
    while ( v12 );
  }
  v28 = 2 * v10;
  *(_WORD *)&v30[2 * v10] = 0;
  InbvAcquireDisplayOwnership(v10);
  IoSaveBugCheckProgress(130);
  v14 = KiBugCheckData;
  v27 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_140EEFD90 & 2) != 0 )
  {
    if ( FeatureEnabledBsodRejuvenation )
      BgpFwDisplayBugCheckScreenModernized(v14, (unsigned int)&qword_140F46028, v3, (unsigned int)&v27, a1);
    else
      BgpFwDisplayBugCheckScreen(v14, (unsigned int)&qword_140F46028, v3, (unsigned int)&v27, a1);
  }
  BgpFwReleaseLock(v16, v15);
  IoSaveBugCheckProgress(128);
  v17 = (unsigned __int16 *)v27;
  if ( (_QWORD)v27 && (v18 = (unsigned __int16 *)*((_QWORD *)&v27 + 1)) != 0LL )
  {
    KiHeadlessDisplayString(L"\r\n", 6LL);
    KiHeadlessDisplayString(*((_QWORD *)v17 + 1), *v17);
    KiHeadlessDisplayString(L"\r\n", 6LL);
    KiHeadlessDisplayString(*((_QWORD *)v18 + 1), *v18);
  }
  else
  {
    v19 = &v31;
    v20 = 4LL;
    do
    {
      KiBugCheckConvertParameterValueToUnicodeString(*v4, (__int64)v19);
      v19 += 16;
      ++v4;
      --v20;
    }
    while ( v20 );
  }
  KiHeadlessDisplayString(L"\r\n", 6LL);
  KiHeadlessDisplayString(v30, v28);
  if ( *(_QWORD *)&KiBugCheckDriver )
  {
    KiHeadlessDisplayString(L"\r\n", 6LL);
    KiHeadlessDisplayString(
      *(_QWORD *)(*(_QWORD *)&KiBugCheckDriver + 8LL),
      (unsigned __int16)**(_WORD **)&KiBugCheckDriver);
  }
  KiHeadlessDisplayString(L"\r\n", 6LL);
  KiHeadlessDisplayString(L"\r\n", 6LL);
  v21 = &v32;
  do
  {
    KiHeadlessDisplayString(*(_QWORD *)v21, *((unsigned __int16 *)v21 - 4));
    KiHeadlessDisplayString(L"\r\n", 6LL);
    v21 += 16;
    --v2;
  }
  while ( v2 );
  return KiHeadlessDisplayString(L"\r\n", 6LL);
}
