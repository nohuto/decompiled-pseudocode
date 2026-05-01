/*
 * XREFs of ?SetPreferredAspectRatioHint@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@@Z @ 0x180217090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::SetPreferredAspectRatioHint(
        ApplicationViewOperation *this,
        struct tagSIZE *a2)
{
  __int64 v2; // rax

  v2 = 0LL;
  *((_BYTE *)this + 228) = 1;
  if ( a2 )
    v2 = (__int64)*a2;
  *((_QWORD *)this + 29) = v2;
  return 0LL;
}
