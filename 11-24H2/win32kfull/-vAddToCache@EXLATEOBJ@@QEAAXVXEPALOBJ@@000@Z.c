/*
 * XREFs of ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x14000D8A0
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14000EA14 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV-$umpt.c)
 *     GreAlphaBlend @ 0x140010F88 (GreAlphaBlend.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400D0DEC (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x1400D2138 (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14010E354 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 __fastcall EXLATEOBJ::vAddToCache(Gre::Base *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct Gre::Base::SESSION_GLOBALS *v9; // rbp
  unsigned int i; // edx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // rcx
  int v20; // edx
  _BYTE v22[24]; // [rsp+20h] [rbp-18h] BYREF

  v9 = Gre::Base::Globals(a1);
  SEMOBJ<13>::SEMOBJ<13>(v22, v9);
  for ( i = 0; i < 8; ++i )
  {
    v11 = *((unsigned int *)v9 + 1136);
    v12 = *((_QWORD *)v9 + 4 * v11 + 537);
    if ( !v12 )
      goto LABEL_6;
    if ( !*((_DWORD *)v9 + 8 * v11 + 1072) )
    {
      FreeThreadBufferWithTag(v12);
LABEL_6:
      PopThreadGuardedObject(*(_QWORD *)a1 - 32LL);
      *((_DWORD *)v9 + 8 * *((unsigned int *)v9 + 1136) + 1072) = 1;
      *((_QWORD *)v9 + 4 * *((unsigned int *)v9 + 1136) + 537) = *(_QWORD *)a1;
      v13 = *(_QWORD *)(a2 + 120);
      if ( v13 == a2 )
        v14 = *(_DWORD *)(a2 + 32);
      else
        v14 = *(_DWORD *)(v13 + 32);
      *((_DWORD *)v9 + 8 * *((unsigned int *)v9 + 1136) + 1076) = v14;
      v15 = *(_QWORD *)(a3 + 120);
      if ( v15 == a3 )
        v16 = *(_DWORD *)(a3 + 32);
      else
        v16 = *(_DWORD *)(v15 + 32);
      *((_DWORD *)v9 + 8 * *((unsigned int *)v9 + 1136) + 1077) = v16;
      v17 = *(_QWORD *)(a4 + 120);
      if ( v17 == a4 )
        v18 = *(_DWORD *)(a4 + 32);
      else
        v18 = *(_DWORD *)(v17 + 32);
      *((_DWORD *)v9 + 8 * *((unsigned int *)v9 + 1136) + 1078) = v18;
      v19 = *(_QWORD *)(a5 + 120);
      if ( v19 == a5 )
        v20 = *(_DWORD *)(a5 + 32);
      else
        v20 = *(_DWORD *)(v19 + 32);
      *((_DWORD *)v9 + 8 * *((unsigned int *)v9 + 1136) + 1079) = v20;
      *(_DWORD *)(*(_QWORD *)a1 + 36LL) = *((_DWORD *)v9 + 1136);
      *(_DWORD *)(a2 + 56) = *((_DWORD *)v9 + 1136);
      *((_DWORD *)v9 + 1136) = ((unsigned __int8)*((_DWORD *)v9 + 1136) + 1) & 7;
      return SEMOBJ<13>::vUnlock(v22);
    }
    *((_DWORD *)v9 + 1136) = ((_BYTE)v11 + 1) & 7;
  }
  return SEMOBJ<13>::vUnlock(v22);
}
