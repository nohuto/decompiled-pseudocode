/*
 * XREFs of ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x18000C300
 * Callers:
 *     ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000BDD8 (-OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180012380 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18000C4D8 (-ForEachEntry@-$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@QEAAJ$$QEA.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42AC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x1800BFF80 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     WPP_SF_S @ 0x1800C033C (WPP_SF_S.c)
 */

void __fastcall CAudioSessionManager::NotifyActiveSession(CAudioSessionManager *this, struct CAudioSession *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // esi
  unsigned int v7; // edi
  unsigned int *v8; // rax
  unsigned int *v9; // r14
  unsigned __int64 v10; // rdx
  _WORD *v11; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // r8
  __int16 v14; // ax
  _WORD *v15; // rax
  char *v16; // r8
  __int64 v17; // r10
  __int16 v18; // r11
  char *v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // r10
  signed __int64 v22; // r8
  __int16 v23; // cx
  char *v24; // rcx
  HANDLE ProcessHeap; // rax

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_a93cb6bcfd8139528881ae8cee6da3d9_Traceguids, 0LL);
  }
  v4 = *((_DWORD *)this + 64);
  v5 = 2 * *(_DWORD *)(*((_QWORD *)a2 + 82) - 16LL) + 2;
  v6 = 2 * v4 + 2;
  v7 = v5 + 2 * v4 + 74;
  v8 = (unsigned int *)operator new[](v7, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( v8 )
  {
    v8[13] = v5 + 72;
    v10 = (unsigned __int64)v5 >> 1;
    v11 = v8 + 18;
    *v8 = v7;
    v8[1] = 64;
    v8[6] = v5;
    v8[12] = v6;
    if ( v10 )
    {
      v12 = 2147483646 - v10;
      v13 = *((_QWORD *)a2 + 82) - (_QWORD)v11;
      do
      {
        if ( !(v12 + v10) )
          break;
        v14 = *(_WORD *)((char *)v11 + v13);
        if ( !v14 )
          break;
        *v11++ = v14;
        --v10;
      }
      while ( v10 );
      v15 = v11 - 1;
      if ( v10 )
        v15 = v11;
      *v15 = 0;
    }
    if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(
                            (char *)this + 240,
                            v10) )
      v16 = *(char **)v16;
    v19 = (char *)v9 + v9[13];
    v20 = (unsigned __int64)v6 >> 1;
    if ( v20 )
    {
      v21 = v17 - v20;
      v22 = v16 - v19;
      do
      {
        if ( !(v21 + v20) )
          break;
        v23 = *(_WORD *)&v19[v22];
        if ( !v23 )
          break;
        *(_WORD *)v19 = v23;
        v19 += 2;
        --v20;
      }
      while ( v20 );
      v24 = v19 - 2;
      if ( v20 )
        v24 = v19;
      *(_WORD *)v24 = v18;
    }
    CLockedList_UniqueValuesOnly<CAudioSessionNotificationProcess,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 176));
  }
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v9);
}
