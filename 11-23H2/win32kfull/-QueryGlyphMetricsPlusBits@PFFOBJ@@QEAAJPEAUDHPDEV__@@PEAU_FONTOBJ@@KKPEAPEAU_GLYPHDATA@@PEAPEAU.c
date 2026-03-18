/*
 * XREFs of ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1C00C8E04
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C00C8524 (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C00C8CF4 (xInsertGlyphbitsRFONTOBJ.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02FCDCC (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1C00C8F80 (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00C9140 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C00C9A04 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?ValidateGlyphDataAndBitmap@@YA_NJKPEAX@Z @ 0x1C014031C (-ValidateGlyphDataAndBitmap@@YA_NJKPEAX@Z.c)
 */

__int64 __fastcall PFFOBJ::QueryGlyphMetricsPlusBits(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        int a4,
        unsigned int a5,
        struct _GLYPHDATA **a6,
        struct _GLYPHBITS **a7)
{
  __int64 v11; // rbx
  unsigned int v13; // edi
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // ecx
  void **v17; // [rsp+38h] [rbp-91h] BYREF
  __int64 v18; // [rsp+40h] [rbp-89h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-81h]
  __int64 v20; // [rsp+50h] [rbp-79h]
  char v21; // [rsp+58h] [rbp-71h]
  struct DHPDEV__ *v22; // [rsp+60h] [rbp-69h]
  int v23; // [rsp+68h] [rbp-61h]
  int v24; // [rsp+6Ch] [rbp-5Dh]
  struct _FONTOBJ *v25; // [rsp+70h] [rbp-59h]
  __int128 v26; // [rsp+78h] [rbp-51h]
  unsigned int v27; // [rsp+88h] [rbp-41h]
  int v28; // [rsp+8Ch] [rbp-3Dh]
  struct _GLYPHDATA **v29; // [rsp+90h] [rbp-39h]
  struct _GLYPHBITS **v30; // [rsp+98h] [rbp-31h]
  __int64 v31; // [rsp+A0h] [rbp-29h]
  __int128 v32; // [rsp+A8h] [rbp-21h]
  __int64 v33; // [rsp+B8h] [rbp-11h]
  _BYTE v34[16]; // [rsp+C8h] [rbp-1h] BYREF
  __int128 ThreadInformation; // [rsp+D8h] [rbp+Fh] BYREF

  v11 = *(_QWORD *)(*(_QWORD *)this + 88LL);
  if ( v11 != *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 32) + 23448LL) )
    return 0xFFFFFFFFLL;
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v34, this);
  LODWORD(v18) = 2;
  CurrentThread = KeGetCurrentThread();
  v21 = 0;
  ThreadInformation = 0LL;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, &ThreadInformation, 0x10u, 0LL) >= 0 )
  {
    v20 = ThreadInformation;
    v21 = 1;
  }
  v31 = 0LL;
  v33 = 0LL;
  v17 = &QueryGlyphMetricsPlusBitsRequest::`vftable';
  v13 = -1;
  v29 = a6;
  v27 = a5;
  v30 = a7;
  v32 = 0LL;
  v22 = a2;
  v23 = 1;
  v25 = a3;
  v24 = a4;
  v26 = 0LL;
  v28 = -1;
  v14 = UmfdClientSendAndWaitForCompletion(*(unsigned int *)(a3->iFile + 8), &v17);
  v15 = v28;
  if ( v14 < 0 )
    v15 = -1;
  if ( ValidateGlyphDataAndBitmap(v15, 1u, *a7) )
    v13 = v16;
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v34);
  return v13;
}
