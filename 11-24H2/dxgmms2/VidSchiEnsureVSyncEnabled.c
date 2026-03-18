/*
 * XREFs of VidSchiEnsureVSyncEnabled @ 0x1400D5120
 * Callers:
 *     VidSchiSubmitCommandPacketToQueue @ 0x140004B80 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1400118C0 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiSubmitCommandPacketToQueueDirectSubmitAware @ 0x140048068 (VidSchiSubmitCommandPacketToQueueDirectSubmitAware.c)
 * Callees:
 *     ?IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14001BD68 (-IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     VidSchIsVSyncEnabled @ 0x1400D53E0 (VidSchIsVSyncEnabled.c)
 */

void __fastcall VidSchiEnsureVSyncEnabled(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // r14
  __int64 v6; // rbp
  int v7; // ecx
  void (__fastcall *v8)(_QWORD); // rax
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r10
  unsigned int v15; // r9d
  bool v16; // zf
  int v17; // eax
  char v18; // cl
  int v19; // eax
  void (__fastcall *v20)(_QWORD); // rax

  v2 = *(_QWORD *)(a1 + 96);
  v4 = *(_QWORD *)(a2 + 32);
  v6 = *(unsigned int *)(a1 + 168);
  if ( v2 )
  {
    if ( *(_DWORD *)(a1 + 48) == 3 && *(_DWORD *)(*(_QWORD *)(v4 + 8 * v6 + 3432) + 44488LL) != -1 )
    {
      v8 = *(void (__fastcall **)(_QWORD))(v4 + 3288);
      if ( v8 )
        v8(*(_QWORD *)(v4 + 3352));
    }
  }
  if ( (*(_DWORD *)(a1 + 752) & 0x1000000) != 0
    && *(_DWORD *)(*(_QWORD *)(v4 + 8LL * *(unsigned int *)(a1 + 868) + 3432) + 44488LL) != -1 )
  {
    v20 = *(void (__fastcall **)(_QWORD))(v4 + 3288);
    if ( v20 )
      v20(*(_QWORD *)(v4 + 3352));
  }
  if ( *(_DWORD *)(a1 + 48) == 3 && *(_DWORD *)(a1 + 168) != -1 )
  {
    v12 = *(_QWORD *)(a1 + 88);
    if ( v12 )
      v13 = *(_QWORD *)(v12 + 104);
    else
      v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 40LL) + 8LL);
    v14 = *(_QWORD *)(v13 + 32);
    if ( (*(_DWORD *)(a1 + 72) & 0x800000) != 0 )
      v15 = ((unsigned __int16)*(_DWORD *)(a1 + 1352) | (unsigned __int16)(*(_DWORD *)(a1 + 1352) >> 10)) & 0x3FF;
    else
      v15 = (1 << *(_DWORD *)(v14 + 152)) - 1;
    v16 = !_BitScanForward((unsigned int *)&v17, v15);
    v18 = -1;
    if ( !v16 )
      v18 = v17;
    while ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 8LL * *(unsigned int *)(a1 + 168) + 3432)
                                                      + 304LL * v18
                                                      + 192));
      v19 = 1 << v18;
      v18 = -1;
      v15 &= ~v19;
      v16 = !_BitScanForward((unsigned int *)&v19, v15);
      if ( !v16 )
        v18 = v19;
    }
  }
  v7 = *(_DWORD *)(a1 + 72);
  if ( (v7 & 0x1000) == 0 || (*(_DWORD *)(a1 + 72) & 0xC00) == 0x400 || (_DWORD)v6 == -1 )
    return;
  if ( (v7 & 0x40000) != 0 )
  {
    if ( (v7 & 0x1000000) == 0 )
      return;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 792));
    IncrementNumberOfQueuedFlipPerSource((struct _VIDSCH_GLOBAL *)v4, v6);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 1828));
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v6 + 1764));
    goto LABEL_32;
  }
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v6 + 1700));
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 40) + 32LL)
                             + 8LL * *(unsigned int *)(*(_QWORD *)(a2 + 32) + 4LL))
                 + 8 * v6
                 + 88);
  if ( (*(_DWORD *)(a1 + 72) & 0x80u) == 0 )
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v4 + 8 * v6 + 6712) + 8LL));
  _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  v10 = *(_DWORD *)(a1 + 72);
  if ( (v10 & 4) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 792));
    IncrementNumberOfQueuedFlipPerSource((struct _VIDSCH_GLOBAL *)v4, v6);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 1828));
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v6 + 1764));
    if ( !v2 )
      return;
LABEL_32:
    if ( (*(_DWORD *)(a2 + 48) & 2) != 0 || *(int *)(a1 + 872) >= 4 || *(_BYTE *)(v4 + 156) )
      goto LABEL_41;
    return;
  }
  if ( v2 && !*(_DWORD *)(a1 + 48) && (v10 & 0x4000) != 0 && (*(_DWORD *)(a2 + 48) & 2) != 0 )
  {
    v11 = v6;
LABEL_41:
    VidSchIsVSyncEnabled((struct _VIDSCH_GLOBAL *)v4, v11);
  }
}
