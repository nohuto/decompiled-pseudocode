/*
 * XREFs of LpiEnumerateDependencies @ 0x14003CA24
 * Callers:
 *     LpiEnumerateDependencies @ 0x14003CA24 (LpiEnumerateDependencies.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x14003CE60 (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     GetDevExtFromIndex @ 0x1400066F0 (GetDevExtFromIndex.c)
 *     WPP_RECORDER_SF_S @ 0x140009708 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_Sd @ 0x140009EAC (WPP_RECORDER_SF_Sd.c)
 *     LpiEnumerateDependencies @ 0x14003CA24 (LpiEnumerateDependencies.c)
 */

__int64 __fastcall LpiEnumerateDependencies(
        _DWORD *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _DWORD *a7,
        unsigned int *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  int v11; // r9d
  unsigned int v12; // edi
  unsigned int v13; // r10d
  int v15; // r15d
  __int64 v16; // rbx
  _DWORD *v17; // r12
  __int64 v18; // r13
  __int64 v19; // rdx
  unsigned int v20; // ecx
  int v21; // r9d
  __int64 DevExtFromIndex; // r14
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // eax
  const wchar_t *v27; // rax
  unsigned __int16 v28; // r9
  const wchar_t *v29; // rax
  unsigned __int16 v30; // r9
  __int64 result; // rax
  __int64 i; // r14
  __int64 v33; // rcx
  __int64 v34; // r13
  __int64 v35; // r15
  __int64 v36; // r11
  unsigned int v37; // eax
  __int64 v38; // [rsp+38h] [rbp-61h]
  unsigned int v39; // [rsp+68h] [rbp-31h] BYREF
  int v40; // [rsp+6Ch] [rbp-2Dh]
  unsigned int v41; // [rsp+70h] [rbp-29h]
  int v42; // [rsp+74h] [rbp-25h]
  unsigned int v43; // [rsp+78h] [rbp-21h] BYREF
  unsigned int v44; // [rsp+7Ch] [rbp-1Dh] BYREF
  __int64 v45; // [rsp+80h] [rbp-19h]
  __int64 v46; // [rsp+88h] [rbp-11h]

  v44 = 0;
  v11 = 0;
  v43 = 0;
  v12 = 0;
  v39 = 0;
  v13 = a3;
  v15 = 0;
  v16 = a9;
  v17 = a1;
  v18 = 0LL;
  v40 = 0;
  v41 = 0;
  v19 = 5LL * a2;
  v45 = v19;
  while ( 1 )
  {
    if ( (unsigned int)v18 >= v17[2 * v19 + 9] )
    {
      v25 = a2;
      for ( i = 0LL; (unsigned int)i < *v17; i = (unsigned int)(i + 1) )
      {
        if ( (_DWORD)i != (_DWORD)v25 )
        {
          v33 = 5 * i;
          v46 = 5 * i;
          if ( v17[10 * i + 8] == (_DWORD)v25 )
          {
            v34 = *(_QWORD *)&v17[10 * i + 6];
            if ( v34 )
            {
              v24 = 0LL;
              v42 = v15 + 1;
              v35 = 0LL;
              v39 = 0;
              if ( !*(_DWORD *)(v34 + 16) )
                goto LABEL_54;
              v36 = a4;
              do
              {
                if ( *(_DWORD *)(v34 + 80 * v35 + 44) > v13 )
                {
                  if ( a11 )
                  {
                    KeOrAffinityEx2(a11, a5 + 320LL * (unsigned int)(v35 + *(_DWORD *)(v36 + 4 * i)) + 48, a11);
                    LODWORD(v24) = v39;
                    v13 = a3;
                    v36 = a4;
                  }
                  if ( a10 )
                  {
                    *(_BYTE *)(a10 + 4LL * (unsigned int)v24) = *(_BYTE *)(v36 + 4 * i) + v35;
                    *(_BYTE *)(a10 + 4LL * v39 + 1) = 1;
                    *(_BYTE *)(a10 + 4LL * v39 + 2) = 1;
                    *(_BYTE *)(a10 + 4LL * v39 + 3) = 1;
                    LODWORD(v24) = v39;
                  }
                  v24 = (unsigned int)(v24 + 1);
                  v39 = v24;
                }
                v35 = (unsigned int)(v35 + 1);
              }
              while ( (unsigned int)v35 < *(_DWORD *)(v34 + 16) );
              v16 = a9;
              v12 = v41;
              v17 = a1;
              if ( !(_DWORD)v24 )
              {
                v33 = v46;
LABEL_54:
                if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  return 3221225473LL;
                v27 = *(const wchar_t **)&v17[2 * v33 + 4];
                v28 = 15;
                goto LABEL_22;
              }
              if ( a9 )
              {
                *(_DWORD *)a9 = -1;
                v37 = v39;
                *(_QWORD *)(a9 + 8) = a10;
                *(_DWORD *)(a9 + 4) = v37;
                v16 = a9 + 16;
                LODWORD(v24) = v39;
                a9 += 16LL;
                a10 += 4LL * v39;
              }
              v15 = v42;
              if ( (unsigned int)v24 > v12 )
                v12 = v24;
              v11 = v24 + v40;
            }
            else
            {
              result = LpiEnumerateDependencies(
                         (_DWORD)v17,
                         i,
                         v13,
                         a4,
                         a5,
                         (__int64)&v44,
                         (__int64)&v39,
                         (__int64)&v43,
                         v16,
                         a10,
                         a11);
              if ( (int)result < 0 )
                return result;
              if ( v43 > v12 )
                v12 = v43;
              v15 += v44;
              v16 += 16LL * v44;
              v11 = v39 + v40;
              a9 = v16;
              a10 += 4LL * v39;
            }
            v25 = a2;
            v40 = v11;
            v41 = v12;
          }
        }
        v13 = a3;
      }
      if ( v15 )
      {
        *a6 = v15;
        *a7 = v11;
        *a8 = v12;
        return 0LL;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225473LL;
      v30 = 16;
      v29 = *(const wchar_t **)&v17[2 * v45 + 4];
LABEL_25:
      WPP_RECORDER_SF_S(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v30,
        (__int64)&WPP_3e202d95210a3d64d7d99785f8240c47_Traceguids,
        v29);
      return 3221225473LL;
    }
    v20 = *(_DWORD *)(*(_QWORD *)&v17[2 * v19 + 10] + 4 * v18);
    if ( v20 == -1 )
      goto LABEL_19;
    v42 = v15 + 1;
    DevExtFromIndex = GetDevExtFromIndex(v20);
    v23 = *(_QWORD *)(DevExtFromIndex + 544);
    if ( !v23 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225473LL;
      v29 = *(const wchar_t **)(DevExtFromIndex + 64);
      v30 = 13;
      goto LABEL_25;
    }
    if ( a11 )
    {
      KeAddProcessorAffinityEx(a11, *(unsigned int *)(DevExtFromIndex + 56));
      v21 = v40;
      v13 = a3;
    }
    v24 = 0LL;
    v25 = 0LL;
    v39 = 0;
    if ( !*(_DWORD *)(v23 + 16) )
      break;
    do
    {
      if ( *(_DWORD *)(v23 + 80 * v25 + 44) > v13 )
      {
        if ( a10 )
        {
          *(_BYTE *)(a10 + 4 * v24) = v25;
          *(_BYTE *)(a10 + 4LL * v39 + 1) = 1;
          *(_BYTE *)(a10 + 4LL * v39 + 2) = 1;
          *(_BYTE *)(a10 + 4LL * v39 + 3) = 1;
          LODWORD(v24) = v39;
        }
        v24 = (unsigned int)(v24 + 1);
        v39 = v24;
      }
      v25 = (unsigned int)(v25 + 1);
    }
    while ( (unsigned int)v25 < *(_DWORD *)(v23 + 16) );
    if ( !(_DWORD)v24 )
      break;
    if ( v16 )
    {
      v26 = *(_DWORD *)(DevExtFromIndex + 56);
      *(_QWORD *)(v16 + 8) = a10;
      a10 += 4 * v24;
      *(_DWORD *)v16 = v26;
      *(_DWORD *)(v16 + 4) = v24;
      v16 += 16LL;
      a9 = v16;
    }
    v15 = v42;
    if ( (unsigned int)v24 > v12 )
      v12 = v24;
    v11 = v24 + v21;
    v19 = v45;
    v40 = v11;
    v41 = v12;
LABEL_19:
    v18 = (unsigned int)(v18 + 1);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = *(const wchar_t **)(DevExtFromIndex + 64);
    v28 = 14;
LABEL_22:
    LODWORD(v38) = v13;
    WPP_RECORDER_SF_Sd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v24,
      v25,
      v28,
      (__int64)&WPP_3e202d95210a3d64d7d99785f8240c47_Traceguids,
      v27,
      v38);
  }
  return 3221225473LL;
}
