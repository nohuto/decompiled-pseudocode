/*
 * XREFs of PopGetCallerContextFromBuffer @ 0x140A2EFC0
 * Callers:
 *     PopQueryMostRecentWakeSourceInfo @ 0x14074F810 (PopQueryMostRecentWakeSourceInfo.c)
 *     PopDiagTracePowerRequestCreate @ 0x140A2D14C (PopDiagTracePowerRequestCreate.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x14047B368 (RtlUnicodeStringPrintf.c)
 */

void __fastcall PopGetCallerContextFromBuffer(__int64 a1, UNICODE_STRING *a2, __int64 a3, UNICODE_STRING *a4)
{
  __int64 v6; // rdx
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // r9
  _WORD *v10; // r10
  __int64 v11; // r11
  __int16 v12; // ax
  __int64 v13; // r11
  __int64 v14; // r10
  __int64 v15; // r9
  _WORD *v16; // rcx
  __int16 v17; // cx
  __int64 v18; // r8
  _WORD *i; // rcx
  unsigned __int16 v20; // ax

  *(_OWORD *)a3 = 0LL;
  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_DWORD *)(a1 + 8);
    v8 = a1 + v6;
    if ( v7 )
    {
      v9 = v8 & -(__int64)(v6 != 0);
      if ( v9 )
      {
        v10 = (_WORD *)(v8 & -(__int64)(v6 != 0));
        v11 = 0x7FFFLL;
        while ( *v10 )
        {
          ++v10;
          if ( !--v11 )
            goto LABEL_10;
        }
        if ( a3 )
        {
          v12 = 2 * (0x7FFF - v11);
          *(_QWORD *)(a3 + 8) = v9;
          *(_WORD *)a3 = v12;
          *(_WORD *)(a3 + 2) = v12 + 2;
        }
      }
LABEL_10:
      if ( v7 == 2 )
      {
        RtlUnicodeStringPrintf(a2, L"%d", *(unsigned int *)(a1 + 28));
        *a4 = *a2;
      }
      else
      {
        RtlInitUnicodeString(a4, 0LL);
      }
    }
    else
    {
      v13 = v8 & -(__int64)(v6 != 0);
      v14 = (*(_QWORD *)(a1 + 24) + a1) & -(__int64)(*(_QWORD *)(a1 + 24) != 0LL);
      if ( v13 )
      {
        v15 = 0x7FFFLL;
        v16 = (_WORD *)(v8 & -(__int64)(v6 != 0));
        while ( *v16 )
        {
          ++v16;
          if ( !--v15 )
            goto LABEL_20;
        }
        if ( a3 )
        {
          v17 = 2 * (0x7FFF - v15);
          *(_QWORD *)(a3 + 8) = v13;
          *(_WORD *)a3 = v17;
          *(_WORD *)(a3 + 2) = v17 + 2;
        }
      }
LABEL_20:
      *a4 = 0LL;
      if ( v14 )
      {
        v18 = 0x7FFFLL;
        for ( i = (_WORD *)v14; *i; ++i )
        {
          if ( !--v18 )
            return;
        }
        if ( a4 )
        {
          v20 = 2 * (0x7FFF - v18);
          a4->Buffer = (wchar_t *)v14;
          a4->Length = v20;
          a4->MaximumLength = v20 + 2;
        }
      }
    }
  }
  else
  {
    *a4 = 0LL;
  }
}
