/*
 * XREFs of ?LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJAEBU_GUID@@PEBG@Z @ 0x180124FD0
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioMetadataDictionary@@QEAAJAEBU_GUID@@GPEBGPEAEI@Z @ 0x180125290 (-RuntimeClassInitialize@SpatialAudioMetadataDictionary@@QEAAJAEBU_GUID@@GPEBGPEAEI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x18003B888 (Create_SpatialAudioDevicePropertyReader.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800475CC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioMetadataDictionary::LoadDictionary(
        struct _GUID *this,
        const struct _GUID *a2,
        unsigned __int16 *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  int v7; // r9d
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, const struct _GUID *, __int64 *); // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  void *v17; // rdx
  int v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h] BYREF
  const CHAR *v22; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v23; // [rsp+80h] [rbp+20h] BYREF
  int v24; // [rsp+98h] [rbp+38h] BYREF

  v20 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)&this[3];
  EnterCriticalSection((LPCRITICAL_SECTION)&this[3]);
  if ( v6 )
    LeaveCriticalSection(v6);
  v21 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v21);
  v8 = Create_SpatialAudioDevicePropertyReader(a3, 0LL, &v21, v7);
  v12 = v8;
  if ( v8 >= 0 )
  {
    v13 = v21;
    v14 = *(__int64 (__fastcall **)(__int64, const struct _GUID *, __int64 *))(*(_QWORD *)v21 + 40LL);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v20);
    v8 = v14(v13, a2, &v20);
    v12 = v8;
    if ( v8 >= 0 )
    {
      this[6] = *a2;
      v8 = (*(__int64 (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v20 + 32LL))(v20, this + 7);
      v12 = v8;
      if ( v8 >= 0 )
      {
        v23 = 0;
        v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 40LL))(v20, &v23);
        v12 = v8;
        if ( v8 >= 0 )
        {
          v15 = v23 >> 1;
          *(_DWORD *)&this[7].Data2 = v15;
          v16 = 2 * v15;
          if ( !is_mul_ok(v15, 2uLL) )
            v16 = -1LL;
          v17 = operator new[](v16, (const struct std::nothrow_t *)&std::nothrow);
          *(_QWORD *)this[7].Data4 = v17;
          if ( v17 )
          {
            v8 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v20 + 48LL))(v20, v17, v23);
            v12 = v8;
            if ( v8 < 0 && (unsigned int)dword_1801CC2E8 > 2 )
            {
              v19 = 219;
              goto LABEL_22;
            }
          }
          else
          {
            v12 = -2147024882;
          }
        }
        else if ( (unsigned int)dword_1801CC2E8 > 2 )
        {
          v19 = 212;
          goto LABEL_22;
        }
      }
      else if ( (unsigned int)dword_1801CC2E8 > 2 )
      {
        v19 = 208;
        goto LABEL_22;
      }
    }
    else if ( (unsigned int)dword_1801CC2E8 > 2 )
    {
      v19 = 201;
      goto LABEL_22;
    }
  }
  else if ( (unsigned int)dword_1801CC2E8 > 2 )
  {
    v19 = 198;
LABEL_22:
    v24 = v8;
    v22 = "SpatialAudioMetadataDictionary::LoadDictionary";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      (unsigned __int8 *)&unk_1801A3DE9,
      v10,
      v11,
      &v22,
      (__int64)&v19,
      (__int64)&v24);
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v21);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v20);
  return v12;
}
