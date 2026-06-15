/*
 * XREFs of ?AllocatePositionTable@SpatialAudioDevicePropertyReader@@AEAAJXZ @ 0x180046EF0
 * Callers:
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x180046C10 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800475CC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SpatialAudioDevicePropertyReader::AllocatePositionTable(SpatialAudioDevicePropertyReader *this)
{
  unsigned int v2; // esi
  void *v3; // rax
  void *v4; // rax
  __int64 result; // rax
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // edi
  __m128 v10; // xmm1
  __m128 v11; // xmm2
  __m128 v12; // xmm3
  int v13; // [rsp+60h] [rbp+8h] BYREF
  int v14; // [rsp+68h] [rbp+10h] BYREF
  const char *v15; // [rsp+70h] [rbp+18h] BYREF

  v2 = -2147024882;
  v3 = _aligned_malloc(0x130uLL, 0x10uLL);
  *((_QWORD *)this + 6) = v3;
  if ( v3 )
    v2 = (*(__int64 (__fastcall **)(_QWORD, char *, void *, __int64))(**((_QWORD **)this + 50) + 24LL))(
           *((_QWORD *)this + 50),
           (char *)this + 134,
           v3,
           304LL);
  v4 = _aligned_malloc(0x130uLL, 0x10uLL);
  *((_QWORD *)this + 7) = v4;
  if ( !v4 )
    return v2;
  result = (*(__int64 (__fastcall **)(_QWORD, char *, void *, __int64))(**((_QWORD **)this + 50) + 24LL))(
             *((_QWORD *)this + 50),
             (char *)this + 280,
             v4,
             304LL);
  v9 = result;
  if ( (int)result < 0 )
  {
    if ( (unsigned int)dword_1801CC2E8 > 2 )
    {
      v13 = result;
      v15 = "SpatialAudioDevicePropertyReader::AllocatePositionTable";
      v14 = 444;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v6,
        (unsigned int)&unk_1801A3DE9,
        v7,
        v8,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13);
      return v9;
    }
  }
  else
  {
    v10 = (__m128)*((unsigned int *)this + 71);
    v11 = (__m128)*((unsigned int *)this + 72);
    v10.m128_f32[0] = v10.m128_f32[0] * 0.5;
    v11.m128_f32[0] = v11.m128_f32[0] * 0.5;
    v12 = _mm_unpacklo_ps(_mm_unpacklo_ps(v10, v11), (__m128)0LL);
    *(__m128 *)*((_QWORD *)this + 7) = _mm_add_ps(v12, *(__m128 *)*((_QWORD *)this + 7));
    *(__m128 *)(*((_QWORD *)this + 7) + 16LL) = _mm_add_ps(v12, *(__m128 *)(*((_QWORD *)this + 7) + 16LL));
    *(__m128 *)(*((_QWORD *)this + 7) + 32LL) = _mm_add_ps(v12, *(__m128 *)(*((_QWORD *)this + 7) + 32LL));
    *(__m128 *)(*((_QWORD *)this + 7) + 48LL) = _mm_add_ps(v12, *(__m128 *)(*((_QWORD *)this + 7) + 48LL));
    *(__m128 *)(*((_QWORD *)this + 7) + 64LL) = _mm_add_ps(v12, *(__m128 *)(*((_QWORD *)this + 7) + 64LL));
    *(__m128 *)(*((_QWORD *)this + 7) + 80LL) = _mm_add_ps(v12, *(__m128 *)(*((_QWORD *)this + 7) + 80LL));
    *(__m128 *)(*((_QWORD *)this + 7) + 96LL) = _mm_add_ps(v12, *(__m128 *)(*((_QWORD *)this + 7) + 96LL));
    *(__m128 *)(*((_QWORD *)this + 7) + 112LL) = _mm_add_ps(v12, *(__m128 *)(*((_QWORD *)this + 7) + 112LL));
    *(__m128 *)(*((_QWORD *)this + 7) + 128LL) = _mm_add_ps(v12, *(__m128 *)(*((_QWORD *)this + 7) + 128LL));
    *(__m128 *)(*((_QWORD *)this + 7) + 144LL) = _mm_add_ps(v12, *(__m128 *)(*((_QWORD *)this + 7) + 144LL));
    *(__m128 *)(*((_QWORD *)this + 7) + 160LL) = _mm_add_ps(v12, *(__m128 *)(*((_QWORD *)this + 7) + 160LL));
    *(__m128 *)(*((_QWORD *)this + 7) + 176LL) = _mm_add_ps(v12, *(__m128 *)(*((_QWORD *)this + 7) + 176LL));
    *(__m128 *)(*((_QWORD *)this + 7) + 192LL) = _mm_add_ps(v12, *(__m128 *)(*((_QWORD *)this + 7) + 192LL));
    *(__m128 *)(*((_QWORD *)this + 7) + 208LL) = _mm_add_ps(v12, *(__m128 *)(*((_QWORD *)this + 7) + 208LL));
    *(__m128 *)(*((_QWORD *)this + 7) + 224LL) = _mm_add_ps(v12, *(__m128 *)(*((_QWORD *)this + 7) + 224LL));
    *(__m128 *)(*((_QWORD *)this + 7) + 240LL) = _mm_add_ps(v12, *(__m128 *)(*((_QWORD *)this + 7) + 240LL));
    *(__m128 *)(*((_QWORD *)this + 7) + 256LL) = _mm_add_ps(v12, *(__m128 *)(*((_QWORD *)this + 7) + 256LL));
    *(__m128 *)(*((_QWORD *)this + 7) + 272LL) = _mm_add_ps(v12, *(__m128 *)(*((_QWORD *)this + 7) + 272LL));
    *(__m128 *)(*((_QWORD *)this + 7) + 288LL) = _mm_add_ps(v12, *(__m128 *)(*((_QWORD *)this + 7) + 288LL));
    return (unsigned int)result;
  }
  return result;
}
