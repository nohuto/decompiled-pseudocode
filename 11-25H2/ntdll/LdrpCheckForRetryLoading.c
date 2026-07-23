/*
 * XREFs of LdrpCheckForRetryLoading @ 0x180072F4C
 * Callers:
 *     LdrpMinimalMapModule @ 0x18006D7B0 (LdrpMinimalMapModule.c)
 *     LdrpMapDllNtFileName @ 0x180072240 (LdrpMapDllNtFileName.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180010AF0 (RtlRbInsertNodeEx.c)
 *     RtlCompareUnicodeStrings @ 0x180073150 (RtlCompareUnicodeStrings.c)
 *     LdrpCompareModuleName @ 0x1800735C4 (LdrpCompareModuleName.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 */

BOOLEAN __fastcall LdrpCheckForRetryLoading(__int64 a1, char a2)
{
  BOOLEAN v2; // bl
  __int64 v5; // r15
  $7D93978C745EB1C2D28075BAF55422B4 v6; // al
  unsigned __int64 Root; // rdi
  unsigned __int64 v8; // rsi
  int v9; // r14d
  LONG v10; // eax
  unsigned __int64 v11; // rax
  int v12; // esi
  unsigned __int64 v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rax

  v2 = 0;
  if ( !*(_QWORD *)(a1 + 176) && (*(_DWORD *)(a1 + 32) & 0x4100000) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v6 = LdrpRetryingModuleIndex.0;
    Root = (unsigned __int64)LdrpRetryingModuleIndex.Root;
    if ( (*(_BYTE *)&LdrpRetryingModuleIndex.0 & 1) != 0 )
    {
      if ( LdrpRetryingModuleIndex.Root )
        v8 = (unsigned __int64)&LdrpRetryingModuleIndex ^ (unsigned __int64)LdrpRetryingModuleIndex.Root;
      else
        v8 = 0LL;
    }
    else
    {
      v8 = (unsigned __int64)LdrpRetryingModuleIndex.Root;
    }
    v9 = *(_BYTE *)&LdrpRetryingModuleIndex.0 & 1;
    if ( v8 )
    {
      do
      {
        v10 = *(_DWORD *)(v8 + 40) - *(_DWORD *)(v5 + 264);
        if ( !v10 )
          v10 = RtlCompareUnicodeStrings(
                  *(PCWCH *)(v8 - 144),
                  (unsigned __int64)*(unsigned __int16 *)(v8 - 152) >> 1,
                  *(PCWCH *)(v5 + 80),
                  (unsigned __int64)*(unsigned __int16 *)(v5 + 72) >> 1,
                  1u);
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
      v6 = LdrpRetryingModuleIndex.0;
      Root = (unsigned __int64)LdrpRetryingModuleIndex.Root;
    }
    if ( !a2 )
    {
LABEL_35:
      RtlLeaveCriticalSection(&LdrpWorkQueueLock);
      return v2;
    }
    if ( (*(_BYTE *)&v6 & 1) != 0 )
    {
      if ( Root )
        Root ^= (unsigned __int64)&LdrpRetryingModuleIndex;
      else
        Root = 0LL;
    }
    v12 = *(_BYTE *)&v6 & 1;
    if ( Root )
    {
      while ( 1 )
      {
        if ( (int)LdrpCompareModuleName(v5, Root) >= 0 )
        {
          v13 = *(_QWORD *)(Root + 8);
          if ( v12 )
          {
            if ( !v13 )
            {
LABEL_30:
              v2 = 1;
              break;
            }
            v13 ^= Root;
          }
          if ( !v13 )
            goto LABEL_30;
        }
        else
        {
          v13 = *(_QWORD *)Root;
          if ( v12 )
          {
            if ( !v13 )
              break;
            v13 ^= Root;
          }
          if ( !v13 )
            break;
        }
        Root = v13;
      }
    }
    RtlRbInsertNodeEx(&LdrpRetryingModuleIndex, (PRTL_BALANCED_NODE)Root, v2, (PRTL_BALANCED_NODE)(v5 + 224));
LABEL_32:
    *(_DWORD *)(a1 + 32) |= 0x100000u;
    v14 = (_QWORD *)qword_1801D46D8;
    v15 = (_QWORD *)(a1 + 64);
    v2 = 1;
    if ( *(__int64 **)qword_1801D46D8 != &LdrpRetryQueue )
      __fastfail(3u);
    *v15 = &LdrpRetryQueue;
    *(_QWORD *)(a1 + 72) = v14;
    *v14 = v15;
    qword_1801D46D8 = a1 + 64;
    goto LABEL_35;
  }
  return v2;
}
