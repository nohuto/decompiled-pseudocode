/*
 * XREFs of KiSchedulerAssistBugCheckAddPagesCallback @ 0x1405B4E60
 * Callers:
 *     <none>
 * Callees:
 *     MmIsAddressValidEx @ 0x140244560 (MmIsAddressValidEx.c)
 */

void __fastcall KiSchedulerAssistBugCheckAddPagesCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  int v5; // eax
  __int64 v6; // rsi
  __int64 v7; // rdi
  _QWORD *v8; // r14
  _QWORD *v9; // rbp
  __int64 v10; // rcx
  __int64 *v11; // rcx

  ReasonSpecificData[3] = 0LL;
  *((_DWORD *)ReasonSpecificData + 2) = 0;
  v5 = *((_DWORD *)ReasonSpecificData + 3);
  if ( v5 == 159 || v5 == 226 || v5 == 456 )
  {
    v6 = *ReasonSpecificData;
    if ( *ReasonSpecificData )
    {
      v7 = *(_QWORD *)v6;
      if ( *(_DWORD *)(v6 + 16) >= (unsigned int)(10 * KeNumberProcessors_0) )
        return;
    }
    else
    {
      v7 = PsActiveProcessHead;
    }
    while ( (__int64 *)v7 != &PsActiveProcessHead && MmIsAddressValidEx(v7 - 472) )
    {
      if ( (*(_DWORD *)(v7 + 1060) & 0x800000) != 0 )
      {
        if ( v6 )
        {
          v8 = *(_QWORD **)(v6 + 8);
          v6 = 0LL;
        }
        else
        {
          v8 = *(_QWORD **)(v7 + 408);
        }
        while ( v8 != (_QWORD *)(v7 + 408) )
        {
          v9 = v8 - 175;
          if ( !MmIsAddressValidEx((__int64)(v8 - 175)) )
            return;
          v10 = v9[121];
          v8 = (_QWORD *)*v8;
          if ( v10 && MmIsAddressValidEx(v10) )
          {
            v11 = (__int64 *)*ReasonSpecificData;
            ReasonSpecificData[2] = v9[121];
            ReasonSpecificData[3] = 1LL;
            *((_DWORD *)ReasonSpecificData + 2) = -2147483647;
            if ( !v11 )
            {
              dword_140F229D0 = 0;
              v11 = (__int64 *)&KiSchedulerAssistAddPagesCallbackContext;
              *ReasonSpecificData = &KiSchedulerAssistAddPagesCallbackContext;
            }
            *v11 = v7;
            v11[1] = (__int64)v8;
            *((_DWORD *)v11 + 4) += *((_DWORD *)ReasonSpecificData + 6);
            return;
          }
        }
      }
      v7 = *(_QWORD *)v7;
    }
  }
}
