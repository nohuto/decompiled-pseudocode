/*
 * XREFs of ?DrvProcessSetDisplayConfigParameters@@YAJAEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@IPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400F75AC
 * Callers:
 *     DrvProcessDxgkDisplayCallout @ 0x1400F7124 (DrvProcessDxgkDisplayCallout.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     DrvGetDisplayConfigBufferSizesInternal @ 0x1400C8194 (DrvGetDisplayConfigBufferSizesInternal.c)
 *     DrvQueryDisplayConfigInternal @ 0x1400C82C8 (DrvQueryDisplayConfigInternal.c)
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall DrvProcessSetDisplayConfigParameters(
        struct _D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION *a1,
        unsigned int a2,
        struct tagDESKTOP *a3,
        unsigned __int8 *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _DWORD *v7; // r15
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v8; // rdi
  __int64 v9; // r13
  __int64 v10; // rbx
  unsigned int v11; // edx
  __int64 result; // rax
  unsigned int v13; // r12d
  unsigned int v14; // ecx
  unsigned int v15; // eax
  enum DISPLAYCONFIG_TOPOLOGY_ID *v16; // rax
  unsigned int v17; // r14d
  int v18; // esi
  unsigned int v19; // esi
  unsigned int v20; // edx
  _DWORD *v21; // rcx
  unsigned int j; // edx
  __int64 v23; // rcx
  int v24; // [rsp+28h] [rbp-99h]
  unsigned int v25; // [rsp+60h] [rbp-61h] BYREF
  unsigned int v26; // [rsp+64h] [rbp-5Dh]
  unsigned int v27; // [rsp+68h] [rbp-59h] BYREF
  int v28; // [rsp+6Ch] [rbp-55h] BYREF
  unsigned int v29; // [rsp+70h] [rbp-51h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v30; // [rsp+78h] [rbp-49h]
  unsigned __int8 *v31; // [rsp+80h] [rbp-41h]
  struct tagDESKTOP *v32; // [rsp+88h] [rbp-39h]
  _DWORD *v33; // [rsp+90h] [rbp-31h]
  enum DISPLAYCONFIG_TOPOLOGY_ID *i; // [rsp+98h] [rbp-29h]
  _OWORD v35[2]; // [rsp+A0h] [rbp-21h] BYREF
  __int64 v36; // [rsp+C0h] [rbp-1h]

  v5 = *(_OWORD *)((char *)a1 + 40);
  v28 = -1;
  v6 = *(_OWORD *)((char *)a1 + 56);
  v7 = (_DWORD *)*((_QWORD *)a1 + 2);
  v8 = 0LL;
  v9 = *((unsigned int *)a1 + 2);
  v10 = a2;
  v11 = (*(char *)a1 >> 31) & 4;
  v31 = a4;
  v32 = a3;
  v30 = a5;
  v33 = v7;
  v29 = v11;
  v35[0] = v5;
  v36 = *((_QWORD *)a1 + 9);
  v35[1] = v6;
  if ( (v10 & 0xF) != 0 )
  {
    if ( (v10 & 0x30) == 0 )
      return xxxUserSetDisplayConfig((unsigned int)v9, v7, (unsigned int)v10, v11, a3, 0, 0LL, 0LL, a4, a5, v35);
    WdLogSingleEntry2(2LL, v10, a3);
    WdLogGlobalForLineNumber = 16932;
    return 3221225485LL;
  }
  if ( !v7 )
  {
    WdLogSingleEntry3(1LL, v9, v10, a3);
    WdLogGlobalForLineNumber = 16962;
    return 3221225485LL;
  }
  v25 = 0;
  v13 = (v10 & 0x20F) != 0 ? 4 : 2;
  result = DrvGetDisplayConfigBufferSizesInternal(v13, &v25);
  if ( (int)result >= 0 )
  {
    v14 = v25;
    v26 = v25;
    v15 = v25 + v9;
    v25 = v15;
    if ( v15 )
    {
      v8 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)PALLOCMEM(216 * v15, 0x73726447u);
      if ( !v8 )
        return 3221225495LL;
      v15 = v25;
      v14 = v26;
    }
    v27 = v15;
    v16 = (enum DISPLAYCONFIG_TOPOLOGY_ID *)((unsigned __int64)&v28 & -(__int64)((v13 & 4) != 0));
    for ( i = v16; ; v16 = i )
    {
      v17 = v14;
      v18 = DrvQueryDisplayConfigInternal(v13, &v27, v8, v16);
      if ( v18 < 0 )
        break;
      if ( v27 != v26 )
      {
        v18 = -1071774893;
        break;
      }
      v19 = 0;
      if ( (_DWORD)v9 )
      {
        v20 = v25;
        while ( v19 < v17 )
        {
          v21 = (_DWORD *)((char *)v8 + 216 * v19);
          if ( v21[4] == v7[4] && v21[5] == v7[5] )
          {
            if ( v19 < v20 - 1 )
            {
              memmove(v21, v21 + 54, 216LL * (v20 - v19 - 1));
              v20 = v25;
            }
            --v17;
          }
          else
          {
            ++v19;
          }
        }
        memmove((char *)v8 + 216 * v17, v7, 216 * v9);
      }
      if ( (v10 & 0x10) != 0 )
      {
        for ( j = 0; j < v25; *(_QWORD *)((char *)v8 + v23 + 8) = 0LL )
        {
          v23 = 216LL * j++;
          *(_QWORD *)((char *)v8 + v23) &= 0x8004700000000000uLL;
        }
      }
      LOBYTE(v24) = 0;
      v18 = xxxUserSetDisplayConfig(
              v17 + (unsigned int)v9,
              v8,
              (unsigned int)v10,
              v29,
              v32,
              v24,
              0LL,
              0LL,
              v31,
              v30,
              v35);
      if ( v18 != -1073741772 || (v10 & 0x10) == 0 )
        break;
      v7 = v33;
      v14 = v26;
      LODWORD(v10) = v10 & 0xFFFFEDCF | 0x1220;
    }
    if ( v8 )
      GreDeleteFastMutex((char *)v8);
    return (unsigned int)v18;
  }
  return result;
}
