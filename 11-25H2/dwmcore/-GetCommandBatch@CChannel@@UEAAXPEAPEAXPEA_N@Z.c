/*
 * XREFs of ?GetCommandBatch@CChannel@@UEAAXPEAPEAXPEA_N@Z @ 0x1801D6490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CChannel::GetCommandBatch(CChannel *this, void **a2, bool *a3)
{
  _QWORD *v3; // rax
  _QWORD *v5; // r9
  _QWORD *v6; // rdx
  char v7; // al

  v3 = (_QWORD *)*((_QWORD *)this + 22);
  if ( v3 )
  {
    v5 = (_QWORD *)v3[4];
    if ( v5 )
    {
      v6 = (_QWORD *)v3[1];
      if ( (_QWORD *)*v6 != v3 )
        __fastfail(3u);
      *v5 = v3;
      v5[1] = v6;
      *v6 = v5;
      v3[1] = v5;
      v3[4] = 0LL;
    }
  }
  *a2 = v3;
  *((_QWORD *)this + 23) = *((_QWORD *)this + 22);
  v7 = *((_BYTE *)this + 192);
  *((_QWORD *)this + 22) = 0LL;
  *a3 = v7;
  *((_BYTE *)this + 192) = 0;
}
