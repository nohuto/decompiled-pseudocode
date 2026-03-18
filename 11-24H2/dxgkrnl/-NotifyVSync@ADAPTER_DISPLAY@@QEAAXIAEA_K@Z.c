/*
 * XREFs of ?NotifyVSync@ADAPTER_DISPLAY@@QEAAXIAEA_K@Z @ 0x14002E36C
 * Callers:
 *     DxgNotifyVSyncCB @ 0x14002DF70 (DxgNotifyVSyncCB.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@@Z @ 0x140002800 (--$Write@U-$_tlgWrapperByVal@$01@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x1400471A4 (_tlgKeywordOn.c)
 */

void __fastcall ADAPTER_DISPLAY::NotifyVSync(ADAPTER_DISPLAY *this, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  __int16 v14; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 < *((_DWORD *)this + 24) )
  {
    _mm_lfence();
    v5 = *(unsigned int *)(4024LL * a2 + *((_QWORD *)this + 16) + 3804);
    if ( (_DWORD)v5 )
    {
      v6 = 10 * v5;
      v7 = *((_QWORD *)this + 10 * v5 + 118);
      if ( v7 )
      {
        if ( !*((_DWORD *)this + 20 * v5 + 220) )
        {
          *((_QWORD *)this + 10 * v5 + 116) = 0LL;
          *((_QWORD *)this + 10 * v5 + 117) = 0LL;
          return;
        }
        v8 = *((_QWORD *)this + 10 * v5 + 116);
        v9 = *a3;
        if ( !v8 )
          goto LABEL_18;
        if ( v9 - v8 > (unsigned __int64)*((unsigned int *)this + 20 * v5 + 230) )
        {
          if ( *((_QWORD *)this + 10 * v5 + 117) )
          {
            v12 = *((_DWORD *)this + 20 * v5 + 234) - *((_DWORD *)this + 20 * v5 + 232);
            ++*((_DWORD *)this + 2 * v6 + 226);
            *((_DWORD *)this + 2 * v6 + 229) += v12 >> 4;
            v13 = v12 >> 6;
            if ( v13 >= 0x80 )
              v13 = 127;
            ++*(_DWORD *)(3 * v13 + v7);
          }
          else if ( !*((_BYTE *)this + 80 * v5 + 896) )
          {
            ++*((_DWORD *)this + 20 * v5 + 225);
            if ( (unsigned int)dword_14015E5E0 > 5 )
            {
              if ( (unsigned __int8)tlgKeywordOn(&dword_14015E5E0, 0x4000LL) )
              {
                v14 = 0;
                _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>>(
                  v10,
                  (__int64)&unk_14013C183,
                  v11,
                  v9,
                  (__int64)&v14);
                v9 = *a3;
              }
            }
          }
          *((_QWORD *)this + v6 + 117) = 0LL;
LABEL_18:
          *((_QWORD *)this + v6 + 116) = v9;
          return;
        }
        *((_BYTE *)this + 80 * v5 + 896) = 0;
        *((_QWORD *)this + 10 * v5 + 117) = v9;
      }
    }
  }
}
