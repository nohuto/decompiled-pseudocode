/*
 * XREFs of ?vInitEmergencyStockFont@@YAXPEBG@Z @ 0x14015197C
 * Callers:
 *     FinishStockFontInit @ 0x140151750 (FinishStockFontInit.c)
 * Callees:
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1400B7E20 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 */

void __fastcall vInitEmergencyStockFont(const unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  __int64 SessionState; // rax
  __int64 v4; // rbp
  struct PFF *v5; // r14
  __int64 i; // rdi
  __int64 v7; // rbx
  _QWORD v8[5]; // [rsp+40h] [rbp-28h] BYREF
  const unsigned __int16 *v9; // [rsp+70h] [rbp+8h] BYREF
  struct PFF *v10; // [rsp+78h] [rbp+10h] BYREF

  v9 = a1;
  v10 = 0LL;
  SessionState = W32GetSessionState(a1, a2, a3);
  LODWORD(v9) = 0;
  v4 = *(_QWORD *)(SessionState + 96);
  v8[0] = *(_QWORD *)(v4 + 20416);
  if ( !*(_QWORD *)(v4 + 19712) )
  {
    if ( (unsigned int)PUBLIC_PFTOBJ::bLoadAFont(
                         (PUBLIC_PFTOBJ *)v8,
                         L"\\SystemRoot\\System32\\winsrv.dll",
                         (unsigned int *)&v9,
                         2u,
                         &v10,
                         0LL,
                         0) )
    {
      if ( (_DWORD)v9 )
      {
        v5 = v10;
        if ( v10 )
        {
          for ( i = 0LL; (unsigned int)i < (unsigned int)v9; i = (unsigned int)(i + 1) )
          {
            if ( *(_QWORD *)(v4 + 19712) )
              break;
            v7 = *((_QWORD *)v5 + i + 28);
            if ( v7 )
            {
              if ( !_wcsicmp((const wchar_t *)(*(_QWORD *)(v7 + 32) + *(int *)(*(_QWORD *)(v7 + 32) + 16LL)), L"SYSTEM") )
                *(_QWORD *)(v4 + 19712) = v7;
            }
          }
        }
      }
    }
  }
}
