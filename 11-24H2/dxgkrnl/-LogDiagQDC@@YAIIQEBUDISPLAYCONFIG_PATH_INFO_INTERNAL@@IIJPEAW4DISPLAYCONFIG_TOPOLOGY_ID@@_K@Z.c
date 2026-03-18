/*
 * XREFs of ?LogDiagQDC@@YAIIQEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIJPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x14031D1E0
 * Callers:
 *     ?DxgkLogAndUpdateQDCCacheForDatabaseQuery@@YAJIJIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@W4DISPLAYCONFIG_TOPOLOGY_ID@@_K@Z @ 0x1401C46D0 (-DxgkLogAndUpdateQDCCacheForDatabaseQuery@@YAJIJIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@W4DISPL.c)
 *     ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x14031CFA0 (-QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFI.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004A724 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x14031DEC0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall LogDiagQDC(
        unsigned int a1,
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *const a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a6,
        unsigned __int64 a7)
{
  unsigned int v10; // ebx
  unsigned int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned int v14; // ebx
  unsigned int v16; // eax
  __int64 *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rdx
  __int64 v21; // rax

  v10 = a1;
  if ( (a3 & 7) == 1 )
  {
    v16 = 0;
    if ( a1 )
    {
      v17 = (__int64 *)a2;
      do
      {
        if ( *v17 >= 0 )
          break;
        ++v16;
        v17 += 27;
      }
      while ( v16 < v10 );
    }
    v10 = v16;
  }
  v11 = 200 * v10 + 88;
  v12 = operator new[](v11, 0x43434451u, 256LL);
  v13 = v12;
  if ( v12 )
  {
    *(_DWORD *)(v12 + 40) = 0;
    *(_QWORD *)(v12 + 32) = 0LL;
    *(_DWORD *)v12 = 48;
    *(_DWORD *)(v12 + 4) = v11;
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_OWORD *)(v12 + 16) = 0LL;
    *(_DWORD *)(v12 + 56) = 0;
    *(_DWORD *)(v12 + 52) = v10;
    *(_DWORD *)(v12 + 60) = a5;
    *(_DWORD *)(v12 + 64) = a4 | a3;
    if ( a6 )
      *(_DWORD *)(v12 + 68) = *(_DWORD *)a6;
    *(_DWORD *)(v12 + 72) = 200;
    *(_QWORD *)(v12 + 80) = a7;
    *(_DWORD *)(v12 + 48) = (a6 != 0LL ? 4 : 0) | (a2 == 0LL) | 2;
    if ( a2 && v10 )
    {
      v18 = v12 + 104;
      v19 = v10;
      v20 = (_QWORD *)((char *)a2 + 16);
      do
      {
        *(_QWORD *)(v18 - 16) = *(v20 - 2);
        *(_QWORD *)(v18 - 8) = *(v20 - 1);
        v21 = *v20;
        v20 += 27;
        *(_QWORD *)v18 = v21;
        *(_DWORD *)(v18 + 8) = *((_DWORD *)v20 - 52);
        *(_DWORD *)(v18 + 12) = *((_DWORD *)v20 - 51);
        *(_OWORD *)(v18 + 16) = *(_OWORD *)(v20 - 25);
        *(_OWORD *)(v18 + 32) = *(_OWORD *)(v20 - 23);
        *(_OWORD *)(v18 + 48) = *(_OWORD *)(v20 - 21);
        *(_DWORD *)(v18 + 64) = *((_DWORD *)v20 - 38);
        *(_DWORD *)(v18 + 68) = *((_DWORD *)v20 - 37);
        *(_QWORD *)(v18 + 72) = *(v20 - 18);
        *(_DWORD *)(v18 + 80) = *((_DWORD *)v20 - 34);
        *(_BYTE *)(v18 + 84) = *((_BYTE *)v20 - 132);
        *(_BYTE *)(v18 + 85) = *((_BYTE *)v20 - 131);
        *(_DWORD *)(v18 + 88) = *((_DWORD *)v20 - 32);
        *(_DWORD *)(v18 + 92) = *((_DWORD *)v20 - 31);
        *(_DWORD *)(v18 + 96) = *((_DWORD *)v20 - 30);
        *(_QWORD *)(v18 + 100) = *(_QWORD *)((char *)v20 - 116);
        *(_QWORD *)(v18 + 108) = *(_QWORD *)((char *)v20 - 108);
        *(_QWORD *)(v18 + 116) = *(_QWORD *)((char *)v20 - 100);
        *(_OWORD *)(v18 + 124) = *(_OWORD *)((char *)v20 - 92);
        *(_DWORD *)(v18 + 140) = *((_DWORD *)v20 - 19);
        *(_DWORD *)(v18 + 144) = *((_DWORD *)v20 - 18);
        *(_DWORD *)(v18 + 148) = *((_DWORD *)v20 - 17);
        *(_QWORD *)(v18 + 152) = *(v20 - 8);
        *(_QWORD *)(v18 + 160) = *(v20 - 7);
        *(_DWORD *)(v18 + 168) = *((_DWORD *)v20 - 12);
        *(_QWORD *)(v18 + 172) = *(_QWORD *)((char *)v20 - 36);
        *(_DWORD *)(v18 + 180) = *((_DWORD *)v20 - 5);
        v18 += 200LL;
        --v19;
      }
      while ( v19 );
    }
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v13);
    v14 = *(_DWORD *)(v13 + 40);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)v13);
  }
  else
  {
    WdLogSingleEntry1(6LL, 200 * v10 + 88);
    v14 = -1;
    WdLogGlobalForLineNumber = 1349;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Unable to allocate QDC diagnostics packet (SizeOfQDCPacket = 0x%I64x)",
      v11,
      0LL,
      0LL,
      0LL,
      0LL);
    DxgkLogCodePointPacket(0xAu, a3, a5, 0, 0LL);
  }
  return v14;
}
