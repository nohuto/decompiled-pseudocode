/*
 * XREFs of GetFixupScan @ 0x1400EFB60
 * Callers:
 *     ShrinkDIB_CY @ 0x1400EDAE0 (ShrinkDIB_CY.c)
 *     ShrinkDIB_CY_SrkCX @ 0x1400EE710 (ShrinkDIB_CY_SrkCX.c)
 *     FastExpAA_CY @ 0x1400EF480 (FastExpAA_CY.c)
 *     GrayShrinkDIB_CY @ 0x1400F0870 (GrayShrinkDIB_CY.c)
 *     RepDIB_CY @ 0x1400F0EC0 (RepDIB_CY.c)
 *     ExpandDIB_CY @ 0x1400F11C0 (ExpandDIB_CY.c)
 *     ExpandDIB_CY_ExpCX @ 0x14019E5E0 (ExpandDIB_CY_ExpCX.c)
 *     SkipDIB_CY @ 0x1401CEDC0 (SkipDIB_CY.c)
 *     GrayExpandDIB_CY @ 0x1402F8ED0 (GrayExpandDIB_CY.c)
 *     GrayExpandDIB_CY_ExpCX @ 0x1402F9650 (GrayExpandDIB_CY_ExpCX.c)
 *     TileDIB_CY @ 0x1402FA250 (TileDIB_CY.c)
 * Callees:
 *     FixupGrayScan @ 0x1400EFC9C (FixupGrayScan.c)
 *     FixupColorScan @ 0x1400F0050 (FixupColorScan.c)
 *     MappingBGR @ 0x1402FA18C (MappingBGR.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GetFixupScan(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // r9d
  char *v5; // r8
  int v7; // eax
  int v8; // edx
  int v9; // eax
  char v10; // dl
  unsigned int v11; // eax
  unsigned int v12; // eax

  v2 = *a1;
  if ( (*a1 & 0x40) != 0 )
  {
    if ( (a1[2] & 4) != 0 )
      FixupGrayScan(a1, a2);
    else
      FixupColorScan(a1, a2);
  }
  else
  {
    if ( (v2 & 0x20) != 0 )
    {
      v7 = a1[10];
      v8 = a1[15] + 1;
      a1[15] = v8;
      if ( v8 > v7 )
      {
        a1[15] = v7;
        v8 = v7;
      }
      v5 = (char *)(a1 + 2);
      v9 = a1[17] * (v7 - v8);
      *((_BYTE *)a1 + 8) |= 2u;
      *((_QWORD *)a1 + 6) = *((_QWORD *)a1 + 4) + v9;
      *a1 = v2 & 0xFFFFFFDF;
    }
    else
    {
      v5 = (char *)(a1 + 2);
    }
    if ( a2 )
    {
      (*((void (__fastcall **)(char *, __int64))a1 + 3))(v5, a2);
    }
    else
    {
      v10 = *v5;
      if ( (*v5 & 2) != 0 )
      {
        v11 = a1[15];
        if ( v11 && (v12 = v11 - 1, (a1[15] = v12) != 0) )
        {
          *((_QWORD *)a1 + 6) += (int)a1[17];
        }
        else if ( (v10 & 1) != 0 )
        {
          *((_QWORD *)a1 + 6) = *((_QWORD *)a1 + 4);
          a1[15] = a1[10];
        }
        else
        {
          *v5 = v10 & 0xFD;
        }
      }
    }
  }
  if ( (*a1 & 8) != 0 )
  {
    if ( a2 )
    {
      MappingBGR(a2, a1[14], *((_QWORD *)a1 + 49), *((_QWORD *)a1 + 56));
      *((_QWORD *)a1 + 56) += (int)a1[118];
      if ( *((_QWORD *)a1 + 56) == *((_QWORD *)a1 + 57) )
        *((_QWORD *)a1 + 56) = *((_QWORD *)a1 + 58);
    }
  }
  return a2;
}
