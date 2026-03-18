/*
 * XREFs of ?RemoveCompositionFrame@CCompositionFrameCollection@@UEAAJ_K@Z @ 0x14002F270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionFrameCollection::RemoveCompositionFrame(CCompositionFrameCollection *this, __int64 a2)
{
  char *v2; // rbx
  unsigned int v5; // ebp
  char *v6; // rsi
  char *v7; // rdi
  __int64 v8; // rdx
  char **v9; // rax

  v2 = (char *)this + 32;
  v5 = -1073741275;
  ExAcquirePushLockExclusiveEx((char *)this + 32, 0LL);
  v2[8] = 1;
  v6 = (char *)*((_QWORD *)this + 3);
  v7 = (char *)this + 16;
  while ( v6 != v7 )
  {
    if ( (*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)v6 - 2) + 72LL))((_QWORD *)v6 - 2) == a2 )
    {
      v8 = *(_QWORD *)v6;
      if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || (v9 = (char **)*((_QWORD *)v6 + 1), *v9 != v6) )
        __fastfail(3u);
      *v9 = (char *)v8;
      *(_QWORD *)(v8 + 8) = v9;
      (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)v6 - 2) + 8LL))((_QWORD *)v6 - 2);
      v5 = 0;
      break;
    }
    v6 = (char *)*((_QWORD *)v6 + 1);
  }
  if ( v2[8] )
    ExReleasePushLockExclusiveEx(v2, 0LL);
  else
    ExReleasePushLockSharedEx(v2, 0LL);
  return v5;
}
