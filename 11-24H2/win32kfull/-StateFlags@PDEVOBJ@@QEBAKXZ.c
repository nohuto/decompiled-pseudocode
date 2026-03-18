/*
 * XREFs of ?StateFlags@PDEVOBJ@@QEBAKXZ @ 0x1403250B4
 * Callers:
 *     DxgkEngDetectGDIPath @ 0x1403252A0 (DxgkEngDetectGDIPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::StateFlags(PDEVOBJ *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(*(_QWORD *)this + 2568LL);
  if ( ((v1 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
    return *(unsigned int *)(v1 + 160);
  else
    return 0LL;
}
