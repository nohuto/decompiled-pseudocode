/*
 * XREFs of ?RefreshPlatformLicenses@AtmosCheck@@AEAAXXZ @ 0x1800A5154
 * Callers:
 *     _lambda_0b797c3ec2b40741812a9b93d57ea05e_::operator() @ 0x1800833AC (_lambda_0b797c3ec2b40741812a9b93d57ea05e_--operator().c)
 *     _lambda_7ee6381ccef9550c878152fb933ee002_::operator() @ 0x1801474BC (_lambda_7ee6381ccef9550c878152fb933ee002_--operator().c)
 *     ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x180148E48 (-RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180007BFC (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180066B20 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18007CCAC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EV_ea_18007CCAC.c)
 *     ??1?$unique_any_array_ptr@EU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@2@@wil@@QEAA@XZ @ 0x1800A2FA4 (--1-$unique_any_array_ptr@EU-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@Uempty_de.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800AB328 (IsGetDefaultSpatialRenderingModePresent.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AtmosCheck::RefreshPlatformLicenses(AtmosCheck *this, __int64 a2, __int64 a3, __int64 a4)
{
  int PlatformSpatialLicenseOverrides; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edx
  unsigned __int64 v10; // r8
  _BYTE *v11; // r9
  _BYTE *v12; // rcx
  unsigned int v13; // edx
  __int64 v14; // r10
  __int64 v15; // rax
  _QWORD *v16; // r11
  __int64 v17; // rcx
  __int64 v18; // rdx
  char *v19; // rcx
  __int64 *v20; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-28h] BYREF
  char v22; // [rsp+3Ch] [rbp-24h]
  __int64 v23; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-18h]
  char v25; // [rsp+50h] [rbp-10h] BYREF

  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(this, a2, a3, a4) )
  {
    v23 = 0LL;
    v24 = 0LL;
    v20 = &v23;
    v21 = 0;
    v22 = 1;
    PlatformSpatialLicenseOverrides = TryGetPlatformSpatialLicenseOverrides(&v21, &v23, 0LL);
    if ( v22 )
    {
      v6 = (__int64)v20;
      v20[1] = v21;
    }
    if ( PlatformSpatialLicenseOverrides < 0 )
    {
      if ( PlatformSpatialLicenseOverrides != -2147467263 && (unsigned int)CallbackContext > 2 )
      {
        LODWORD(v20) = PlatformSpatialLicenseOverrides;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          (__int64)&CallbackContext,
          byte_1801A7ED4,
          v7,
          v8,
          (__int64)&v20);
      }
    }
    else
    {
      if ( (unsigned int)CallbackContext > 5 )
      {
        v20 = (__int64 *)v24;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
          v6,
          (__int64)&unk_1801A7C58,
          v7,
          v8,
          (__int64)&v20);
      }
      v9 = 0;
      v10 = (unsigned __int64)&v25;
      v11 = (char *)this + 273;
      v12 = (char *)this + 273;
      do
      {
        *(_BYTE *)v10 = *v12;
        *v12 = 0;
        ++v9;
        ++v10;
        v12 += 48;
      }
      while ( v9 < 7 );
      v13 = 0;
      if ( v24 )
      {
        v14 = 0LL;
        do
        {
          v10 = 0LL;
          v15 = 0LL;
          while ( (unsigned __int64)(int)v10 < 7 )
          {
            v16 = (_QWORD *)(v23 + 16 * v14);
            v17 = *(_QWORD *)((char *)this + 48 * (int)v10 + 276) - *v16;
            if ( !v17 )
              v17 = *(_QWORD *)((char *)this + 48 * (int)v10 + 284) - v16[1];
            if ( !v17 )
            {
              *((_BYTE *)this + 48 * v15 + 273) = 1;
              break;
            }
            v10 = (unsigned int)(v10 + 1);
            ++v15;
          }
          v14 = ++v13;
        }
        while ( v13 < v24 );
      }
      v18 = 0LL;
      v19 = &v25;
      while ( *v11 == *v19 )
      {
        v18 = (unsigned int)(v18 + 1);
        v11 += 48;
        ++v19;
        if ( (unsigned int)v18 >= 7 )
          goto LABEL_30;
      }
      if ( *((_QWORD *)this + 5) )
      {
        if ( (unsigned int)CallbackContext > 5 )
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
            (__int64)v19,
            byte_1801A7A42);
        (***((void (__fastcall ****)(_QWORD, __int64, unsigned __int64))this + 5))(*((_QWORD *)this + 5), v18, v10);
      }
    }
LABEL_30:
    wil::unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>::~unique_any_array_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter>((__int64)&v23);
  }
}
