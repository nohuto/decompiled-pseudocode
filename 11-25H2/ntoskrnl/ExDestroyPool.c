/*
 * XREFs of ExDestroyPool @ 0x140648130
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpMetadataFree @ 0x1403CB6C4 (RtlpHpMetadataFree.c)
 *     ExpPoolContextHeaderFromHandle @ 0x1404F5990 (ExpPoolContextHeaderFromHandle.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     VslSecurePoolDestroy @ 0x14058AD48 (VslSecurePoolDestroy.c)
 *     ExpPrivatePoolDestroy @ 0x1407B699C (ExpPrivatePoolDestroy.c)
 */

__int64 __fastcall ExDestroyPool(__int64 a1)
{
  _DWORD *v1; // rax
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // rbx
  int v4; // eax
  int v5; // eax
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  v1 = ExpPoolContextHeaderFromHandle(a1);
  v3 = (ULONG_PTR)v1;
  if ( !v1 )
    goto LABEL_8;
  v4 = v1[1] - 1;
  if ( !v4 )
    return ExpPrivatePoolDestroy(v3);
  if ( v4 != 1 )
LABEL_8:
    KeBugCheckEx(0xC2u, 0x9EuLL, v2, 0LL, 0LL);
  v5 = VslSecurePoolDestroy(*(_QWORD *)(v3 + 8));
  if ( v5 < 0 )
    KeBugCheckEx(0xC2u, 0x10uLL, *(_QWORD *)(v3 + 8), v5, 0LL);
  v7 = 0LL;
  *(_WORD *)((char *)&v7 + 1) = 1;
  LOBYTE(v7) = 3;
  return RtlpHpMetadataFree(v3, &v7);
}
