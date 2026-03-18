/*
 * XREFs of ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x1400142C8
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x140015438 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     DxLddmFindProcessEntry @ 0x1400143A0 (DxLddmFindProcessEntry.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     vSpUnTearDownSprites @ 0x14023AD50 (vSpUnTearDownSprites.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall DxLddmPrimaryLockProcessDestroy(_DWORD *a1, __int64 a2, unsigned int *a3)
{
  _QWORD *ProcessEntry; // rax
  _DWORD *v6; // rbx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  int v9; // eax
  void (__fastcall *v10)(_QWORD, _DWORD *); // rax
  int (*v11)(void); // rax
  unsigned int v12; // edx

  ProcessEntry = (_QWORD *)DxLddmFindProcessEntry(a1 + 654);
  v6 = ProcessEntry;
  if ( ProcessEntry )
  {
    v7 = *ProcessEntry;
    if ( *(_QWORD **)(*ProcessEntry + 8LL) != ProcessEntry || (v8 = (_QWORD *)ProcessEntry[1], (_DWORD *)*v8 != v6) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    v9 = v6[5];
    if ( v9 )
    {
      a1[658] -= v9;
      v10 = (void (__fastcall *)(_QWORD, _DWORD *))*((_QWORD *)a1 + 330);
      if ( v10 )
        v10(*((_QWORD *)a1 + 223), v6 + 7);
      v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 24) + 48LL);
      if ( v11 && v11() >= 0 )
        vSpUnTearDownSprites(a1, v6 + 7);
    }
    v12 = *a3 + v6[6];
    if ( v12 < *a3 )
      v12 = -1;
    *a3 = v12;
    GreDeleteFastMutex(v6);
  }
}
