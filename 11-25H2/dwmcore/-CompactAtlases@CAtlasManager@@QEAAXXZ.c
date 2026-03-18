/*
 * XREFs of ?CompactAtlases@CAtlasManager@@QEAAXXZ @ 0x1801A1120
 * Callers:
 *     ?AdvanceFrame@CD3DDevice@@QEAAJXZ @ 0x180030658 (-AdvanceFrame@CD3DDevice@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z @ 0x1801A1218 (-CompactSingleAtlas@CAtlasManager@@AEAAJPEA_N@Z.c)
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x1801A1374 (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 */

void __fastcall CAtlasManager::CompactAtlases(CAtlasManager *this)
{
  __int64 v1; // rdi
  unsigned int v3; // r8d
  __int64 v4; // r11
  unsigned int v5; // r9d
  __int64 *v6; // r10
  __int64 *v7; // rdx
  __int64 v8; // rax
  int v9; // ecx
  int v10; // eax
  bool v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64)this + 600;
  if ( !this )
    v1 = 1112LL;
  v3 = 0;
  if ( *(_DWORD *)v1 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304307, 0x44u, 0LL);
  }
  else
  {
    v4 = *(_QWORD *)this;
    v5 = 0;
    v6 = (__int64 *)*((_QWORD *)this + 1);
    v7 = *(__int64 **)this;
    if ( *(__int64 **)this != v6 )
    {
      do
      {
        v8 = *v7++;
        v9 = *(_DWORD *)(v8 + 24);
        v3 += v9;
        v5 += v9 - *(_DWORD *)(v8 + 28);
      }
      while ( v7 != v6 );
      if ( v5 < v3 / 3 )
      {
        v11 = 0;
        if ( (__int64 *)((char *)v6 - v4) == (__int64 *)8 )
        {
          v10 = CAtlasManager::CompactSingleAtlas(this, &v11);
          if ( v10 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x54u, 0LL);
        }
        else
        {
          CAtlasManager::MergeAtlases(this, &v11);
        }
        if ( v11 && !*(_DWORD *)v1 )
          *((_BYTE *)this + 987) = 1;
      }
    }
  }
}
