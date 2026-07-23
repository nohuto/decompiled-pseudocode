/*
 * XREFs of KiDisplayBlueScreen @ 0x1405B0834
 * Callers:
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     RtlStringCbPrintfExA @ 0x1405378C4 (RtlStringCbPrintfExA.c)
 *     InbvAcquireDisplayOwnership @ 0x14058C220 (InbvAcquireDisplayOwnership.c)
 *     IoSaveBugCheckProgress @ 0x14058EF30 (IoSaveBugCheckProgress.c)
 *     KeGetBugMessageText @ 0x1405AF80C (KeGetBugMessageText.c)
 *     KiBugCheckConvertParameterValueToUnicodeString @ 0x1405AFB58 (KiBugCheckConvertParameterValueToUnicodeString.c)
 *     KiDumpParameterImages @ 0x1405B0BC8 (KiDumpParameterImages.c)
 *     KiHeadlessDisplayString @ 0x1405B0E3C (KiHeadlessDisplayString.c)
 *     HeadlessDispatch @ 0x1406523F0 (HeadlessDispatch.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14069B3E0 (BgpFwDisplayBugCheckScreen.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14069B730 (BgpFwDisplayBugCheckScreenModernized.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int16 *v21; // rsi
  unsigned __int16 *v22; // rbx
  char *v23; // rbx
  __int64 v24; // rsi
  char *v25; // rbx
  char v27; // [rsp+48h] [rbp-C0h] BYREF
  int v28; // [rsp+4Ch] [rbp-BCh] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+50h] [rbp-B8h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd_8[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v31; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int16 v32; // [rsp+78h] [rbp-90h]
  unsigned __int16 v33; // [rsp+7Ah] [rbp-8Eh]
  char *v34; // [rsp+80h] [rbp-88h]
  char v35; // [rsp+88h] [rbp-80h] BYREF
  char v36; // [rsp+90h] [rbp-78h] BYREF
  char pszDest[16]; // [rsp+C8h] [rbp-40h] BYREF
  char v38; // [rsp+D8h] [rbp-30h] BYREF
  char v39; // [rsp+178h] [rbp+70h] BYREF

  memset_0(&v31, 0, 0x60uLL);
  ppszDestEnd = 0LL;
  v28 = KiBugCheckData;
  v27 = 1;
  *(_OWORD *)ppszDestEnd_8 = 0LL;
  HeadlessDispatch(14LL, 0LL, 0LL);
  HeadlessDispatch(1LL, &v27, 1LL);
  v2 = 4LL;
  HeadlessDispatch(20LL, &v28, 4LL);
  IoSaveBugCheckProgress(129);
  v3 = *(_QWORD *)&KiBugCheckDriver;
  v4 = (unsigned __int64 *)&qword_140F22A08;
  if ( *(_QWORD *)&KiBugCheckDriver || (KiDumpParameterImages(0LL), (v3 = *(_QWORD *)&KiBugCheckDriver) != 0) )
  {
    if ( *(_WORD *)v3 == 30 && !memcmp(*(const void **)(v3 + 8), L"VerifierExt.sys", 0x1EuLL) )
      LODWORD(v3) = 0;
  }
  v5 = 4LL;
  v34 = &v39;
  v6 = &v38;
  v33 = 256;
  v7 = &v35;
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
  if ( v8 >= (unsigned __int16)((v33 >> 1) - 1) )
    v8 = (v33 >> 1) - 1;
  if ( v8 )
  {
    v11 = v34;
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
  v32 = 2 * v10;
  *(_WORD *)&v34[2 * v10] = 0;
  InbvAcquireDisplayOwnership(v10, (__int64)v9);
  IoSaveBugCheckProgress(130);
  v14 = KiBugCheckData;
  v31 = 0LL;
  BgpFwAcquireLock(v16, v15, v17, v18);
  if ( (dword_140EF0270 & 2) != 0 )
  {
    if ( FeatureEnabledBsodRejuvenation )
      BgpFwDisplayBugCheckScreenModernized(v14, (unsigned int)&qword_140F22A08, v3, (unsigned int)&v31, a1);
    else
      BgpFwDisplayBugCheckScreen(v14, (unsigned int)&qword_140F22A08, v3, (unsigned int)&v31, a1);
  }
  BgpFwReleaseLock(v20, v19);
  IoSaveBugCheckProgress(128);
  v21 = (unsigned __int16 *)v31;
  if ( (_QWORD)v31 && (v22 = (unsigned __int16 *)*((_QWORD *)&v31 + 1)) != 0LL )
  {
    KiHeadlessDisplayString(L"\r\n", 6LL);
    KiHeadlessDisplayString(*((_QWORD *)v21 + 1), *v21);
    KiHeadlessDisplayString(L"\r\n", 6LL);
    KiHeadlessDisplayString(*((_QWORD *)v22 + 1), *v22);
  }
  else
  {
    v23 = &v35;
    v24 = 4LL;
    do
    {
      KiBugCheckConvertParameterValueToUnicodeString(*v4, (__int64)v23);
      v23 += 16;
      ++v4;
      --v24;
    }
    while ( v24 );
  }
  KiHeadlessDisplayString(L"\r\n", 6LL);
  KiHeadlessDisplayString(v34, v32);
  if ( *(_QWORD *)&KiBugCheckDriver )
  {
    KiHeadlessDisplayString(L"\r\n", 6LL);
    KiHeadlessDisplayString(
      *(_QWORD *)(*(_QWORD *)&KiBugCheckDriver + 8LL),
      (unsigned __int16)**(_WORD **)&KiBugCheckDriver);
  }
  KiHeadlessDisplayString(L"\r\n", 6LL);
  KiHeadlessDisplayString(L"\r\n", 6LL);
  v25 = &v36;
  do
  {
    KiHeadlessDisplayString(*(_QWORD *)v25, *((unsigned __int16 *)v25 - 4));
    KiHeadlessDisplayString(L"\r\n", 6LL);
    v25 += 16;
    --v2;
  }
  while ( v2 );
  return KiHeadlessDisplayString(L"\r\n", 6LL);
}
