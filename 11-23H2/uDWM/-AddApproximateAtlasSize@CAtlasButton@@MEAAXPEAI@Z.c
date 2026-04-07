/*
 * XREFs of ?AddApproximateAtlasSize@CAtlasButton@@MEAAXPEAI@Z @ 0x180019FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAtlasButton::AddApproximateAtlasSize(CAtlasButton *this, unsigned int *a2)
{
  _DWORD *v2; // r10
  int v3; // r9d
  _DWORD *v5; // rdx

  v2 = (_DWORD *)*((_QWORD *)this + 9);
  v3 = 0;
  if ( v2 )
    *a2 += ((v2[8] > 0) + 1 + (v2[9] > 0)) * ((v2[10] > 0) + 1 + (v2[11] > 0));
  v5 = (_DWORD *)*((_QWORD *)this + 16);
  if ( v5 )
  {
    LOBYTE(v3) = v5[8] > 0;
    *a2 += (v3 + 1 + (v5[9] > 0)) * ((v5[10] > 0) + 1 + (v5[11] > 0));
  }
}
