/*
 * XREFs of LdrpCheckForRetryLoading @ 0x18007234C
 * Callers:
 *     LdrpMapDllNtFileName @ 0x180071640 (LdrpMapDllNtFileName.c)
 *     LdrpMinimalMapModule @ 0x180072F40 (LdrpMinimalMapModule.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlRbInsertNodeEx @ 0x180054EB0 (RtlRbInsertNodeEx.c)
 *     RtlCompareUnicodeStrings @ 0x180072550 (RtlCompareUnicodeStrings.c)
 *     LdrpCompareModuleName @ 0x1800729C4 (LdrpCompareModuleName.c)
 */

bool __fastcall LdrpCheckForRetryLoading(__int64 a1, char a2)
{
  bool v2; // bl
  __int64 v5; // r15
  char v6; // al
  unsigned __int64 v7; // rdi
  __int64 v8; // rsi
  int v9; // r14d
  int v10; // eax
  __int64 v11; // rax
  int v12; // esi
  unsigned __int64 v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  int v17; // [rsp+20h] [rbp-38h]

  v2 = 0;
  if ( !*(_QWORD *)(a1 + 176) && (*(_DWORD *)(a1 + 32) & 0x4100000) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    v6 = BYTE8(LdrpRetryingModuleIndex);
    v7 = LdrpRetryingModuleIndex;
    if ( (BYTE8(LdrpRetryingModuleIndex) & 1) != 0 )
    {
      if ( (_QWORD)LdrpRetryingModuleIndex )
        v8 = (unsigned __int64)&LdrpRetryingModuleIndex ^ LdrpRetryingModuleIndex;
      else
        v8 = 0LL;
    }
    else
    {
      v8 = LdrpRetryingModuleIndex;
    }
    v9 = BYTE8(LdrpRetryingModuleIndex) & 1;
    if ( v8 )
    {
      do
      {
        v10 = *(_DWORD *)(v8 + 40) - *(_DWORD *)(v5 + 264);
        if ( !v10 )
        {
          LOBYTE(v17) = 1;
          v10 = RtlCompareUnicodeStrings(
                  *(_QWORD *)(v8 - 144),
                  (unsigned __int64)*(unsigned __int16 *)(v8 - 152) >> 1,
                  *(_QWORD *)(v5 + 80),
                  (unsigned __int64)*(unsigned __int16 *)(v5 + 72) >> 1,
                  v17);
        }
        if ( v10 >= 0 )
        {
          if ( v10 <= 0 )
            break;
          v11 = *(_QWORD *)(v8 + 8);
        }
        else
        {
          v11 = *(_QWORD *)v8;
        }
        if ( v9 && v11 )
          v8 ^= v11;
        else
          v8 = v11;
      }
      while ( v8 );
      if ( v8 )
        goto LABEL_32;
      v6 = BYTE8(LdrpRetryingModuleIndex);
      v7 = LdrpRetryingModuleIndex;
    }
    if ( !a2 )
    {
LABEL_35:
      RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
      return v2;
    }
    if ( (v6 & 1) != 0 )
    {
      if ( v7 )
        v7 ^= (unsigned __int64)&LdrpRetryingModuleIndex;
      else
        v7 = 0LL;
    }
    v12 = v6 & 1;
    if ( v7 )
    {
      while ( 1 )
      {
        if ( (int)LdrpCompareModuleName(v5, v7) >= 0 )
        {
          v13 = *(_QWORD *)(v7 + 8);
          if ( v12 )
          {
            if ( !v13 )
            {
LABEL_30:
              v2 = 1;
              break;
            }
            v13 ^= v7;
          }
          if ( !v13 )
            goto LABEL_30;
        }
        else
        {
          v13 = *(_QWORD *)v7;
          if ( v12 )
          {
            if ( !v13 )
              break;
            v13 ^= v7;
          }
          if ( !v13 )
            break;
        }
        v7 = v13;
      }
    }
    RtlRbInsertNodeEx((unsigned __int64)&LdrpRetryingModuleIndex, v7, v2, v5 + 224);
LABEL_32:
    *(_DWORD *)(a1 + 32) |= 0x100000u;
    v14 = (_QWORD *)qword_1801D2688;
    v15 = (_QWORD *)(a1 + 64);
    v2 = 1;
    if ( *(__int64 **)qword_1801D2688 != &LdrpRetryQueue )
      __fastfail(3u);
    *v15 = &LdrpRetryQueue;
    *(_QWORD *)(a1 + 72) = v14;
    *v14 = v15;
    qword_1801D2688 = a1 + 64;
    goto LABEL_35;
  }
  return v2;
}
