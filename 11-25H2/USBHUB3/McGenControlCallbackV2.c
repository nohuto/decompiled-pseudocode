/*
 * XREFs of McGenControlCallbackV2 @ 0x1400018A0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1400460C0 (memset.c)
 *     HUBDRIVER_EtwEnableCallback @ 0x140079008 (HUBDRIVER_EtwEnableCallback.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall McGenControlCallbackV2(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  unsigned __int8 v8; // r9
  __int64 v9; // rdx
  int v10; // edx
  int *v11; // r11
  int v12; // eax
  int v13; // edx
  int v14; // eax

  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        *((_BYTE *)CallbackContext + 40) = Level;
        *(_QWORD *)&Level = 0LL;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        *((_DWORD *)CallbackContext + 9) = 1;
        if ( *((_WORD *)CallbackContext + 21) )
        {
          do
          {
            v8 = *((_BYTE *)CallbackContext + 40);
            v9 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * Level);
            LOBYTE(MatchAnyKeyword) = (*(_BYTE *)(Level + *((_QWORD *)CallbackContext + 8)) <= v8 || !v8)
                                   && (!v9
                                    || (v9 & *((_QWORD *)CallbackContext + 2)) != 0
                                    && (v9 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3));
            v10 = 1 << (Level & 0x1F);
            SourceId = (LPCGUID)((unsigned __int64)Level >> 5);
            v11 = (int *)(*((_QWORD *)CallbackContext + 6) + 4LL * (_QWORD)SourceId);
            v12 = *v11;
            if ( (_BYTE)MatchAnyKeyword )
              v13 = v12 | v10;
            else
              v13 = v12 & ~v10;
            *v11 = v13;
            *(_QWORD *)&Level = (unsigned int)(Level + 1);
          }
          while ( Level < (unsigned int)*((unsigned __int16 *)CallbackContext + 21) );
        }
      }
    }
    else
    {
      v14 = *((unsigned __int16 *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( (_WORD)v14 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v14 - 1) / 32 + 1));
    }
    HUBDRIVER_EtwEnableCallback(SourceId, ControlCode, Level, MatchAnyKeyword);
  }
}
