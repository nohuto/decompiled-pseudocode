/*
 * XREFs of EngUnlockSurface @ 0x140035B00
 * Callers:
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1400F8150 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     ?MulDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1400F82C0 (-MulDisableSurface@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x140035F20 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

void __stdcall EngUnlockSurface(SURFOBJ *pso)
{
  HSURF hsurf; // rsi
  struct _BASEOBJECT *p_pvScan0; // r14
  struct OBJECT *EntryObject; // rbx
  unsigned int v4; // edi
  __int64 SessionState; // rax
  unsigned __int64 v6; // rdx
  GdiHandleManager *v7; // rbp
  __int64 v8; // r11
  unsigned int v9; // r10d
  unsigned int v10; // ecx
  __int64 v11; // r11
  __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // r10
  unsigned int v15; // r9d
  unsigned int v16; // ecx
  __int64 v17; // r10
  __int64 v18; // r8

  if ( pso )
  {
    hsurf = pso->hsurf;
    p_pvScan0 = (struct _BASEOBJECT *)&pso[-1].pvScan0;
    EntryObject = 0LL;
    v4 = (unsigned __int16)hsurf | ((unsigned int)hsurf >> 8) & 0xFF0000;
    SessionState = W32GetSessionState(pso);
    v6 = v4;
    v7 = *(GdiHandleManager **)(*(_QWORD *)(SessionState + 88) + 5672LL);
    if ( v4 >= 0x10000 )
    {
      if ( *(_DWORD *)v7 <= 0x10000u )
      {
        v6 = (unsigned __int16)hsurf;
      }
      else
      {
        v8 = *((_QWORD *)v7 + 2);
        v9 = *(_DWORD *)(v8 + 2056);
        if ( (unsigned __int16)hsurf >= v9 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
        {
          v13 = 0LL;
        }
        else
        {
          if ( (unsigned __int16)hsurf >= v9 )
            v10 = (((unsigned __int16)hsurf - v9) >> 16) + 1;
          else
            v10 = 0;
          v11 = *(_QWORD *)(v8 + 8LL * v10 + 8);
          if ( v10 )
            v12 = (unsigned __int16)hsurf + ((1 - v10) << 16) - v9;
          else
            v12 = (unsigned __int16)hsurf;
          v13 = 0LL;
          if ( (unsigned int)v12 < *(_DWORD *)(v11 + 20) )
            v13 = *(_QWORD *)v11 + 24 * v12;
        }
        if ( *(unsigned __int8 *)(v13 + 13) == HIWORD(v4) )
          v6 = (unsigned __int16)hsurf;
      }
    }
    v14 = *((_QWORD *)v7 + 2);
    v15 = *(_DWORD *)(v14 + 2056);
    if ( (unsigned int)v6 < v15 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
    {
      if ( (unsigned int)v6 >= v15 )
        v16 = (((unsigned int)v6 - v15) >> 16) + 1;
      else
        v16 = 0;
      v17 = *(_QWORD *)(v14 + 8LL * v16 + 8);
      if ( v16 )
        v6 = ((1 - v16) << 16) - v15 + (unsigned int)v6;
      v18 = 0LL;
      if ( (unsigned int)v6 < *(_DWORD *)(v17 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v17 + 24) + 8 * (v6 >> 8)) + 16LL * (unsigned __int8)v6 + 8) )
      {
        v18 = *(_QWORD *)v17 + 24LL * (unsigned int)v6;
      }
      if ( v18 && *(_BYTE *)(v18 + 14) == 5 && *(_WORD *)(v18 + 12) == WORD1(hsurf) )
        EntryObject = GdiHandleManager::GetEntryObject(v7, v4);
    }
    if ( p_pvScan0 == EntryObject )
      HmgDecrementShareReferenceCountEx(p_pvScan0, 0LL);
  }
}
