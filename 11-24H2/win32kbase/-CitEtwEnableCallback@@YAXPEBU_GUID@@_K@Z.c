/*
 * XREFs of ?CitEtwEnableCallback@@YAXPEBU_GUID@@_K@Z @ 0x14023C0F8
 * Callers:
 *     ?W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z @ 0x14013C794 (-W32kEtwEnableCallbackWorker@@YAXPEBU_GUID@@K_K@Z.c)
 *     _lambda_32f3cb84696a90cec3124b3263005914_::operator() @ 0x1401B3CB4 (_lambda_32f3cb84696a90cec3124b3263005914_--operator().c)
 * Callees:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400B26AC (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1400B2ECC (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 *     ?CitIsEnabled@@YAEXZ @ 0x1400B3CFC (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x140151F2C (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x14023C2B0 (-CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x14023CCE0 (-CitpResetTracking@@YAJXZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall CitEtwEnableCallback(const struct _GUID *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  int v6; // esi
  unsigned __int64 v7; // rdi
  struct _GUID v8; // [rsp+20h] [rbp-28h]

  v5 = *(_QWORD *)(W32GetUserSessionState(a1) + 18968);
  if ( v5 )
  {
    if ( *(_BYTE *)v5 )
    {
      if ( !*(_BYTE *)(v5 + 1) && a2 == 2048 )
      {
        if ( a1 )
        {
          v8 = *a1;
          v6 = (unsigned __int16)WORD2(*(_QWORD *)&a1->Data1);
          v8.Data2 = 0;
          v8.Data1 = 0;
          if ( *(_OWORD *)&v8 == *(_OWORD *)&CitControlGuid && CitIsEnabled(v4) )
          {
            v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            switch ( v6 )
            {
              case 1:
                CitpContextFlush(*(struct _CIT_IMPACT_CONTEXT **)(v5 + 32), v7);
                break;
              case 2:
                CitpSetForegroundProcess(*(struct _CIT_IMPACT_CONTEXT **)(v5 + 32), v7, 0LL, 0LL);
                CitpContextReinitialize(*(struct _CIT_IMPACT_CONTEXT **)(v5 + 32), v7);
                break;
              case 12:
                CitpResetTracking();
                break;
              case 13:
                CitpInteractionSummariesFlush(*(struct _CIT_IMPACT_CONTEXT **)(v5 + 32), 0);
                break;
            }
          }
        }
      }
    }
  }
}
