/*
 * XREFs of ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0275974
 * Callers:
 *     NtGdiStartDoc @ 0x1C02781A0 (NtGdiStartDoc.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0010D04 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     _tlgKeywordOn @ 0x1C00D9324 (_tlgKeywordOn.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C011C7F4 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C027449C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1C0275074 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?UmpdSecurityGateNoUmpdObj@@YA_NXZ @ 0x1C0275DA8 (-UmpdSecurityGateNoUmpdObj@@YA_NXZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C02770C4 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0277124 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall GreStartDocInternal(HDC a1, __int64 a2, int *a3, unsigned int a4, int a5)
{
  int v6; // edi
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v14; // edi
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rdx
  __int64 (__fastcall *v18)(__int64, _QWORD, _QWORD); // rdi
  DC *v19; // rcx
  _DWORD v20[2]; // [rsp+48h] [rbp-11h] BYREF
  __int64 v21; // [rsp+50h] [rbp-9h] BYREF
  XDCOBJ *v22; // [rsp+58h] [rbp-1h] BYREF
  DC *v23[7]; // [rsp+60h] [rbp+7h] BYREF

  v6 = (int)a1;
  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v23, a1);
  if ( !v23[0] )
  {
LABEL_32:
    DCOBJ::~DCOBJ((DCOBJ *)v23);
    return v9;
  }
  if ( *((_WORD *)v23[0] + 6) == 1 )
  {
    v14 = v6 & 0x7F0000;
    if ( v14 != 0x10000 && v14 != 6684672 )
    {
      v20[1] = *((unsigned __int16 *)v23[0] + 6);
      v15 = *((_QWORD *)v23[0] + 6);
      v21 = v15;
      v20[0] = 26;
      v16 = *(_DWORD *)(v15 + 40);
      if ( (v16 & 1) == 0 && *(_QWORD *)(v15 + 2536) && !*((_DWORD *)v23[0] + 8) && !*((_QWORD *)v23[0] + 62) )
      {
        if ( (v16 & 0x8000) != 0 )
        {
          if ( PDEVOBJ::bMakeSurface((PDEVOBJ *)&v21, 0LL) )
          {
            v17 = v21;
            *a3 = *(_DWORD *)(*(_QWORD *)(v21 + 2528) + 112LL) & 0x2000000;
            DC::pSurface(v23[0], *(struct SURFACE **)(v17 + 2528));
            if ( *a3 )
              *((_QWORD *)v23[0] + 64) = *(_QWORD *)(*(_QWORD *)(v21 + 2528) + 56LL);
            DC::bSetDefaultRegion(v23[0]);
            v22 = 0LL;
            v18 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v21 + 2944);
            if ( (*(_DWORD *)(v21 + 40) & 0x8000) != 0 )
            {
              v22 = (XDCOBJ *)v23;
              if ( (*((_DWORD *)v23[0] + 11) & 2) != 0 )
              {
                XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v23);
                *((_DWORD *)v23[0] + 11) &= ~2u;
              }
            }
            if ( !UmpdSecurityGateNoUmpdObj() || v18 )
              LODWORD(v18) = v18(
                               (*(_QWORD *)(v21 + 2528) + 24LL) & -(__int64)(*(_QWORD *)(v21 + 2528) != 0LL),
                               *(_QWORD *)(a2 + 8),
                               a4);
            RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v22);
            v19 = v23[0];
            if ( *((_DWORD *)v23[0] + 523) != -1 )
            {
              a5 = *((_DWORD *)v23[0] + 523);
              GreExtEscapeInternal(
                (struct DCOBJ *)v23,
                0x11u,
                4u,
                (char *)&a5,
                0,
                0LL,
                (const struct RFONTOBJ::Tag *)v20);
              *((_DWORD *)v23[0] + 523) = -1;
              v19 = v23[0];
            }
            if ( (*((_DWORD *)v19 + 9) & 0x400) != 0 )
            {
              LOWORD(a5) = 1;
              GreExtEscapeInternal(
                (struct DCOBJ *)v23,
                0x21u,
                2u,
                (char *)&a5,
                0,
                0LL,
                (const struct RFONTOBJ::Tag *)v20);
              *((_DWORD *)v23[0] + 9) &= ~0x400u;
              v19 = v23[0];
            }
            if ( (_DWORD)v18 )
            {
              v9 = a4;
              *((_DWORD *)v19 + 27) = *((_DWORD *)v19 + 26);
            }
            if ( v22 )
              XDCOBJ::vSaveAttributesAlways(v22);
          }
        }
        else
        {
          v9 = -1;
        }
      }
    }
    goto LABEL_32;
  }
  if ( (unsigned int)dword_1C0354098 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C0354098, 0x400000000000LL) )
    {
      a5 = 0;
      v20[0] = v12;
      v22 = (XDCOBJ *)0x1000000;
      LODWORD(v21) = 74780;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v10,
        byte_1C031E89C,
        v11,
        v12,
        (__int64)&v21,
        (__int64)&v22,
        (__int64)v20,
        (__int64)&a5);
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v23);
  return 0xFFFFFFFFLL;
}
