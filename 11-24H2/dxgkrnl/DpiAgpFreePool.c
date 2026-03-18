/*
 * XREFs of DpiAgpFreePool @ 0x140252CF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiAgpFreePool(__int64 a1, void *a2)
{
  unsigned int v2; // ebx
  char v4; // bp
  __int64 v5; // rsi
  unsigned int *i; // rdi
  void *v7; // rcx
  unsigned int *v8; // rcx
  void **v9; // rax

  v2 = 0;
  v4 = 0;
  if ( a1 && a2 )
  {
    v5 = *(_QWORD *)(a1 + 64);
    if ( v5
      && *(_DWORD *)(v5 + 16) == 1953656900
      && *(_DWORD *)(v5 + 20) == 2
      && *(_QWORD *)(v5 + 720)
      && *(_QWORD *)(v5 + 736) )
    {
      KeWaitForSingleObject((PVOID)(v5 + 2624), Executive, 0, 0, 0LL);
      for ( i = *(unsigned int **)(v5 + 2608); *(_QWORD *)i != *(_QWORD *)(v5 + 2608); i = *(unsigned int **)i )
      {
        v7 = (void *)*((_QWORD *)i + 9);
        if ( v7 == a2 )
        {
          v4 = 1;
          if ( *((_BYTE *)i + 60) == 1 )
            MmUnmapIoSpace(v7, i[14]);
          else
            MmUnmapLockedPages(v7, *((PMDL *)i + 6));
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v5 + 736))(
            *(_QWORD *)(v5 + 680),
            *((_QWORD *)i + 3),
            (i[14] >> 12) + ((i[14] & 0xFFF) != 0),
            0LL);
          IoFreeMdl(*((PMDL *)i + 6));
          (*(void (__fastcall **)(_QWORD, _QWORD))(v5 + 720))(*(_QWORD *)(v5 + 680), *((_QWORD *)i + 3));
          v8 = *(unsigned int **)i;
          if ( *(unsigned int **)(*(_QWORD *)i + 8LL) != i || (v9 = (void **)*((_QWORD *)i + 1), *v9 != i) )
            __fastfail(3u);
          *v9 = v8;
          *((_QWORD *)v8 + 1) = v9;
          ExFreePoolWithTag(i, 0x74727044u);
          break;
        }
      }
      KeReleaseMutex((PRKMUTEX)(v5 + 2624), 0);
      if ( !v4 )
      {
        v2 = -1073741811;
        WdLogSingleEntry1(2LL, -1073741811LL);
        WdLogGlobalForLineNumber = 436;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    v2 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 357;
  }
  return v2;
}
