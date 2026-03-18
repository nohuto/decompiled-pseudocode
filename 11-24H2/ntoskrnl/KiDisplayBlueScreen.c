/*
 * XREFs of KiDisplayBlueScreen @ 0x1405B38C0
 * Callers:
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1404A9ACC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A9CA4 (BgpFwAcquireLock.c)
 *     RtlStringCbPrintfExA @ 0x14053A084 (RtlStringCbPrintfExA.c)
 *     InbvAcquireDisplayOwnership @ 0x14058F200 (InbvAcquireDisplayOwnership.c)
 *     IoSaveBugCheckProgress @ 0x140591F10 (IoSaveBugCheckProgress.c)
 *     KeGetBugMessageText @ 0x1405B289C (KeGetBugMessageText.c)
 *     KiBugCheckConvertParameterValueToUnicodeString @ 0x1405B2BE4 (KiBugCheckConvertParameterValueToUnicodeString.c)
 *     KiDumpParameterImages @ 0x1405B3C54 (KiDumpParameterImages.c)
 *     KiHeadlessDisplayString @ 0x1405B3EC4 (KiHeadlessDisplayString.c)
 *     HeadlessDispatch @ 0x140653C90 (HeadlessDispatch.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14069A360 (BgpFwDisplayBugCheckScreen.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14069A6B0 (BgpFwDisplayBugCheckScreenModernized.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall KiDisplayBlueScreen(int a1)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  unsigned __int64 *v4; // rdi
  __int64 v5; // rdx
  char *v6; // rcx
  char *v7; // rax
  char *v8; // r9
  unsigned __int16 v9; // cx
  char *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r10
  __int16 v13; // ax
  __int64 v14; // rcx
  int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int16 *v18; // rsi
  unsigned __int16 *v19; // rbx
  char *v20; // rbx
  __int64 v21; // rsi
  char *v22; // rbx
  char v24; // [rsp+48h] [rbp-C0h] BYREF
  int v25; // [rsp+4Ch] [rbp-BCh] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+50h] [rbp-B8h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd_8[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v28; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int16 v29; // [rsp+78h] [rbp-90h]
  unsigned __int16 v30; // [rsp+7Ah] [rbp-8Eh]
  char *v31; // [rsp+80h] [rbp-88h]
  char v32; // [rsp+88h] [rbp-80h] BYREF
  char v33; // [rsp+90h] [rbp-78h] BYREF
  char pszDest[16]; // [rsp+C8h] [rbp-40h] BYREF
  char v35; // [rsp+D8h] [rbp-30h] BYREF
  char v36; // [rsp+178h] [rbp+70h] BYREF

  memset_0(&v28, 0, 0x60uLL);
  ppszDestEnd = 0LL;
  v25 = KiBugCheckData;
  v24 = 1;
  *(_OWORD *)ppszDestEnd_8 = 0LL;
  HeadlessDispatch(14LL, 0LL, 0LL);
  HeadlessDispatch(1LL, &v24, 1LL);
  v2 = 4LL;
  HeadlessDispatch(20LL, &v25, 4LL);
  IoSaveBugCheckProgress(129);
  v3 = *(_QWORD *)&KiBugCheckDriver;
  v4 = (unsigned __int64 *)&qword_140F22748;
  if ( *(_QWORD *)&KiBugCheckDriver || (KiDumpParameterImages(0LL), (v3 = *(_QWORD *)&KiBugCheckDriver) != 0) )
  {
    if ( *(_WORD *)v3 == 30 && !memcmp(*(const void **)(v3 + 8), L"VerifierExt.sys", 0x1EuLL) )
      LODWORD(v3) = 0;
  }
  v5 = 4LL;
  v31 = &v36;
  v6 = &v35;
  v30 = 256;
  v7 = &v32;
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
    v10 = ppszDestEnd_8[1];
    v9 = (unsigned __int16)ppszDestEnd_8[0];
  }
  else
  {
    RtlStringCbPrintfExA(pszDest, 0xBuLL, &ppszDestEnd, 0LL, 0, "0x%08x", KiBugCheckData);
    v9 = (_WORD)ppszDestEnd - (unsigned __int16)pszDest;
    v10 = pszDest;
  }
  v11 = 0LL;
  if ( v9 >= (unsigned __int16)((v30 >> 1) - 1) )
    v9 = (v30 >> 1) - 1;
  if ( v9 )
  {
    v8 = v31;
    v11 = v9;
    v12 = v9;
    do
    {
      v13 = *v10++;
      *(_WORD *)v8 = v13;
      v8 += 2;
      --v12;
    }
    while ( v12 );
  }
  v14 = (unsigned __int16)v11;
  LOWORD(v11) = 2 * v11;
  v29 = v11;
  *(_WORD *)&v31[2 * v14] = 0;
  InbvAcquireDisplayOwnership(v14, (__int64)v10, v11, (__int64)v8);
  IoSaveBugCheckProgress(130);
  v15 = KiBugCheckData;
  v28 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_140EF0050 & 2) != 0 )
  {
    if ( FeatureEnabledBsodRejuvenation )
      BgpFwDisplayBugCheckScreenModernized(v15, (unsigned int)&qword_140F22748, v3, (unsigned int)&v28, a1);
    else
      BgpFwDisplayBugCheckScreen(v15, (unsigned int)&qword_140F22748, v3, (unsigned int)&v28, a1);
  }
  BgpFwReleaseLock(v17, v16);
  IoSaveBugCheckProgress(128);
  v18 = (unsigned __int16 *)v28;
  if ( (_QWORD)v28 && (v19 = (unsigned __int16 *)*((_QWORD *)&v28 + 1)) != 0LL )
  {
    KiHeadlessDisplayString(L"\r\n", 6LL);
    KiHeadlessDisplayString(*((_QWORD *)v18 + 1), *v18);
    KiHeadlessDisplayString(L"\r\n", 6LL);
    KiHeadlessDisplayString(*((_QWORD *)v19 + 1), *v19);
  }
  else
  {
    v20 = &v32;
    v21 = 4LL;
    do
    {
      KiBugCheckConvertParameterValueToUnicodeString(*v4, (__int64)v20);
      v20 += 16;
      ++v4;
      --v21;
    }
    while ( v21 );
  }
  KiHeadlessDisplayString(L"\r\n", 6LL);
  KiHeadlessDisplayString(v31, v29);
  if ( *(_QWORD *)&KiBugCheckDriver )
  {
    KiHeadlessDisplayString(L"\r\n", 6LL);
    KiHeadlessDisplayString(
      *(_QWORD *)(*(_QWORD *)&KiBugCheckDriver + 8LL),
      (unsigned __int16)**(_WORD **)&KiBugCheckDriver);
  }
  KiHeadlessDisplayString(L"\r\n", 6LL);
  KiHeadlessDisplayString(L"\r\n", 6LL);
  v22 = &v33;
  do
  {
    KiHeadlessDisplayString(*(_QWORD *)v22, *((unsigned __int16 *)v22 - 4));
    KiHeadlessDisplayString(L"\r\n", 6LL);
    v22 += 16;
    --v2;
  }
  while ( v2 );
  return KiHeadlessDisplayString(L"\r\n", 6LL);
}
