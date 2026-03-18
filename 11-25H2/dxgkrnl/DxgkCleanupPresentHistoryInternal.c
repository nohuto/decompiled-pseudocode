/*
 * XREFs of DxgkCleanupPresentHistoryInternal @ 0x1403F2D10
 * Callers:
 *     <none>
 * Callees:
 *     ?FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z @ 0x1400624A4 (-FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     DxgkGetPresentHistoryInternal @ 0x1402871A0 (DxgkGetPresentHistoryInternal.c)
 */

__int64 __fastcall DxgkCleanupPresentHistoryInternal(int a1, __int64 a2, __int64 a3)
{
  int PresentHistoryInternal; // esi
  unsigned int v5; // edx
  _BYTE *v6; // rbx
  unsigned int v7; // edi
  char *v8; // rcx
  _DWORD v10[2]; // [rsp+20h] [rbp-838h] BYREF
  __int64 v11; // [rsp+28h] [rbp-830h]
  _BYTE *v12; // [rsp+30h] [rbp-828h]
  unsigned int v13; // [rsp+38h] [rbp-820h]
  int v14; // [rsp+3Ch] [rbp-81Ch]
  _BYTE v15[2048]; // [rsp+40h] [rbp-818h] BYREF

  v11 = 0LL;
  v14 = 0;
  do
  {
    v13 = 0;
    v12 = v15;
    v10[0] = a1;
    v10[1] = 2048;
    PresentHistoryInternal = DxgkGetPresentHistoryInternal((ULONG64)v10, 0, a3);
    if ( PresentHistoryInternal < 0 )
      break;
    v5 = v13;
    v6 = v15;
    v7 = 0;
    if ( !v13 )
      break;
    do
    {
      if ( *(_DWORD *)v6 == 9 && (*((_DWORD *)v6 + 8) & 4) != 0 )
      {
        v8 = (char *)*((_QWORD *)v6 + 2);
        if ( v8 )
        {
          FlipManagerConsumerAdapterCleanupTokenDiscard(v8);
          v5 = v13;
        }
      }
      ++v7;
      v6 += *((unsigned int *)v6 + 1);
    }
    while ( v7 < v5 );
  }
  while ( v5 );
  return (unsigned int)PresentHistoryInternal;
}
