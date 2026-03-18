/*
 * XREFs of ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x14020FF40
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x140007028 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14001487C (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x14001F1E8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D8298 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D8380 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D9ADC (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 *     ?vClient@UMPDOBJ@@QEAAXPEAX@Z @ 0x14020090C (-vClient@UMPDOBJ@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

_QWORD *__fastcall UMPDDrvEnableSurface(struct DHPDEV__ *a1)
{
  _QWORD *v1; // rdi
  UMPDOBJ *v3; // rbx
  int v4; // eax
  HSURF v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v9; // r8
  unsigned __int64 i; // rdx
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  size_t Size; // [rsp+20h] [rbp-49h]
  HSURF v16; // [rsp+48h] [rbp-21h] BYREF
  __int64 v17; // [rsp+50h] [rbp-19h]
  UMPDOBJ *v18; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v19[32]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v20; // [rsp+80h] [rbp+17h]
  _DWORD v21[2]; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v22; // [rsp+90h] [rbp+27h]
  __int64 v23; // [rsp+98h] [rbp+2Fh]
  struct DHPDEV__ *v24; // [rsp+A0h] [rbp+37h]

  v1 = 0LL;
  *(_WORD *)((char *)v21 + 1) = 0;
  HIBYTE(v21[0]) = 0;
  v22 = 0LL;
  v16 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v18);
  v3 = v18;
  *(_WORD *)((char *)v21 + 1) = 0;
  HIBYTE(v21[0]) = 0;
  v22 = 0LL;
  if ( !v18 )
    goto LABEL_43;
  v21[1] = 3;
  LOBYTE(v21[0]) = 0;
  v23 = *(_QWORD *)v18;
  v24 = a1;
  LODWORD(Size) = 8;
  v4 = UMPDOBJ::Thunk(v18, v21, 0x20u, &v16, Size);
  v5 = v16;
  if ( v4 == -1 )
    v5 = 0LL;
  if ( !v5 )
    goto LABEL_42;
  SURFREF::SURFREF((SURFREF *)v19, v5);
  if ( !v20 )
  {
    v5 = 0LL;
LABEL_41:
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v19);
LABEL_42:
    v1 = v5;
    goto LABEL_43;
  }
  CurrentThread = GreGetCurrentThread(v7, v6);
  if ( !CurrentThread )
    goto LABEL_23;
  v9 = *((_QWORD *)CurrentThread + 42);
  if ( !v9 )
    goto LABEL_23;
  for ( i = 0LL; i < *(_QWORD *)(v9 + 32); ++i )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v9 + 40) + 4 * i) == ((unsigned __int16)v5 | ((unsigned int)v5 >> 8) & 0xFF0000) )
      goto LABEL_14;
  }
  if ( !ThreadRestrictNewHandlesRegion::Protect(*(struct _GRETHREAD **)v9, v5) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v19);
    XUMPDOBJ::~XUMPDOBJ(&v18);
    return 0LL;
  }
LABEL_14:
  v12 = v20;
  if ( *(_DWORD *)(v20 + 8) == 1 )
  {
    if ( !*(_QWORD *)(v20 + 48) )
    {
      if ( (unsigned int)dword_140398BB8 <= 5 || !tlgKeywordOn((__int64)&dword_140398BB8, 0x400000000000LL) )
        goto LABEL_23;
      goto LABEL_21;
    }
    v14 = *(unsigned int *)(v20 + 112);
    if ( (v14 & 0x40000) == 0 )
    {
      if ( (unsigned int)dword_140398BB8 <= 5 || !tlgKeywordOn((__int64)&dword_140398BB8, 0x400000000000LL) )
        goto LABEL_23;
LABEL_21:
      LODWORD(v16) = 0;
      goto LABEL_22;
    }
    if ( *(_WORD *)(v20 + 100) == 1 && (v14 & 0x29) != 0x29 )
      v5 = 0LL;
    if ( (v14 & 0x4000000) != 0 )
    {
      if ( (unsigned int)dword_140398BB8 > 5 && tlgKeywordOn((__int64)&dword_140398BB8, 0x400000000000LL) )
      {
        LODWORD(v16) = 0;
        v17 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v14,
          (__int64)&unk_14036A13A);
        v12 = v20;
      }
      v5 = 0LL;
    }
    if ( *((_BYTE *)v3 + 456) )
    {
      if ( v12 )
        v1 = (_QWORD *)(v12 + 24);
      UMPDOBJ::vClient((UMPDOBJ *)v14, v1);
    }
    goto LABEL_41;
  }
  if ( (unsigned int)dword_140398BB8 <= 5 || !tlgKeywordOn((__int64)&dword_140398BB8, 0x400000000000LL) )
    goto LABEL_23;
  LODWORD(v16) = 75758;
LABEL_22:
  v17 = 0x1000000LL;
  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
    v13,
    (__int64)&unk_14036A13A);
LABEL_23:
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v19);
LABEL_43:
  XUMPDOBJ::~XUMPDOBJ(&v18);
  return v1;
}
