/*
 * XREFs of ExDestroyPool @ 0x140652790
 * Callers:
 *     <none>
 * Callees:
 *     ExpPoolContextHeaderFromHandle @ 0x1404F3824 (ExpPoolContextHeaderFromHandle.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExpPrivatePoolDestroy @ 0x1407C65CC (ExpPrivatePoolDestroy.c)
 */

__int64 __fastcall ExDestroyPool(__int64 a1)
{
  _DWORD *v1; // rax
  ULONG_PTR v2; // r10

  v1 = ExpPoolContextHeaderFromHandle(a1);
  if ( !v1 )
LABEL_6:
    KeBugCheckEx(0xC2u, 0x9EuLL, v2, 0LL, 0LL);
  if ( v1[1] != 1 )
  {
    if ( v1[1] == 2 )
      KeBugCheckEx(0xC2u, 0x10uLL, *((_QWORD *)v1 + 1), 0xFFFFFFFFC00000BBuLL, 0LL);
    goto LABEL_6;
  }
  return ExpPrivatePoolDestroy(v1);
}
