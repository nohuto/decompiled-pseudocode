/*
 * XREFs of ?_VerifyTHQBlob@@YAHGGPEAE0@Z @ 0x1400A5DAC
 * Callers:
 *     ?CoreSignatureVerify@@YAHGGPEAEPEAK@Z @ 0x1400A67A4 (-CoreSignatureVerify@@YAHGGPEAEPEAK@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z @ 0x1400A6144 (-_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

__int64 __fastcall _VerifyTHQBlob(__int16 a1, __int16 a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  unsigned int v4; // r14d
  __int64 v7; // rcx
  NTSTATUS v8; // esi
  __int64 v9; // rcx
  NTSTATUS v10; // esi
  __int64 v11; // rcx
  NTSTATUS v12; // esi
  bool v14; // bl
  bool v15; // di
  int v16; // edx
  int v17; // r8d
  __int64 v18; // r9
  bool v19; // bl
  bool v20; // di
  __int64 UserSessionState; // rax
  int v22; // r8d
  int v23; // edx
  __int16 dwFlags; // [rsp+30h] [rbp-40h]
  char v25; // [rsp+40h] [rbp-30h]
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+50h] [rbp-20h] BYREF
  BCRYPT_KEY_HANDLE phKey; // [rsp+58h] [rbp-18h] BYREF
  PUCHAR pbHash; // [rsp+60h] [rbp-10h] BYREF
  const WCHAR *pPaddingInfo; // [rsp+68h] [rbp-8h] BYREF
  __int16 v30; // [rsp+90h] [rbp+20h] BYREF
  __int16 v31; // [rsp+92h] [rbp+22h]
  ULONG cbHash; // [rsp+98h] [rbp+28h] BYREF

  phAlgorithm = 0LL;
  v4 = 0;
  phKey = 0LL;
  pbHash = 0LL;
  cbHash = 0;
  pPaddingInfo = 0LL;
  v30 = a2;
  v31 = a1;
  if ( (unsigned int)_HashTHQAText((PUCHAR)&v30, 4u, &pbHash, &cbHash) )
  {
    v8 = BCryptOpenAlgorithmProvider(&phAlgorithm, L"RSA", L"Microsoft Primitive Provider", 0);
    if ( v8 < 0 )
    {
      v14 = 0;
      if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
      {
        v7 = *((unsigned int *)WPP_GLOBAL_Control + 11);
        if ( (v7 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
          v14 = 1;
      }
      v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v25 = v8;
        v18 = *(_QWORD *)(W32GetUserSessionState(v7) + 19392);
        dwFlags = 27;
        goto LABEL_19;
      }
    }
    else
    {
      v10 = BCryptImportKeyPair(phAlgorithm, 0LL, L"RSAPUBLICBLOB", &phKey, a4, 0x11Bu, 0);
      if ( v10 < 0 )
      {
        v14 = 0;
        if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
        {
          v9 = *((unsigned int *)WPP_GLOBAL_Control + 11);
          if ( (v9 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
            v14 = 1;
        }
        v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v25 = v10;
          v18 = *(_QWORD *)(W32GetUserSessionState(v9) + 19392);
          dwFlags = 28;
          goto LABEL_19;
        }
      }
      else
      {
        pPaddingInfo = L"SHA256";
        v12 = BCryptVerifySignature(phKey, &pPaddingInfo, pbHash, cbHash, a3, 0x100u, 2u);
        if ( v12 >= 0 )
        {
          v4 = 1;
          goto LABEL_6;
        }
        v14 = 0;
        if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
        {
          v11 = *((unsigned int *)WPP_GLOBAL_Control + 11);
          if ( (v11 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u )
            v14 = 1;
        }
        v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v25 = v12;
          v18 = *(_QWORD *)(W32GetUserSessionState(v11) + 19392);
          dwFlags = 29;
LABEL_19:
          LOBYTE(v17) = v15;
          LOBYTE(v16) = v14;
          WPP_RECORDER_AND_TRACE_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v16,
            v17,
            v18,
            3,
            1,
            dwFlags,
            (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids,
            v25);
        }
      }
    }
  }
  else
  {
    v19 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v20 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v22) = v20;
      LOBYTE(v23) = v19;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v23,
        v22,
        *(_QWORD *)(UserSessionState + 19392),
        3,
        1,
        26,
        (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
    }
  }
LABEL_6:
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  if ( phKey )
    BCryptDestroyKey(phKey);
  if ( pbHash )
    GreDeleteFastMutex((char *)pbHash);
  return v4;
}
