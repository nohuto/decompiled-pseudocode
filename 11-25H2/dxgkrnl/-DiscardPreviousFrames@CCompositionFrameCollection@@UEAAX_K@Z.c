/*
 * XREFs of ?DiscardPreviousFrames@CCompositionFrameCollection@@UEAAX_K@Z @ 0x1400336A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CCompositionFrameCollection::DiscardPreviousFrames(
        CCompositionFrameCollection *this,
        unsigned __int64 a2)
{
  char *v2; // rsi
  char *v5; // rbp
  char *i; // rdi
  __int64 v7; // rax
  char *v8; // rbx

  v2 = (char *)this + 32;
  ExAcquirePushLockExclusiveEx((char *)this + 32, 0LL);
  v2[8] = 1;
  v5 = (char *)this + 16;
  for ( i = (char *)*((_QWORD *)this + 3);
        i != v5 && (*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)i - 2) + 72LL))((_QWORD *)i - 2) < a2;
        i = v8 )
  {
    v7 = *(_QWORD *)i;
    v8 = (char *)*((_QWORD *)i + 1);
    if ( *(char **)(*(_QWORD *)i + 8LL) != i || *(char **)v8 != i )
      __fastfail(3u);
    *(_QWORD *)v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)i - 2) + 8LL))((_QWORD *)i - 2);
  }
  if ( v2[8] )
    ExReleasePushLockExclusiveEx(v2, 0LL);
  else
    ExReleasePushLockSharedEx(v2, 0LL);
}
