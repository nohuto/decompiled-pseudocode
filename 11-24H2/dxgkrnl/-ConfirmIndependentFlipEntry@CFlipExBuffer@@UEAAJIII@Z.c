/*
 * XREFs of ?ConfirmIndependentFlipEntry@CFlipExBuffer@@UEAAJIII@Z @ 0x14009D6E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkConfirmToken @ 0x1401B85A0 (DxgkConfirmToken.c)
 */

__int64 __fastcall CFlipExBuffer::ConfirmIndependentFlipEntry(
        CFlipExBuffer *this,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rdx
  __int64 v9; // [rsp+20h] [rbp-28h]
  __int64 v10; // [rsp+28h] [rbp-20h]

  v4 = 0;
  if ( *((_DWORD *)this + 100) == 2 )
  {
    v7 = *((_QWORD *)this + 1);
    *((_DWORD *)this + 100) = 3;
    WdLogSingleEntry4(8LL, v7, *((_QWORD *)this + 2), a4, *((_QWORD *)this + 69));
    v10 = *((_QWORD *)this + 69);
    v9 = *((_QWORD *)this + 2);
    WdLogGlobalForLineNumber = 622;
    DxgkConfirmToken(a2, v9, v10);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
