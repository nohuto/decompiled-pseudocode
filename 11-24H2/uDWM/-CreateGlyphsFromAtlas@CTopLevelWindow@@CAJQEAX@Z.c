/*
 * XREFs of ?CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z @ 0x1800238B4
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x18000A684 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180024118 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow::CreateGlyphsFromAtlas(void *const a1)
{
  __int64 v1; // r8
  unsigned int v2; // ebp
  __int64 i; // rbx
  __int64 j; // rdi
  __int64 v6; // r14
  _BYTE *v7; // r15
  __int64 k; // rsi
  int BitmapsFromAtlasImageStrip; // eax

  v1 = CTopLevelWindow::s_rgpwfWindowFrames;
  v2 = 0;
  for ( i = 0LL; (unsigned int)i < 6; i = (unsigned int)(i + 1) )
  {
    if ( *(_QWORD *)(v1 + 8 * i) )
    {
      for ( j = 0LL; (unsigned int)j < 0xA; j = (unsigned int)(j + 1) )
      {
        v6 = 12 * j;
        if ( (unsigned int)(i - 4) <= 1 )
          v7 = (char *)&unk_180105CC0 + v6 + 4;
        else
          v7 = (char *)&unk_180105CC0 + v6;
        if ( *v7 )
        {
          for ( k = 0LL; (unsigned int)k < 4; k = (unsigned int)(k + 1) )
          {
            BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                           a1,
                                           (unsigned __int8)v7[k],
                                           4u,
                                           0LL,
                                           320 * k
                                         + 200
                                         + *(_QWORD *)(v1 + 8 * i)
                                         + *(unsigned int *)((char *)&unk_180105CC0 + v6 + 8));
            v2 = BitmapsFromAtlasImageStrip;
            if ( BitmapsFromAtlasImageStrip < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BitmapsFromAtlasImageStrip, 0x29Fu, 0LL);
              return v2;
            }
            v1 = CTopLevelWindow::s_rgpwfWindowFrames;
          }
        }
      }
    }
  }
  return v2;
}
