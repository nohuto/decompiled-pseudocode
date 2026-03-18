/*
 * XREFs of ?MulSurfaceComplete@@YAHPEAUDHPDEV__@@PEAX@Z @ 0x1403317D0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z @ 0x140211448 (-vDeviceBitmapAdapterHint@PDEVOBJ@@QEAAXPEAU_LUID@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MulSurfaceComplete(struct DHPDEV__ *a1, void *a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // r8
  int v5; // r11d
  unsigned int v6; // r10d
  __int64 v7; // rax
  __int64 v8; // rdx
  struct _LUID v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v2 = *((_QWORD *)a1 + 4);
  v4 = *(_QWORD **)a1;
  v5 = *((_DWORD *)a1 + 4);
  v6 = 0;
  v11 = v2;
  while ( 1 )
  {
    v7 = v4[6];
    if ( (*(_DWORD *)(v7 + 1808) & 0x8000000) == 0 )
    {
      if ( *(_QWORD *)(v7 + 3504) )
      {
        if ( (*(_DWORD *)(v2 + 40) & 0x4000000) == 0 )
          break;
        if ( !*v4 )
          break;
        v8 = *(_QWORD *)(v4[7] + 2568LL);
        if ( v8 )
        {
          if ( *(_DWORD *)(v8 + 240) == *((_DWORD *)a1 + 26) && *(_DWORD *)(v8 + 244) == *((_DWORD *)a1 + 27) )
            break;
        }
      }
    }
    v4 = (_QWORD *)*v4;
    if ( !--v5 )
      goto LABEL_12;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD *, struct DHPDEV__ *))(v7 + 3504))(
         *(_QWORD *)(v7 + 1784),
         a2,
         v4,
         a1);
LABEL_12:
  if ( (*(_DWORD *)(v2 + 40) & 0x4000000) != 0 )
  {
    v10 = 0LL;
    PDEVOBJ::vDeviceBitmapAdapterHint((PDEVOBJ *)&v11, &v10);
  }
  return v6;
}
