/*
 * XREFs of ?GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1401B2E88
 * Callers:
 *     GetGestureConfigSettings @ 0x1401B290C (GetGestureConfigSettings.c)
 *     ?_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z @ 0x1401B2B94 (-_StoreGestureConfig@@YAHPEAUtagWND@@IPEAUtagGESTURECONFIG@@@Z.c)
 * Callees:
 *     <none>
 */

void **__fastcall GetWindowGCList(struct tagWND *a1)
{
  _DWORD *v1; // r8
  unsigned int v2; // edx
  __int64 v3; // rax
  struct tagWND **v4; // r9
  __int64 v6; // rax

  v1 = *(_DWORD **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) + 864LL);
  if ( !v1 )
    return 0LL;
  v2 = *v1;
  v3 = 0LL;
  if ( !*v1 )
    return 0LL;
  v4 = (struct tagWND **)(v1 + 6);
  do
  {
    if ( a1 == *v4 )
      break;
    v3 = (unsigned int)(v3 + 1);
    v4 += 2;
  }
  while ( (unsigned int)v3 < v2 );
  if ( (unsigned int)v3 < v2 && (_mm_lfence(), (v6 = *(_QWORD *)&v1[4 * v3 + 4]) != 0) )
    return *(void ***)(v6 + 16);
  else
    return 0LL;
}
