/*
 * XREFs of ?DisplayDiagRecordActiveTopology@@YAXPEAUUSER_DETECTED_BLACK_SCREEN_REPORT@@@Z @ 0x1401AB908
 * Callers:
 *     xxxDisplayDiagBlackScreenDetected @ 0x1401ABAF0 (xxxDisplayDiagBlackScreenDetected.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     DrvGetDisplayConfigBufferSizesInternal @ 0x1400C8194 (DrvGetDisplayConfigBufferSizesInternal.c)
 *     DrvQueryDisplayConfigInternal @ 0x1400C82C8 (DrvQueryDisplayConfigInternal.c)
 */

void __fastcall DisplayDiagRecordActiveTopology(struct USER_DETECTED_BLACK_SCREEN_REPORT *a1)
{
  int DisplayConfigBufferSizesInternal; // eax
  __int64 v3; // rax
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v4; // rax
  char *v5; // rbx
  int v6; // eax
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  DisplayConfigBufferSizesInternal = DrvGetDisplayConfigBufferSizesInternal(2u, &v7);
  *((_DWORD *)a1 + 4) = DisplayConfigBufferSizesInternal;
  if ( DisplayConfigBufferSizesInternal >= 0 )
  {
    v3 = v7;
    *((_DWORD *)a1 + 5) = v7;
    if ( (_DWORD)v3
      && (v4 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)Win32AllocPoolZInitImpl(256LL, 216 * v3, 0x69647355u),
          (v5 = (char *)v4) != 0LL) )
    {
      v6 = DrvQueryDisplayConfigInternal(2u, &v7, v4, 0LL);
      *((_DWORD *)a1 + 4) = v6;
      if ( v6 >= 0 )
      {
        *((_QWORD *)a1 + 3) = v5;
        v5 = 0LL;
      }
      if ( v5 )
        GreDeleteFastMutex(v5);
    }
    else
    {
      *((_DWORD *)a1 + 4) = 14;
    }
  }
}
