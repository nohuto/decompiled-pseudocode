/*
 * XREFs of ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x1801EA800
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18002F5A0 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001D7A0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddIntervalOneDxBltEventId(CLegacySurfaceManager *this, __int64 a2)
{
  char *v2; // rbx
  unsigned int v3; // edi
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // r9
  unsigned int v8; // ecx
  int v9; // esi
  int v10; // r9d
  unsigned int v12; // eax
  _QWORD *v13; // rcx
  __int64 *v14; // [rsp+40h] [rbp+8h] BYREF
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  v2 = (char *)this + 176;
  v3 = 0;
  v4 = *((unsigned int *)this + 50);
  v5 = 0;
  v6 = *((_QWORD *)this + 22);
  if ( (_DWORD)v4 )
  {
    v13 = (_QWORD *)*((_QWORD *)this + 22);
    do
    {
      if ( a2 == *v13 )
        break;
      ++v5;
      ++v13;
    }
    while ( v5 < (unsigned int)v4 );
  }
  if ( v5 == *((_DWORD *)this + 50) )
  {
    v8 = v4 + 1;
    if ( (int)v4 + 1 < (unsigned int)v4 )
    {
      v3 = -2147024362;
      v12 = 181;
      v9 = -2147024362;
      v10 = -2147024362;
    }
    else
    {
      if ( v8 <= *((_DWORD *)v2 + 5) )
      {
        *(_QWORD *)(v6 + 8 * v4) = a2;
        *((_DWORD *)v2 + 6) = v8;
        return v3;
      }
      v14 = &v15;
      v9 = DynArrayImpl<0>::Grow((__int64)v2, 8u, 1, 0, (unsigned __int64 *)&v14);
      v10 = v9;
      v3 = v9;
      if ( v9 >= 0 )
      {
        *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)v2 + 6))++) + *(_QWORD *)v2) = *v14;
        return v3;
      }
      v12 = 192;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v12, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x1C5u, 0LL);
  }
  return v3;
}
