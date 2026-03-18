/*
 * XREFs of ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x18019E548
 * Callers:
 *     ?Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z @ 0x18019E0D4 (-Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocateEntry@CAtlasTexture@@QEAAXPEAVCAtlasEntry@@@Z @ 0x18019E6B0 (-AllocateEntry@CAtlasTexture@@QEAAXPEAVCAtlasEntry@@@Z.c)
 *     ?Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z @ 0x1801A1048 (-Create@CAtlasTexture@@SAJPEAVCD3DDevice@@IPEAPEAV1@@Z.c)
 *     ?DetermineIdealAtlasSize@CAtlasManager@@CAII@Z @ 0x1801A1330 (-DetermineIdealAtlasSize@CAtlasManager@@CAII@Z.c)
 *     ??1?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@QEAA@XZ @ 0x1801A1948 (--1-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@std@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@?$vector@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@VCAtlasTexture@@U?$default_delete@VCAtlasTexture@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x180222530 (--$_Emplace_reallocate@V-$unique_ptr@VCAtlasTexture@@U-$default_delete@VCAtlasTexture@@@std@@@st.c)
 *     ??R?$default_delete@VCAtlasTexture@@@std@@QEBAXPEAVCAtlasTexture@@@Z @ 0x1802C5B84 (--R-$default_delete@VCAtlasTexture@@@std@@QEBAXPEAVCAtlasTexture@@@Z.c)
 */

__int64 __fastcall CAtlasManager::AllocateGradientStrip(CAtlasTexture ***this, struct CAtlasEntry *a2)
{
  unsigned int v4; // ecx
  __int64 v5; // rax
  CAtlasTexture **v6; // rax
  int v7; // edi
  unsigned int v8; // edx
  CAtlasTexture *v9; // rsi
  unsigned int v11; // eax
  struct CAtlasTexture *v12; // rdx
  CAtlasTexture **v13; // rdx
  struct CAtlasTexture *v14; // [rsp+38h] [rbp-18h] BYREF
  char v15; // [rsp+40h] [rbp-10h]
  struct CAtlasTexture *v16; // [rsp+70h] [rbp+20h] BYREF

  v4 = 0;
  v5 = (__int64)(this + 75);
  if ( !this )
    v5 = 1112LL;
  if ( *(_DWORD *)v5 )
  {
    v7 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x12u, 0LL);
  }
  else
  {
    v6 = *this;
    v7 = 0;
    while ( 1 )
    {
      v8 = v4;
      if ( v6 == this[1] )
        goto LABEL_14;
      v9 = *v6;
      if ( *((_DWORD *)*v6 + 7) )
        break;
      v4 = *((_DWORD *)v9 + 6);
      ++v6;
      if ( v8 > v4 )
        v4 = v8;
    }
    if ( v9 )
    {
LABEL_8:
      CAtlasTexture::AllocateEntry(v9, a2);
      return (unsigned int)v7;
    }
LABEL_14:
    v16 = 0LL;
    v14 = 0LL;
    v15 = 1;
    v11 = CAtlasManager::DetermineIdealAtlasSize(v4);
    v7 = CAtlasTexture::Create((struct CD3DDevice *)(this - 64), v11, &v14);
    if ( v15 )
    {
      v12 = v16;
      v16 = v14;
      if ( v12 )
        std::default_delete<CAtlasTexture>::operator()();
    }
    if ( v7 >= 0 )
    {
      v13 = this[1];
      v9 = v16;
      if ( v13 == this[2] )
      {
        std::vector<std::unique_ptr<CAtlasTexture>>::_Emplace_reallocate<std::unique_ptr<CAtlasTexture>>(
          this,
          v13,
          &v16);
      }
      else
      {
        v16 = 0LL;
        *v13 = v9;
        ++this[1];
      }
      if ( v16 )
        std::default_delete<CAtlasTexture>::operator()();
      goto LABEL_8;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x27u, 0LL);
    std::unique_ptr<CAtlasTexture>::~unique_ptr<CAtlasTexture>(&v16);
  }
  return (unsigned int)v7;
}
