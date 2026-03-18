/*
 * XREFs of ?AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z @ 0x140186ADC
 * Callers:
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1401865C0 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 * Callees:
 *     ?bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z @ 0x140186B44 (-bCheckEudcFontCaps@RFONTOBJ@@QEBAHAEAVIFIOBJ@@@Z.c)
 */

void __fastcall RFONTOBJ::AddUFIToBuffer(
        RFONTOBJ *this,
        struct PFE *a2,
        struct _UNIVERSAL_FONT_ID **a3,
        int *a4,
        int a5)
{
  int v8; // edx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
  {
    v9[0] = *((_QWORD *)a2 + 4);
    if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v9) )
    {
      v8 = *a4;
      if ( *a4 < a5 )
      {
        *(_QWORD *)*a3 = *(_QWORD *)((char *)a2 + 84);
        *a3 = (struct _UNIVERSAL_FONT_ID *)((char *)*a3 + 8);
      }
      *a4 = v8 + 1;
    }
  }
}
