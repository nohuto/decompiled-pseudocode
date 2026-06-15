/*
 * XREFs of ?ApoLog@CAPOServiceProvider@@UEAAXW4APO_LOG_LEVEL@@PEBGZZ @ 0x14003DC90
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x140015F48 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Provider@AudioProcessingObjectTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x14003DF50 (-Provider@AudioProcessingObjectTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     _vsnwprintf @ 0x14005A1EC (_vsnwprintf.c)
 */

void CAPOServiceProvider::ApoLog(__int64 a1, unsigned int a2, const wchar_t *a3, ...)
{
  unsigned int v4; // ebx
  unsigned int v5; // ebx
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  const struct _tlgProvider_t *v8; // rcx
  __int64 v9; // rax
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  const struct _tlgProvider_t *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  const struct _tlgProvider_t *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  const struct _tlgProvider_t *v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  wchar_t *v25; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v26[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h]
  __int128 v28; // [rsp+48h] [rbp-B8h]
  __int128 v29; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 *v30; // [rsp+68h] [rbp-98h] BYREF
  int v31; // [rsp+70h] [rbp-90h]
  int v32; // [rsp+74h] [rbp-8Ch]
  void *v33; // [rsp+78h] [rbp-88h]
  int v34; // [rsp+80h] [rbp-80h]
  int v35; // [rsp+84h] [rbp-7Ch]
  wchar_t *v36; // [rsp+88h] [rbp-78h]
  int v37; // [rsp+90h] [rbp-70h]
  int v38; // [rsp+94h] [rbp-6Ch]
  wchar_t Buffer[1024]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 Args; // [rsp+8E8h] [rbp+7E8h] BYREF
  va_list Argsa; // [rsp+8E8h] [rbp+7E8h]
  va_list va1; // [rsp+8F0h] [rbp+7F0h] BYREF

  va_start(va1, a3);
  va_start(Argsa, a3);
  Args = va_arg(va1, _QWORD);
  if ( a3 && a2 <= 5 )
  {
    v28 = *(_OWORD *)(a1 + 24);
    v29 = v28;
    EtwEventActivityIdControl(4LL, &v29);
    memset_0(Buffer, 0, sizeof(Buffer));
    v25 = 0LL;
    if ( (unsigned int)vsnwprintf(Buffer, 0x3FFuLL, a3, Argsa) > 0x3FE )
      Buffer[1023] = 0;
    v25 = 0LL;
    if ( a2 )
    {
      v4 = a2 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              if ( v7 == 1 )
              {
                v10 = AudioProcessingObjectTelemetryProvider::Provider();
                if ( *(_DWORD *)v10 > 5u )
                {
                  v25 = Buffer;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                    (int)v10,
                    (int)&unk_1400AFC86,
                    v11,
                    v12,
                    (void **)&v25);
                }
              }
            }
            else
            {
              v8 = AudioProcessingObjectTelemetryProvider::Provider();
              if ( *(_DWORD *)v8 > 4u )
              {
                v9 = -1LL;
                do
                  ++v9;
                while ( Buffer[v9] );
                v38 = 0;
                v37 = 2 * v9 + 2;
                v26[1] = 4;
                v30 = (unsigned __int16 *)*((_QWORD *)v8 + 1);
                v36 = Buffer;
                v26[0] = 184549376;
                v27 = 0LL;
                v31 = *v30;
                v33 = &unk_1400AFC73;
                v32 = 2;
                v34 = 18;
                v35 = 1;
                ((void (__fastcall *)(_QWORD, _DWORD *, _QWORD, _QWORD, int, unsigned __int16 **, unsigned int))EtwEventWriteTransfer)(
                  *((_QWORD *)v8 + 4),
                  v26,
                  0LL,
                  0LL,
                  3,
                  &v30,
                  (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata);
              }
            }
          }
          else
          {
            v13 = AudioProcessingObjectTelemetryProvider::Provider();
            if ( *(_DWORD *)v13 > 3u )
            {
              v25 = Buffer;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                (int)v13,
                (int)&unk_1400AFC2C,
                v14,
                v15,
                (void **)&v25);
            }
          }
        }
        else
        {
          v16 = AudioProcessingObjectTelemetryProvider::Provider();
          if ( *(_DWORD *)v16 > 2u )
          {
            v25 = Buffer;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
              (int)v16,
              (int)&unk_1400AFC4A,
              v17,
              v18,
              (void **)&v25);
          }
        }
      }
      else
      {
        v19 = AudioProcessingObjectTelemetryProvider::Provider();
        if ( *(_DWORD *)v19 > 1u )
        {
          v25 = Buffer;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
            (int)v19,
            (int)&unk_1400AFCA4,
            v20,
            v21,
            (void **)&v25);
        }
      }
    }
    else
    {
      v22 = AudioProcessingObjectTelemetryProvider::Provider();
      if ( *(_DWORD *)v22 )
      {
        v25 = Buffer;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
          (int)v22,
          (int)&unk_1400AFC0E,
          v23,
          v24,
          (void **)&v25);
      }
    }
    EtwEventActivityIdControl(4LL, &v29);
  }
}
