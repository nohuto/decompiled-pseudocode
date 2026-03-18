/*
 * XREFs of VidSchiCreateNativeFenceLog @ 0x140032FB8
 * Callers:
 *     VidSchCreateHwQueue @ 0x140031B80 (VidSchCreateHwQueue.c)
 * Callees:
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4VIDMM_SCH_LOG_TYPE@@@Z @ 0x140033230 (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_KPEAVVIDMM_PROCESS@@W4V.c)
 *     ??_GVIDMM_SCH_LOG@@AEAAPEAXI@Z @ 0x14004BDDC (--_GVIDMM_SCH_LOG@@AEAAPEAXI@Z.c)
 *     ?DdiSetNativeFenceLogBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETNATIVEFENCELOGBUFFER@@@Z @ 0x14004BF3C (-DdiSetNativeFenceLogBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_SETNATIVEFENCELOGBUFFER@@@Z.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     memset @ 0x140056780 (memset.c)
 */

__int64 __fastcall VidSchiCreateNativeFenceLog(_QWORD *a1)
{
  __int64 v1; // rax
  VIDMM_SCH_LOG *v2; // rsi
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // edx
  int v12; // r14d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rsi
  ADAPTER_RENDER *v19; // rcx
  ADAPTER_RENDER *v20; // rcx
  __int64 result; // rax
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  VIDMM_SCH_LOG *v24; // [rsp+50h] [rbp-B0h] BYREF
  VIDMM_SCH_LOG *v25; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v28[10]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v29[10]; // [rsp+C0h] [rbp-40h] BYREF

  v1 = a1[5];
  v2 = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  v26 = 0LL;
  v4 = *(_QWORD *)(v1 + 16);
  v5 = *(_QWORD *)(v1 + 8);
  v24 = 0LL;
  v6 = *(_QWORD *)(v4 + 24);
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 8LL) + 64LL);
  if ( v7 )
    v8 = *(_QWORD *)(v7 + 8);
  else
    v8 = 0LL;
  v9 = *(unsigned __int16 *)(v4 + 4);
  v10 = *(_QWORD *)(v6 + 688);
  if ( (unsigned int)v9 < *(_DWORD *)(v6 + 760) )
    v10 += 8 * v9;
  v12 = VIDMM_SCH_LOG::CreateSchLog(
          *(_QWORD *)(*(_QWORD *)(v6 + 8) + 768LL),
          *(unsigned __int16 *)(*(_QWORD *)v10 + 6LL),
          3112LL,
          &v25,
          &v22,
          &v26,
          v8,
          1);
  if ( v12 >= 0 )
  {
    v13 = v22;
    v23 = 0LL;
    v27 = 0LL;
    *(_QWORD *)(v22 + 16) = 64LL;
    *(_DWORD *)(v13 + 8) = 1;
    v14 = *(unsigned __int16 *)(v4 + 4);
    v15 = *(_QWORD *)(v6 + 688);
    if ( (unsigned int)v14 < *(_DWORD *)(v6 + 760) )
      v15 += 8 * v14;
    v12 = VIDMM_SCH_LOG::CreateSchLog(
            *(_QWORD *)(*(_QWORD *)(v6 + 8) + 768LL),
            *(unsigned __int16 *)(*(_QWORD *)v15 + 6LL),
            3112LL,
            &v24,
            &v23,
            &v27,
            0LL,
            0);
    if ( v12 >= 0 )
    {
      v16 = v23;
      *(_QWORD *)(v23 + 16) = 64LL;
      *(_DWORD *)(v16 + 8) = 2;
      v17 = v22;
      v18 = v23;
      if ( g_NativeFenceDebugTest )
        goto LABEL_13;
      memset(v28, 0, sizeof(v28));
      v19 = *(ADAPTER_RENDER **)(v6 + 8);
      v28[0] = a1[14];
      v28[3] = v26;
      LODWORD(v28[1]) = 64;
      v28[2] = v22;
      v12 = ADAPTER_RENDER::DdiSetNativeFenceLogBuffer(v19, (struct _DXGKARG_SETNATIVEFENCELOGBUFFER *)v28);
      if ( v12 >= 0 )
      {
        memset(v29, 0, sizeof(v29));
        v20 = *(ADAPTER_RENDER **)(v6 + 8);
        v29[0] = a1[14];
        v29[3] = v27;
        LODWORD(v29[1]) = 64;
        v29[2] = v18;
        v12 = ADAPTER_RENDER::DdiSetNativeFenceLogBuffer(v20, (struct _DXGKARG_SETNATIVEFENCELOGBUFFER *)v29);
        if ( v12 >= 0 )
        {
LABEL_13:
          a1[35] = v25;
          a1[38] = v24;
          result = 0LL;
          a1[36] = v17;
          a1[39] = v18;
          return result;
        }
      }
    }
    v2 = v24;
  }
  if ( v25 )
    VIDMM_SCH_LOG::`scalar deleting destructor'(v25, v11);
  if ( v2 )
    VIDMM_SCH_LOG::`scalar deleting destructor'(v2, v11);
  return (unsigned int)v12;
}
