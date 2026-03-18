/*
 * XREFs of ?FindCompositionFrame@CCompositionFrameCollection@@UEAAJ_KPEAPEAUICompositionFrame@@@Z @ 0x14002A240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionFrameCollection::FindCompositionFrame(
        CCompositionFrameCollection *this,
        __int64 a2,
        struct ICompositionFrame **a3)
{
  char *v3; // rsi
  unsigned int v7; // r14d
  char *v8; // rbp
  __int64 i; // rbx
  struct ICompositionFrame *v10; // rdi

  v3 = (char *)this + 32;
  *a3 = 0LL;
  v7 = -1073741275;
  ExAcquirePushLockSharedEx((char *)this + 32, 0LL);
  v3[8] = 0;
  v8 = (char *)this + 16;
  for ( i = *((_QWORD *)this + 3); (char *)i != v8; i = *(_QWORD *)(i + 8) )
  {
    v10 = (struct ICompositionFrame *)(i - 16);
    if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(i - 16) + 72LL))(i - 16) == a2 )
    {
      (**(void (__fastcall ***)(__int64))v10)(i - 16);
      v7 = 0;
      *a3 = v10;
      break;
    }
  }
  if ( v3[8] )
    ExReleasePushLockExclusiveEx(v3, 0LL);
  else
    ExReleasePushLockSharedEx(v3, 0LL);
  return v7;
}
