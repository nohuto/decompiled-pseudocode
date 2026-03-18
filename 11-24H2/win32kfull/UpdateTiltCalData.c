/*
 * XREFs of UpdateTiltCalData @ 0x14026F2D4
 * Callers:
 *     _SetCalibrationData @ 0x14027280C (_SetCalibrationData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdateTiltCalData(__int64 a1, int a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 v5; // r10
  unsigned int v6; // edi
  __int64 v11; // rax
  int v12; // ebp
  int v13; // ebp
  void *v14; // rcx

  v5 = *(_QWORD *)(a1 + 400);
  v6 = 0;
  if ( v5 || (v11 = Win32AllocPoolZInit(88LL, 2020635477LL), *(_QWORD *)(a1 + 400) = v11, (v5 = v11) != 0) )
  {
    v12 = a4 - 1;
    if ( !v12 || (v13 = v12 - 1) == 0 )
    {
      if ( *(_QWORD *)v5 )
        Win32FreePool(*(void **)v5);
      **(_QWORD **)(a1 + 400) = a3;
      *(_DWORD *)(*(_QWORD *)(a1 + 400) + 8LL) = a2;
      return 1;
    }
    if ( v13 != 1 )
      return 1;
    switch ( *(_DWORD *)(a1 + 224) )
    {
      case 1:
        v14 = *(void **)(v5 + 16);
        *(_QWORD *)(v5 + 16) = a3;
        *(_DWORD *)(v5 + 24) = a2;
        *a5 = 0;
        break;
      case 2:
        v14 = *(void **)(v5 + 32);
        *(_QWORD *)(v5 + 32) = a3;
        *(_DWORD *)(v5 + 40) = a2;
        *a5 = 1;
        break;
      case 3:
        v14 = *(void **)(v5 + 48);
        *(_QWORD *)(v5 + 48) = a3;
        *(_DWORD *)(v5 + 56) = a2;
        *a5 = 2;
        break;
      case 4:
        v14 = *(void **)(v5 + 64);
        *(_QWORD *)(v5 + 64) = a3;
        *(_DWORD *)(v5 + 72) = a2;
        *a5 = 3;
        break;
      default:
        return 1;
    }
    *(_QWORD *)(v5 + 80) = a3;
    if ( v14 )
      Win32FreePool(v14);
    return 1;
  }
  return v6;
}
