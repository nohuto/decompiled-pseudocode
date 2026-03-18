/*
 * XREFs of ?GreExtEscape@@YAHPEAUHDC__@@HHPEADH1W4EntryPoint@RFONTOBJ@@@Z @ 0x1400C2548
 * Callers:
 *     NtGdiExtEscape @ 0x14025E9E0 (NtGdiExtEscape.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1400C2818 (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 *     ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140325C78 (--0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1XFERDCOBJ@@QEAA@XZ @ 0x140325ECC (--1XFERDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreExtEscape(HDC a1, int a2, int a3, char *a4, unsigned int a5, char *a6)
{
  unsigned int v10; // ebx
  int v12; // [rsp+48h] [rbp-C0h] BYREF
  int v13; // [rsp+4Ch] [rbp-BCh]
  _QWORD v14[14]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v15[14]; // [rsp+C8h] [rbp-40h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v15, a1);
  v10 = 0;
  if ( v15[0] )
  {
    v13 = *(unsigned __int16 *)(v15[0] + 12LL);
    v12 = 25;
    v10 = GrepExtEscape((struct XDCOBJ *)v15, a2, a3, a4, a5, a6, (const struct RFONTOBJ::Tag *)&v12);
  }
  else
  {
    XFERDCOBJ::XFERDCOBJ((XFERDCOBJ *)v14, a1);
    if ( v14[0] )
    {
      v13 = *(unsigned __int16 *)(v14[0] + 12LL);
      v12 = 25;
      v10 = GrepExtEscape((struct XDCOBJ *)v14, a2, a3, a4, a5, a6, (const struct RFONTOBJ::Tag *)&v12);
    }
    XFERDCOBJ::~XFERDCOBJ((XFERDCOBJ *)v14);
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v15);
  return v10;
}
