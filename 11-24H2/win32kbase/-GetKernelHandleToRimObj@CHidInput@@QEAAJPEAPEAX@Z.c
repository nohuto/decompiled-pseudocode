/*
 * XREFs of ?GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z @ 0x14013CF40
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectCreateKernelHandle @ 0x1401E3540 (RawInputManagerObjectCreateKernelHandle.c)
 */

__int64 __fastcall CHidInput::GetKernelHandleToRimObj(CHidInput *this, void **a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
    return RawInputManagerObjectCreateKernelHandle(v2, 3LL, 0LL);
  *a2 = 0LL;
  return 3221225473LL;
}
