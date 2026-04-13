/*
 * XREFs of ?Invoke@CompletionDelegate@?1???$WaitForCompletion@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@UEAAJ0W4AsyncStatus@56ABI@@@Z @ 0x180033E40
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18003AF28 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall `wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile *> *>'::`2'::CompletionDelegate::Invoke(
        __int64 a1,
        void *a2,
        int a3)
{
  *(_DWORD *)(a1 + 48) = a3;
  wil::details::SetEvent(*(wil::details **)(a1 + 56), a2);
  return 0LL;
}
