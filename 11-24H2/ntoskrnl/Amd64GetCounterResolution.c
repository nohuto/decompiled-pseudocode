/*
 * XREFs of Amd64GetCounterResolution @ 0x1405686D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Amd64GetCounterResolution(unsigned int a1, int *a2)
{
  __int64 v2; // rax
  int v3; // r9d
  unsigned int v5; // r11d
  __int64 v6; // rdi
  __int64 v7; // rax
  int v8; // ecx
  int v9; // r10d
  int v10; // r8d
  __int64 v11; // rax
  int v12; // eax

  LODWORD(v2) = KeGetPcr()->Prcb.Number;
  v3 = 0;
  v5 = 0;
  v6 = KiProcessorBlock[v2];
  v7 = *(_QWORD *)(v6 + 88);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 4);
    v9 = 0;
    if ( v7 == -24 )
      goto LABEL_5;
  }
  else
  {
    v8 = 0;
  }
  v9 = *(_DWORD *)(v7 + 28);
LABEL_5:
  v10 = 0;
  v11 = v7 + 48;
  if ( v11 )
    v10 = *(_DWORD *)(v11 + 4);
  if ( *(_QWORD *)(v6 + 88) == -72LL )
    v12 = 0;
  else
    v12 = *(_DWORD *)(*(_QWORD *)(v6 + 88) + 76LL);
  if ( a1 == -1073741591 || a1 < v8 + v9 + v10 + v12 )
    v3 = 48;
  else
    v5 = -1073741811;
  *a2 = v3;
  return v5;
}
