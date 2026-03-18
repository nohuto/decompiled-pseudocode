/*
 * XREFs of McGenControlCallbackV2 @ 0x180210150
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     DispatchDwmDiagnosticsControlMessage @ 0x1802B8CE0 (DispatchDwmDiagnosticsControlMessage.c)
 */

void __fastcall McGenControlCallbackV2(
        LPCGUID SourceId,
        ULONG IsEnabled,
        __int64 Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        REGHANDLE *CallbackContext)
{
  unsigned __int8 v8; // r9
  __int64 v9; // rdx
  int v10; // edx
  int *v11; // r10
  int v12; // edx
  __int64 Size; // rdx

  if ( CallbackContext )
  {
    if ( IsEnabled )
    {
      if ( IsEnabled == 1 )
      {
        *((_BYTE *)CallbackContext + 40) = Level;
        Level = 0LL;
        CallbackContext[3] = MatchAllKeyword;
        CallbackContext[2] = MatchAnyKeyword;
        for ( *((_DWORD *)CallbackContext + 9) = 1;
              (unsigned int)Level < *((unsigned __int16 *)CallbackContext + 21);
              Level = (unsigned int)(Level + 1) )
        {
          v8 = *((_BYTE *)CallbackContext + 40);
          v9 = *(_QWORD *)(CallbackContext[7] + 8LL * (unsigned int)Level);
          LOBYTE(MatchAnyKeyword) = (*(_BYTE *)((unsigned int)Level + CallbackContext[8]) <= v8 || !v8)
                                 && (!v9
                                  || (v9 & CallbackContext[2]) != 0 && (v9 & CallbackContext[3]) == CallbackContext[3]);
          v10 = 1 << (Level & 0x1F);
          v11 = (int *)(CallbackContext[6] + 4 * ((unsigned __int64)(unsigned int)Level >> 5));
          if ( (_BYTE)MatchAnyKeyword )
            v12 = *v11 | v10;
          else
            v12 = *v11 & ~v10;
          *v11 = v12;
        }
      }
    }
    else
    {
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      CallbackContext[2] = 0LL;
      CallbackContext[3] = 0LL;
      if ( *((_WORD *)CallbackContext + 21) )
        memset_0((void *)CallbackContext[6], 0, 4LL * ((*((unsigned __int16 *)CallbackContext + 21) - 1) / 32 + 1));
    }
    if ( IsEnabled == 2 && CallbackContext == &Microsoft_Windows_Dwm_Core_Provider_Context )
    {
      if ( FilterData )
      {
        if ( FilterData->Type == 0x80000000 )
        {
          Size = FilterData->Size;
          if ( (unsigned int)Size >= 0x1C && *(_DWORD *)(FilterData->Ptr + 16) <= (unsigned int)Size )
            DispatchDwmDiagnosticsControlMessage(FilterData->Ptr, Size, Level, MatchAnyKeyword);
        }
      }
    }
  }
}
