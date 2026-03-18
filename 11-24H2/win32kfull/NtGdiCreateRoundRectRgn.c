/*
 * XREFs of NtGdiCreateRoundRectRgn @ 0x1400E8050
 * Callers:
 *     <none>
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x140024FE0 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1400E7C5C (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ??0EBOX@@QEAA@AEAVERECTL@@H@Z @ 0x1400E8240 (--0EBOX@@QEAA@AEAVERECTL@@H@Z.c)
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1400E8608 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 */

__int64 __fastcall NtGdiCreateRoundRectRgn(unsigned int a1, unsigned int a2, int a3, int a4, int a5, int a6)
{
  int v10; // r8d
  ULONG v11; // ecx
  __int64 v13; // rbx
  unsigned int v14; // esi
  unsigned int v15; // edi
  unsigned int v16; // ebx
  unsigned __int64 v17; // [rsp+28h] [rbp-99h] BYREF
  int v18; // [rsp+30h] [rbp-91h]
  int v19; // [rsp+34h] [rbp-8Dh]
  _QWORD v20[16]; // [rsp+38h] [rbp-89h] BYREF
  _DWORD v21[20]; // [rsp+B8h] [rbp-9h] BYREF

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v20);
  if ( !v20[1] )
  {
    EngSetLastError(8u);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v20);
    return 0LL;
  }
  v17 = __PAIR64__(a2, a1);
  v18 = a3;
  v19 = a4;
  if ( (a1 & 0xF8000000) != 0 && (a1 & 0xF8000000) != -134217728
    || (v14 = a4 & 0xF8000000) != 0 && v14 != -134217728
    || (v15 = a3 & 0xF8000000) != 0 && v15 != -134217728
    || (v16 = a2 & 0xF8000000) != 0 && v16 != -134217728 )
  {
    v11 = 87;
  }
  else
  {
    EBOX::EBOX((EBOX *)v21, (struct ERECTL *)&v17, v10);
    if ( v21[0] )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v17);
      if ( v17 )
      {
LABEL_16:
        v13 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v17);
        if ( !v13 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v17);
        goto LABEL_7;
      }
    }
    else if ( (unsigned int)bRoundRect((struct EPATHOBJ *)v20, (struct EBOX *)v21, a5, a6) )
    {
      if ( EPATHOBJ::bFlatten((EPATHOBJ *)v20) )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v17, (struct EPATHOBJ *)v20, 1u, 0LL);
        if ( v17 )
        {
          RGNOBJ::vTighten((RGNOBJ *)&v17);
          goto LABEL_16;
        }
      }
    }
    v11 = 8;
  }
  EngSetLastError(v11);
  v13 = 0LL;
LABEL_7:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v20);
  return v13;
}
