/*
 * XREFs of ?CreateUsermodeParameters@GetTrueTypeFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x140157CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x140158B84 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 */

__int64 __fastcall GetTrueTypeFileRequest::CreateUsermodeParameters(
        GetTrueTypeFileRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  char *v7; // rax

  v5 = UmfdTls::CommitUMBuffer(a2, 0x20u, 1);
  v6 = v5;
  if ( !v5 )
    return 3221225495LL;
  v7 = (char *)(v5 + 3);
  *((_QWORD *)this + 8) = v7;
  v6[1] = v7;
  *v6 = **((_QWORD **)this + 5);
  *a3 = v6;
  return 0LL;
}
