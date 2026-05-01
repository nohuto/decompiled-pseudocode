/*
 * XREFs of ?QueryCurrentMemoryUsage@ModernResourceEnforcer@@QEAAJPEBGPEAT_RM_SID@@KK_KKPEA_K3@Z @ 0x1800236E0
 * Callers:
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x1800233E0 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180044C40 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ModernResourceEnforcer::QueryCurrentMemoryUsage(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned int a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9)
{
  unsigned int v9; // r12d
  unsigned __int64 v10; // rsi
  unsigned int v12; // r13d
  unsigned int v13; // ebx
  __int64 (__fastcall *v16)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, unsigned int, unsigned __int64 *, _QWORD); // rax
  __int64 result; // rax
  unsigned int v19; // edi
  unsigned __int64 v20; // rax
  unsigned int v21; // r8d
  int v22; // r9d
  int v23; // r8d
  int v24; // r9d
  unsigned __int64 v25; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v27[9]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int64 v29; // [rsp+C0h] [rbp+18h] BYREF

  v9 = a7;
  v10 = a6;
  v12 = a5;
  v13 = 0;
  v16 = (__int64 (__fastcall *)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, unsigned int, unsigned __int64 *, _QWORD))*((_QWORD *)this + 3);
  v26 = 0LL;
  v25 = 0LL;
  result = v16(a3, a4, a2, a5, a6, a7, &v26, 0LL);
  LODWORD(v29) = result;
  if ( (int)result < 0 )
  {
    if ( (unsigned int)dword_1800E7278 > 4 )
    {
      if ( (unsigned __int8)tlgKeywordOn(&dword_1800E7278, 1LL) )
      {
        v27[0] = v10;
        v28 = v21;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
          (unsigned int)&dword_1800E7278,
          (unsigned int)&unk_1800D654D,
          v21,
          v22,
          (__int64)&v28,
          (__int64)v27);
        return (unsigned int)v29;
      }
      else
      {
        return v21;
      }
    }
  }
  else
  {
    result = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, unsigned int, unsigned __int64 *))this
              + 12))(
               a3,
               a4,
               a2,
               v12,
               v10,
               v9,
               &v25);
    v19 = result;
    if ( (int)result < 0 )
    {
      if ( (unsigned int)dword_1800E7278 > 4 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1800E7278, 1LL) )
        {
          v29 = v10;
          v28 = v19;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            (unsigned int)&dword_1800E7278,
            (unsigned int)&unk_1800D6595,
            v23,
            v24,
            (__int64)&v28,
            (__int64)&v29);
        }
        return v19;
      }
    }
    else
    {
      v20 = v25 << 12;
      if ( !is_mul_ok(v25, 0x1000uLL) )
      {
        v20 = -1LL;
        v13 = -1073741675;
      }
      *a8 = v26;
      *a9 = v20;
      return v13;
    }
  }
  return result;
}
