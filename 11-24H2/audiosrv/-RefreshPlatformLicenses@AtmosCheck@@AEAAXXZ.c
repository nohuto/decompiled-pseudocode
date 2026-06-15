/*
 * XREFs of ?RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ @ 0x1800A11B4
 * Callers:
 *     _lambda_0b797c3ec2b40741812a9b93d57ea05e_::operator() @ 0x18007069C (_lambda_0b797c3ec2b40741812a9b93d57ea05e_--operator().c)
 *     _lambda_f5f4f75dc837a2f22584ae1b4b94d09e_::operator() @ 0x18015041C (_lambda_f5f4f75dc837a2f22584ae1b4b94d09e_--operator().c)
 *     ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x180151B38 (-RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180008108 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18005A4B0 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18006ADFC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EV_ea_18006ADFC.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800A7618 (IsGetDefaultSpatialRenderingModePresent.c)
 *     ??0?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x1800AB988 (--0-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??1?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x1800AB99C (--1-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??A?$unique_any_array_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAAEAU_GUID@@_K@Z @ 0x1800C8578 (--A-$unique_any_array_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@Ue.c)
 *     ??$size_address@I@?$unique_any_array_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA?AU?$size_address_ptr@I@01@XZ @ 0x18014F644 (--$size_address@I@-$unique_any_array_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@.c)
 *     ??1?$size_address_ptr@I@?$unique_any_array_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x18014FC1C (--1-$size_address_ptr@I@-$unique_any_array_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AtmosCheck::RefreshPlatformLicenses(AtmosCheck *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  int PlatformSpatialLicenseOverrides; // edi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // edx
  char *i; // r8
  _BYTE *v12; // r9
  char *v13; // rcx
  unsigned int v14; // r10d
  __int64 v15; // rdi
  int v16; // r11d
  __int64 v17; // rsi
  _QWORD *v18; // rax
  int v19; // r11d
  __int64 v20; // rcx
  __int64 v21; // rdx
  char *v22; // rcx
  _BYTE v23[8]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-28h]
  _QWORD v25[2]; // [rsp+40h] [rbp-20h] BYREF
  char v26; // [rsp+50h] [rbp-10h] BYREF

  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(this, a2, a3, a4) )
  {
    wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(v23);
    v5 = wil::unique_any_array_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::size_address<unsigned int>(
           v23,
           v25);
    PlatformSpatialLicenseOverrides = TryGetPlatformSpatialLicenseOverrides(v5 + 8, v23, 0LL);
    wil::unique_any_array_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::size_address_ptr<unsigned int>::~size_address_ptr<unsigned int>(v25);
    if ( PlatformSpatialLicenseOverrides < 0 )
    {
      if ( PlatformSpatialLicenseOverrides != -2147467263 && (unsigned int)CallbackContext > 2 )
      {
        LODWORD(v25[0]) = PlatformSpatialLicenseOverrides;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          (__int64)&CallbackContext,
          byte_1801B2EC3,
          v8,
          v9,
          (__int64)v25);
      }
    }
    else
    {
      if ( (unsigned int)CallbackContext > 5 )
      {
        v25[0] = v24;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
          v7,
          (__int64)&unk_1801B2C6A,
          v8,
          v9,
          (__int64)v25);
      }
      v10 = 0;
      i = &v26;
      v12 = (char *)this + 273;
      v13 = (char *)this + 273;
      do
      {
        *i = *v13;
        *v13 = 0;
        ++v10;
        ++i;
        v13 += 72;
      }
      while ( v10 < 7 );
      v14 = 0;
      if ( v24 )
      {
        v15 = 0LL;
        do
        {
          v16 = 0;
          for ( i = 0LL; ; ++i )
          {
            v17 = v16;
            if ( (unsigned __int64)v16 >= 7 )
              break;
            v18 = (_QWORD *)wil::unique_any_array_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                              v23,
                              v15,
                              i);
            v20 = *(_QWORD *)((char *)this + 72 * v17 + 276) - *v18;
            if ( !v20 )
              v20 = *(_QWORD *)((char *)this + 72 * v17 + 284) - v18[1];
            if ( !v20 )
            {
              *((_BYTE *)this + 72 * (_QWORD)i + 273) = 1;
              break;
            }
            v16 = v19 + 1;
          }
          v15 = ++v14;
        }
        while ( v14 < v24 );
      }
      v21 = 0LL;
      v22 = &v26;
      while ( *v12 == *v22 )
      {
        v21 = (unsigned int)(v21 + 1);
        v12 += 72;
        ++v22;
        if ( (unsigned int)v21 >= 7 )
          goto LABEL_28;
      }
      if ( *((_QWORD *)this + 5) )
      {
        if ( (unsigned int)CallbackContext > 5 )
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
            (__int64)v22,
            byte_1801B299A);
        (***((void (__fastcall ****)(_QWORD, __int64, char *))this + 5))(*((_QWORD *)this + 5), v21, i);
      }
    }
LABEL_28:
    wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::~unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(v23);
  }
}
