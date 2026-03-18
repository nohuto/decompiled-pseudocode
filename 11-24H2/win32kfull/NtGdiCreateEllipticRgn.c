/*
 * XREFs of NtGdiCreateEllipticRgn @ 0x1400E59A0
 * Callers:
 *     <none>
 * Callees:
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x140024FE0 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z @ 0x1400E7A6C (-bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1400E7C5C (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ??0EBOX@@QEAA@AEAVERECTL@@H@Z @ 0x1400E8240 (--0EBOX@@QEAA@AEAVERECTL@@H@Z.c)
 */

__int64 __fastcall NtGdiCreateEllipticRgn(unsigned int a1, unsigned int a2, int a3, int a4)
{
  int v8; // r8d
  ULONG v9; // ecx
  __int64 v11; // rbx
  unsigned int v12; // esi
  unsigned int v13; // edi
  unsigned int v14; // ebx
  unsigned __int64 v15; // [rsp+28h] [rbp-89h] BYREF
  int v16; // [rsp+30h] [rbp-81h]
  int v17; // [rsp+34h] [rbp-7Dh]
  _BYTE v18[8]; // [rsp+38h] [rbp-79h] BYREF
  __int64 v19; // [rsp+40h] [rbp-71h]
  _DWORD v20[20]; // [rsp+B8h] [rbp+7h] BYREF

  PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v18);
  if ( !v19 )
  {
    EngSetLastError(8u);
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v18);
    return 0LL;
  }
  v15 = __PAIR64__(a2, a1);
  v16 = a3;
  v17 = a4;
  if ( (a1 & 0xF8000000) == 0 || (a1 & 0xF8000000) == -134217728 )
  {
    v12 = a4 & 0xF8000000;
    if ( !v12 || v12 == -134217728 )
    {
      v13 = a3 & 0xF8000000;
      if ( !v13 || v13 == -134217728 )
      {
        v14 = a2 & 0xF8000000;
        if ( !v14 || v14 == -134217728 )
        {
          EBOX::EBOX((EBOX *)v20, (struct ERECTL *)&v15, v8);
          if ( v20[0] )
          {
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v15);
            if ( v15 )
            {
LABEL_16:
              v11 = RGNOBJ::hrgnAssociate((RGNOBJ *)&v15);
              if ( !v11 )
                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v15);
              goto LABEL_7;
            }
          }
          else if ( (unsigned int)bEllipse((struct EPATHOBJ *)v18, (struct EBOX *)v20) )
          {
            if ( EPATHOBJ::bFlatten((EPATHOBJ *)v18) )
            {
              RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v15, (struct EPATHOBJ *)v18, 1u, 0LL);
              if ( v15 )
              {
                RGNOBJ::vTighten((RGNOBJ *)&v15);
                goto LABEL_16;
              }
            }
          }
          v9 = 8;
          goto LABEL_6;
        }
      }
    }
  }
  v9 = 87;
LABEL_6:
  EngSetLastError(v9);
  v11 = 0LL;
LABEL_7:
  PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v18);
  return v11;
}
