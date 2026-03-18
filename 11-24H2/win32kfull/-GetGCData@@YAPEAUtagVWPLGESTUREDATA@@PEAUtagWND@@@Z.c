/*
 * XREFs of ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1401B2E24
 * Callers:
 *     SetGestureConfigSettings @ 0x1401B2654 (SetGestureConfigSettings.c)
 *     GetGestureConfigSettings @ 0x1401B290C (GetGestureConfigSettings.c)
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1401B2B94 (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 *     ?SetBitMask@@YAXPEAUtagWND@@IH@Z @ 0x1401B2DDC (-SetBitMask@@YAXPEAUtagWND@@IH@Z.c)
 * Callees:
 *     <none>
 */

struct tagVWPLGESTUREDATA *__fastcall GetGCData(struct tagWND *a1)
{
  __int64 v1; // r8
  _DWORD *v3; // r9
  unsigned int v4; // edx
  __int64 v5; // rax
  struct tagWND **v6; // r10
  int v7; // ecx

  v1 = 0LL;
  v3 = *(_DWORD **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 864LL);
  if ( !v3 )
    goto LABEL_7;
  v4 = *v3;
  v5 = 0LL;
  if ( !*v3 )
    goto LABEL_7;
  v6 = (struct tagWND **)(v3 + 6);
  v7 = 1;
  do
  {
    if ( a1 == *v6 )
      break;
    v5 = (unsigned int)(v5 + 1);
    v6 += 2;
  }
  while ( (unsigned int)v5 < v4 );
  if ( (unsigned int)v5 < v4 )
    v1 = *(_QWORD *)&v3[4 * v5 + 4];
  else
LABEL_7:
    v7 = 0;
  return (struct tagVWPLGESTUREDATA *)(v1 & -(__int64)(v7 != 0));
}
