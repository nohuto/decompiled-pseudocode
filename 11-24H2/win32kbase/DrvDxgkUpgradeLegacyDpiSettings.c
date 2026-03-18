/*
 * XREFs of DrvDxgkUpgradeLegacyDpiSettings @ 0x1401CABD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140016394 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002322C (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x140124B40 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     ?SetScaleFactorOverride@@YAJAEAU_LUID@@IHPEAU_DPI_INFORMATION@@@Z @ 0x1401C9628 (-SetScaleFactorOverride@@YAJAEAU_LUID@@IHPEAU_DPI_INFORMATION@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall DrvDxgkUpgradeLegacyDpiSettings(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // esi
  __int64 v6; // rbx
  __int64 *i; // rdi
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 DxgkWin32kInterface; // rax
  int v12; // eax
  int v13; // esi
  _DWORD *v14; // rax
  _DWORD *v15; // rax
  int v16; // ecx
  signed int v17; // esi
  __int32 v18; // eax
  unsigned int v19; // ebx
  struct _LUID *v20; // rax
  int v21; // eax
  __int64 *v22; // [rsp+30h] [rbp-D0h] BYREF
  struct _ERESOURCE *v23; // [rsp+38h] [rbp-C8h] BYREF
  __m128i v24[6]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v25[24]; // [rsp+A0h] [rbp-60h] BYREF

  *a2 = 0;
  v4 = -1073741275;
  if ( *(_DWORD *)(a1 + 4) )
    return 0LL;
  v6 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  SEMOBJ<19>::SEMOBJ<19>(&v23, (struct _ERESOURCE **)v6);
  for ( i = *(__int64 **)(v6 + 3848); i; i = (__int64 *)*i )
  {
    v8 = i[5] & 0x401;
    v22 = i;
    if ( v8 == 1 )
    {
      v9 = i[321];
      if ( ((v9 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && (*(_DWORD *)(v9 + 160) & 0x800000) != 0 )
      {
        memset(v25, 0, sizeof(v25));
        DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v10);
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _DWORD *))(DxgkWin32kInterface + 632))(
                a1,
                *(_QWORD *)(i[321] + 232),
                *(unsigned int *)(i[321] + 248),
                v25);
        v4 = v12;
        if ( v12 >= 0 )
        {
          memset(v24, 0, sizeof(v24));
          v24[0] = *(__m128i *)(i + 305);
          v24[1] = *(__m128i *)(i + 307);
          v24[2] = *(__m128i *)(i + 309);
          v24[3] = *(__m128i *)(i + 311);
          v24[4] = *(__m128i *)(i + 313);
          v24[5] = *(__m128i *)(i + 315);
          if ( v25[2] != _mm_srli_si128(*v24, 8).m128i_i32[1] )
          {
            v13 = 0;
            v14 = &DesktopScaleFactorCutoffs;
            do
            {
              if ( *v14 > v25[2] )
                break;
              ++v13;
              ++v14;
            }
            while ( (__int64)v14 < (__int64)&dword_14026A354 );
            v15 = &DesktopScaleFactorCutoffs;
            v16 = 0;
            do
            {
              if ( *v15 > v24[0].m128i_i32[3] )
                break;
              ++v16;
              ++v15;
            }
            while ( (__int64)v15 < (__int64)&dword_14026A354 );
            v17 = v13 - v16;
            v18 = v17;
            if ( v24[5].m128i_i32[0] > v17 )
              v18 = v24[5].m128i_i32[0];
            if ( v18 >= v24[5].m128i_i32[2] )
            {
              v17 = v24[5].m128i_i32[2];
            }
            else if ( v24[5].m128i_i32[0] > v17 )
            {
              v17 = v24[5].m128i_i32[0];
            }
            v19 = *(_DWORD *)(i[321] + 248);
            v20 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v22);
            v21 = SetScaleFactorOverride(v20, v19, v17, (struct _DPI_INFORMATION *)v24);
            v4 = v21;
            if ( v21 < 0 )
            {
              WdLogSingleEntry3(2LL, v21, *(_QWORD *)(i[321] + 232), *(unsigned int *)(i[321] + 248));
              WdLogGlobalForLineNumber = 29708;
            }
            else
            {
              *a2 = 1;
            }
          }
        }
        else
        {
          WdLogSingleEntry3(2LL, v12, *(_QWORD *)(i[321] + 232), *(unsigned int *)(i[321] + 248));
          WdLogGlobalForLineNumber = 29661;
        }
      }
    }
  }
  if ( v23 )
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      (__int64)v23);
  return v4;
}
