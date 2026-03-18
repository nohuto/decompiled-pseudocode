/*
 * XREFs of ?TryUnlockSurface@UMPDOBJ@@SA_NPEAU_SURFOBJ@@@Z @ 0x140210860
 * Callers:
 *     NtGdiEngUnlockSurface @ 0x140210800 (NtGdiEngUnlockSurface.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x140007028 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x14001F1E8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 */

char __fastcall UMPDOBJ::TryUnlockSurface(struct _SURFOBJ *a1)
{
  HSURF v1; // rdi
  char v2; // bl
  signed __int64 v4; // rax
  __int64 v5; // rtt
  __int64 v6; // rcx
  _BYTE v7[32]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v8; // [rsp+70h] [rbp-28h]
  LONG *p_lDelta; // [rsp+B8h] [rbp+20h]

  v1 = 0LL;
  v2 = 0;
  if ( a1 )
  {
    p_lDelta = &a1[-1].lDelta;
    if ( a1[-1].lDelta != 1431130959 )
      return 0;
    v1 = (HSURF)*((_QWORD *)p_lDelta + 1);
    if ( !v1 )
      return 0;
    EngFreeUserMem(p_lDelta);
  }
  if ( v1 )
  {
    SURFREF::SURFREF((SURFREF *)v7, v1);
    if ( !v8
      || (*(_DWORD *)(v8 + 112) & 0x240000) != 0x240000
      || (v4 = *(_QWORD *)(v8 + 560), v2 = 1, !v4)
      || (v5 = *(_QWORD *)(v8 + 560),
          v5 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 560), v4 - 1, v4)) )
    {
      v2 = 0;
      if ( (unsigned int)dword_140398BB8 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_140398BB8, 0x200000000000LL) )
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v6,
            (__int64)&unk_14036A2D3);
      }
    }
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v7);
  }
  return v2;
}
