/*
 * XREFs of ?_HashTHQAText@@YAHPEAEKPEAPEAEPEAK@Z @ 0x1400A6144
 * Callers:
 *     ?_VerifyTHQBlob@@YAHGGPEAE0@Z @ 0x1400A5DAC (-_VerifyTHQBlob@@YAHGGPEAE0@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

__int64 __fastcall _HashTHQAText(PUCHAR pbInput, __int64 a2, unsigned __int8 **a3, unsigned int *a4)
{
  UCHAR *v7; // r14
  unsigned int v8; // r12d
  NTSTATUS v9; // esi
  NTSTATUS Property; // esi
  __int64 v11; // rcx
  __int64 v12; // rcx
  NTSTATUS v13; // esi
  unsigned __int8 *v14; // rax
  __int64 v15; // rcx
  NTSTATUS v16; // esi
  __int64 v17; // rcx
  NTSTATUS v18; // esi
  __int64 v19; // rcx
  NTSTATUS v20; // esi
  char v22; // bl
  bool v23; // di
  int v24; // edx
  int v25; // r8d
  __int64 v26; // r9
  char v27; // bl
  bool v28; // di
  int v29; // edx
  int v30; // r8d
  __int64 v31; // r9
  __int16 v32; // [rsp+30h] [rbp-30h]
  __int16 v33; // [rsp+30h] [rbp-30h]
  char v34; // [rsp+40h] [rbp-20h]
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+50h] [rbp-10h] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+58h] [rbp-8h] BYREF
  ULONG v37; // [rsp+A8h] [rbp+48h] BYREF
  ULONG pbOutput; // [rsp+B0h] [rbp+50h] BYREF
  ULONG pcbResult; // [rsp+B8h] [rbp+58h] BYREF

  *a3 = 0LL;
  *a4 = 0;
  pcbResult = 0;
  v37 = 0;
  pbOutput = 0;
  phAlgorithm = 0LL;
  v7 = 0LL;
  phHash = 0LL;
  v8 = 0;
  v9 = BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA256", 0LL, 0);
  if ( v9 >= 0 )
  {
    Property = BCryptGetProperty(phAlgorithm, L"ObjectLength", (PUCHAR)&pbOutput, 4u, &pcbResult, 0);
    if ( Property < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v22 = 0;
      }
      v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v34 = Property;
        v26 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
        v32 = 19;
        goto LABEL_27;
      }
      goto LABEL_10;
    }
    v7 = (UCHAR *)Win32AllocPoolZInitImpl(256LL, pbOutput, 0x63707355u);
    if ( v7 )
    {
      v13 = BCryptGetProperty(phAlgorithm, L"HashDigestLength", (PUCHAR)&v37, 4u, &pcbResult, 0);
      if ( v13 < 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (v12 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v12 & 1) == 0)
          || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v22 = 0;
        }
        v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v34 = v13;
          v26 = *(_QWORD *)(W32GetUserSessionState(v12) + 19392);
          v32 = 21;
          goto LABEL_27;
        }
        goto LABEL_10;
      }
      v14 = (unsigned __int8 *)Win32AllocPoolZInitImpl(256LL, v37, 0x63707355u);
      *a3 = v14;
      if ( v14 )
      {
        v16 = BCryptCreateHash(phAlgorithm, &phHash, v7, pbOutput, 0LL, 0, 0);
        if ( v16 < 0 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (v15 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v15 & 1) == 0)
            || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v22 = 0;
          }
          v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v34 = v16;
            v26 = *(_QWORD *)(W32GetUserSessionState(v15) + 19392);
            v32 = 23;
            goto LABEL_27;
          }
        }
        else
        {
          v18 = BCryptHashData(phHash, pbInput, 4u, 0);
          if ( v18 < 0 )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (v17 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v17 & 1) == 0)
              || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
            {
              v22 = 0;
            }
            v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v34 = v18;
              v26 = *(_QWORD *)(W32GetUserSessionState(v17) + 19392);
              v32 = 24;
              goto LABEL_27;
            }
          }
          else
          {
            v20 = BCryptFinishHash(phHash, *a3, v37, 0);
            if ( v20 >= 0 )
            {
              v8 = 1;
              *a4 = v37;
              goto LABEL_10;
            }
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (v19 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v19 & 1) == 0)
              || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
            {
              v22 = 0;
            }
            v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v34 = v20;
              v26 = *(_QWORD *)(W32GetUserSessionState(v19) + 19392);
              v32 = 25;
              goto LABEL_27;
            }
          }
        }
        goto LABEL_10;
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v27 = 0;
      }
      v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v27 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_10;
      v31 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
      v33 = 22;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (v11 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v11 & 1) == 0)
        || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v27 = 0;
      }
      v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v27 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_10;
      v31 = *(_QWORD *)(W32GetUserSessionState(v11) + 19392);
      v33 = 20;
    }
    LOBYTE(v30) = v28;
    LOBYTE(v29) = v27;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v29,
      v30,
      v31,
      3,
      1,
      v33,
      (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
    goto LABEL_10;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
  {
    v22 = 0;
  }
  v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v34 = v9;
    v26 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control) + 19392);
    v32 = 18;
LABEL_27:
    LOBYTE(v25) = v23;
    LOBYTE(v24) = v22;
    WPP_RECORDER_AND_TRACE_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v24,
      v25,
      v26,
      3,
      1,
      v32,
      (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids,
      v34);
  }
LABEL_10:
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  if ( phHash )
    BCryptDestroyHash(phHash);
  if ( v7 )
    GreDeleteFastMutex((char *)v7);
  if ( !v8 && *a3 )
  {
    GreDeleteFastMutex((char *)*a3);
    *a3 = 0LL;
  }
  return v8;
}
