/*
 * XREFs of VidSchiAcquireSyncObject @ 0x140004680
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x140003F10 (VidSchWaitForSingleSyncObject.c)
 * Callees:
 *     ?InsertTailListInstrumented@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140004D68 (-InsertTailListInstrumented@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VidSchiAcquireSyncObject(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r9
  char v4; // r11
  int v7; // edx
  unsigned __int64 v8; // r9
  unsigned __int64 *v9; // rax
  struct _VIDSCH_GLOBAL *v12; // rcx
  int v13; // eax
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // ecx
  int v21; // eax
  __int64 v22; // rax
  _QWORD *v23; // r8
  _QWORD *v24; // rcx
  _BYTE *v25; // rcx
  _QWORD *v26; // r8
  _QWORD *v27; // rax
  _QWORD *v28; // rcx

  v3 = 0;
  v4 = 0;
  if ( *(_DWORD *)(a2 + 36) == 0x7FFFFFFF )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 25796;
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Synchronization object already has LONG_MAX reference pending, can't reference more.\n",
      25796LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225473LL;
  }
  v7 = *(_DWORD *)(a2 + 48);
  switch ( v7 )
  {
    case 5:
LABEL_3:
      v8 = *(_QWORD *)(a3 + 800);
      if ( *(_BYTE *)(a2 + 29) )
        goto LABEL_7;
      v9 = *(unsigned __int64 **)(a2 + 72);
      if ( *(_BYTE *)(a2 + 30) ? *v9 >= v8 : *(_DWORD *)v9 - (int)v8 >= 0 )
        goto LABEL_7;
      if ( *(_QWORD *)(a2 + 88) )
      {
        v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 32LL);
        ++*(_DWORD *)(v22 + 876);
        *(_DWORD *)(a3 + 752) |= 8u;
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 800));
        break;
      }
      if ( *(_BYTE *)(a2 + 31) )
      {
        if ( *(_BYTE *)(a2 + 28) )
        {
          v14 = *(_QWORD *)(*(_QWORD *)(a2 + 304) + 40LL);
        }
        else
        {
          v13 = *(_DWORD *)(a2 + 48);
          if ( v13 == 2 )
            v14 = *(_QWORD *)(a2 + 72);
          else
            v14 = v13 == 6 ? *(_QWORD *)(a2 + 168) : *(_QWORD *)(a2 + 96);
        }
        if ( *(_QWORD *)(a3 + 800) <= v14 )
          goto LABEL_35;
      }
      goto LABEL_24;
    case 0:
      if ( *(_QWORD *)(a2 + 72) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 25814;
        ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88])(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Trying to acquire mutex without corresponding signal having been submitted.\n",
          25814LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225473LL;
      }
      if ( !*(_QWORD *)(a2 + 64) )
      {
        v18 = *(_QWORD *)(a3 + 88);
        if ( !v18 )
          v18 = *(_QWORD *)(a3 + 96);
        *(_QWORD *)(a2 + 64) = v18;
        v3 = 1;
      }
      v19 = *(_QWORD *)(a3 + 88);
      if ( !v19 )
        v19 = *(_QWORD *)(a3 + 96);
      *(_QWORD *)(a2 + 72) = v19;
LABEL_44:
      if ( v3 )
      {
LABEL_7:
        *(_DWORD *)(a3 + 752) |= 1u;
        return 0LL;
      }
      break;
    case 1:
      v20 = *(_DWORD *)(a2 + 72);
      if ( !v20 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 25846;
        ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88])(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Trying to acquire semaphore without corresponding signal having been submitted.\n",
          25846LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225473LL;
      }
      v21 = *(_DWORD *)(a2 + 64);
      if ( v21 )
      {
        v3 = 1;
        *(_DWORD *)(a2 + 64) = v21 - 1;
      }
      *(_DWORD *)(a2 + 72) = v20 - 1;
      goto LABEL_44;
    case 2:
      if ( *(_BYTE *)(a2 + 28) )
        v16 = *(_QWORD *)(*(_QWORD *)(a2 + 304) + 40LL);
      else
        v16 = *(_QWORD *)(a2 + 72);
      if ( v16 >= *(_QWORD *)(a3 + 800) )
      {
        if ( *(_BYTE *)(a2 + 28) )
          v17 = *(_QWORD *)(*(_QWORD *)(a2 + 304) + 32LL);
        else
          v17 = *(_QWORD *)(a2 + 80);
        if ( v17 >= *(_QWORD *)(a3 + 800) )
          goto LABEL_7;
        goto LABEL_35;
      }
      if ( *(_BYTE *)(a2 + 25) )
      {
LABEL_24:
        ++*(_DWORD *)(a2 + 40);
        v4 = 1;
        ++*(_DWORD *)(*(_QWORD *)(a3 + 88) + 796LL);
        ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 1844LL);
        v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 88) + 104LL) + 32LL);
        ++*(_DWORD *)(v15 + 872);
        *(_DWORD *)(a3 + 752) |= 4u;
LABEL_35:
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 800));
        break;
      }
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 25882;
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88])(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Trying to wait the fence without signal having been submitted.\n",
        25882LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225473LL;
    case 3:
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 25962;
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[88])(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Trying to wait on CpuNotification.\n",
        25962LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225473LL;
    case 4:
      goto LABEL_3;
  }
  if ( (unsigned int)(*(_DWORD *)(a2 + 48) - 4) <= 1 )
  {
    v12 = *(struct _VIDSCH_GLOBAL **)(*(_QWORD *)(a1 + 104) + 32LL);
    if ( *((_BYTE *)v12 + 7059) )
    {
      InsertTailListInstrumented(v12, (struct _VIDSCH_QUEUE_PACKET *)a3);
LABEL_16:
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 36));
      return 0LL;
    }
    v25 = (char *)v12 + 880;
    v26 = (_QWORD *)(a3 + 768);
    v27 = (_QWORD *)*((_QWORD *)v25 + 1);
    if ( (_BYTE *)*v27 == v25 )
    {
      *v26 = v25;
      v26[1] = v27;
      *v27 = v26;
      *((_QWORD *)v25 + 1) = v26;
      goto LABEL_16;
    }
LABEL_53:
    __fastfail(3u);
  }
  v23 = (_QWORD *)(a3 + 768);
  if ( v4 )
  {
    v28 = *(_QWORD **)(a2 + 200);
    if ( *v28 != a2 + 192 )
      goto LABEL_53;
    *v23 = a2 + 192;
    v23[1] = v28;
    *v28 = v23;
    *(_QWORD *)(a2 + 200) = v23;
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 36));
    return 0LL;
  }
  else
  {
    v24 = *(_QWORD **)(a2 + 184);
    if ( *v24 != a2 + 176 )
      goto LABEL_53;
    *v23 = a2 + 176;
    v23[1] = v24;
    *v24 = v23;
    *(_QWORD *)(a2 + 184) = v23;
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 36));
    return 0LL;
  }
}
