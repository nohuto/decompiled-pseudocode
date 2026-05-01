/*
 * XREFs of ??_ECompletionDelegate@?1???$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@UEAAPEAXI@Z @ 0x18023A520
 * Callers:
 *     <none>
 * Callees:
 *     ??1CompletionDelegate@?1???$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@ABI@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@ABI@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@UEAA@XZ @ 0x1802CBF44 (--1CompletionDelegate@-1---$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@ABI@@@details@.c)
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 */

void *__fastcall `wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *>'::`2'::CompletionDelegate::`vector deleting destructor'(
        void *Block,
        char a2)
{
  `wil::details::WaitForCompletion<ABI::Windows::Foundation::IAsyncAction *>'::`2'::CompletionDelegate::~CompletionDelegate();
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
