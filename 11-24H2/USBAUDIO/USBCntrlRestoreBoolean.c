/*
 * XREFs of USBCntrlRestoreBoolean @ 0x140042960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 *     GetD3LastState @ 0x140039154 (GetD3LastState.c)
 */

__int64 __fastcall USBCntrlRestoreBoolean(__int64 a1, __int64 a2)
{
  int v2; // ebx
  struct _DEVICE_OBJECT *v5; // rcx
  unsigned int i; // esi
  int v8; // eax
  int v9; // eax
  int v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(a2 + 76) == 7 )
  {
    v5 = *(struct _DEVICE_OBJECT **)(a1 + 24);
    v10 = 0;
    if ( (int)GetD3LastState(v5, (__int64)&v10) >= 0 && v10 == 1 )
      return 0LL;
  }
  for ( i = 0; i < *(_DWORD *)(a2 + 92); ++i )
  {
    v10 = 0;
    v8 = *(_DWORD *)(a2 + 96);
    if ( _bittest(&v8, i) )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, unsigned int, int, int *))(a2 + 136))(
             a1,
             a2,
             1LL,
             *(_QWORD *)(a2 + 128) + 16LL * i + 12,
             i,
             1,
             &v10);
      if ( v9 < 0 && v2 >= 0 )
        v2 = v9;
    }
  }
  return (unsigned int)v2;
}
