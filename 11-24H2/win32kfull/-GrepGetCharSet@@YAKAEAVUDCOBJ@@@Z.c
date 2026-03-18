/*
 * XREFs of ?GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z @ 0x1400BB50C
 * Callers:
 *     GreGetCharSet @ 0x1400BB178 (GreGetCharSet.c)
 *     ?GrepGetTextCharsetInfo@@YAHAEAVUDCOBJ@@PEAUtagFONTSIGNATURE@@KW4EntryPoint@RFONTOBJ@@@Z @ 0x1400BB41C (-GrepGetTextCharsetInfo@@YAHAEAVUDCOBJ@@PEAUtagFONTSIGNATURE@@KW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ @ 0x14005D9E4 (-WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager@@SAJXZ.c)
 *     ?bGotFonts@PDEVOBJ@@QEBAHXZ @ 0x14005EF9C (-bGotFonts@PDEVOBJ@@QEBAHXZ.c)
 *     ?BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVUDCOBJ@@_N2@Z @ 0x140060290 (-BuildMapperParameters@@YAXAEAUPARAMETERS@MAPPER@@AEAVUDCOBJ@@_N2@Z.c)
 *     ?ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z @ 0x1400606A0 (-ppfeMapFont@LFONTCOREOBJ@@QEAAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAKPEAU_POINTL@@1@Z.c)
 *     ??$GrepAcquireLockValidate@$0BB@@@YAXXZ @ 0x1400BBD8C (--$GrepAcquireLockValidate@$0BB@@@YAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x14020EEF8 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall GrepGetCharSet(struct UDCOBJ *a1)
{
  __int64 v2; // rcx
  __int64 v4; // rdx
  _QWORD *HDEV; // r14
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  _DWORD *v11; // rbx
  bool v12; // zf
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // esi
  int v18; // esi
  int v19; // esi
  __int64 v20; // rcx
  unsigned int v21; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v22; // [rsp+3Ch] [rbp-55h] BYREF
  _QWORD *v23; // [rsp+40h] [rbp-51h] BYREF
  _DWORD *v24; // [rsp+48h] [rbp-49h] BYREF
  _DWORD *v25; // [rsp+50h] [rbp-41h]
  struct _POINTL v26; // [rsp+58h] [rbp-39h] BYREF
  HSEMAPHORE v27; // [rsp+60h] [rbp-31h] BYREF
  _BYTE v28[96]; // [rsp+68h] [rbp-29h] BYREF

  v22 = 0;
  v26 = 0LL;
  v21 = 0;
  v2 = *(_QWORD *)a1;
  if ( (*(_DWORD *)(*(_QWORD *)(v2 + 976) + 152LL) & 0x10) == 0 )
    return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 4LL);
  v23 = *(_QWORD **)(v2 + 48);
  if ( !(unsigned int)PDEVOBJ::bGotFonts((PDEVOBJ *)&v23) )
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&v23);
  LOBYTE(v4) = 10;
  HDEV = v23;
  v6 = HmgShareLock(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 296LL), v4);
  v9 = v6 + 24;
  v10 = -v6;
  v11 = (_DWORD *)(v9 & -(__int64)(v10 != 0));
  v24 = v11;
  if ( v11 )
  {
    v12 = (*(_BYTE *)((v9 & -(__int64)(v10 != 0)) + 4) & 1) == 0;
    v13 = (__int64)(v11 - 6);
    v25 = v11 - 6;
    if ( !v12 )
    {
      v17 = *v11;
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)(v11 - 6));
      v13 = 0LL;
      v25 = 0LL;
      if ( HDEV || (HDEV = (_QWORD *)UserGetHDEV()) != 0LL )
      {
        v18 = v17 - 4;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 != 1 )
            {
LABEL_23:
              v9 = v13 + 24;
              v11 = (_DWORD *)((v13 + 24) & -(__int64)(v13 != 0));
              v24 = v11;
              goto LABEL_7;
            }
            v20 = HDEV[181];
          }
          else
          {
            v20 = HDEV[180];
          }
        }
        else
        {
          v20 = HDEV[179];
        }
        if ( v20 )
        {
          LOBYTE(v7) = 10;
          v13 = HmgShareLock(v20, v7);
          v25 = (_DWORD *)v13;
        }
        goto LABEL_23;
      }
    }
  }
  else
  {
    v13 = 0LL;
    v25 = 0LL;
  }
LABEL_7:
  if ( v11 && UmfdHostLifeTimeManager::WaitForSessionRasterizerInitialization(v9, v7, v8) >= 0 )
  {
    v27 = *(HSEMAPHORE *)(*(_QWORD *)(W32GetSessionState(v15, v14, v16) + 96) + 20344LL);
    GreAcquireSemaphoreInternal(v27);
    GrepAcquireLockValidate<17>();
    memset_0(v28, 0, sizeof(v28));
    BuildMapperParameters((struct MAPPER::PARAMETERS *)v28, a1, (*(_DWORD *)(v13 + 28) & 2) != 0, 0);
    if ( LFONTCOREOBJ::ppfeMapFont((LFONTCOREOBJ *)&v24, (struct MAPPER::PARAMETERS *)v28, &v22, &v26, &v21) )
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 4LL) = v21 >> 8;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 152LL) &= ~0x10u;
    }
    SEMOBJ<17>::vUnlock(&v27);
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v13);
    return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 4LL);
  }
  if ( v13 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v13);
  return 0x10000LL;
}
