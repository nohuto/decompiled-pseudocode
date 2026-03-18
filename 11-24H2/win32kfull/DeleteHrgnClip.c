/*
 * XREFs of DeleteHrgnClip @ 0x140198870
 * Callers:
 *     ?ClearDce@@YAXPEAUtagDCE@@@Z @ 0x140285894 (-ClearDce@@YAXPEAUtagDCE@@@Z.c)
 * Callees:
 *     RevalidateDCE @ 0x14002F640 (RevalidateDCE.c)
 */

__int64 __fastcall DeleteHrgnClip(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v2; // eax
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  v1 = (_QWORD *)(a1 + 24);
  v2 = *(_DWORD *)(a1 + 48) & 0xFFFFFF3F;
  *(_DWORD *)(a1 + 48) = v2;
  if ( (v2 & 0x40000) != 0 )
  {
    *(_DWORD *)(a1 + 48) = v2 & 0xFFFBFFFF;
  }
  else
  {
    if ( *v1 > 2uLL )
      GreMarkDeletableRgn();
    DeleteMaybeSpecialRgn(*v1);
  }
  result = DeleteMaybeSpecialRgn(*(_QWORD *)(a1 + 32));
  *v1 = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (*(_DWORD *)(a1 + 48) & 0x2000) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 40);
    if ( !v5 )
      return result;
    result = GreSelectVisRgn(*(_QWORD *)(a1 + 16), v5, 1LL);
    goto LABEL_8;
  }
  result = RevalidateDCE(a1);
  v6 = *(_QWORD *)(a1 + 40);
  if ( v6 )
  {
    result = GreDeleteObject(v6);
LABEL_8:
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  return result;
}
