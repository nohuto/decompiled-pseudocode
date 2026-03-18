/*
 * XREFs of ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1402280BC
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x14000EA14 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV-$umpt.c)
 *     ?GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x140018544 (-GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@.c)
 *     ?GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1400C5BA4 (-GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@K.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1400C95C8 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall XEPALOBJ::vGetEntriesFrom(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 result; // rax
  unsigned int v7; // ebx
  unsigned int v9; // r11d
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned int v18; // eax
  unsigned int v19; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF
  unsigned int v21; // [rsp+28h] [rbp+28h]
  unsigned int v22; // [rsp+28h] [rbp+28h]

  result = (unsigned __int64)&retaddr;
  v7 = *(_DWORD *)(a2 + 28);
  if ( (*(_DWORD *)(a3 + 24) & 0x800) != 0 )
    v9 = *(_DWORD *)(a3 + 28);
  else
    v9 = 0;
  v10 = a5;
  if ( a5 )
  {
    if ( v9 )
    {
      do
      {
        v11 = (unsigned int)(v10 - 1);
        v10 = v11;
        v12 = (unsigned int)v11;
        v13 = *(unsigned __int16 *)(a4 + 2 * v11);
        if ( v13 >= v7 )
          v13 %= v7;
        v14 = *(_DWORD *)(*(_QWORD *)(a2 + 112) + 4LL * v13);
        v21 = v14;
        if ( HIBYTE(v14) == 2 )
        {
          v15 = (unsigned __int16)v14;
          if ( (unsigned __int16)v14 >= v9 )
            v15 = (unsigned __int16)v14 % v9;
          v21 = *(_DWORD *)(*(_QWORD *)(a3 + 112) + 4LL * v15);
        }
        HIBYTE(v21) = 0;
        result = v21;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 112LL) + 4 * v12) = v21;
      }
      while ( v10 );
    }
    else
    {
      do
      {
        v16 = (unsigned int)(v10 - 1);
        v10 = v16;
        v17 = (unsigned int)v16;
        v18 = *(unsigned __int16 *)(a4 + 2 * v16);
        if ( v18 >= v7 )
          v18 %= v7;
        v19 = *(_DWORD *)(*(_QWORD *)(a2 + 112) + 4LL * v18);
        v22 = v19;
        if ( HIBYTE(v19) == 2 )
          v22 = dword_1403619B0[v19 & 0xF];
        HIBYTE(v22) = 0;
        result = v22;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 112LL) + 4 * v17) = v22;
      }
      while ( v10 );
    }
  }
  return result;
}
