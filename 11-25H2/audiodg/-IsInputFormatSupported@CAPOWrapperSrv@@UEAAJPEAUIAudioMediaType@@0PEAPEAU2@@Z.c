/*
 * XREFs of ?IsInputFormatSupported@CAPOWrapperSrv@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x140042E10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPOWrapperSrv::IsInputFormatSupported(
        CAPOWrapperSrv *this,
        struct IAudioMediaType *a2,
        struct IAudioMediaType *a3,
        struct IAudioMediaType **a4)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 11);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, struct IAudioMediaType **))(*(_QWORD *)v4 + 56LL))(
             v4,
             a2,
             a3,
             a4);
  else
    return 2147500033LL;
}
