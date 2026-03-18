/*
 * XREFs of ?GreExtEscape@@YAHPEAUHDC__@@HHPEADH1W4EntryPoint@RFONTOBJ@@@Z @ 0x1C0274F5C
 * Callers:
 *     NtGdiExtEscape @ 0x1C00D09E0 (NtGdiExtEscape.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0274574 (--0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1XFERDCOBJ@@QEAA@XZ @ 0x1C02746A0 (--1XFERDCOBJ@@QEAA@XZ.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1C0275074 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 */

__int64 __fastcall GreExtEscape(HDC a1, unsigned int a2, unsigned int a3, char *a4, unsigned int a5, char *a6)
{
  unsigned int v10; // ebx
  int v12; // [rsp+48h] [rbp-71h] BYREF
  int v13; // [rsp+4Ch] [rbp-6Dh]
  _QWORD v14[2]; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v15[40]; // [rsp+60h] [rbp-59h] BYREF
  _QWORD v16[12]; // [rsp+88h] [rbp-31h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  v10 = 0;
  if ( v14[0] )
  {
    v13 = *(unsigned __int16 *)(v14[0] + 12LL);
    v12 = 25;
    v10 = GreExtEscapeInternal((struct DCOBJ *)v14, a2, a3, a4, a5, a6, (const struct RFONTOBJ::Tag *)&v12);
  }
  else
  {
    XFERDCOBJ::XFERDCOBJ((XFERDCOBJ *)v16, a1);
    if ( v16[0] )
    {
      v13 = *(unsigned __int16 *)(v16[0] + 12LL);
      v12 = 25;
      v10 = GreExtEscapeInternal((struct DCOBJ *)v16, a2, a3, a4, a5, a6, (const struct RFONTOBJ::Tag *)&v12);
    }
    XFERDCOBJ::~XFERDCOBJ((XFERDCOBJ *)v16);
  }
  if ( v14[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v14);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v15);
  return v10;
}
