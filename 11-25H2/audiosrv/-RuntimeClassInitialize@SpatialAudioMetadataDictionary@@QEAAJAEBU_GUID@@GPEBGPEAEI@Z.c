/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioMetadataDictionary@@QEAAJAEBU_GUID@@GPEBGPEAEI@Z @ 0x180125290
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@AEBU_GUID@@AEAG$$TAEAPEAEAEAI@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioMetadataDictionary@@AEBU_GUID@@AEAG$$QEA$$TAEAPEAEAEAI@Z @ 0x180124734 (--$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@AEBU_GUID@@AEAG$$TAEAPEAEAEAI@Details@W.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180004C3C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWra.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800475CC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     ?LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJAEBU_GUID@@PEBG@Z @ 0x180124FD0 (-LoadDictionary@SpatialAudioMetadataDictionary@@AEAAJAEBU_GUID@@PEBG@Z.c)
 */

__int64 __fastcall SpatialAudioMetadataDictionary::RuntimeClassInitialize(
        struct _GUID *this,
        const struct _GUID *a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int8 *Src,
        size_t Size)
{
  int v6; // esi
  __int16 v8; // r13
  unsigned int v11; // ebx
  unsigned __int8 *v12; // rdx
  bool v13; // of
  unsigned __int64 v14; // rax
  void *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // edx
  __int64 v20; // r9
  unsigned __int8 *v21; // r8
  unsigned int v22; // eax
  int Dictionary; // eax
  const struct _GUID *v25; // [rsp+40h] [rbp-20h] BYREF
  const WCHAR *v26; // [rsp+48h] [rbp-18h] BYREF
  struct _GUID *v27; // [rsp+50h] [rbp-10h] BYREF

  v6 = 0;
  v8 = a3;
  v11 = 0;
  if ( Src )
  {
    if ( (Size & 1) != 0 )
    {
      v11 = -2147024809;
      if ( (unsigned int)dword_1801CC2E8 <= 2 )
        return v11;
      LODWORD(Src) = -2147024809;
      v12 = byte_1801A3DAF;
      LODWORD(v25) = 134;
      goto LABEL_19;
    }
    v14 = 2LL * ((unsigned int)Size >> 1);
    v13 = (((unsigned int)Size >> 1) * (unsigned __int128)2uLL) >> 64 != 0;
    *(_DWORD *)&this[7].Data2 = (unsigned int)Size >> 1;
    if ( v13 )
      v14 = -1LL;
    v15 = operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
    *(_QWORD *)this[7].Data4 = v15;
    if ( !v15 )
    {
      v11 = -2147024882;
      goto LABEL_20;
    }
    memcpy_0(v15, Src, (unsigned int)Size);
    LOWORD(this[7].Data1) = v8;
    this[6] = *a2;
  }
  else
  {
    Dictionary = SpatialAudioMetadataDictionary::LoadDictionary(this, a2, a4);
    v11 = Dictionary;
    if ( Dictionary < 0 )
    {
      if ( (unsigned int)dword_1801CC2E8 <= 2 )
        return v11;
      LODWORD(Src) = Dictionary;
      v12 = (unsigned __int8 *)&unk_1801A3DE9;
      LODWORD(v25) = 147;
LABEL_19:
      v26 = (const WCHAR *)"SpatialAudioMetadataDictionary::RuntimeClassInitialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)this,
        v12,
        a3,
        (__int64)a4,
        (const CHAR **)&v26,
        (__int64)&v25,
        (__int64)&Src);
LABEL_20:
      if ( (unsigned int)dword_1801CC2E8 > 2 )
      {
        v26 = a4;
        v25 = a2;
        LODWORD(Src) = v11;
        v27 = this;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
          v16,
          (__int64)&unk_1801A3EDA,
          v17,
          v18,
          (__int64)&v27,
          (__int64)&Src,
          (__int64 *)&v25,
          &v26);
      }
      return v11;
    }
  }
  *(_QWORD *)this[5].Data4 = 0LL;
  if ( *(_DWORD *)&this[7].Data2 )
  {
    v19 = 0;
    v20 = *(unsigned int *)&this[7].Data2;
    v21 = (unsigned __int8 *)(*(_QWORD *)this[7].Data4 + 1LL);
    do
    {
      v22 = *v21;
      v21 += 2;
      *(_DWORD *)this[5].Data4 = v22 + v6 + 1;
      v6 += v22 + 1;
      if ( v19 <= v22 )
        v19 = v22;
      *(_DWORD *)&this[5].Data4[4] = v19;
      --v20;
    }
    while ( v20 );
  }
  return v11;
}
