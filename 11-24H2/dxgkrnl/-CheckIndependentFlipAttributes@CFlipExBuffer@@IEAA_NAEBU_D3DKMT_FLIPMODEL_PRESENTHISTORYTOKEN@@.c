/*
 * XREFs of ?CheckIndependentFlipAttributes@CFlipExBuffer@@IEAA_NAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x14003234C
 * Callers:
 *     ?NotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N1@Z @ 0x140032300 (-NotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N1@.c)
 * Callees:
 *     <none>
 */

bool __fastcall CFlipExBuffer::CheckIndependentFlipAttributes(
        CFlipExBuffer *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2,
        bool *a3)
{
  char v6; // r11
  __int64 v7; // r8
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  float v13; // xmm4_4
  int v14; // eax
  float v15; // xmm5_4
  float v16; // xmm2_4
  float v17; // xmm3_4
  bool v18; // zf
  _DWORD *v19; // rcx
  __int64 v20; // r8

  *a3 = 0;
  if ( *((int *)this + 100) < 1 )
    return *((_DWORD *)this + 100) >= 1;
  v6 = 0;
  v7 = *((_BYTE *)this + 644) != 0 ? 0x168 : 0;
  if ( *(_DWORD *)((char *)this + v7 + 100) != a2->ScatterBlts.Blts[11].DestinationOffset.y
    || *(_DWORD *)((char *)this + v7 + 104) != a2->Reserved
    || *(_DWORD *)((char *)this + v7 + 108) != a2->SourceRect.left
    || *(_DWORD *)((char *)this + v7 + 112) != a2->SourceRect.top )
  {
    v6 = 1;
  }
  if ( *((_BYTE *)this + 640) )
  {
    if ( *(_DWORD *)((char *)this + v7 + 168) != a2->DestWidth
      || *(_DWORD *)((char *)this + v7 + 172) != a2->DestHeight
      || *(_DWORD *)((char *)this + v7 + 176) != a2->TargetRect.left
      || *(_DWORD *)((char *)this + v7 + 180) != a2->TargetRect.top
      || *(_DWORD *)((char *)this + v7 + 160) != a2->SourceRect.right )
    {
      goto LABEL_8;
    }
    v18 = *(_DWORD *)((char *)this + v7 + 164) == a2->SourceRect.bottom;
LABEL_50:
    if ( !v18 )
      goto LABEL_8;
    goto LABEL_10;
  }
  v13 = *(float *)((char *)this + v7 + 124);
  v14 = 3;
  if ( v13 != *(float *)&a2->TargetRect.bottom )
    goto LABEL_39;
  v15 = *(float *)((char *)this + v7 + 128);
  if ( v15 != a2->Transform[0]
    || *(float *)((char *)this + v7 + 136) != a2->Transform[2]
    || *(float *)((char *)this + v7 + 140) != a2->Transform[3] )
  {
    goto LABEL_39;
  }
  v16 = *(float *)((char *)this + v7 + 120);
  v17 = *(float *)&a2->TargetRect.right;
  if ( v16 != v17 || *(float *)((char *)this + v7 + 132) != a2->Transform[1] )
  {
    if ( v16 > 0.0
      && v17 > 0.0
      && *(float *)((char *)this + v7 + 132) > 0.0
      && a2->Transform[1] > 0.0
      && v13 == 0.0
      && v15 == 0.0 )
    {
      v14 = 2;
    }
LABEL_39:
    if ( *(_DWORD *)((char *)this + v7 + 116) != 1
      || v14 != 2
      || COERCE_INT(
           (float)((float)(*(_DWORD *)((char *)this + v7 + 108) - *(_DWORD *)((char *)this + v7 + 100))
                 * *(float *)((char *)this + v7 + 120))
         + 0.5) != COERCE_INT(
                     (float)((float)(a2->SourceRect.left - a2->ScatterBlts.Blts[11].DestinationOffset.y)
                           * *(float *)&a2->TargetRect.right)
                   + 0.5)
      || COERCE_INT(
           (float)((float)(*(_DWORD *)((char *)this + v7 + 112) - *(_DWORD *)((char *)this + v7 + 104))
                 * *(float *)((char *)this + v7 + 132))
         + 0.5) != COERCE_INT((float)((float)(a2->SourceRect.top - a2->Reserved) * a2->Transform[1]) + 0.5) )
    {
      goto LABEL_8;
    }
    goto LABEL_10;
  }
  if ( v6 )
  {
    if ( *(_DWORD *)((char *)this + v7 + 108) - *(_DWORD *)((char *)this + v7 + 100) != a2->SourceRect.left
                                                                                      - a2->ScatterBlts.Blts[11].DestinationOffset.y )
      goto LABEL_8;
    v18 = *(_DWORD *)((char *)this + v7 + 112) - *(_DWORD *)((char *)this + v7 + 104) == a2->SourceRect.top
                                                                                       - a2->Reserved;
    goto LABEL_50;
  }
LABEL_10:
  Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)a2->Flags.Value;
  v9 = *(_DWORD *)((char *)this + v7 + 184);
  if ( (((unsigned __int8)v9 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 1) == 0
    && *(_DWORD *)((char *)this + v7 + 116) == LODWORD(a2->RevealColor[3])
    && (((unsigned __int8)v9 ^ (unsigned __int8)(*(unsigned int *)&Value >> 1)) & 4) == 0
    && *(_DWORD *)((char *)this + v7 + 84) == LODWORD(a2->Transform[4])
    && *(_DWORD *)((char *)this + v7 + 48) == ((*(unsigned int *)&Value >> 7) & 3)
    && (((unsigned __int8)v9 ^ (unsigned __int8)(*(unsigned int *)&Value >> 1)) & 8) == 0 )
  {
    if ( v6
      || *(float *)((char *)this + v7 + 68) != *(float *)&a2->PresentCount
      || *(float *)((char *)this + v7 + 72) != a2->RevealColor[0]
      || *(float *)((char *)this + v7 + 76) != a2->RevealColor[1]
      || *(float *)((char *)this + v7 + 80) != a2->RevealColor[2]
      || *(_DWORD *)((char *)this + v7 + 96) != a2->CustomDurationFlipInterval )
    {
      *a3 = 1;
    }
    goto LABEL_22;
  }
LABEL_8:
  *((_DWORD *)this + 100) = -1;
LABEL_22:
  v18 = *((_BYTE *)this + 640) == 0;
  *(_OWORD *)((char *)this + 460) = *(_OWORD *)((char *)&a2->1 + 580);
  if ( v18 )
  {
    v19 = (_DWORD *)((char *)this + 480);
    v20 = 6LL;
    do
    {
      *v19 = *(_DWORD *)((char *)v19 + (char *)a2 - (char *)this + 276);
      ++v19;
      --v20;
    }
    while ( v20 );
  }
  else
  {
    *((_OWORD *)this + 33) = *(_OWORD *)&a2->DestWidth;
    *((_DWORD *)this + 130) = a2->SourceRect.right;
    *((_DWORD *)this + 131) = a2->SourceRect.bottom;
  }
  v10 = *((_DWORD *)this + 136) ^ ((unsigned __int8)*((_DWORD *)this + 136) ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 1;
  *((_DWORD *)this + 136) = v10;
  *((_DWORD *)this + 119) = LODWORD(a2->RevealColor[3]);
  v11 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 4;
  *((_DWORD *)this + 136) = v11;
  *((_DWORD *)this + 111) = LODWORD(a2->Transform[4]);
  *((_DWORD *)this + 102) = (a2->Flags.Value >> 7) & 3;
  *((_DWORD *)this + 136) = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 8;
  *((_DWORD *)this + 107) = a2->PresentCount;
  *((_DWORD *)this + 108) = LODWORD(a2->RevealColor[0]);
  *((_DWORD *)this + 109) = LODWORD(a2->RevealColor[1]);
  *((_DWORD *)this + 110) = LODWORD(a2->RevealColor[2]);
  *((_DWORD *)this + 114) = a2->CustomDurationFlipInterval;
  *((_BYTE *)this + 644) = 1;
  return *((_DWORD *)this + 100) >= 1;
}
