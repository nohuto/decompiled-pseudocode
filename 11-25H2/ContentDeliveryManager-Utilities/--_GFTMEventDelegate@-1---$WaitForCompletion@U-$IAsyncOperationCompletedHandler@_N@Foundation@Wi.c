/*
 * XREFs of ??_GFTMEventDelegate@?1???$WaitForCompletion@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@U?$IAsyncOperation@_N@23@@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z@EEAAPEAXI@Z @ 0x18002D060
 * Callers:
 *     <none>
 * Callees:
 *     ??1FTMEventDelegate@?1???$WaitForCompletion@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@U?$IAsyncOperation@_N@23@@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z@EEAA@XZ @ 0x18002A7E0 (--1FTMEventDelegate@-1---$WaitForCompletion@U-$IAsyncOperationCompletedHandler@_N@Foundation@Win.c)
 */

void *__fastcall `WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Foundation::IAsyncOperation<bool>>'::`2'::FTMEventDelegate::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  `WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Foundation::IAsyncOperation<bool>>'::`2'::FTMEventDelegate::~FTMEventDelegate((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
