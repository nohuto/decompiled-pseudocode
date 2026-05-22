/*
 * XREFs of ?GetInteractionObject@ContextualProcessorBuffer@@UEBAIXZ @ 0x1801A2FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005AE78 (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ContextualProcessorBuffer::GetInteractionObject(ContextualProcessorBuffer *this)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v4 = 0LL;
  v2 = *((_QWORD *)this + 19);
  if ( v2
    && *(_QWORD *)(v2 + 16)
    && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v2 + 16),
              &v4) >= 0 )
  {
    v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v4);
  return v1;
}
