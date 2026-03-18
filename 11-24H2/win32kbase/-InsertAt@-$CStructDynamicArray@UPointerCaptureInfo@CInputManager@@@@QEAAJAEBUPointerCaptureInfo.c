/*
 * XREFs of ?InsertAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAJAEBUPointerCaptureInfo@CInputManager@@I@Z @ 0x14014F1FC
 * Callers:
 *     ?UpdatePointerCapture@CInputManager@@SAJII@Z @ 0x14006C7C0 (-UpdatePointerCapture@CInputManager@@SAJII@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ?Grow@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z @ 0x14014F2E0 (-Grow@-$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@IEAAJI@Z.c)
 */

__int64 __fastcall CStructDynamicArray<CInputManager::PointerCaptureInfo>::InsertAt(__int64 a1, _QWORD *a2, __int64 a3)
{
  _DWORD *v3; // rsi
  int v4; // r9d
  __int64 v5; // rbp
  _DWORD *v8; // rdi
  int v9; // esi
  _QWORD *v10; // r11
  __int64 v11; // r8
  __int64 v12; // r10

  v3 = (_DWORD *)(a1 + 8);
  v4 = 0;
  v5 = (unsigned int)a3;
  v8 = (_DWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 8) == *(_DWORD *)(a1 + 12) )
  {
    v4 = CDynamicArray<InjectManipulationArgs *,2003858261>::Grow(a1, a2, a3, 0LL);
    if ( v4 < 0 )
      goto LABEL_6;
    v8 = (_DWORD *)(a1 + 8);
  }
  if ( *v3 >= *(_DWORD *)(a1 + 12) )
    return (unsigned int)-1073741823;
LABEL_6:
  v9 = v4;
  if ( v4 >= 0 )
  {
    v10 = (_QWORD *)Win32AllocPoolZInitImpl(256LL, 8uLL, 0x32644344u);
    if ( v10 )
    {
      v4 = v9;
      *v10 = *a2;
      v11 = (unsigned int)*v8;
      if ( (unsigned int)v11 > (unsigned int)v5 )
      {
        v12 = 8 * v11;
        do
        {
          v11 = (unsigned int)(v11 - 1);
          *(_QWORD *)(v12 + *(_QWORD *)a1) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v11);
          v12 -= 8LL;
        }
        while ( (unsigned int)v11 > (unsigned int)v5 );
        v8 = (_DWORD *)(a1 + 8);
      }
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v10;
      ++*v8;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v4;
}
